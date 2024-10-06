// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ds4_driver_msgs:msg/Trackpad.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__STRUCT_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ds4_driver_msgs__msg__Trackpad __attribute__((deprecated))
#else
# define DEPRECATED__ds4_driver_msgs__msg__Trackpad __declspec(deprecated)
#endif

namespace ds4_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trackpad_
{
  using Type = Trackpad_<ContainerAllocator>;

  explicit Trackpad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->active = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit Trackpad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->active = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint16_t;
  _id_type id;
  using _active_type =
    int32_t;
  _active_type active;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__active(
    const int32_t & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ds4_driver_msgs::msg::Trackpad_<ContainerAllocator> *;
  using ConstRawPtr =
    const ds4_driver_msgs::msg::Trackpad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ds4_driver_msgs::msg::Trackpad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ds4_driver_msgs::msg::Trackpad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ds4_driver_msgs::msg::Trackpad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ds4_driver_msgs::msg::Trackpad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ds4_driver_msgs::msg::Trackpad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ds4_driver_msgs::msg::Trackpad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ds4_driver_msgs::msg::Trackpad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ds4_driver_msgs::msg::Trackpad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ds4_driver_msgs__msg__Trackpad
    std::shared_ptr<ds4_driver_msgs::msg::Trackpad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ds4_driver_msgs__msg__Trackpad
    std::shared_ptr<ds4_driver_msgs::msg::Trackpad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trackpad_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trackpad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trackpad_

// alias to use template instance with default allocator
using Trackpad =
  ds4_driver_msgs::msg::Trackpad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ds4_driver_msgs

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__STRUCT_HPP_
