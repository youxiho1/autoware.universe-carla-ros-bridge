import rclpy
import time
from rclpy.node import Node

from builtin_interfaces.msg import Time
from std_msgs.msg import Header
from geometry_msgs.msg import PoseWithCovarianceStamped

class MinimalPublisher(Node):

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
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(PoseWithCovarianceStamped, '/sensing/gnss/pose_with_covariance', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = PoseWithCovarianceStamped()
        msg.header = self.get_header()
        msg.header.frame_id = 'map'
        msg.pose.pose.position.x = 3797.4187
        msg.pose.pose.position.y = 73709.59375
        msg.pose.pose.position.z = 21.42336

        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()