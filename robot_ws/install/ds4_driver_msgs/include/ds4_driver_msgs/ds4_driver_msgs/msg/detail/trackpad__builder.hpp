// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ds4_driver_msgs:msg/Trackpad.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__BUILDER_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ds4_driver_msgs/msg/detail/trackpad__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ds4_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_Trackpad_y
{
public:
  explicit Init_Trackpad_y(::ds4_driver_msgs::msg::Trackpad & msg)
  : msg_(msg)
  {}
  ::ds4_driver_msgs::msg::Trackpad y(::ds4_driver_msgs::msg::Trackpad::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Trackpad msg_;
};

class Init_Trackpad_x
{
public:
  explicit Init_Trackpad_x(::ds4_driver_msgs::msg::Trackpad & msg)
  : msg_(msg)
  {}
  Init_Trackpad_y x(::ds4_driver_msgs::msg::Trackpad::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Trackpad_y(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Trackpad msg_;
};

class Init_Trackpad_active
{
public:
  explicit Init_Trackpad_active(::ds4_driver_msgs::msg::Trackpad & msg)
  : msg_(msg)
  {}
  Init_Trackpad_x active(::ds4_driver_msgs::msg::Trackpad::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_Trackpad_x(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Trackpad msg_;
};

class Init_Trackpad_id
{
public:
  Init_Trackpad_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trackpad_active id(::ds4_driver_msgs::msg::Trackpad::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Trackpad_active(msg_);
  }

private:
  ::ds4_driver_msgs::msg::Trackpad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ds4_driver_msgs::msg::Trackpad>()
{
  return ds4_driver_msgs::msg::builder::Init_Trackpad_id();
}

}  // namespace ds4_driver_msgs

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__BUILDER_HPP_
