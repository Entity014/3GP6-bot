// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ds4_driver_msgs:msg/Trackpad.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__TRAITS_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ds4_driver_msgs/msg/detail/trackpad__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ds4_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Trackpad & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Trackpad & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Trackpad & msg, bool use_flow_style = false)
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
  const ds4_driver_msgs::msg::Trackpad & msg,
  std::ostream & out, size_t indentation = 0)
{
  ds4_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ds4_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ds4_driver_msgs::msg::Trackpad & msg)
{
  return ds4_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ds4_driver_msgs::msg::Trackpad>()
{
  return "ds4_driver_msgs::msg::Trackpad";
}

template<>
inline const char * name<ds4_driver_msgs::msg::Trackpad>()
{
  return "ds4_driver_msgs/msg/Trackpad";
}

template<>
struct has_fixed_size<ds4_driver_msgs::msg::Trackpad>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ds4_driver_msgs::msg::Trackpad>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ds4_driver_msgs::msg::Trackpad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__TRAITS_HPP_
