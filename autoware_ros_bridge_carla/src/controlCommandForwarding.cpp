//ackermann_drive.msg
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "ackermann_msgs/msg/ackermann_drive.hpp"

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

//rapidjson dependencies
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>

//udp dependencies
#include <chrono>
#include <functional>
#include <memory>
#include <string>



#define SERV_PORT 8000

using namespace rapidjson;
using ackermann_msgs::msg::AckermannDrive;

rclcpp::Publisher<ackermann_msgs::msg::AckermannDrive>::SharedPtr publisher_;

class MinimalPublisher : public rclcpp::Node
{
  public:
    MinimalPublisher()
    : Node("minimal_publisher")
    {
      publisher_ = this->create_publisher<AckermannDrive>("/carla/ego_vehicle/ackermann_cmd", 10);
    }

  private:
    
};


int main(int argc, char * argv[])
{


  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  


  /* sock_fd --- socket文件描述符 创建udp套接字*/
  int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
  if(sock_fd < 0)
  {
    perror("socket");
    exit(1);
  }

  /* 将套接字和IP、端口绑定 */
  struct sockaddr_in addr_serv;
  int len;
  memset(&addr_serv, 0, sizeof(struct sockaddr_in));  //每个字节都用0填充
  addr_serv.sin_family = AF_INET;       //ip address
  addr_serv.sin_port = htons(SERV_PORT);//port
  /* INADDR_ANY表示不管是哪个网卡接收到数据，只要目的端口是SERV_PORT，就会被该应用程序接收到 */
  addr_serv.sin_addr.s_addr = htonl(INADDR_ANY);  //自动获取IP地址
  len = sizeof(addr_serv);

  /* 绑定socket */
  if(bind(sock_fd, (struct sockaddr *)&addr_serv, sizeof(addr_serv)) < 0)
  {
    perror("bind error:");
    exit(1);
  }


  int recv_num;
  char recv_buf[100];
  struct sockaddr_in addr_client;

  while(1)
  {
    printf("server wait:\n");

    recv_num = recvfrom(sock_fd, recv_buf, sizeof(recv_buf), 0, (struct sockaddr *)&addr_client, (socklen_t *)&len);

    if(recv_num < 0)
    {
      perror("recvfrom error:");
      exit(1);
    }

    recv_buf[recv_num] = '\0';
    printf("server receive %d bytes: %s\n", recv_num, recv_buf);
    
    // 1. 把 JSON 解析至 DOM。
    const char* json = recv_buf;
    Document d;
    d.Parse(json);

    AckermannDrive message;
    message.steering_angle = d["steering_angle"].GetFloat();
    message.steering_angle_velocity = d["steering_angle_velocity"].GetFloat();
    message.speed = d["speed"].GetFloat();
    message.acceleration = d["acceleration"].GetFloat();
    message.jerk = d["jerk"].GetFloat();
    
    publisher_->publish(message);
    
    /* we don't need to reply
    send_num = sendto(sock_fd, send_buf, recv_num, 0, (struct sockaddr *)&addr_client, len);

    if(send_num < 0)
    {
      perror("sendto error:");
      exit(1);
    }
    */
    
  
  }
  
  
  rclcpp::shutdown();
  close(sock_fd);

  return 0;
}
