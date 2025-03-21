#!/usr/bin/env python3
import rclpy
from rclpy.duration import Duration
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from sensor_msgs.msg import Imu

import numpy as np
import py_trees
import transforms3d.euler as euler


class RobotMove(py_trees.behaviour.Behaviour):
    def __init__(self, name, node, direction="F", timeout=2.0):
        super(RobotMove, self).__init__(name)
        self.node = node
        self.direction = direction
        self.timeout = Duration(nanoseconds=timeout * 1e9)

    def initialise(self):
        self.start_time = self.node.get_clock().now()
        self.cmd_vel_pub = self.node.create_publisher(Twist, "/cmd_vel", 10)

    def update(self):
        twist = Twist()
        now = self.node.get_clock().now()
        if now - self.start_time < self.timeout:
            if self.direction.upper() == "F":
                twist.linear.x = 0.15
            elif self.direction.upper() == "B":
                twist.linear.x = -0.15
            elif self.direction.upper() == "R":
                twist.angular.z = -2.0
            elif self.direction.upper() == "L":
                twist.angular.z = 2.0
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.RUNNING
        else:
            twist.linear.x = 0.0
            twist.linear.y = 0.0
            twist.angular.z = 0.0
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.SUCCESS

    def terminate(self, new_status):
        self.start_time = None
        self.logger.info(f"Terminated with status {new_status}")


class RobotRotate(py_trees.behaviour.Behaviour):
    def __init__(self, name, setpoint, node, timeout=3.0):
        super(RobotRotate, self).__init__(name)
        self.node = node
        self.set_point = setpoint
        self.timeout = Duration(nanoseconds=timeout * 1e9)

    def initialise(self):
        self.start_time = self.node.get_clock().now()
        self.imu_sub = self.node.create_subscription(
            Imu, "imu/data_raw", self.imu_callback, 10
        )
        self.imu_sub
        self.cmd_vel_pub = self.node.create_publisher(Twist, "/cmd_vel", 10)

        self.latest_imu_msg = None

    def update(self):
        now = self.node.get_clock().now()
        if self.latest_imu_msg is None:
            if now - self.start_time < self.timeout:
                return py_trees.common.Status.RUNNING
            else:
                self.logger.info("Node timeout exceeded")
                return py_trees.common.Status.FAILURE

        qx = self.latest_imu_msg.orientation.x
        qy = self.latest_imu_msg.orientation.y
        qz = self.latest_imu_msg.orientation.z
        qw = self.latest_imu_msg.orientation.w

        roll, pitch, yaw = euler.quat2euler([qw, qx, qy, qz])
        roll_deg, pitch_deg, yaw_deg = np.degrees([roll, pitch, yaw])
        delta_angle = self.set_point - yaw_deg

        # self.logger.info(
        #     f"Set Point: {self.set_point}°, Yaw: {yaw_deg:.2f}°, Delta Angle: {delta_angle:.2f}°"
        # )
        twist = Twist()
        if not (abs(delta_angle) <= 5):
            twist.angular.z = np.interp(delta_angle, [-180, 180], [-2.0, 2.0])
            if abs(twist.angular.z) < 0.35:
                twist.angular.z = np.sign(twist.angular.z) * 0.35
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.RUNNING
        else:
            twist.angular.z = 0.0
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.SUCCESS

    def imu_callback(self, msg):
        self.latest_imu_msg = msg

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")
        self.set_point = None
        self.imu_sub = None
        self.latest_imu_msg = None
