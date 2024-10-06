// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ds4_driver_msgs:msg/Report.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__BUILDER_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ds4_driver_msgs/msg/detail/report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ds4_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_Report_plug_mic
{
public:
  explicit Init_Report_plug_mic(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  ::ds4_driver_msgs::msg::Report plug_mic(::ds4_driver_msgs::msg::Report::_plug_mic_type arg)
  {
    msg_.plug_mic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_plug_audio
{
public:
  explicit Init_Report_plug_audio(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_plug_mic plug_audio(::ds4_driver_msgs::msg::Report::_plug_audio_type arg)
  {
    msg_.plug_audio = std::move(arg);
    return Init_Report_plug_mic(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_plug_usb
{
public:
  explicit Init_Report_plug_usb(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_plug_audio plug_usb(::ds4_driver_msgs::msg::Report::_plug_usb_type arg)
  {
    msg_.plug_usb = std::move(arg);
    return Init_Report_plug_audio(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_battery
{
public:
  explicit Init_Report_battery(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_plug_usb battery(::ds4_driver_msgs::msg::Report::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_Report_plug_usb(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_timestamp
{
public:
  explicit Init_Report_timestamp(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_battery timestamp(::ds4_driver_msgs::msg::Report::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Report_battery(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_trackpad_touch1_y
{
public:
  explicit Init_Report_trackpad_touch1_y(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_timestamp trackpad_touch1_y(::ds4_driver_msgs::msg::Report::_trackpad_touch1_y_type arg)
  {
    msg_.trackpad_touch1_y = std::move(arg);
    return Init_Report_timestamp(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_trackpad_touch1_x
{
public:
  explicit Init_Report_trackpad_touch1_x(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_trackpad_touch1_y trackpad_touch1_x(::ds4_driver_msgs::msg::Report::_trackpad_touch1_x_type arg)
  {
    msg_.trackpad_touch1_x = std::move(arg);
    return Init_Report_trackpad_touch1_y(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_trackpad_touch1_active
{
public:
  explicit Init_Report_trackpad_touch1_active(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_trackpad_touch1_x trackpad_touch1_active(::ds4_driver_msgs::msg::Report::_trackpad_touch1_active_type arg)
  {
    msg_.trackpad_touch1_active = std::move(arg);
    return Init_Report_trackpad_touch1_x(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_trackpad_touch1_id
{
public:
  explicit Init_Report_trackpad_touch1_id(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_trackpad_touch1_active trackpad_touch1_id(::ds4_driver_msgs::msg::Report::_trackpad_touch1_id_type arg)
  {
    msg_.trackpad_touch1_id = std::move(arg);
    return Init_Report_trackpad_touch1_active(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_trackpad_touch0_y
{
public:
  explicit Init_Report_trackpad_touch0_y(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_trackpad_touch1_id trackpad_touch0_y(::ds4_driver_msgs::msg::Report::_trackpad_touch0_y_type arg)
  {
    msg_.trackpad_touch0_y = std::move(arg);
    return Init_Report_trackpad_touch1_id(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_trackpad_touch0_x
{
public:
  explicit Init_Report_trackpad_touch0_x(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_trackpad_touch0_y trackpad_touch0_x(::ds4_driver_msgs::msg::Report::_trackpad_touch0_x_type arg)
  {
    msg_.trackpad_touch0_x = std::move(arg);
    return Init_Report_trackpad_touch0_y(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_trackpad_touch0_active
{
public:
  explicit Init_Report_trackpad_touch0_active(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_trackpad_touch0_x trackpad_touch0_active(::ds4_driver_msgs::msg::Report::_trackpad_touch0_active_type arg)
  {
    msg_.trackpad_touch0_active = std::move(arg);
    return Init_Report_trackpad_touch0_x(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_trackpad_touch0_id
{
public:
  explicit Init_Report_trackpad_touch0_id(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_trackpad_touch0_active trackpad_touch0_id(::ds4_driver_msgs::msg::Report::_trackpad_touch0_id_type arg)
  {
    msg_.trackpad_touch0_id = std::move(arg);
    return Init_Report_trackpad_touch0_active(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_ang_vel_z
{
public:
  explicit Init_Report_ang_vel_z(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_trackpad_touch0_id ang_vel_z(::ds4_driver_msgs::msg::Report::_ang_vel_z_type arg)
  {
    msg_.ang_vel_z = std::move(arg);
    return Init_Report_trackpad_touch0_id(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_ang_vel_y
{
public:
  explicit Init_Report_ang_vel_y(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_ang_vel_z ang_vel_y(::ds4_driver_msgs::msg::Report::_ang_vel_y_type arg)
  {
    msg_.ang_vel_y = std::move(arg);
    return Init_Report_ang_vel_z(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_ang_vel_x
{
public:
  explicit Init_Report_ang_vel_x(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_ang_vel_y ang_vel_x(::ds4_driver_msgs::msg::Report::_ang_vel_x_type arg)
  {
    msg_.ang_vel_x = std::move(arg);
    return Init_Report_ang_vel_y(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_lin_acc_z
{
public:
  explicit Init_Report_lin_acc_z(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_ang_vel_x lin_acc_z(::ds4_driver_msgs::msg::Report::_lin_acc_z_type arg)
  {
    msg_.lin_acc_z = std::move(arg);
    return Init_Report_ang_vel_x(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_lin_acc_y
{
public:
  explicit Init_Report_lin_acc_y(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_lin_acc_z lin_acc_y(::ds4_driver_msgs::msg::Report::_lin_acc_y_type arg)
  {
    msg_.lin_acc_y = std::move(arg);
    return Init_Report_lin_acc_z(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_lin_acc_x
{
public:
  explicit Init_Report_lin_acc_x(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_lin_acc_y lin_acc_x(::ds4_driver_msgs::msg::Report::_lin_acc_x_type arg)
  {
    msg_.lin_acc_x = std::move(arg);
    return Init_Report_lin_acc_y(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_ps
{
public:
  explicit Init_Report_button_ps(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_lin_acc_x button_ps(::ds4_driver_msgs::msg::Report::_button_ps_type arg)
  {
    msg_.button_ps = std::move(arg);
    return Init_Report_lin_acc_x(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_trackpad
{
public:
  explicit Init_Report_button_trackpad(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_ps button_trackpad(::ds4_driver_msgs::msg::Report::_button_trackpad_type arg)
  {
    msg_.button_trackpad = std::move(arg);
    return Init_Report_button_ps(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_options
{
public:
  explicit Init_Report_button_options(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_trackpad button_options(::ds4_driver_msgs::msg::Report::_button_options_type arg)
  {
    msg_.button_options = std::move(arg);
    return Init_Report_button_trackpad(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_share
{
public:
  explicit Init_Report_button_share(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_options button_share(::ds4_driver_msgs::msg::Report::_button_share_type arg)
  {
    msg_.button_share = std::move(arg);
    return Init_Report_button_options(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_r3
{
public:
  explicit Init_Report_button_r3(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_share button_r3(::ds4_driver_msgs::msg::Report::_button_r3_type arg)
  {
    msg_.button_r3 = std::move(arg);
    return Init_Report_button_share(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_r2
{
public:
  explicit Init_Report_button_r2(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_r3 button_r2(::ds4_driver_msgs::msg::Report::_button_r2_type arg)
  {
    msg_.button_r2 = std::move(arg);
    return Init_Report_button_r3(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_r1
{
public:
  explicit Init_Report_button_r1(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_r2 button_r1(::ds4_driver_msgs::msg::Report::_button_r1_type arg)
  {
    msg_.button_r1 = std::move(arg);
    return Init_Report_button_r2(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_l3
{
public:
  explicit Init_Report_button_l3(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_r1 button_l3(::ds4_driver_msgs::msg::Report::_button_l3_type arg)
  {
    msg_.button_l3 = std::move(arg);
    return Init_Report_button_r1(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_l2
{
public:
  explicit Init_Report_button_l2(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_l3 button_l2(::ds4_driver_msgs::msg::Report::_button_l2_type arg)
  {
    msg_.button_l2 = std::move(arg);
    return Init_Report_button_l3(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_l1
{
public:
  explicit Init_Report_button_l1(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_l2 button_l1(::ds4_driver_msgs::msg::Report::_button_l1_type arg)
  {
    msg_.button_l1 = std::move(arg);
    return Init_Report_button_l2(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_triangle
{
public:
  explicit Init_Report_button_triangle(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_l1 button_triangle(::ds4_driver_msgs::msg::Report::_button_triangle_type arg)
  {
    msg_.button_triangle = std::move(arg);
    return Init_Report_button_l1(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_square
{
public:
  explicit Init_Report_button_square(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_triangle button_square(::ds4_driver_msgs::msg::Report::_button_square_type arg)
  {
    msg_.button_square = std::move(arg);
    return Init_Report_button_triangle(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_circle
{
public:
  explicit Init_Report_button_circle(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_square button_circle(::ds4_driver_msgs::msg::Report::_button_circle_type arg)
  {
    msg_.button_circle = std::move(arg);
    return Init_Report_button_square(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_button_cross
{
public:
  explicit Init_Report_button_cross(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_circle button_cross(::ds4_driver_msgs::msg::Report::_button_cross_type arg)
  {
    msg_.button_cross = std::move(arg);
    return Init_Report_button_circle(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_dpad_right
{
public:
  explicit Init_Report_dpad_right(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_button_cross dpad_right(::ds4_driver_msgs::msg::Report::_dpad_right_type arg)
  {
    msg_.dpad_right = std::move(arg);
    return Init_Report_button_cross(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_dpad_left
{
public:
  explicit Init_Report_dpad_left(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_dpad_right dpad_left(::ds4_driver_msgs::msg::Report::_dpad_left_type arg)
  {
    msg_.dpad_left = std::move(arg);
    return Init_Report_dpad_right(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_dpad_down
{
public:
  explicit Init_Report_dpad_down(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_dpad_left dpad_down(::ds4_driver_msgs::msg::Report::_dpad_down_type arg)
  {
    msg_.dpad_down = std::move(arg);
    return Init_Report_dpad_left(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_dpad_up
{
public:
  explicit Init_Report_dpad_up(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_dpad_down dpad_up(::ds4_driver_msgs::msg::Report::_dpad_up_type arg)
  {
    msg_.dpad_up = std::move(arg);
    return Init_Report_dpad_down(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_r2_analog
{
public:
  explicit Init_Report_r2_analog(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_dpad_up r2_analog(::ds4_driver_msgs::msg::Report::_r2_analog_type arg)
  {
    msg_.r2_analog = std::move(arg);
    return Init_Report_dpad_up(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_l2_analog
{
public:
  explicit Init_Report_l2_analog(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_r2_analog l2_analog(::ds4_driver_msgs::msg::Report::_l2_analog_type arg)
  {
    msg_.l2_analog = std::move(arg);
    return Init_Report_r2_analog(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_right_analog_y
{
public:
  explicit Init_Report_right_analog_y(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_l2_analog right_analog_y(::ds4_driver_msgs::msg::Report::_right_analog_y_type arg)
  {
    msg_.right_analog_y = std::move(arg);
    return Init_Report_l2_analog(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_right_analog_x
{
public:
  explicit Init_Report_right_analog_x(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_right_analog_y right_analog_x(::ds4_driver_msgs::msg::Report::_right_analog_x_type arg)
  {
    msg_.right_analog_x = std::move(arg);
    return Init_Report_right_analog_y(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_left_analog_y
{
public:
  explicit Init_Report_left_analog_y(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_right_analog_x left_analog_y(::ds4_driver_msgs::msg::Report::_left_analog_y_type arg)
  {
    msg_.left_analog_y = std::move(arg);
    return Init_Report_right_analog_x(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_left_analog_x
{
public:
  explicit Init_Report_left_analog_x(::ds4_driver_msgs::msg::Report & msg)
  : msg_(msg)
  {}
  Init_Report_left_analog_y left_analog_x(::ds4_driver_msgs::msg::Report::_left_analog_x_type arg)
  {
    msg_.left_analog_x = std::move(arg);
    return Init_Report_left_analog_y(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

class Init_Report_header
{
public:
  Init_Report_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Report_left_analog_x header(::ds4_driver_msgs::msg::Report::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Report_left_analog_x(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Report msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ds4_driver_msgs::msg::Report>()
{
  return ds4_driver_msgs::msg::builder::Init_Report_header();
}

}  // namespace ds4_driver_msgs

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__BUILDER_HPP_
