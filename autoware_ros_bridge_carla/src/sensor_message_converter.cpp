#include <memory>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "sensor_msgs/msg/imu.hpp"

using std::placeholders::_1;
using rclcpp::QoS;
using nav_msgs::msg::Odometry;
using geometry_msgs::msg::PoseWithCovarianceStamped;
using sensor_msgs::msg::PointCloud2;
using sensor_msgs::msg::Imu;

class SensorMessageConverter : public rclcpp::Node
{
  public:
    SensorMessageConverter() : Node("sensor_message_converter")
    {
      subscription_ = this->create_subscription<Odometry>(
        "/carla/ego_vehicle/odometry", 10, std::bind(&SensorMessageConverter::topic_callback, this, _1));
      subscription_lidar = this->create_subscription<PointCloud2>(
        "/carla/ego_vehicle/lidar", 10, std::bind(&SensorMessageConverter::lidar_callback, this, _1)
      );
      subscription_imu = this->create_subscription<Imu>(
        "/carla/ego_vehicle/imu", 10, std::bind(&SensorMessageConverter::imu_callback, this, _1)
      );

      publisher_ = this->create_publisher<PoseWithCovarianceStamped>("/sensing/gnss/pose_with_covariance", 10);
      // publisher_lidar = this->create_publisher<PointCloud2>("/sensing/lidar/top/pointcloud_raw_ex", 10);
      publisher_lidar = this->create_publisher<PointCloud2>("/points_raw", 10);
      publisher_imu = this->create_publisher<Imu>("/sensing/imu/tamagawa/imu_raw", 10);
    }

  private:
    void topic_callback(Odometry::ConstSharedPtr msg) {
      PoseWithCovarianceStamped message;
      message.header = msg->header;
      message.header.stamp = get_clock()->now();
      message.pose = msg->pose;
      publisher_->publish(message);
    }

    void lidar_callback(PointCloud2::ConstSharedPtr msg) {
      PointCloud2 message = *msg;
      message.header.frame_id = "velodyne_top";
      message.header.stamp = get_clock()->now();
      // lidar_data = numpy.frombuffer(data, dtype=numpy.float32)

      // if lidar_data.shape[0] % 4 == 0:
      //     lidar_data = numpy.reshape(lidar_data, (int(lidar_data.shape[0] / 4), 4))
      //     # we take the oposite of y axis
      //     # (as lidar point are express in left handed coordinate system, and ros need right handed)
      //     # we need a copy here, because the data are read only in carla numpy
      //     # array
      //     # lidar_data = lidar_data
      //     # # we also need to permute x and y
      //     lidar_data = lidar_data[..., [1, 0, 2, 3]]
      //     # fields = [PointField('x', 0, PointField.FLOAT32, 1),
      //     #           PointField('y', 4, PointField.FLOAT32, 1),
      //     #           PointField('z', 8, PointField.FLOAT32, 1),
      //     #           PointField('intensity', 12, PointField.FLOAT32, 1)]

      //     fields = [PointField(name='x', offset=0,
      //                   datatype=PointField.FLOAT32, count=1),
      //                 PointField(name='y', offset=4,
      //                   datatype=PointField.FLOAT32, count=1),
      //                 PointField(name='z', offset=8,
      //                   datatype=PointField.FLOAT32, count=1),
      //                 PointField(name='intensity', offset=12,
      //                   datatype=PointField.FLOAT32, count=1)]

      //     msg = create_cloud(header,fields, lidar_data)
          
        publisher_lidar->publish(message);
    }

    void imu_callback(Imu::ConstSharedPtr msg) {
      Imu message = *msg;
      message.header.frame_id = "tamagawa/imu_link";
      message.header.stamp = get_clock()->now();
      publisher_imu->publish(message);
    }
  

  protected:
    rclcpp::Subscription<Odometry>::SharedPtr subscription_; 
    rclcpp::Subscription<PointCloud2>::SharedPtr subscription_lidar;
    rclcpp::Subscription<Imu>::SharedPtr subscription_imu;
    rclcpp::Publisher<PoseWithCovarianceStamped>::SharedPtr publisher_;
    rclcpp::Publisher<PointCloud2>::SharedPtr publisher_lidar;
    rclcpp::Publisher<Imu>::SharedPtr publisher_imu;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SensorMessageConverter>());
  rclcpp::shutdown();
  return 0;
}
