#include <memory>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float32.hpp"
#include "autoware_auto_vehicle_msgs/msg/velocity_report.hpp"

using std::placeholders::_1;
using autoware_auto_vehicle_msgs::msg::VelocityReport;
using std_msgs::msg::Float32;

class VelocityReporter : public rclcpp::Node {
    public:
        VelocityReporter() : Node("velocity_reporter")
        {
        //Subscribe autoware's control command topic: /carla/ego_vehicle/speedometer
        subscription_ = this->create_subscription<Float32>(
            "/carla/ego_vehicle/speedometer", 10, std::bind(&VelocityReporter::topic_callback, this, _1));
        publisher_ = this->create_publisher<VelocityReport>("/vehicle/status/velocity_status", 10);
        }

    private:
        void topic_callback(Float32::ConstSharedPtr msg) {
            VelocityReport message;
            //message.child_frame_id = "base_link";
            message.longitudinal_velocity = msg->data;
            message.lateral_velocity = 0.0f;
            message.heading_rate = 0.0f;
            printf("Speed: %f\n", msg->data);
            publisher_->publish(message);
        }

    protected:
        rclcpp::Subscription<Float32>::SharedPtr subscription_; 
        rclcpp::Publisher<VelocityReport>::SharedPtr publisher_;

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<VelocityReporter>());
  rclcpp::shutdown();
  return 0;
}
