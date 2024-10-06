// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ds4_driver_msgs:msg/Report.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__TRAITS_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ds4_driver_msgs/msg/detail/report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ds4_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Report & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: left_analog_x
  {
    out << "left_analog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_analog_x, out);
    out << ", ";
  }

  // member: left_analog_y
  {
    out << "left_analog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_analog_y, out);
    out << ", ";
  }

  // member: right_analog_x
  {
    out << "right_analog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_analog_x, out);
    out << ", ";
  }

  // member: right_analog_y
  {
    out << "right_analog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_analog_y, out);
    out << ", ";
  }

  // member: l2_analog
  {
    out << "l2_analog: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_analog, out);
    out << ", ";
  }

  // member: r2_analog
  {
    out << "r2_analog: ";
    rosidl_generator_traits::value_to_yaml(msg.r2_analog, out);
    out << ", ";
  }

  // member: dpad_up
  {
    out << "dpad_up: ";
    rosidl_generator_traits::value_to_yaml(msg.dpad_up, out);
    out << ", ";
  }

  // member: dpad_down
  {
    out << "dpad_down: ";
    rosidl_generator_traits::value_to_yaml(msg.dpad_down, out);
    out << ", ";
  }

  // member: dpad_left
  {
    out << "dpad_left: ";
    rosidl_generator_traits::value_to_yaml(msg.dpad_left, out);
    out << ", ";
  }

  // member: dpad_right
  {
    out << "dpad_right: ";
    rosidl_generator_traits::value_to_yaml(msg.dpad_right, out);
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

  // member: lin_acc_x
  {
    out << "lin_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.lin_acc_x, out);
    out << ", ";
  }

  // member: lin_acc_y
  {
    out << "lin_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.lin_acc_y, out);
    out << ", ";
  }

  // member: lin_acc_z
  {
    out << "lin_acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.lin_acc_z, out);
    out << ", ";
  }

  // member: ang_vel_x
  {
    out << "ang_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_x, out);
    out << ", ";
  }

  // member: ang_vel_y
  {
    out << "ang_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_y, out);
    out << ", ";
  }

  // member: ang_vel_z
  {
    out << "ang_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_z, out);
    out << ", ";
  }

  // member: trackpad_touch0_id
  {
    out << "trackpad_touch0_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch0_id, out);
    out << ", ";
  }

  // member: trackpad_touch0_active
  {
    out << "trackpad_touch0_active: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch0_active, out);
    out << ", ";
  }

  // member: trackpad_touch0_x
  {
    out << "trackpad_touch0_x: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch0_x, out);
    out << ", ";
  }

  // member: trackpad_touch0_y
  {
    out << "trackpad_touch0_y: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch0_y, out);
    out << ", ";
  }

  // member: trackpad_touch1_id
  {
    out << "trackpad_touch1_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch1_id, out);
    out << ", ";
  }

  // member: trackpad_touch1_active
  {
    out << "trackpad_touch1_active: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch1_active, out);
    out << ", ";
  }

  // member: trackpad_touch1_x
  {
    out << "trackpad_touch1_x: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch1_x, out);
    out << ", ";
  }

  // member: trackpad_touch1_y
  {
    out << "trackpad_touch1_y: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch1_y, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
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
  const Report & msg,
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

  // member: left_analog_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_analog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_analog_x, out);
    out << "\n";
  }

  // member: left_analog_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_analog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_analog_y, out);
    out << "\n";
  }

  // member: right_analog_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_analog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_analog_x, out);
    out << "\n";
  }

  // member: right_analog_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_analog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_analog_y, out);
    out << "\n";
  }

  // member: l2_analog
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l2_analog: ";
    rosidl_generator_traits::value_to_yaml(msg.l2_analog, out);
    out << "\n";
  }

  // member: r2_analog
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r2_analog: ";
    rosidl_generator_traits::value_to_yaml(msg.r2_analog, out);
    out << "\n";
  }

  // member: dpad_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dpad_up: ";
    rosidl_generator_traits::value_to_yaml(msg.dpad_up, out);
    out << "\n";
  }

  // member: dpad_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dpad_down: ";
    rosidl_generator_traits::value_to_yaml(msg.dpad_down, out);
    out << "\n";
  }

  // member: dpad_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dpad_left: ";
    rosidl_generator_traits::value_to_yaml(msg.dpad_left, out);
    out << "\n";
  }

  // member: dpad_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dpad_right: ";
    rosidl_generator_traits::value_to_yaml(msg.dpad_right, out);
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

  // member: lin_acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lin_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.lin_acc_x, out);
    out << "\n";
  }

  // member: lin_acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lin_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.lin_acc_y, out);
    out << "\n";
  }

  // member: lin_acc_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lin_acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.lin_acc_z, out);
    out << "\n";
  }

  // member: ang_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_x, out);
    out << "\n";
  }

  // member: ang_vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_y, out);
    out << "\n";
  }

  // member: ang_vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_z, out);
    out << "\n";
  }

  // member: trackpad_touch0_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trackpad_touch0_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch0_id, out);
    out << "\n";
  }

  // member: trackpad_touch0_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trackpad_touch0_active: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch0_active, out);
    out << "\n";
  }

  // member: trackpad_touch0_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trackpad_touch0_x: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch0_x, out);
    out << "\n";
  }

  // member: trackpad_touch0_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trackpad_touch0_y: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch0_y, out);
    out << "\n";
  }

  // member: trackpad_touch1_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trackpad_touch1_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch1_id, out);
    out << "\n";
  }

  // member: trackpad_touch1_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trackpad_touch1_active: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch1_active, out);
    out << "\n";
  }

  // member: trackpad_touch1_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trackpad_touch1_x: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch1_x, out);
    out << "\n";
  }

  // member: trackpad_touch1_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trackpad_touch1_y: ";
    rosidl_generator_traits::value_to_yaml(msg.trackpad_touch1_y, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
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

inline std::string to_yaml(const Report & msg, bool use_flow_style = false)
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
  const ds4_driver_msgs::msg::Report & msg,
  std::ostream & out, size_t indentation = 0)
{
  ds4_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ds4_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ds4_driver_msgs::msg::Report & msg)
{
  return ds4_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ds4_driver_msgs::msg::Report>()
{
  return "ds4_driver_msgs::msg::Report";
}

template<>
inline const char * name<ds4_driver_msgs::msg::Report>()
{
  return "ds4_driver_msgs/msg/Report";
}

template<>
struct has_fixed_size<ds4_driver_msgs::msg::Report>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ds4_driver_msgs::msg::Report>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ds4_driver_msgs::msg::Report>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__TRAITS_HPP_
