#include <memory>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/nav_sat_fix.hpp"

using std::placeholders::_1;
using rclcpp::QoS;
using sensor_msgs::msg::NavSatFix;

class GnssConverter : public rclcpp::Node
{
  public:
    GnssConverter() : Node("gnss_converter")
    {
      subscription_ = this->create_subscription<NavSatFix>(
        "/carla/ego_vehicle/gnss", 10, std::bind(&GnssConverter::topic_callback, this, _1));
      publisher_ = this->create_publisher<NavSatFix>("/sensing/gnss/ublox/nav_sat_fix", 10);
    }

  private:
    
    /*
    Carla simulator's gnss sensor output & Autoware.universe /sensing/gnss shares the same message type
    */
    void topic_callback(NavSatFix::ConstSharedPtr msg) {
      //Simply redirect into another topic
      //Todo: Maybe we can use remap to replace this parrot like node
      // msg->header.frame_id = "map";
      NavSatFix message = *msg;
      message.header.stamp = get_clock()->now();
      //message.status.status = NavSatStatus.STATUS_SBAS_FIX;
      //message.status.service = NavSatStatus.SERVICE_GPS | NavSatStatus.SERVICE_GLONASS | NavSatStatus.SERVICE_COMPASS | NavSatStatus.SERVICE_GALILEO
      publisher_->publish(message);
    }
  

  protected:
    rclcpp::Subscription<NavSatFix>::SharedPtr subscription_; 
    rclcpp::Publisher<NavSatFix>::SharedPtr publisher_;

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<GnssConverter>());
  rclcpp::shutdown();
  return 0;
}
