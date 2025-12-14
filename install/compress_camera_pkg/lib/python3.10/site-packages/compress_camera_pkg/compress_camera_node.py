import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CompressedImage
from cv_bridge import CvBridge

class CompressCamera(Node):
    def __init__(self):
        super().__init__('compress_camera')
        self.bridge = CvBridge()
        self.sub = self.create_subscription(Image, '/duckie/camera/image_raw', self.callback, 10)
        self.pub = self.create_publisher(CompressedImage, '/duckie/camera/image_raw/compressed', 10)

    def callback(self, msg):
        compressed_msg = self.bridge.cv2_to_compressed_imgmsg(
            self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        )
        self.pub.publish(compressed_msg)

def main():
    rclpy.init()
    node = CompressCamera()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

