#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "autoware_auto_control_msgs/msg/ackermann_control_command.hpp"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define DEST_PORT 8000
#define DSET_IP_ADDRESS  "192.168.0.103"

using std::placeholders::_1;
using autoware_auto_control_msgs::msg::AckermannControlCommand;
using namespace rapidjson;

int sock_fd;

class MinimalSubscriber : public rclcpp::Node
{
  public:
    MinimalSubscriber()
    : Node("minimal_subscriber")
    {
      // subscription_ = this->create_subscription<Control>(
      // "/control/command/control_cmd", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
      sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
      if(sock_fd < 0) {
        perror("socket");
          exit(1);
      }

      /* 设置address */
      memset(&addr_serv, 0, sizeof(addr_serv));
      addr_serv.sin_family = AF_INET;
      addr_serv.sin_addr.s_addr = inet_addr(DSET_IP_ADDRESS);
      addr_serv.sin_port = htons(DEST_PORT);
      len = sizeof(addr_serv);

      //Subscribe autoware's control command topic: /control/command/control_cmd
      subscription_ = this->create_subscription<AckermannControlCommand>(
      "/control/command/control_cmd", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
      
    }

  private:
    
    /*
    Carla Simulator: ackermann_msgs/AckermannDrive Message
    float32 steering_angle: desired virtual angle (radians)
    float32 steering_angle_velocity: desired rate of change (radians/s)
    float32 speed:  desired forward speed (m/s)
    float32 acceleration: desired acceleration (m/s^2)
    float32 jerk: desired jerk (m/s^3)
    */
    void topic_callback(AckermannControlCommand::ConstSharedPtr msg) {
      //RCLCPP_INFO(this->get_logger(), "I heard: '%f'", msg->lateral.steering_tire_angle);
      Document json_content;
      Document::AllocatorType& allocator = json_content.GetAllocator();
      json_content.SetObject();

      // set string, int, bool
      json_content.AddMember("steering_angle", msg->lateral.steering_tire_angle, allocator);
      json_content.AddMember("steering_angle_velocity", msg->lateral.steering_tire_rotation_rate, allocator);
      json_content.AddMember("speed", msg->longitudinal.speed, allocator);
      // json_content.AddMember("acceleration", msg->longitudinal.acceleration, allocator);
      json_content.AddMember("acceleration", 0, allocator);
      json_content.AddMember("jerk", msg->longitudinal.jerk, allocator);

      StringBuffer buffer;
      Writer<StringBuffer> writer(buffer);
      json_content.Accept(writer);

      //char send_buf[100] = "default message";
      //send_buf = &buffer.GetString();
      std::cout << buffer.GetString() << std::endl;

      
      int send_num = sendto(sock_fd, buffer.GetString(), strlen(buffer.GetString()), 0, (struct sockaddr *)&addr_serv, len);

      if(send_num < 0) 
      {
        perror("sendto error:");
        exit(1);
      }

      /* We don't need a reply
      recv_num = recvfrom(sock_fd, recv_buf, sizeof(recv_buf), 0, (struct sockaddr *)&addr_serv, (socklen_t *)&len);

      if(recv_num < 0)
      {
        perror("recvfrom error:");
        exit(1);
      }

      recv_buf[recv_num] = '\0';
      printf("client receive %d bytes: %s\n", recv_num, recv_buf);
      */

    }
  
    struct sockaddr_in addr_serv;
    int len;
    rclcpp::Subscription<AckermannControlCommand>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  close(sock_fd);
  rclcpp::shutdown();
  return 0;
}
