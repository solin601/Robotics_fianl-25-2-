#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data

from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist

import cv2
import numpy as np
from cv_bridge import CvBridge


class DuckieVisionController(Node):

    def __init__(self):
        super().__init__('duckie_vision_controller')

        self.get_logger().info("DuckieVisionController started")

        # OpenCV bridge
        self.bridge = CvBridge()

        # Publisher: cmd_vel
        self.cmd_pub = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )

        # Subscriber: camera (⚠️ 반드시 qos_profile_sensor_data)
        self.subscription = self.create_subscription(
            Image,
            '/duckie/camera/image_raw',
            self.image_callback,
            qos_profile_sensor_data
        )

        self.get_logger().info("Subscribed to /duckie/camera/image_raw")

    def image_callback(self, msg):
        # 🔥 이 로그가 안 찍히면 QoS/토픽 문제
        self.get_logger().info("Image callback triggered")

        # ROS Image → OpenCV
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # HSV 변환
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

        # 빨간색 HSV 범위 (2구간)
        lower_red1 = np.array([0, 120, 70])
        upper_red1 = np.array([10, 255, 255])

        lower_red2 = np.array([170, 120, 70])
        upper_red2 = np.array([180, 255, 255])

        mask1 = cv2.inRange(hsv, lower_red1, upper_red1)
        mask2 = cv2.inRange(hsv, lower_red2, upper_red2)
        mask = mask1 | mask2

        # 컨투어 검출
        contours, _ = cv2.findContours(
            mask,
            cv2.RETR_EXTERNAL,
            cv2.CHAIN_APPROX_SIMPLE
        )

        twist = Twist()

        if contours:
            c = max(contours, key=cv2.contourArea)
            x, y, w, h = cv2.boundingRect(c)

            cx = x + w // 2
            img_center = frame.shape[1] // 2

            # 시각화
            cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)
            cv2.circle(frame, (cx, y + h // 2), 5, (255, 0, 0), -1)

            # 제어 로직
            if cx < img_center - 40:
                twist.angular.z = 0.3
            elif cx > img_center + 40:
                twist.angular.z = -0.3
            else:
                twist.linear.x = 0.15

            # 너무 가까우면 정지
            if w * h > 15000:
                twist.linear.x = 0.0
                twist.angular.z = 0.0

            self.get_logger().info(
                f"Target detected | cx={cx}, area={w*h}"
            )

        else:
            # 못 찾으면 정지
            twist.linear.x = 0.0
            twist.angular.z = 0.0

        # cmd_vel publish
        self.cmd_pub.publish(twist)

        # 디버그 창
        cv2.imshow("camera", frame)
        cv2.imshow("mask", mask)
        cv2.waitKey(1)


def main():
    rclpy.init()
    node = DuckieVisionController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

