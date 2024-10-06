// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ds4_driver_msgs:msg/Report.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__STRUCT_HPP_
#define DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__ds4_driver_msgs__msg__Report __attribute__((deprecated))
#else
# define DEPRECATED__ds4_driver_msgs__msg__Report __declspec(deprecated)
#endif

namespace ds4_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Report_
{
  using Type = Report_<ContainerAllocator>;

  explicit Report_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_analog_x = 0;
      this->left_analog_y = 0;
      this->right_analog_x = 0;
      this->right_analog_y = 0;
      this->l2_analog = 0;
      this->r2_analog = 0;
      this->dpad_up = false;
      this->dpad_down = false;
      this->dpad_left = false;
      this->dpad_right = false;
      this->button_cross = false;
      this->button_circle = false;
      this->button_square = false;
      this->button_triangle = false;
      this->button_l1 = false;
      this->button_l2 = false;
      this->button_l3 = false;
      this->button_r1 = false;
      this->button_r2 = false;
      this->button_r3 = false;
      this->button_share = false;
      this->button_options = false;
      this->button_trackpad = false;
      this->button_ps = false;
      this->lin_acc_x = 0;
      this->lin_acc_y = 0;
      this->lin_acc_z = 0;
      this->ang_vel_x = 0;
      this->ang_vel_y = 0;
      this->ang_vel_z = 0;
      this->trackpad_touch0_id = 0;
      this->trackpad_touch0_active = 0;
      this->trackpad_touch0_x = 0;
      this->trackpad_touch0_y = 0;
      this->trackpad_touch1_id = 0;
      this->trackpad_touch1_active = 0;
      this->trackpad_touch1_x = 0;
      this->trackpad_touch1_y = 0;
      this->timestamp = 0;
      this->battery = 0;
      this->plug_usb = false;
      this->plug_audio = false;
      this->plug_mic = false;
    }
  }

  explicit Report_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_analog_x = 0;
      this->left_analog_y = 0;
      this->right_analog_x = 0;
      this->right_analog_y = 0;
      this->l2_analog = 0;
      this->r2_analog = 0;
      this->dpad_up = false;
      this->dpad_down = false;
      this->dpad_left = false;
      this->dpad_right = false;
      this->button_cross = false;
      this->button_circle = false;
      this->button_square = false;
      this->button_triangle = false;
      this->button_l1 = false;
      this->button_l2 = false;
      this->button_l3 = false;
      this->button_r1 = false;
      this->button_r2 = false;
      this->button_r3 = false;
      this->button_share = false;
      this->button_options = false;
      this->button_trackpad = false;
      this->button_ps = false;
      this->lin_acc_x = 0;
      this->lin_acc_y = 0;
      this->lin_acc_z = 0;
      this->ang_vel_x = 0;
      this->ang_vel_y = 0;
      this->ang_vel_z = 0;
      this->trackpad_touch0_id = 0;
      this->trackpad_touch0_active = 0;
      this->trackpad_touch0_x = 0;
      this->trackpad_touch0_y = 0;
      this->trackpad_touch1_id = 0;
      this->trackpad_touch1_active = 0;
      this->trackpad_touch1_x = 0;
      this->trackpad_touch1_y = 0;
      this->timestamp = 0;
      this->battery = 0;
      this->plug_usb = false;
      this->plug_audio = false;
      this->plug_mic = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_analog_x_type =
    uint8_t;
  _left_analog_x_type left_analog_x;
  using _left_analog_y_type =
    uint8_t;
  _left_analog_y_type left_analog_y;
  using _right_analog_x_type =
    uint8_t;
  _right_analog_x_type right_analog_x;
  using _right_analog_y_type =
    uint8_t;
  _right_analog_y_type right_analog_y;
  using _l2_analog_type =
    uint8_t;
  _l2_analog_type l2_analog;
  using _r2_analog_type =
    uint8_t;
  _r2_analog_type r2_analog;
  using _dpad_up_type =
    bool;
  _dpad_up_type dpad_up;
  using _dpad_down_type =
    bool;
  _dpad_down_type dpad_down;
  using _dpad_left_type =
    bool;
  _dpad_left_type dpad_left;
  using _dpad_right_type =
    bool;
  _dpad_right_type dpad_right;
  using _button_cross_type =
    bool;
  _button_cross_type button_cross;
  using _button_circle_type =
    bool;
  _button_circle_type button_circle;
  using _button_square_type =
    bool;
  _button_square_type button_square;
  using _button_triangle_type =
    bool;
  _button_triangle_type button_triangle;
  using _button_l1_type =
    bool;
  _button_l1_type button_l1;
  using _button_l2_type =
    bool;
  _button_l2_type button_l2;
  using _button_l3_type =
    bool;
  _button_l3_type button_l3;
  using _button_r1_type =
    bool;
  _button_r1_type button_r1;
  using _button_r2_type =
    bool;
  _button_r2_type button_r2;
  using _button_r3_type =
    bool;
  _button_r3_type button_r3;
  using _button_share_type =
    bool;
  _button_share_type button_share;
  using _button_options_type =
    bool;
  _button_options_type button_options;
  using _button_trackpad_type =
    bool;
  _button_trackpad_type button_trackpad;
  using _button_ps_type =
    bool;
  _button_ps_type button_ps;
  using _lin_acc_x_type =
    int16_t;
  _lin_acc_x_type lin_acc_x;
  using _lin_acc_y_type =
    int16_t;
  _lin_acc_y_type lin_acc_y;
  using _lin_acc_z_type =
    int16_t;
  _lin_acc_z_type lin_acc_z;
  using _ang_vel_x_type =
    int16_t;
  _ang_vel_x_type ang_vel_x;
  using _ang_vel_y_type =
    int16_t;
  _ang_vel_y_type ang_vel_y;
  using _ang_vel_z_type =
    int16_t;
  _ang_vel_z_type ang_vel_z;
  using _trackpad_touch0_id_type =
    uint16_t;
  _trackpad_touch0_id_type trackpad_touch0_id;
  using _trackpad_touch0_active_type =
    uint16_t;
  _trackpad_touch0_active_type trackpad_touch0_active;
  using _trackpad_touch0_x_type =
    uint16_t;
  _trackpad_touch0_x_type trackpad_touch0_x;
  using _trackpad_touch0_y_type =
    uint16_t;
  _trackpad_touch0_y_type trackpad_touch0_y;
  using _trackpad_touch1_id_type =
    uint16_t;
  _trackpad_touch1_id_type trackpad_touch1_id;
  using _trackpad_touch1_active_type =
    uint16_t;
  _trackpad_touch1_active_type trackpad_touch1_active;
  using _trackpad_touch1_x_type =
    uint16_t;
  _trackpad_touch1_x_type trackpad_touch1_x;
  using _trackpad_touch1_y_type =
    uint16_t;
  _trackpad_touch1_y_type trackpad_touch1_y;
  using _timestamp_type =
    uint8_t;
  _timestamp_type timestamp;
  using _battery_type =
    uint8_t;
  _battery_type battery;
  using _plug_usb_type =
    bool;
  _plug_usb_type plug_usb;
  using _plug_audio_type =
    bool;
  _plug_audio_type plug_audio;
  using _plug_mic_type =
    bool;
  _plug_mic_type plug_mic;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left_analog_x(
    const uint8_t & _arg)
  {
    this->left_analog_x = _arg;
    return *this;
  }
  Type & set__left_analog_y(
    const uint8_t & _arg)
  {
    this->left_analog_y = _arg;
    return *this;
  }
  Type & set__right_analog_x(
    const uint8_t & _arg)
  {
    this->right_analog_x = _arg;
    return *this;
  }
  Type & set__right_analog_y(
    const uint8_t & _arg)
  {
    this->right_analog_y = _arg;
    return *this;
  }
  Type & set__l2_analog(
    const uint8_t & _arg)
  {
    this->l2_analog = _arg;
    return *this;
  }
  Type & set__r2_analog(
    const uint8_t & _arg)
  {
    this->r2_analog = _arg;
    return *this;
  }
  Type & set__dpad_up(
    const bool & _arg)
  {
    this->dpad_up = _arg;
    return *this;
  }
  Type & set__dpad_down(
    const bool & _arg)
  {
    this->dpad_down = _arg;
    return *this;
  }
  Type & set__dpad_left(
    const bool & _arg)
  {
    this->dpad_left = _arg;
    return *this;
  }
  Type & set__dpad_right(
    const bool & _arg)
  {
    this->dpad_right = _arg;
    return *this;
  }
  Type & set__button_cross(
    const bool & _arg)
  {
    this->button_cross = _arg;
    return *this;
  }
  Type & set__button_circle(
    const bool & _arg)
  {
    this->button_circle = _arg;
    return *this;
  }
  Type & set__button_square(
    const bool & _arg)
  {
    this->button_square = _arg;
    return *this;
  }
  Type & set__button_triangle(
    const bool & _arg)
  {
    this->button_triangle = _arg;
    return *this;
  }
  Type & set__button_l1(
    const bool & _arg)
  {
    this->button_l1 = _arg;
    return *this;
  }
  Type & set__button_l2(
    const bool & _arg)
  {
    this->button_l2 = _arg;
    return *this;
  }
  Type & set__button_l3(
    const bool & _arg)
  {
    this->button_l3 = _arg;
    return *this;
  }
  Type & set__button_r1(
    const bool & _arg)
  {
    this->button_r1 = _arg;
    return *this;
  }
  Type & set__button_r2(
    const bool & _arg)
  {
    this->button_r2 = _arg;
    return *this;
  }
  Type & set__button_r3(
    const bool & _arg)
  {
    this->button_r3 = _arg;
    return *this;
  }
  Type & set__button_share(
    const bool & _arg)
  {
    this->button_share = _arg;
    return *this;
  }
  Type & set__button_options(
    const bool & _arg)
  {
    this->button_options = _arg;
    return *this;
  }
  Type & set__button_trackpad(
    const bool & _arg)
  {
    this->button_trackpad = _arg;
    return *this;
  }
  Type & set__button_ps(
    const bool & _arg)
  {
    this->button_ps = _arg;
    return *this;
  }
  Type & set__lin_acc_x(
    const int16_t & _arg)
  {
    this->lin_acc_x = _arg;
    return *this;
  }
  Type & set__lin_acc_y(
    const int16_t & _arg)
  {
    this->lin_acc_y = _arg;
    return *this;
  }
  Type & set__lin_acc_z(
    const int16_t & _arg)
  {
    this->lin_acc_z = _arg;
    return *this;
  }
  Type & set__ang_vel_x(
    const int16_t & _arg)
  {
    this->ang_vel_x = _arg;
    return *this;
  }
  Type & set__ang_vel_y(
    const int16_t & _arg)
  {
    this->ang_vel_y = _arg;
    return *this;
  }
  Type & set__ang_vel_z(
    const int16_t & _arg)
  {
    this->ang_vel_z = _arg;
    return *this;
  }
  Type & set__trackpad_touch0_id(
    const uint16_t & _arg)
  {
    this->trackpad_touch0_id = _arg;
    return *this;
  }
  Type & set__trackpad_touch0_active(
    const uint16_t & _arg)
  {
    this->trackpad_touch0_active = _arg;
    return *this;
  }
  Type & set__trackpad_touch0_x(
    const uint16_t & _arg)
  {
    this->trackpad_touch0_x = _arg;
    return *this;
  }
  Type & set__trackpad_touch0_y(
    const uint16_t & _arg)
  {
    this->trackpad_touch0_y = _arg;
    return *this;
  }
  Type & set__trackpad_touch1_id(
    const uint16_t & _arg)
  {
    this->trackpad_touch1_id = _arg;
    return *this;
  }
  Type & set__trackpad_touch1_active(
    const uint16_t & _arg)
  {
    this->trackpad_touch1_active = _arg;
    return *this;
  }
  Type & set__trackpad_touch1_x(
    const uint16_t & _arg)
  {
    this->trackpad_touch1_x = _arg;
    return *this;
  }
  Type & set__trackpad_touch1_y(
    const uint16_t & _arg)
  {
    this->trackpad_touch1_y = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint8_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__battery(
    const uint8_t & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__plug_usb(
    const bool & _arg)
  {
    this->plug_usb = _arg;
    return *this;
  }
  Type & set__plug_audio(
    const bool & _arg)
  {
    this->plug_audio = _arg;
    return *this;
  }
  Type & set__plug_mic(
    const bool & _arg)
  {
    this->plug_mic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ds4_driver_msgs::msg::Report_<ContainerAllocator> *;
  using ConstRawPtr =
    const ds4_driver_msgs::msg::Report_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ds4_driver_msgs::msg::Report_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ds4_driver_msgs::msg::Report_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ds4_driver_msgs::msg::Report_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ds4_driver_msgs::msg::Report_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ds4_driver_msgs::msg::Report_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ds4_driver_msgs::msg::Report_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ds4_driver_msgs::msg::Report_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ds4_driver_msgs::msg::Report_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ds4_driver_msgs__msg__Report
    std::shared_ptr<ds4_driver_msgs::msg::Report_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ds4_driver_msgs__msg__Report
    std::shared_ptr<ds4_driver_msgs::msg::Report_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Report_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left_analog_x != other.left_analog_x) {
      return false;
    }
    if (this->left_analog_y != other.left_analog_y) {
      return false;
    }
    if (this->right_analog_x != other.right_analog_x) {
      return false;
    }
    if (this->right_analog_y != other.right_analog_y) {
      return false;
    }
    if (this->l2_analog != other.l2_analog) {
      return false;
    }
    if (this->r2_analog != other.r2_analog) {
      return false;
    }
    if (this->dpad_up != other.dpad_up) {
      return false;
    }
    if (this->dpad_down != other.dpad_down) {
      return false;
    }
    if (this->dpad_left != other.dpad_left) {
      return false;
    }
    if (this->dpad_right != other.dpad_right) {
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
    if (this->lin_acc_x != other.lin_acc_x) {
      return false;
    }
    if (this->lin_acc_y != other.lin_acc_y) {
      return false;
    }
    if (this->lin_acc_z != other.lin_acc_z) {
      return false;
    }
    if (this->ang_vel_x != other.ang_vel_x) {
      return false;
    }
    if (this->ang_vel_y != other.ang_vel_y) {
      return false;
    }
    if (this->ang_vel_z != other.ang_vel_z) {
      return false;
    }
    if (this->trackpad_touch0_id != other.trackpad_touch0_id) {
      return false;
    }
    if (this->trackpad_touch0_active != other.trackpad_touch0_active) {
      return false;
    }
    if (this->trackpad_touch0_x != other.trackpad_touch0_x) {
      return false;
    }
    if (this->trackpad_touch0_y != other.trackpad_touch0_y) {
      return false;
    }
    if (this->trackpad_touch1_id != other.trackpad_touch1_id) {
      return false;
    }
    if (this->trackpad_touch1_active != other.trackpad_touch1_active) {
      return false;
    }
    if (this->trackpad_touch1_x != other.trackpad_touch1_x) {
      return false;
    }
    if (this->trackpad_touch1_y != other.trackpad_touch1_y) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->battery != other.battery) {
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
  bool operator!=(const Report_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Report_

// alias to use template instance with default allocator
using Report =
  ds4_driver_msgs::msg::Report_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ds4_driver_msgs

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__STRUCT_HPP_
