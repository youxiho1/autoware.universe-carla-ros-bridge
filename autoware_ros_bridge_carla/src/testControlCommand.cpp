#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "autoware_control_msgs/msg/control.hpp"
#include "autoware_auto_control_msgs/msg/ackermann_control_command.hpp"

using std::placeholders::_1;
using autoware_control_msgs::msg::Control;
using autoware_auto_control_msgs::msg::AckermannControlCommand;

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
    // void topic_callback(Control::ConstSharedPtr msg)
    void topic_callback(AckermannControlCommand::ConstSharedPtr msg)
    {
      RCLCPP_INFO(this->get_logger(), "I heard: '%f'", msg->lateral.steering_tire_angle);
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