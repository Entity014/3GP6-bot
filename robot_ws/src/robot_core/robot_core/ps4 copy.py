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
        self.sent_timer = self.create_timer(0.05, self.timer_callback)

        self.declare_parameters(
            "",
            [
                ("max_speed", Parameter.Type.DOUBLE),
            ],
        )

        self.velocity = Twist()
        self.max_speed = 1.0
        self.joy_state = 0

        self.pre_trackpad = 0.0

    def sub_joystick_callback(self, msgin):
        self.max_speed = (
            self.get_parameter("max_speed").get_parameter_value().double_value
        )
        if msgin.battery_percentage > 0.0 and self.joy_state == 0:
            msg_feedback = Feedback()
            msg_feedback.led_g = 0.7
            msg_feedback.set_led = True
            self.pub_set_feedback.publish(msg_feedback)
            self.joy_state = 1

        if msgin.axis_left_y != 0 or msgin.axis_left_x != 0 or msgin.axis_right_x != 0:
            linear_x = msgin.axis_left_y * self.max_speed
            linear_y = msgin.axis_left_x * self.max_speed
            angular_z = msgin.axis_right_x * self.max_speed
        elif (
            msgin.button_dpad_up != 0
            or msgin.button_dpad_down != 0
            or msgin.button_dpad_left != 0
            or msgin.button_dpad_right != 0
        ):
            velocity_x = (
                msgin.button_dpad_up
                if msgin.button_dpad_up == 1
                else -msgin.button_dpad_down
            )
            velocity_y = (
                msgin.button_dpad_left
                if msgin.button_dpad_left == 1
                else -msgin.button_dpad_right
            )
            linear_x = velocity_x * self.max_speed
            linear_y = velocity_y * self.max_speed
            angular_z = 0.0
        else:
            linear_x = 0.0
            linear_y = 0.0
            angular_z = 0.0
        self.velocity.linear.x = linear_x
        self.velocity.linear.y = linear_y
        self.velocity.angular.z = angular_z

    def timer_callback(self):
        self.pub_cmd_vel.publish(self.velocity)
