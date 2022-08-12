#include <memory>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "autoware_auto_control_msgs/msg/ackermann_control_command.hpp"
#include "ackermann_msgs/msg/ackermann_drive.hpp"


using std::placeholders::_1;
using autoware_auto_control_msgs::msg::AckermannControlCommand;
using ackermann_msgs::msg::AckermannDrive;

class ControlCommandConverter : public rclcpp::Node
{
  public:
    ControlCommandConverter() : Node("control_command_converter")
    {
      //Subscribe autoware's control command topic: /control/command/control_cmd
      subscription_ = this->create_subscription<AckermannControlCommand>(
        "/control/command/control_cmd", 10, std::bind(&ControlCommandConverter::topic_callback, this, _1));
      publisher_ = this->create_publisher<AckermannDrive>("/carla/ego_vehicle/ackermann_cmd", 10);
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
      //convert to Carla AckermannDrive message
      AckermannDrive message;
      message.steering_angle = msg->lateral.steering_tire_angle;
      message.steering_angle_velocity = msg->lateral.steering_tire_rotation_rate;
      message.speed = msg->longitudinal.speed;
      message.acceleration = msg->longitudinal.acceleration;
      message.jerk = msg->longitudinal.jerk;

      publisher_->publish(message);
    }
  

  protected:
    rclcpp::Subscription<AckermannControlCommand>::SharedPtr subscription_; 
    rclcpp::Publisher<ackermann_msgs::msg::AckermannDrive>::SharedPtr publisher_;
};

int main(int argc, char * argv[])
{
  
  rclcpp::init(argc, argv);
  //ControlCommandConverter ccc;
  rclcpp::spin(std::make_shared<ControlCommandConverter>());
  rclcpp::shutdown();
  return 0;
}
