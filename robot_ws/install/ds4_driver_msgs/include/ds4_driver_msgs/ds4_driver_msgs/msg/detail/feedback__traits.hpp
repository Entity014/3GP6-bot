// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ds4_driver_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ds4_driver_msgs/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ds4_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: set_led
  {
    out << "set_led: ";
    rosidl_generator_traits::value_to_yaml(msg.set_led, out);
    out << ", ";
  }

  // member: led_r
  {
    out << "led_r: ";
    rosidl_generator_traits::value_to_yaml(msg.led_r, out);
    out << ", ";
  }

  // member: led_g
  {
    out << "led_g: ";
    rosidl_generator_traits::value_to_yaml(msg.led_g, out);
    out << ", ";
  }

  // member: led_b
  {
    out << "led_b: ";
    rosidl_generator_traits::value_to_yaml(msg.led_b, out);
    out << ", ";
  }

  // member: set_led_flash
  {
    out << "set_led_flash: ";
    rosidl_generator_traits::value_to_yaml(msg.set_led_flash, out);
    out << ", ";
  }

  // member: led_flash_on
  {
    out << "led_flash_on: ";
    rosidl_generator_traits::value_to_yaml(msg.led_flash_on, out);
    out << ", ";
  }

  // member: led_flash_off
  {
    out << "led_flash_off: ";
    rosidl_generator_traits::value_to_yaml(msg.led_flash_off, out);
    out << ", ";
  }

  // member: set_rumble
  {
    out << "set_rumble: ";
    rosidl_generator_traits::value_to_yaml(msg.set_rumble, out);
    out << ", ";
  }

  // member: rumble_duration
  {
    out << "rumble_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.rumble_duration, out);
    out << ", ";
  }

  // member: rumble_small
  {
    out << "rumble_small: ";
    rosidl_generator_traits::value_to_yaml(msg.rumble_small, out);
    out << ", ";
  }

  // member: rumble_big
  {
    out << "rumble_big: ";
    rosidl_generator_traits::value_to_yaml(msg.rumble_big, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set_led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_led: ";
    rosidl_generator_traits::value_to_yaml(msg.set_led, out);
    out << "\n";
  }

  // member: led_r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_r: ";
    rosidl_generator_traits::value_to_yaml(msg.led_r, out);
    out << "\n";
  }

  // member: led_g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_g: ";
    rosidl_generator_traits::value_to_yaml(msg.led_g, out);
    out << "\n";
  }

  // member: led_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_b: ";
    rosidl_generator_traits::value_to_yaml(msg.led_b, out);
    out << "\n";
  }

  // member: set_led_flash
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_led_flash: ";
    rosidl_generator_traits::value_to_yaml(msg.set_led_flash, out);
    out << "\n";
  }

  // member: led_flash_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_flash_on: ";
    rosidl_generator_traits::value_to_yaml(msg.led_flash_on, out);
    out << "\n";
  }

  // member: led_flash_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_flash_off: ";
    rosidl_generator_traits::value_to_yaml(msg.led_flash_off, out);
    out << "\n";
  }

  // member: set_rumble
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_rumble: ";
    rosidl_generator_traits::value_to_yaml(msg.set_rumble, out);
    out << "\n";
  }

  // member: rumble_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rumble_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.rumble_duration, out);
    out << "\n";
  }

  // member: rumble_small
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rumble_small: ";
    rosidl_generator_traits::value_to_yaml(msg.rumble_small, out);
    out << "\n";
  }

  // member: rumble_big
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rumble_big: ";
    rosidl_generator_traits::value_to_yaml(msg.rumble_big, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Feedback & msg, bool use_flow_style = false)
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
  const ds4_driver_msgs::msg::Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ds4_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ds4_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ds4_driver_msgs::msg::Feedback & msg)
{
  return ds4_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ds4_driver_msgs::msg::Feedback>()
{
  return "ds4_driver_msgs::msg::Feedback";
}

template<>
inline const char * name<ds4_driver_msgs::msg::Feedback>()
{
  return "ds4_driver_msgs/msg/Feedback";
}

template<>
struct has_fixed_size<ds4_driver_msgs::msg::Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ds4_driver_msgs::msg::Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ds4_driver_msgs::msg::Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
