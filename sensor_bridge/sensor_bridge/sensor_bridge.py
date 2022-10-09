import rclpy
import numpy
import time

from rclpy.node import Node

from builtin_interfaces.msg import Time
from std_msgs.msg import Header
from sensor_msgs.msg import PointCloud2, PointField, Imu, NavSatFix, NavSatStatus
from sensor_msgs_py.point_cloud2 import create_cloud
from geometry_msgs.msg import PoseWithCovarianceStamped
from nav_msgs.msg import Odometry

class SensorBridge(Node):

    def get_header(self):
        """
        Returns ROS message header
        """
        header = Header()

        # Where does timestamp come from?
        self.timestamp = time.time()

        seconds = int(self.timestamp)
        nanoseconds = int((self.timestamp - int(self.timestamp)) * 1000000000.0)
        header.stamp = Time(sec=seconds, nanosec=nanoseconds)    

        #print('Sensor Time Stamp: ', header.stamp)    
        return header

    def __init__(self):
        super().__init__('sensor_bridge')
        self.subscription_lidar = self.create_subscription(
            PointCloud2, '/carla/ego_vehicle/lidar', self.lidar_callback, 10
        )
        self.subscription_imu = self.create_subscription(
            Imu, '/carla/ego_vehicle/imu', self.imu_callback, 10
        )
        self.subscription_gnss = self.create_subscription(
            NavSatFix, '/carla/ego_vehicle/gnss', self.gnss_callback, 10
        )
        self.subscription_odo = self.create_subscription(
            Odometry, '/carla/ego_vehicle/odometry', self.odo_callback, 10
        )

        # self.publisher_lidar = self.create_publisher(PointCloud2, '/sensing/lidar/top/pointcloud_raw_ex', 10)
        self.publisher_lidar = self.create_publisher(PointCloud2, '/carla_pointcloud', 10)
        self.publisher_imu = self.create_publisher(Imu, '/sensing/imu/tamagawa/imu_raw', 10)
        self.publisher_gnss = self.create_publisher(NavSatFix, '/sensing/gnss/ublox/nav_sat_fix', 10)
        self.publisher_odo = self.create_publisher(PoseWithCovarianceStamped, '/sensing/gnss/pose_with_covariance', 10)


        self.subscription_lidar  # prevent unused variable warning
        self.subscription_imu
        self.subscription_gnss
        self.subscription_odo

    def lidar_callback(self, msg):
        header = self.get_header()
        header.frame_id = 'velodyne_top'

        # data = msg.data

        lidar_data = numpy.frombuffer(data, dtype=numpy.float32)

        if lidar_data.shape[0] % 4 == 0:
            lidar_data = numpy.reshape(lidar_data, (int(lidar_data.shape[0] / 4), 4))
            # we take the oposite of y axis
            # (as lidar point are express in left handed coordinate system, and ros need right handed)
            # we need a copy here, because the data are read only in carla numpy
            # array
            # lidar_data = lidar_data
            # # we also need to permute x and y
            lidar_data = lidar_data[..., [1, 0, 2, 3]]
            # fields = [PointField('x', 0, PointField.FLOAT32, 1),
            #           PointField('y', 4, PointField.FLOAT32, 1),
            #           PointField('z', 8, PointField.FLOAT32, 1),
            #           PointField('intensity', 12, PointField.FLOAT32, 1)]

            fields = [PointField(name='x', offset=0,
                         datatype=PointField.FLOAT32, count=1),
                        PointField(name='y', offset=4,
                         datatype=PointField.FLOAT32, count=1),
                        PointField(name='z', offset=8,
                         datatype=PointField.FLOAT32, count=1),
                        PointField(name='intensity', offset=12,
                         datatype=PointField.FLOAT32, count=1)]

            msg = create_cloud(header,fields, lidar_data)
            self.publisher_lidar.publish(msg)
        else:
            print('Cannot Reshape LIDAR Data buffer')


    def imu_callback(self, msg):
        """
        Publish IMU data 
        """
        imu_msg = Imu()
        imu_msg.header = self.get_header()
        imu_msg.header.frame_id = "tamagawa/imu_link"

        # Carla uses a left-handed coordinate convention (X forward, Y right, Z up).
        # Here, these measurements are converted to the right-handed ROS convention
        #  (X forward, Y left, Z up).
        imu_msg.linear_acceleration.x = msg.linear_acceleration.x
        imu_msg.linear_acceleration.y = -msg.linear_acceleration.y
        imu_msg.linear_acceleration.z = msg.linear_acceleration.z
        
        imu_msg.angular_velocity.x = -msg.angular_velocity.x
        imu_msg.angular_velocity.y = msg.angular_velocity.y
        imu_msg.angular_velocity.z = -msg.angular_velocity.z
        
        imu_msg.orientation.x = msg.orientation.x
        imu_msg.orientation.y = msg.orientation.y
        imu_msg.orientation.z = msg.orientation.z
        imu_msg.orientation.w = msg.orientation.w

        # imu_rotation = data[6]

        # quaternion = euler2quat(0, 0, math.radians(imu_rotation))
        # imu_msg.orientation.x = quaternion[0]
        # imu_msg.orientation.y = quaternion[1]
        # imu_msg.orientation.z = quaternion[2]
        # imu_msg.orientation.w = quaternion[3]
        
        self.publisher_imu.publish(imu_msg)

    def gnss_callback(self, message):
        msg = NavSatFix()
        msg.header = self.get_header()
        msg.header.frame_id = 'gnss_link'
        msg.latitude = message.latitude
        msg.longitude = message.longitude
        msg.altitude = message.altitude + 17.0
        msg.status.status = NavSatStatus.STATUS_SBAS_FIX
        # pylint: disable=line-too-long
        msg.status.service = NavSatStatus.SERVICE_GPS | NavSatStatus.SERVICE_GLONASS | NavSatStatus.SERVICE_COMPASS | NavSatStatus.SERVICE_GALILEO
        # pylint: enable=line-too-long

        self.publisher_gnss.publish(msg)

    def odo_callback(self, message):
        msg = PoseWithCovarianceStamped()
        msg.header = self.get_header()
        msg.header.frame_id = 'map'
        msg.pose.pose.position.x = message.pose.pose.position.x
        msg.pose.pose.position.y = 0 - message.pose.pose.position.y
        msg.pose.pose.position.z = message.pose.pose.position.z

        self.publisher_odo.publish(msg)

def main(args=None):
    rclpy.init(args=args)

    sensor_bridge = SensorBridge()

    rclpy.spin(sensor_bridge)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    sensor_bridge.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()