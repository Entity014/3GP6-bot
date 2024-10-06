// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ds4_driver_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ds4_driver_msgs/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ds4_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_Feedback_rumble_big
{
public:
  explicit Init_Feedback_rumble_big(::ds4_driver_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  ::ds4_driver_msgs::msg::Feedback rumble_big(::ds4_driver_msgs::msg::Feedback::_rumble_big_type arg)
  {
    msg_.rumble_big = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

class Init_Feedback_rumble_small
{
public:
  explicit Init_Feedback_rumble_small(::ds4_driver_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_rumble_big rumble_small(::ds4_driver_msgs::msg::Feedback::_rumble_small_type arg)
  {
    msg_.rumble_small = std::move(arg);
    return Init_Feedback_rumble_big(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

class Init_Feedback_rumble_duration
{
public:
  explicit Init_Feedback_rumble_duration(::ds4_driver_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_rumble_small rumble_duration(::ds4_driver_msgs::msg::Feedback::_rumble_duration_type arg)
  {
    msg_.rumble_duration = std::move(arg);
    return Init_Feedback_rumble_small(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

class Init_Feedback_set_rumble
{
public:
  explicit Init_Feedback_set_rumble(::ds4_driver_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_rumble_duration set_rumble(::ds4_driver_msgs::msg::Feedback::_set_rumble_type arg)
  {
    msg_.set_rumble = std::move(arg);
    return Init_Feedback_rumble_duration(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

class Init_Feedback_led_flash_off
{
public:
  explicit Init_Feedback_led_flash_off(::ds4_driver_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_set_rumble led_flash_off(::ds4_driver_msgs::msg::Feedback::_led_flash_off_type arg)
  {
    msg_.led_flash_off = std::move(arg);
    return Init_Feedback_set_rumble(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

class Init_Feedback_led_flash_on
{
public:
  explicit Init_Feedback_led_flash_on(::ds4_driver_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_led_flash_off led_flash_on(::ds4_driver_msgs::msg::Feedback::_led_flash_on_type arg)
  {
    msg_.led_flash_on = std::move(arg);
    return Init_Feedback_led_flash_off(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

class Init_Feedback_set_led_flash
{
public:
  explicit Init_Feedback_set_led_flash(::ds4_driver_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_led_flash_on set_led_flash(::ds4_driver_msgs::msg::Feedback::_set_led_flash_type arg)
  {
    msg_.set_led_flash = std::move(arg);
    return Init_Feedback_led_flash_on(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

class Init_Feedback_led_b
{
public:
  explicit Init_Feedback_led_b(::ds4_driver_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_set_led_flash led_b(::ds4_driver_msgs::msg::Feedback::_led_b_type arg)
  {
    msg_.led_b = std::move(arg);
    return Init_Feedback_set_led_flash(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

class Init_Feedback_led_g
{
public:
  explicit Init_Feedback_led_g(::ds4_driver_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_led_b led_g(::ds4_driver_msgs::msg::Feedback::_led_g_type arg)
  {
    msg_.led_g = std::move(arg);
    return Init_Feedback_led_b(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

class Init_Feedback_led_r
{
public:
  explicit Init_Feedback_led_r(::ds4_driver_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_led_g led_r(::ds4_driver_msgs::msg::Feedback::_led_r_type arg)
  {
    msg_.led_r = std::move(arg);
    return Init_Feedback_led_g(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

class Init_Feedback_set_led
{
public:
  Init_Feedback_set_led()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Feedback_led_r set_led(::ds4_driver_msgs::msg::Feedback::_set_led_type arg)
  {
    msg_.set_led = std::move(arg);
    return Init_Feedback_led_r(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Feedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ds4_driver_msgs::msg::Feedback>()
{
  return ds4_driver_msgs::msg::builder::Init_Feedback_set_led();
}

}  // namespace ds4_driver_msgs

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
