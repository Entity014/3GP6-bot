// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ds4_driver_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.hpp"
// Member 'touch0'
// Member 'touch1'
#include "ds4_driver_msgs/msg/detail/trackpad__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ds4_driver_msgs__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__ds4_driver_msgs__msg__Status __declspec(deprecated)
#endif

namespace ds4_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    imu(_init),
    touch0(_init),
    touch1(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis_left_x = 0.0f;
      this->axis_left_y = 0.0f;
      this->axis_right_x = 0.0f;
      this->axis_right_y = 0.0f;
      this->axis_l2 = 0.0f;
      this->axis_r2 = 0.0f;
      this->button_dpad_up = 0l;
      this->button_dpad_down = 0l;
      this->button_dpad_left = 0l;
      this->button_dpad_right = 0l;
      this->button_cross = 0l;
      this->button_circle = 0l;
      this->button_square = 0l;
      this->button_triangle = 0l;
      this->button_l1 = 0l;
      this->button_l2 = 0l;
      this->button_l3 = 0l;
      this->button_r1 = 0l;
      this->button_r2 = 0l;
      this->button_r3 = 0l;
      this->button_share = 0l;
      this->button_options = 0l;
      this->button_trackpad = 0l;
      this->button_ps = 0l;
      this->battery_percentage = 0.0f;
      this->battery_full_charging = 0l;
      this->plug_usb = 0l;
      this->plug_audio = 0l;
      this->plug_mic = 0l;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    imu(_alloc, _init),
    touch0(_alloc, _init),
    touch1(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis_left_x = 0.0f;
      this->axis_left_y = 0.0f;
      this->axis_right_x = 0.0f;
      this->axis_right_y = 0.0f;
      this->axis_l2 = 0.0f;
      this->axis_r2 = 0.0f;
      this->button_dpad_up = 0l;
      this->button_dpad_down = 0l;
      this->button_dpad_left = 0l;
      this->button_dpad_right = 0l;
      this->button_cross = 0l;
      this->button_circle = 0l;
      this->button_square = 0l;
      this->button_triangle = 0l;
      this->button_l1 = 0l;
      this->button_l2 = 0l;
      this->button_l3 = 0l;
      this->button_r1 = 0l;
      this->button_r2 = 0l;
      this->button_r3 = 0l;
      this->button_share = 0l;
      this->button_options = 0l;
      this->button_trackpad = 0l;
      this->button_ps = 0l;
      this->battery_percentage = 0.0f;
      this->battery_full_charging = 0l;
      this->plug_usb = 0l;
      this->plug_audio = 0l;
      this->plug_mic = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _axis_left_x_type =
    float;
  _axis_left_x_type axis_left_x;
  using _axis_left_y_type =
    float;
  _axis_left_y_type axis_left_y;
  using _axis_right_x_type =
    float;
  _axis_right_x_type axis_right_x;
  using _axis_right_y_type =
    float;
  _axis_right_y_type axis_right_y;
  using _axis_l2_type =
    float;
  _axis_l2_type axis_l2;
  using _axis_r2_type =
    float;
  _axis_r2_type axis_r2;
  using _button_dpad_up_type =
    int32_t;
  _button_dpad_up_type button_dpad_up;
  using _button_dpad_down_type =
    int32_t;
  _button_dpad_down_type button_dpad_down;
  using _button_dpad_left_type =
    int32_t;
  _button_dpad_left_type button_dpad_left;
  using _button_dpad_right_type =
    int32_t;
  _button_dpad_right_type button_dpad_right;
  using _button_cross_type =
    int32_t;
  _button_cross_type button_cross;
  using _button_circle_type =
    int32_t;
  _button_circle_type button_circle;
  using _button_square_type =
    int32_t;
  _button_square_type button_square;
  using _button_triangle_type =
    int32_t;
  _button_triangle_type button_triangle;
  using _button_l1_type =
    int32_t;
  _button_l1_type button_l1;
  using _button_l2_type =
    int32_t;
  _button_l2_type button_l2;
  using _button_l3_type =
    int32_t;
  _button_l3_type button_l3;
  using _button_r1_type =
    int32_t;
  _button_r1_type button_r1;
  using _button_r2_type =
    int32_t;
  _button_r2_type button_r2;
  using _button_r3_type =
    int32_t;
  _button_r3_type button_r3;
  using _button_share_type =
    int32_t;
  _button_share_type button_share;
  using _button_options_type =
    int32_t;
  _button_options_type button_options;
  using _button_trackpad_type =
    int32_t;
  _button_trackpad_type button_trackpad;
  using _button_ps_type =
    int32_t;
  _button_ps_type button_ps;
  using _imu_type =
    sensor_msgs::msg::Imu_<ContainerAllocator>;
  _imu_type imu;
  using _battery_percentage_type =
    float;
  _battery_percentage_type battery_percentage;
  using _battery_full_charging_type =
    int32_t;
  _battery_full_charging_type battery_full_charging;
  using _touch0_type =
    ds4_driver_msgs::msg::Trackpad_<ContainerAllocator>;
  _touch0_type touch0;
  using _touch1_type =
    ds4_driver_msgs::msg::Trackpad_<ContainerAllocator>;
  _touch1_type touch1;
  using _plug_usb_type =
    int32_t;
  _plug_usb_type plug_usb;
  using _plug_audio_type =
    int32_t;
  _plug_audio_type plug_audio;
  using _plug_mic_type =
    int32_t;
  _plug_mic_type plug_mic;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__axis_left_x(
    const float & _arg)
  {
    this->axis_left_x = _arg;
    return *this;
  }
  Type & set__axis_left_y(
    const float & _arg)
  {
    this->axis_left_y = _arg;
    return *this;
  }
  Type & set__axis_right_x(
    const float & _arg)
  {
    this->axis_right_x = _arg;
    return *this;
  }
  Type & set__axis_right_y(
    const float & _arg)
  {
    this->axis_right_y = _arg;
    return *this;
  }
  Type & set__axis_l2(
    const float & _arg)
  {
    this->axis_l2 = _arg;
    return *this;
  }
  Type & set__axis_r2(
    const float & _arg)
  {
    this->axis_r2 = _arg;
    return *this;
  }
  Type & set__button_dpad_up(
    const int32_t & _arg)
  {
    this->button_dpad_up = _arg;
    return *this;
  }
  Type & set__button_dpad_down(
    const int32_t & _arg)
  {
    this->button_dpad_down = _arg;
    return *this;
  }
  Type & set__button_dpad_left(
    const int32_t & _arg)
  {
    this->button_dpad_left = _arg;
    return *this;
  }
  Type & set__button_dpad_right(
    const int32_t & _arg)
  {
    this->button_dpad_right = _arg;
    return *this;
  }
  Type & set__button_cross(
    const int32_t & _arg)
  {
    this->button_cross = _arg;
    return *this;
  }
  Type & set__button_circle(
    const int32_t & _arg)
  {
    this->button_circle = _arg;
    return *this;
  }
  Type & set__button_square(
    const int32_t & _arg)
  {
    this->button_square = _arg;
    return *this;
  }
  Type & set__button_triangle(
    const int32_t & _arg)
  {
    this->button_triangle = _arg;
    return *this;
  }
  Type & set__button_l1(
    const int32_t & _arg)
  {
    this->button_l1 = _arg;
    return *this;
  }
  Type & set__button_l2(
    const int32_t & _arg)
  {
    this->button_l2 = _arg;
    return *this;
  }
  Type & set__button_l3(
    const int32_t & _arg)
  {
    this->button_l3 = _arg;
    return *this;
  }
  Type & set__button_r1(
    const int32_t & _arg)
  {
    this->button_r1 = _arg;
    return *this;
  }
  Type & set__button_r2(
    const int32_t & _arg)
  {
    this->button_r2 = _arg;
    return *this;
  }
  Type & set__button_r3(
    const int32_t & _arg)
  {
    this->button_r3 = _arg;
    return *this;
  }
  Type & set__button_share(
    const int32_t & _arg)
  {
    this->button_share = _arg;
    return *this;
  }
  Type & set__button_options(
    const int32_t & _arg)
  {
    this->button_options = _arg;
    return *this;
  }
  Type & set__button_trackpad(
    const int32_t & _arg)
  {
    this->button_trackpad = _arg;
    return *this;
  }
  Type & set__button_ps(
    const int32_t & _arg)
  {
    this->button_ps = _arg;
    return *this;
  }
  Type & set__imu(
    const sensor_msgs::msg::Imu_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const float & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__battery_full_charging(
    const int32_t & _arg)
  {
    this->battery_full_charging = _arg;
    return *this;
  }
  Type & set__touch0(
    const ds4_driver_msgs::msg::Trackpad_<ContainerAllocator> & _arg)
  {
    this->touch0 = _arg;
    return *this;
  }
  Type & set__touch1(
    const ds4_driver_msgs::msg::Trackpad_<ContainerAllocator> & _arg)
  {
    this->touch1 = _arg;
    return *this;
  }
  Type & set__plug_usb(
    const int32_t & _arg)
  {
    this->plug_usb = _arg;
    return *this;
  }
  Type & set__plug_audio(
    const int32_t & _arg)
  {
    this->plug_audio = _arg;
    return *this;
  }
  Type & set__plug_mic(
    const int32_t & _arg)
  {
    this->plug_mic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ds4_driver_msgs::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const ds4_driver_msgs::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ds4_driver_msgs::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ds4_driver_msgs::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ds4_driver_msgs::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ds4_driver_msgs::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ds4_driver_msgs::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ds4_driver_msgs::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ds4_driver_msgs::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ds4_driver_msgs::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ds4_driver_msgs__msg__Status
    std::shared_ptr<ds4_driver_msgs::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ds4_driver_msgs__msg__Status
    std::shared_ptr<ds4_driver_msgs::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->axis_left_x != other.axis_left_x) {
      return false;
    }
    if (this->axis_left_y != other.axis_left_y) {
      return false;
    }
    if (this->axis_right_x != other.axis_right_x) {
      return false;
    }
    if (this->axis_right_y != other.axis_right_y) {
      return false;
    }
    if (this->axis_l2 != other.axis_l2) {
      return false;
    }
    if (this->axis_r2 != other.axis_r2) {
      return false;
    }
    if (this->button_dpad_up != other.button_dpad_up) {
      return false;
    }
    if (this->button_dpad_down != other.button_dpad_down) {
      return false;
    }
    if (this->button_dpad_left != other.button_dpad_left) {
      return false;
    }
    if (this->button_dpad_right != other.button_dpad_right) {
      return false;
    }
    if (this->button_cross != other.button_cross) {
      return false;
    }
    if (this->button_circle != other.button_circle) {
      return false;
    }
    if (this->button_square != other.button_square) {
      return false;
    }
    if (this->button_triangle != other.button_triangle) {
      return false;
    }
    if (this->button_l1 != other.button_l1) {
      return false;
    }
    if (this->button_l2 != other.button_l2) {
      return false;
    }
    if (this->button_l3 != other.button_l3) {
      return false;
    }
    if (this->button_r1 != other.button_r1) {
      return false;
    }
    if (this->button_r2 != other.button_r2) {
      return false;
    }
    if (this->button_r3 != other.button_r3) {
      return false;
    }
    if (this->button_share != other.button_share) {
      return false;
    }
    if (this->button_options != other.button_options) {
      return false;
    }
    if (this->button_trackpad != other.button_trackpad) {
      return false;
    }
    if (this->button_ps != other.button_ps) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->battery_full_charging != other.battery_full_charging) {
      return false;
    }
    if (this->touch0 != other.touch0) {
      return false;
    }
    if (this->touch1 != other.touch1) {
      return false;
    }
    if (this->plug_usb != other.plug_usb) {
      return false;
    }
    if (this->plug_audio != other.plug_audio) {
      return false;
    }
    if (this->plug_mic != other.plug_mic) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  ds4_driver_msgs::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ds4_driver_msgs

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
