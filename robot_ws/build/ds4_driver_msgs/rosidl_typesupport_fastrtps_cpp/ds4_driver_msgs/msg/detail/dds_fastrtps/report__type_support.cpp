// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ds4_driver_msgs:msg/Report.idl
// generated code does not contain a copyright notice
#include "ds4_driver_msgs/msg/detail/report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ds4_driver_msgs/msg/detail/report__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace ds4_driver_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ds4_driver_msgs
cdr_serialize(
  const ds4_driver_msgs::msg::Report & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: left_analog_x
  cdr << ros_message.left_analog_x;
  // Member: left_analog_y
  cdr << ros_message.left_analog_y;
  // Member: right_analog_x
  cdr << ros_message.right_analog_x;
  // Member: right_analog_y
  cdr << ros_message.right_analog_y;
  // Member: l2_analog
  cdr << ros_message.l2_analog;
  // Member: r2_analog
  cdr << ros_message.r2_analog;
  // Member: dpad_up
  cdr << (ros_message.dpad_up ? true : false);
  // Member: dpad_down
  cdr << (ros_message.dpad_down ? true : false);
  // Member: dpad_left
  cdr << (ros_message.dpad_left ? true : false);
  // Member: dpad_right
  cdr << (ros_message.dpad_right ? true : false);
  // Member: button_cross
  cdr << (ros_message.button_cross ? true : false);
  // Member: button_circle
  cdr << (ros_message.button_circle ? true : false);
  // Member: button_square
  cdr << (ros_message.button_square ? true : false);
  // Member: button_triangle
  cdr << (ros_message.button_triangle ? true : false);
  // Member: button_l1
  cdr << (ros_message.button_l1 ? true : false);
  // Member: button_l2
  cdr << (ros_message.button_l2 ? true : false);
  // Member: button_l3
  cdr << (ros_message.button_l3 ? true : false);
  // Member: button_r1
  cdr << (ros_message.button_r1 ? true : false);
  // Member: button_r2
  cdr << (ros_message.button_r2 ? true : false);
  // Member: button_r3
  cdr << (ros_message.button_r3 ? true : false);
  // Member: button_share
  cdr << (ros_message.button_share ? true : false);
  // Member: button_options
  cdr << (ros_message.button_options ? true : false);
  // Member: button_trackpad
  cdr << (ros_message.button_trackpad ? true : false);
  // Member: button_ps
  cdr << (ros_message.button_ps ? true : false);
  // Member: lin_acc_x
  cdr << ros_message.lin_acc_x;
  // Member: lin_acc_y
  cdr << ros_message.lin_acc_y;
  // Member: lin_acc_z
  cdr << ros_message.lin_acc_z;
  // Member: ang_vel_x
  cdr << ros_message.ang_vel_x;
  // Member: ang_vel_y
  cdr << ros_message.ang_vel_y;
  // Member: ang_vel_z
  cdr << ros_message.ang_vel_z;
  // Member: trackpad_touch0_id
  cdr << ros_message.trackpad_touch0_id;
  // Member: trackpad_touch0_active
  cdr << ros_message.trackpad_touch0_active;
  // Member: trackpad_touch0_x
  cdr << ros_message.trackpad_touch0_x;
  // Member: trackpad_touch0_y
  cdr << ros_message.trackpad_touch0_y;
  // Member: trackpad_touch1_id
  cdr << ros_message.trackpad_touch1_id;
  // Member: trackpad_touch1_active
  cdr << ros_message.trackpad_touch1_active;
  // Member: trackpad_touch1_x
  cdr << ros_message.trackpad_touch1_x;
  // Member: trackpad_touch1_y
  cdr << ros_message.trackpad_touch1_y;
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: battery
  cdr << ros_message.battery;
  // Member: plug_usb
  cdr << (ros_message.plug_usb ? true : false);
  // Member: plug_audio
  cdr << (ros_message.plug_audio ? true : false);
  // Member: plug_mic
  cdr << (ros_message.plug_mic ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ds4_driver_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ds4_driver_msgs::msg::Report & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: left_analog_x
  cdr >> ros_message.left_analog_x;

  // Member: left_analog_y
  cdr >> ros_message.left_analog_y;

  // Member: right_analog_x
  cdr >> ros_message.right_analog_x;

  // Member: right_analog_y
  cdr >> ros_message.right_analog_y;

  // Member: l2_analog
  cdr >> ros_message.l2_analog;

  // Member: r2_analog
  cdr >> ros_message.r2_analog;

  // Member: dpad_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dpad_up = tmp ? true : false;
  }

  // Member: dpad_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dpad_down = tmp ? true : false;
  }

  // Member: dpad_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dpad_left = tmp ? true : false;
  }

  // Member: dpad_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dpad_right = tmp ? true : false;
  }

  // Member: button_cross
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_cross = tmp ? true : false;
  }

  // Member: button_circle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_circle = tmp ? true : false;
  }

  // Member: button_square
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_square = tmp ? true : false;
  }

  // Member: button_triangle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_triangle = tmp ? true : false;
  }

  // Member: button_l1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_l1 = tmp ? true : false;
  }

  // Member: button_l2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_l2 = tmp ? true : false;
  }

  // Member: button_l3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_l3 = tmp ? true : false;
  }

  // Member: button_r1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_r1 = tmp ? true : false;
  }

  // Member: button_r2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_r2 = tmp ? true : false;
  }

  // Member: button_r3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_r3 = tmp ? true : false;
  }

  // Member: button_share
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_share = tmp ? true : false;
  }

  // Member: button_options
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_options = tmp ? true : false;
  }

  // Member: button_trackpad
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_trackpad = tmp ? true : false;
  }

  // Member: button_ps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_ps = tmp ? true : false;
  }

  // Member: lin_acc_x
  cdr >> ros_message.lin_acc_x;

  // Member: lin_acc_y
  cdr >> ros_message.lin_acc_y;

  // Member: lin_acc_z
  cdr >> ros_message.lin_acc_z;

  // Member: ang_vel_x
  cdr >> ros_message.ang_vel_x;

  // Member: ang_vel_y
  cdr >> ros_message.ang_vel_y;

  // Member: ang_vel_z
  cdr >> ros_message.ang_vel_z;

  // Member: trackpad_touch0_id
  cdr >> ros_message.trackpad_touch0_id;

  // Member: trackpad_touch0_active
  cdr >> ros_message.trackpad_touch0_active;

  // Member: trackpad_touch0_x
  cdr >> ros_message.trackpad_touch0_x;

  // Member: trackpad_touch0_y
  cdr >> ros_message.trackpad_touch0_y;

  // Member: trackpad_touch1_id
  cdr >> ros_message.trackpad_touch1_id;

  // Member: trackpad_touch1_active
  cdr >> ros_message.trackpad_touch1_active;

  // Member: trackpad_touch1_x
  cdr >> ros_message.trackpad_touch1_x;

  // Member: trackpad_touch1_y
  cdr >> ros_message.trackpad_touch1_y;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: battery
  cdr >> ros_message.battery;

  // Member: plug_usb
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.plug_usb = tmp ? true : false;
  }

  // Member: plug_audio
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.plug_audio = tmp ? true : false;
  }

  // Member: plug_mic
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.plug_mic = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ds4_driver_msgs
get_serialized_size(
  const ds4_driver_msgs::msg::Report & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: left_analog_x
  {
    size_t item_size = sizeof(ros_message.left_analog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_analog_y
  {
    size_t item_size = sizeof(ros_message.left_analog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_analog_x
  {
    size_t item_size = sizeof(ros_message.right_analog_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_analog_y
  {
    size_t item_size = sizeof(ros_message.right_analog_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l2_analog
  {
    size_t item_size = sizeof(ros_message.l2_analog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r2_analog
  {
    size_t item_size = sizeof(ros_message.r2_analog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dpad_up
  {
    size_t item_size = sizeof(ros_message.dpad_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dpad_down
  {
    size_t item_size = sizeof(ros_message.dpad_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dpad_left
  {
    size_t item_size = sizeof(ros_message.dpad_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dpad_right
  {
    size_t item_size = sizeof(ros_message.dpad_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_cross
  {
    size_t item_size = sizeof(ros_message.button_cross);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_circle
  {
    size_t item_size = sizeof(ros_message.button_circle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_square
  {
    size_t item_size = sizeof(ros_message.button_square);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_triangle
  {
    size_t item_size = sizeof(ros_message.button_triangle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_l1
  {
    size_t item_size = sizeof(ros_message.button_l1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_l2
  {
    size_t item_size = sizeof(ros_message.button_l2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_l3
  {
    size_t item_size = sizeof(ros_message.button_l3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_r1
  {
    size_t item_size = sizeof(ros_message.button_r1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_r2
  {
    size_t item_size = sizeof(ros_message.button_r2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_r3
  {
    size_t item_size = sizeof(ros_message.button_r3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_share
  {
    size_t item_size = sizeof(ros_message.button_share);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_options
  {
    size_t item_size = sizeof(ros_message.button_options);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_trackpad
  {
    size_t item_size = sizeof(ros_message.button_trackpad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_ps
  {
    size_t item_size = sizeof(ros_message.button_ps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lin_acc_x
  {
    size_t item_size = sizeof(ros_message.lin_acc_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lin_acc_y
  {
    size_t item_size = sizeof(ros_message.lin_acc_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lin_acc_z
  {
    size_t item_size = sizeof(ros_message.lin_acc_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ang_vel_x
  {
    size_t item_size = sizeof(ros_message.ang_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ang_vel_y
  {
    size_t item_size = sizeof(ros_message.ang_vel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ang_vel_z
  {
    size_t item_size = sizeof(ros_message.ang_vel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trackpad_touch0_id
  {
    size_t item_size = sizeof(ros_message.trackpad_touch0_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trackpad_touch0_active
  {
    size_t item_size = sizeof(ros_message.trackpad_touch0_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trackpad_touch0_x
  {
    size_t item_size = sizeof(ros_message.trackpad_touch0_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trackpad_touch0_y
  {
    size_t item_size = sizeof(ros_message.trackpad_touch0_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trackpad_touch1_id
  {
    size_t item_size = sizeof(ros_message.trackpad_touch1_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trackpad_touch1_active
  {
    size_t item_size = sizeof(ros_message.trackpad_touch1_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trackpad_touch1_x
  {
    size_t item_size = sizeof(ros_message.trackpad_touch1_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trackpad_touch1_y
  {
    size_t item_size = sizeof(ros_message.trackpad_touch1_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery
  {
    size_t item_size = sizeof(ros_message.battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plug_usb
  {
    size_t item_size = sizeof(ros_message.plug_usb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plug_audio
  {
    size_t item_size = sizeof(ros_message.plug_audio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plug_mic
  {
    size_t item_size = sizeof(ros_message.plug_mic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ds4_driver_msgs
max_serialized_size_Report(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: left_analog_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_analog_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_analog_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_analog_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: l2_analog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: r2_analog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dpad_up
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dpad_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dpad_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dpad_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_cross
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_circle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_square
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_triangle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_l1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_l2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_l3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_r1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_r2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_r3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_share
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_options
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_trackpad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_ps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lin_acc_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: lin_acc_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: lin_acc_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ang_vel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ang_vel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ang_vel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: trackpad_touch0_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: trackpad_touch0_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: trackpad_touch0_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: trackpad_touch0_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: trackpad_touch1_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: trackpad_touch1_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: trackpad_touch1_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: trackpad_touch1_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: plug_usb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: plug_audio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: plug_mic
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ds4_driver_msgs::msg::Report;
    is_plain =
      (
      offsetof(DataType, plug_mic) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Report__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ds4_driver_msgs::msg::Report *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Report__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ds4_driver_msgs::msg::Report *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Report__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ds4_driver_msgs::msg::Report *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Report__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Report(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Report__callbacks = {
  "ds4_driver_msgs::msg",
  "Report",
  _Report__cdr_serialize,
  _Report__cdr_deserialize,
  _Report__get_serialized_size,
  _Report__max_serialized_size
};

static rosidl_message_type_support_t _Report__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Report__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ds4_driver_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ds4_driver_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ds4_driver_msgs::msg::Report>()
{
  return &ds4_driver_msgs::msg::typesupport_fastrtps_cpp::_Report__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ds4_driver_msgs, msg, Report)() {
  return &ds4_driver_msgs::msg::typesupport_fastrtps_cpp::_Report__handle;
}

#ifdef __cplusplus
}
#endif
