// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ds4_driver_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ds4_driver_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ds4_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_plug_mic
{
public:
  explicit Init_Status_plug_mic(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::ds4_driver_msgs::msg::Status plug_mic(::ds4_driver_msgs::msg::Status::_plug_mic_type arg)
  {
    msg_.plug_mic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_plug_audio
{
public:
  explicit Init_Status_plug_audio(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_plug_mic plug_audio(::ds4_driver_msgs::msg::Status::_plug_audio_type arg)
  {
    msg_.plug_audio = std::move(arg);
    return Init_Status_plug_mic(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_plug_usb
{
public:
  explicit Init_Status_plug_usb(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_plug_audio plug_usb(::ds4_driver_msgs::msg::Status::_plug_usb_type arg)
  {
    msg_.plug_usb = std::move(arg);
    return Init_Status_plug_audio(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_touch1
{
public:
  explicit Init_Status_touch1(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_plug_usb touch1(::ds4_driver_msgs::msg::Status::_touch1_type arg)
  {
    msg_.touch1 = std::move(arg);
    return Init_Status_plug_usb(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_touch0
{
public:
  explicit Init_Status_touch0(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_touch1 touch0(::ds4_driver_msgs::msg::Status::_touch0_type arg)
  {
    msg_.touch0 = std::move(arg);
    return Init_Status_touch1(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_battery_full_charging
{
public:
  explicit Init_Status_battery_full_charging(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_touch0 battery_full_charging(::ds4_driver_msgs::msg::Status::_battery_full_charging_type arg)
  {
    msg_.battery_full_charging = std::move(arg);
    return Init_Status_touch0(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_battery_percentage
{
public:
  explicit Init_Status_battery_percentage(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_battery_full_charging battery_percentage(::ds4_driver_msgs::msg::Status::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_Status_battery_full_charging(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_imu
{
public:
  explicit Init_Status_imu(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_battery_percentage imu(::ds4_driver_msgs::msg::Status::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_Status_battery_percentage(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_ps
{
public:
  explicit Init_Status_button_ps(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_imu button_ps(::ds4_driver_msgs::msg::Status::_button_ps_type arg)
  {
    msg_.button_ps = std::move(arg);
    return Init_Status_imu(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_trackpad
{
public:
  explicit Init_Status_button_trackpad(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_ps button_trackpad(::ds4_driver_msgs::msg::Status::_button_trackpad_type arg)
  {
    msg_.button_trackpad = std::move(arg);
    return Init_Status_button_ps(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_options
{
public:
  explicit Init_Status_button_options(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_trackpad button_options(::ds4_driver_msgs::msg::Status::_button_options_type arg)
  {
    msg_.button_options = std::move(arg);
    return Init_Status_button_trackpad(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_share
{
public:
  explicit Init_Status_button_share(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_options button_share(::ds4_driver_msgs::msg::Status::_button_share_type arg)
  {
    msg_.button_share = std::move(arg);
    return Init_Status_button_options(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_r3
{
public:
  explicit Init_Status_button_r3(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_share button_r3(::ds4_driver_msgs::msg::Status::_button_r3_type arg)
  {
    msg_.button_r3 = std::move(arg);
    return Init_Status_button_share(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_r2
{
public:
  explicit Init_Status_button_r2(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_r3 button_r2(::ds4_driver_msgs::msg::Status::_button_r2_type arg)
  {
    msg_.button_r2 = std::move(arg);
    return Init_Status_button_r3(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_r1
{
public:
  explicit Init_Status_button_r1(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_r2 button_r1(::ds4_driver_msgs::msg::Status::_button_r1_type arg)
  {
    msg_.button_r1 = std::move(arg);
    return Init_Status_button_r2(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_l3
{
public:
  explicit Init_Status_button_l3(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_r1 button_l3(::ds4_driver_msgs::msg::Status::_button_l3_type arg)
  {
    msg_.button_l3 = std::move(arg);
    return Init_Status_button_r1(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_l2
{
public:
  explicit Init_Status_button_l2(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_l3 button_l2(::ds4_driver_msgs::msg::Status::_button_l2_type arg)
  {
    msg_.button_l2 = std::move(arg);
    return Init_Status_button_l3(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_l1
{
public:
  explicit Init_Status_button_l1(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_l2 button_l1(::ds4_driver_msgs::msg::Status::_button_l1_type arg)
  {
    msg_.button_l1 = std::move(arg);
    return Init_Status_button_l2(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_triangle
{
public:
  explicit Init_Status_button_triangle(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_l1 button_triangle(::ds4_driver_msgs::msg::Status::_button_triangle_type arg)
  {
    msg_.button_triangle = std::move(arg);
    return Init_Status_button_l1(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_square
{
public:
  explicit Init_Status_button_square(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_triangle button_square(::ds4_driver_msgs::msg::Status::_button_square_type arg)
  {
    msg_.button_square = std::move(arg);
    return Init_Status_button_triangle(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_circle
{
public:
  explicit Init_Status_button_circle(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_square button_circle(::ds4_driver_msgs::msg::Status::_button_circle_type arg)
  {
    msg_.button_circle = std::move(arg);
    return Init_Status_button_square(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_cross
{
public:
  explicit Init_Status_button_cross(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_circle button_cross(::ds4_driver_msgs::msg::Status::_button_cross_type arg)
  {
    msg_.button_cross = std::move(arg);
    return Init_Status_button_circle(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_dpad_right
{
public:
  explicit Init_Status_button_dpad_right(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_cross button_dpad_right(::ds4_driver_msgs::msg::Status::_button_dpad_right_type arg)
  {
    msg_.button_dpad_right = std::move(arg);
    return Init_Status_button_cross(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_dpad_left
{
public:
  explicit Init_Status_button_dpad_left(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_dpad_right button_dpad_left(::ds4_driver_msgs::msg::Status::_button_dpad_left_type arg)
  {
    msg_.button_dpad_left = std::move(arg);
    return Init_Status_button_dpad_right(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_dpad_down
{
public:
  explicit Init_Status_button_dpad_down(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_dpad_left button_dpad_down(::ds4_driver_msgs::msg::Status::_button_dpad_down_type arg)
  {
    msg_.button_dpad_down = std::move(arg);
    return Init_Status_button_dpad_left(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_button_dpad_up
{
public:
  explicit Init_Status_button_dpad_up(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_dpad_down button_dpad_up(::ds4_driver_msgs::msg::Status::_button_dpad_up_type arg)
  {
    msg_.button_dpad_up = std::move(arg);
    return Init_Status_button_dpad_down(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_axis_r2
{
public:
  explicit Init_Status_axis_r2(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_button_dpad_up axis_r2(::ds4_driver_msgs::msg::Status::_axis_r2_type arg)
  {
    msg_.axis_r2 = std::move(arg);
    return Init_Status_button_dpad_up(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_axis_l2
{
public:
  explicit Init_Status_axis_l2(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_axis_r2 axis_l2(::ds4_driver_msgs::msg::Status::_axis_l2_type arg)
  {
    msg_.axis_l2 = std::move(arg);
    return Init_Status_axis_r2(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_axis_right_y
{
public:
  explicit Init_Status_axis_right_y(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_axis_l2 axis_right_y(::ds4_driver_msgs::msg::Status::_axis_right_y_type arg)
  {
    msg_.axis_right_y = std::move(arg);
    return Init_Status_axis_l2(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_axis_right_x
{
public:
  explicit Init_Status_axis_right_x(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_axis_right_y axis_right_x(::ds4_driver_msgs::msg::Status::_axis_right_x_type arg)
  {
    msg_.axis_right_x = std::move(arg);
    return Init_Status_axis_right_y(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_axis_left_y
{
public:
  explicit Init_Status_axis_left_y(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_axis_right_x axis_left_y(::ds4_driver_msgs::msg::Status::_axis_left_y_type arg)
  {
    msg_.axis_left_y = std::move(arg);
    return Init_Status_axis_right_x(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_axis_left_x
{
public:
  explicit Init_Status_axis_left_x(::ds4_driver_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_axis_left_y axis_left_x(::ds4_driver_msgs::msg::Status::_axis_left_x_type arg)
  {
    msg_.axis_left_x = std::move(arg);
    return Init_Status_axis_left_y(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

class Init_Status_header
{
public:
  Init_Status_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_axis_left_x header(::ds4_driver_msgs::msg::Status::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Status_axis_left_x(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ds4_driver_msgs::msg::Status>()
{
  return ds4_driver_msgs::msg::builder::Init_Status_header();
}

}  // namespace ds4_driver_msgs

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
