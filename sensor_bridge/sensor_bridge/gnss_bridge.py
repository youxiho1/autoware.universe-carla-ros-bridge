import rclpy
from rclpy.node import Node

from sensor_msgs.msg import NavSatFix
from geometry_msgs.msg import PoseWithCovarianceStamped

class GnssBridge(Node):

    def __init__(self):
        super().__init__('gnss_bridge')
        self.subscription = self.create_subscription(
            NavSatFix, '/carla/ego_vehicle/gnss', self.listener_callback, 10)

        self.publisher_ = self.create_publisher(PoseWithCovarianceStamped, '/sensing/gnss/pose_with_covariance', 10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        
        self.publisher_

        self.get_logger().info('I heard: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    gnss_bridge = GnssBridge()

    rclpy.spin(gnss_bridge)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    gnss_bridge.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()