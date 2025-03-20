#!/usr/bin/env python3
import rclpy
import time
import cv_bridge
from rclpy.duration import Duration
from sensor_msgs.msg import CompressedImage, Image
from geometry_msgs.msg import Twist, Point

import cv2
import numpy as np
import py_trees


class RobotArm(py_trees.behaviour.Behaviour):
    def __init__(self, name, node, joint, timeout=2.0):
        super(RobotArm, self).__init__(name)
        self.node = node
        self.pose_x = joint[0]
        self.pose_y = joint[1]
        self.angle = joint[2]
        self.pick = joint[3]
        self.timeout = Duration(nanoseconds=timeout * 1e9)

    def initialise(self):
        self.start_time = self.node.get_clock().now()
        self.feedback_sub = self.node.create_subscription(
            Twist, "debug/joint", self.feedback_callback, 10
        )
        self.feedback_sub
        self.arm_pub = self.node.create_publisher(Twist, "arm/control", 10)
        self.latest_feedback_msg = None
        twist = Twist()
        twist.linear.x = self.pose_x
        twist.linear.y = self.pose_y
        twist.linear.z = self.angle
        twist.angular.x = 70.0 if self.pick else 0.0
        self.arm_pub.publish(twist)
        self.delta_1 = 999
        self.delta_2 = 999

    def update(self):
        twist = Twist()
        now = self.node.get_clock().now()
        if self.latest_feedback_msg is None:
            if now - self.start_time < self.timeout:
                return py_trees.common.Status.RUNNING
            else:
                return py_trees.common.Status.FAILURE

        if abs(self.delta_1) <= 2 and abs(self.delta_2) <= 2:
            twist.linear.x = self.pose_x
            twist.linear.y = self.pose_y
            twist.linear.z = self.angle
            twist.angular.x = 70.0 if self.pick else 0.0
            self.arm_pub.publish(twist)
            time.sleep(1)
            return py_trees.common.Status.SUCCESS
        else:
            self.delta_1 = (
                self.latest_feedback_msg.angular.x - self.latest_feedback_msg.linear.x
            )
            self.delta_2 = (
                self.latest_feedback_msg.angular.y - self.latest_feedback_msg.linear.y
            )
            twist.linear.x = self.pose_x
            twist.linear.y = self.pose_y
            twist.linear.z = self.angle
            twist.angular.x = 70.0 if self.pick else 0.0
            # self.logger.info(f"{self.delta_1, self.delta_2}")
            return py_trees.common.Status.RUNNING

    def terminate(self, new_status):
        self.delta_1 = 999
        self.delta_2 = 999
        self.logger.info(f"Terminated with status {new_status}")

    def feedback_callback(self, msg):
        self.latest_feedback_msg = msg
