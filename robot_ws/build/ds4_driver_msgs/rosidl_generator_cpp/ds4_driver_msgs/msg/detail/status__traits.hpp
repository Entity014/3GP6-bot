// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ds4_driver_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ds4_driver_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__traits.hpp"
// Member 'touch0'
// Member 'touch1'
#include "ds4_driver_msgs/msg/detail/trackpad__traits.hpp"

namespace ds4_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: axis_left_x
  {
    out << "axis_left_x: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_left_x, out);
    out << ", ";
  }

  // member: axis_left_y
  {
    out << "axis_left_y: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_left_y, out);
    out << ", ";
  }

  // member: axis_right_x
  {
    out << "axis_right_x: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_right_x, out);
    out << ", ";
  }

  // member: axis_right_y
  {
    out << "axis_right_y: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_right_y, out);
    out << ", ";
  }

  // member: axis_l2
  {
    out << "axis_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_l2, out);
    out << ", ";
  }

  // member: axis_r2
  {
    out << "axis_r2: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_r2, out);
    out << ", ";
  }

  // member: button_dpad_up
  {
    out << "button_dpad_up: ";
    rosidl_generator_traits::value_to_yaml(msg.button_dpad_up, out);
    out << ", ";
  }

  // member: button_dpad_down
  {
    out << "button_dpad_down: ";
    rosidl_generator_traits::value_to_yaml(msg.button_dpad_down, out);
    out << ", ";
  }

  // member: button_dpad_left
  {
    out << "button_dpad_left: ";
    rosidl_generator_traits::value_to_yaml(msg.button_dpad_left, out);
    out << ", ";
  }

  // member: button_dpad_right
  {
    out << "button_dpad_right: ";
    rosidl_generator_traits::value_to_yaml(msg.button_dpad_right, out);
    out << ", ";
  }

  // member: button_cross
  {
    out << "button_cross: ";
    rosidl_generator_traits::value_to_yaml(msg.button_cross, out);
    out << ", ";
  }

  // member: button_circle
  {
    out << "button_circle: ";
    rosidl_generator_traits::value_to_yaml(msg.button_circle, out);
    out << ", ";
  }

  // member: button_square
  {
    out << "button_square: ";
    rosidl_generator_traits::value_to_yaml(msg.button_square, out);
    out << ", ";
  }

  // member: button_triangle
  {
    out << "button_triangle: ";
    rosidl_generator_traits::value_to_yaml(msg.button_triangle, out);
    out << ", ";
  }

  // member: button_l1
  {
    out << "button_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.button_l1, out);
    out << ", ";
  }

  // member: button_l2
  {
    out << "button_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.button_l2, out);
    out << ", ";
  }

  // member: button_l3
  {
    out << "button_l3: ";
    rosidl_generator_traits::value_to_yaml(msg.button_l3, out);
    out << ", ";
  }

  // member: button_r1
  {
    out << "button_r1: ";
    rosidl_generator_traits::value_to_yaml(msg.button_r1, out);
    out << ", ";
  }

  // member: button_r2
  {
    out << "button_r2: ";
    rosidl_generator_traits::value_to_yaml(msg.button_r2, out);
    out << ", ";
  }

  // member: button_r3
  {
    out << "button_r3: ";
    rosidl_generator_traits::value_to_yaml(msg.button_r3, out);
    out << ", ";
  }

  // member: button_share
  {
    out << "button_share: ";
    rosidl_generator_traits::value_to_yaml(msg.button_share, out);
    out << ", ";
  }

  // member: button_options
  {
    out << "button_options: ";
    rosidl_generator_traits::value_to_yaml(msg.button_options, out);
    out << ", ";
  }

  // member: button_trackpad
  {
    out << "button_trackpad: ";
    rosidl_generator_traits::value_to_yaml(msg.button_trackpad, out);
    out << ", ";
  }

  // member: button_ps
  {
    out << "button_ps: ";
    rosidl_generator_traits::value_to_yaml(msg.button_ps, out);
    out << ", ";
  }

  // member: imu
  {
    out << "imu: ";
    to_flow_style_yaml(msg.imu, out);
    out << ", ";
  }

  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: battery_full_charging
  {
    out << "battery_full_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_full_charging, out);
    out << ", ";
  }

  // member: touch0
  {
    out << "touch0: ";
    to_flow_style_yaml(msg.touch0, out);
    out << ", ";
  }

  // member: touch1
  {
    out << "touch1: ";
    to_flow_style_yaml(msg.touch1, out);
    out << ", ";
  }

  // member: plug_usb
  {
    out << "plug_usb: ";
    rosidl_generator_traits::value_to_yaml(msg.plug_usb, out);
    out << ", ";
  }

  // member: plug_audio
  {
    out << "plug_audio: ";
    rosidl_generator_traits::value_to_yaml(msg.plug_audio, out);
    out << ", ";
  }

  // member: plug_mic
  {
    out << "plug_mic: ";
    rosidl_generator_traits::value_to_yaml(msg.plug_mic, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: axis_left_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_left_x: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_left_x, out);
    out << "\n";
  }

  // member: axis_left_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_left_y: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_left_y, out);
    out << "\n";
  }

  // member: axis_right_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_right_x: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_right_x, out);
    out << "\n";
  }

  // member: axis_right_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_right_y: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_right_y, out);
    out << "\n";
  }

  // member: axis_l2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_l2, out);
    out << "\n";
  }

  // member: axis_r2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_r2: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_r2, out);
    out << "\n";
  }

  // member: button_dpad_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_dpad_up: ";
    rosidl_generator_traits::value_to_yaml(msg.button_dpad_up, out);
    out << "\n";
  }

  // member: button_dpad_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_dpad_down: ";
    rosidl_generator_traits::value_to_yaml(msg.button_dpad_down, out);
    out << "\n";
  }

  // member: button_dpad_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_dpad_left: ";
    rosidl_generator_traits::value_to_yaml(msg.button_dpad_left, out);
    out << "\n";
  }

  // member: button_dpad_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_dpad_right: ";
    rosidl_generator_traits::value_to_yaml(msg.button_dpad_right, out);
    out << "\n";
  }

  // member: button_cross
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_cross: ";
    rosidl_generator_traits::value_to_yaml(msg.button_cross, out);
    out << "\n";
  }

  // member: button_circle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_circle: ";
    rosidl_generator_traits::value_to_yaml(msg.button_circle, out);
    out << "\n";
  }

  // member: button_square
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_square: ";
    rosidl_generator_traits::value_to_yaml(msg.button_square, out);
    out << "\n";
  }

  // member: button_triangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_triangle: ";
    rosidl_generator_traits::value_to_yaml(msg.button_triangle, out);
    out << "\n";
  }

  // member: button_l1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.button_l1, out);
    out << "\n";
  }

  // member: button_l2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.button_l2, out);
    out << "\n";
  }

  // member: button_l3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_l3: ";
    rosidl_generator_traits::value_to_yaml(msg.button_l3, out);
    out << "\n";
  }

  // member: button_r1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_r1: ";
    rosidl_generator_traits::value_to_yaml(msg.button_r1, out);
    out << "\n";
  }

  // member: button_r2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_r2: ";
    rosidl_generator_traits::value_to_yaml(msg.button_r2, out);
    out << "\n";
  }

  // member: button_r3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_r3: ";
    rosidl_generator_traits::value_to_yaml(msg.button_r3, out);
    out << "\n";
  }

  // member: button_share
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_share: ";
    rosidl_generator_traits::value_to_yaml(msg.button_share, out);
    out << "\n";
  }

  // member: button_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_options: ";
    rosidl_generator_traits::value_to_yaml(msg.button_options, out);
    out << "\n";
  }

  // member: button_trackpad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_trackpad: ";
    rosidl_generator_traits::value_to_yaml(msg.button_trackpad, out);
    out << "\n";
  }

  // member: button_ps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_ps: ";
    rosidl_generator_traits::value_to_yaml(msg.button_ps, out);
    out << "\n";
  }

  // member: imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu:\n";
    to_block_style_yaml(msg.imu, out, indentation + 2);
  }

  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: battery_full_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_full_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_full_charging, out);
    out << "\n";
  }

  // member: touch0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "touch0:\n";
    to_block_style_yaml(msg.touch0, out, indentation + 2);
  }

  // member: touch1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "touch1:\n";
    to_block_style_yaml(msg.touch1, out, indentation + 2);
  }

  // member: plug_usb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plug_usb: ";
    rosidl_generator_traits::value_to_yaml(msg.plug_usb, out);
    out << "\n";
  }

  // member: plug_audio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plug_audio: ";
    rosidl_generator_traits::value_to_yaml(msg.plug_audio, out);
    out << "\n";
  }

  // member: plug_mic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plug_mic: ";
    rosidl_generator_traits::value_to_yaml(msg.plug_mic, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ds4_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ds4_driver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ds4_driver_msgs::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  ds4_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ds4_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ds4_driver_msgs::msg::Status & msg)
{
  return ds4_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ds4_driver_msgs::msg::Status>()
{
  return "ds4_driver_msgs::msg::Status";
}

template<>
inline const char * name<ds4_driver_msgs::msg::Status>()
{
  return "ds4_driver_msgs/msg/Status";
}

template<>
struct has_fixed_size<ds4_driver_msgs::msg::Status>
  : std::integral_constant<bool, has_fixed_size<ds4_driver_msgs::msg::Trackpad>::value && has_fixed_size<sensor_msgs::msg::Imu>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ds4_driver_msgs::msg::Status>
  : std::integral_constant<bool, has_bounded_size<ds4_driver_msgs::msg::Trackpad>::value && has_bounded_size<sensor_msgs::msg::Imu>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ds4_driver_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
