from rclpy import qos, Parameter
from rclpy.node import Node
from geometry_msgs.msg import Twist
from ds4_driver_msgs.msg import Status, Feedback


class Ps4Controller(Node):
    def __init__(self):
        super().__init__("ps4_controller_node")
        self.sub_joystick = self.create_subscription(
            Status,
            "status",
            self.sub_joystick_callback,
            qos_profile=qos.qos_profile_system_default,
        )
        self.sub_joystick

        self.pub_set_feedback = self.create_publisher(
            Feedback, "set_feedback", qos_profile=qos.qos_profile_system_default
        )
        self.pub_cmd_vel = self.create_publisher(
            Twist, "cmd_vel", qos_profile=qos.qos_profile_system_default
        )
        self.pub_joint = self.create_publisher(
            Twist, "arm", qos_profile=qos.qos_profile_system_default
        )
        self.sent_timer = self.create_timer(0.05, self.timer_callback)

        self.declare_parameters(
            "",
            [
                ("max_speed", Parameter.Type.DOUBLE),
            ],
        )

        self.velocity = Twist()
        self.max_speed = 1.0
        self.max_speed_joint1 = 15  # 360
        self.max_speed_joint2 = 50  # 360
        self.max_speed_joint3 = 1  # 180
        self.max_speed_joint4 = 90  # 360
        self.max_speed_joint5 = 1  # 180
        self.max_speed_joint6 = 0.3  # 180
        self.joy_state = 0
        self.joints = Twist()
        self.joints.linear.x = 90.0
        self.joints.linear.y = 165.0
        self.joints.linear.z = 10.0
        self.joints.angular.x = 90.0
        self.joints.angular.y = 20.0
        self.joints.angular.z = 180.0

        # set Home 90 175 90 90 30 180
        # set Pick 90 180 40 90 90 180
        # set Place 90 165 10 90 20 180

        self.gripper_state = 0
        self.pre_trackpad = 0.0
        self.pre_toggle = 0.0
        self.pre_home = 0.0
        self.pre_pick = 0.0
        self.pre_place = 0.0

    def sub_joystick_callback(self, msgin):
        self.max_speed = (
            self.get_parameter("max_speed").get_parameter_value().double_value
        )
        if self.pre_trackpad != msgin.button_trackpad:
            if msgin.button_trackpad == 1:
                self.joy_state += 1
            self.pre_trackpad = msgin.button_trackpad
        if self.joy_state == 0:
            msg_feedback = Feedback()
            msg_feedback.led_g = 0.7
            msg_feedback.set_led = True
            self.pub_set_feedback.publish(msg_feedback)

            linear_x = msgin.axis_left_y * self.max_speed
            linear_y = msgin.axis_left_x * self.max_speed
            angular_z = msgin.axis_right_x * self.max_speed
            self.velocity.linear.x = linear_x
            self.velocity.linear.y = linear_y
            self.velocity.angular.z = angular_z

        elif self.joy_state == 1:
            msg_feedback = Feedback()
            msg_feedback.led_r = 0.7
            msg_feedback.set_led = True
            self.pub_set_feedback.publish(msg_feedback)

            if abs(msgin.axis_right_x) > 0:
                self.joints.linear.x = 90.0 + (
                    msgin.axis_right_x * self.max_speed_joint1 * -1
                )
            else:
                self.joints.linear.x = 90.0

            # self.joints.linear.z += msgin.axis_left_y * self.max_speed_joint3 * -1

            if abs(msgin.axis_left_y) > 0:
                self.joints.linear.y = 90.0 + (
                    msgin.axis_left_y * self.max_speed_joint1 * -1
                )
            else:
                self.joints.linear.y = 90.0

            if msgin.button_dpad_up == 1:
                self.joints.linear.z -= msgin.button_dpad_up * self.max_speed_joint3
            elif msgin.button_dpad_down == 1:
                self.joints.linear.z += msgin.button_dpad_down * self.max_speed_joint3

            if msgin.button_r2 == 1:
                self.joints.angular.x = 90.0 + (msgin.button_r2 * self.max_speed_joint4)
            elif msgin.button_l2 == 1:
                self.joints.angular.x = 90.0 - (msgin.button_l2 * self.max_speed_joint4)
            elif msgin.button_r2 == 0 and msgin.button_l2 == 0:
                self.joints.angular.x = 90.0

            if msgin.button_r1 == 1:
                self.joints.angular.y -= msgin.button_r1 * self.max_speed_joint5
            elif msgin.button_l1 == 1:
                self.joints.angular.y += msgin.button_l1 * self.max_speed_joint5

            if self.pre_pick != msgin.button_triangle:
                if msgin.button_triangle == 1:
                    self.joints.linear.x = 90.0
                    self.joints.linear.z = 30.0
                    self.joints.angular.x = 90.0
                    self.joints.angular.y = 90.0
                self.pre_pick = msgin.button_triangle

            if self.pre_place != msgin.button_circle:
                if msgin.button_circle == 1:
                    self.joints.linear.x = 90.0
                    self.joints.linear.z = 10.0
                    self.joints.angular.x = 90.0
                    self.joints.angular.y = 20.0
                self.pre_place = msgin.button_circle

            if self.pre_toggle != msgin.button_cross:
                if msgin.button_cross == 1:
                    self.gripper_state += 1
                self.pre_toggle = msgin.button_cross
            if self.gripper_state == 0:
                self.joints.angular.z = 180.0
            elif self.gripper_state == 1:
                self.joints.angular.z = 57.0
            else:
                self.gripper_state = 0
        else:
            self.joy_state = 0

    def timer_callback(self):
        self.pub_cmd_vel.publish(self.velocity)
        self.pub_joint.publish(self.joints)
