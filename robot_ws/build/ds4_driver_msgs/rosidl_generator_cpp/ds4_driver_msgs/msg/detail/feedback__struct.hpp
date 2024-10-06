// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ds4_driver_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ds4_driver_msgs__msg__Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ds4_driver_msgs__msg__Feedback __declspec(deprecated)
#endif

namespace ds4_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Feedback_
{
  using Type = Feedback_<ContainerAllocator>;

  explicit Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_led = false;
      this->led_r = 0.0f;
      this->led_g = 0.0f;
      this->led_b = 0.0f;
      this->set_led_flash = false;
      this->led_flash_on = 0.0f;
      this->led_flash_off = 0.0f;
      this->set_rumble = false;
      this->rumble_duration = 0.0f;
      this->rumble_small = 0.0f;
      this->rumble_big = 0.0f;
    }
  }

  explicit Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_led = false;
      this->led_r = 0.0f;
      this->led_g = 0.0f;
      this->led_b = 0.0f;
      this->set_led_flash = false;
      this->led_flash_on = 0.0f;
      this->led_flash_off = 0.0f;
      this->set_rumble = false;
      this->rumble_duration = 0.0f;
      this->rumble_small = 0.0f;
      this->rumble_big = 0.0f;
    }
  }

  // field types and members
  using _set_led_type =
    bool;
  _set_led_type set_led;
  using _led_r_type =
    float;
  _led_r_type led_r;
  using _led_g_type =
    float;
  _led_g_type led_g;
  using _led_b_type =
    float;
  _led_b_type led_b;
  using _set_led_flash_type =
    bool;
  _set_led_flash_type set_led_flash;
  using _led_flash_on_type =
    float;
  _led_flash_on_type led_flash_on;
  using _led_flash_off_type =
    float;
  _led_flash_off_type led_flash_off;
  using _set_rumble_type =
    bool;
  _set_rumble_type set_rumble;
  using _rumble_duration_type =
    float;
  _rumble_duration_type rumble_duration;
  using _rumble_small_type =
    float;
  _rumble_small_type rumble_small;
  using _rumble_big_type =
    float;
  _rumble_big_type rumble_big;

  // setters for named parameter idiom
  Type & set__set_led(
    const bool & _arg)
  {
    this->set_led = _arg;
    return *this;
  }
  Type & set__led_r(
    const float & _arg)
  {
    this->led_r = _arg;
    return *this;
  }
  Type & set__led_g(
    const float & _arg)
  {
    this->led_g = _arg;
    return *this;
  }
  Type & set__led_b(
    const float & _arg)
  {
    this->led_b = _arg;
    return *this;
  }
  Type & set__set_led_flash(
    const bool & _arg)
  {
    this->set_led_flash = _arg;
    return *this;
  }
  Type & set__led_flash_on(
    const float & _arg)
  {
    this->led_flash_on = _arg;
    return *this;
  }
  Type & set__led_flash_off(
    const float & _arg)
  {
    this->led_flash_off = _arg;
    return *this;
  }
  Type & set__set_rumble(
    const bool & _arg)
  {
    this->set_rumble = _arg;
    return *this;
  }
  Type & set__rumble_duration(
    const float & _arg)
  {
    this->rumble_duration = _arg;
    return *this;
  }
  Type & set__rumble_small(
    const float & _arg)
  {
    this->rumble_small = _arg;
    return *this;
  }
  Type & set__rumble_big(
    const float & _arg)
  {
    this->rumble_big = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ds4_driver_msgs::msg::Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ds4_driver_msgs::msg::Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ds4_driver_msgs::msg::Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ds4_driver_msgs::msg::Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ds4_driver_msgs::msg::Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ds4_driver_msgs::msg::Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ds4_driver_msgs::msg::Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ds4_driver_msgs::msg::Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ds4_driver_msgs::msg::Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ds4_driver_msgs::msg::Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ds4_driver_msgs__msg__Feedback
    std::shared_ptr<ds4_driver_msgs::msg::Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ds4_driver_msgs__msg__Feedback
    std::shared_ptr<ds4_driver_msgs::msg::Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Feedback_ & other) const
  {
    if (this->set_led != other.set_led) {
      return false;
    }
    if (this->led_r != other.led_r) {
      return false;
    }
    if (this->led_g != other.led_g) {
      return false;
    }
    if (this->led_b != other.led_b) {
      return false;
    }
    if (this->set_led_flash != other.set_led_flash) {
      return false;
    }
    if (this->led_flash_on != other.led_flash_on) {
      return false;
    }
    if (this->led_flash_off != other.led_flash_off) {
      return false;
    }
    if (this->set_rumble != other.set_rumble) {
      return false;
    }
    if (this->rumble_duration != other.rumble_duration) {
      return false;
    }
    if (this->rumble_small != other.rumble_small) {
      return false;
    }
    if (this->rumble_big != other.rumble_big) {
      return false;
    }
    return true;
  }
  bool operator!=(const Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Feedback_

// alias to use template instance with default allocator
using Feedback =
  ds4_driver_msgs::msg::Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ds4_driver_msgs

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_
