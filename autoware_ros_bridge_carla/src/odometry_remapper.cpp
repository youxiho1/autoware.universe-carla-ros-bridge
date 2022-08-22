#include <memory>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2_msgs/msg/tf_message.hpp"
#include "std_msgs/msg/float32.hpp"

// #include <tf2/LinearMath/Quaternion.h>
// #include <tf2_ros/transform_broadcaster.h>
// #include <tf2_ros/buffer.h>
// #include <tf2_ros/transform_listener.h>


using std::placeholders::_1;
using rclcpp::QoS;
using nav_msgs::msg::Odometry;
using geometry_msgs::msg::TransformStamped;
using std_msgs::msg::Float32;

class OdometryRemapper : public rclcpp::Node
{
  public:
    std_msgs::msg::Float32 speed;

    OdometryRemapper() : Node("odometry_remapper")
    {

      //Subscribe autoware's control command topic: /control/command/control_cmd
      subscription_ = this->create_subscription<Odometry>(
        "/carla/ego_vehicle/odometry", 10, std::bind(&OdometryRemapper::topic_callback, this, _1));
      subscription_speed = this->create_subscription<Float32>(
        "/carla/ego_vehicle/speedometer", 10, std::bind(&OdometryRemapper::velocity_callback, this, _1));
      publisher_ = this->create_publisher<Odometry>("/localization/kinematic_state", 10);
      pub_tf_ = this->create_publisher<tf2_msgs::msg::TFMessage>("/tf", QoS{1});
    }

  private:
    
    //Taken from Autoware.universe: simple_planning_simulator_core.cpp
    void publish_tf(const Odometry & odometry)
    {
      TransformStamped tf;
      tf.header.stamp = get_clock()->now();
      tf.header.frame_id = "map";
      tf.child_frame_id = "base_link";
      tf.transform.translation.x = odometry.pose.pose.position.x;
      tf.transform.translation.y = odometry.pose.pose.position.y;
      tf.transform.translation.z = odometry.pose.pose.position.z;
      tf.transform.rotation = odometry.pose.pose.orientation;

      tf2_msgs::msg::TFMessage tf_msg{};
      tf_msg.transforms.emplace_back(std::move(tf));
      pub_tf_->publish(tf_msg);
    }
    
    /*
    Carla simulator's Odometry sensor output & Autoware.universe kinematic_state shares the same message type
    std_msgs/Header header
    string child_frame_id
    geometry_msgs/PoseWithCovariance pose
    geometry_msgs/TwistWithCovariance twist
    */
    void topic_callback(Odometry::ConstSharedPtr msg) {
      //Simply redirect into another topic
      //Todo: Maybe we can use remap to replace this parrot like node
      // msg->header.frame_id = "map";
      Odometry message = *msg;
      message.pose.covariance[0 * 6 + 0] = 0.0001;
      message.pose.covariance[1 * 6 + 1] = 0.0001;
      message.header.frame_id = "map";
      message.child_frame_id = "base_link";
      message.header.stamp = get_clock()->now();
      message.pose.pose.position.z = 0;
      message.pose.pose.orientation.x = 0;
      message.pose.pose.orientation.y = 0;
      if(speed.data < 0) {
        speed.data = 0;
      }
      message.twist.twist.linear.x = speed.data;
      message.twist.twist.linear.y = 0;
      message.twist.twist.linear.z = 0.0;
      message.twist.twist.angular.x = 0.0;
      message.twist.twist.angular.y = 0;
      message.twist.twist.angular.z = 0;
      publisher_->publish(message);
      publish_tf(message);
    }
  
    void velocity_callback(Float32::ConstSharedPtr msg) {
      speed = *msg;
    }

  protected:
    rclcpp::Subscription<Odometry>::SharedPtr subscription_; 
    rclcpp::Subscription<Float32>::SharedPtr subscription_speed;
    rclcpp::Publisher<Odometry>::SharedPtr publisher_;
    rclcpp::Publisher<tf2_msgs::msg::TFMessage>::SharedPtr pub_tf_;

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<OdometryRemapper>());
  rclcpp::shutdown();
  return 0;
}
