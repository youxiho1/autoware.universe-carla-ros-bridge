#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "autoware_auto_control_msgs/msg/ackermann_control_command.hpp"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>

using std::placeholders::_1;
using autoware_auto_control_msgs::msg::AckermannControlCommand;
using namespace rapidjson;

class MinimalSubscriber : public rclcpp::Node
{
  public:
    MinimalSubscriber()
    : Node("minimal_subscriber")
    {
      // subscription_ = this->create_subscription<Control>(
      // "/control/command/control_cmd", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));

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
      json_content.AddMember("acceleration", msg->longitudinal.acceleration, allocator);
      json_content.AddMember("jerk", msg->longitudinal.jerk, allocator);

      StringBuffer buffer;
      Writer<StringBuffer> writer(buffer);
      json_content.Accept(writer);
      std::cout << buffer.GetString() << std::endl;

    }
    rclcpp::Subscription<AckermannControlCommand>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}