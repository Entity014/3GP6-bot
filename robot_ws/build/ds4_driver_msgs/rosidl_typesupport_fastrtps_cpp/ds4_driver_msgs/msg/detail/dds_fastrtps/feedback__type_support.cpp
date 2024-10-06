// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ds4_driver_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice
#include "ds4_driver_msgs/msg/detail/feedback__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ds4_driver_msgs/msg/detail/feedback__struct.hpp"

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

namespace ds4_driver_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ds4_driver_msgs
cdr_serialize(
  const ds4_driver_msgs::msg::Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: set_led
  cdr << (ros_message.set_led ? true : false);
  // Member: led_r
  cdr << ros_message.led_r;
  // Member: led_g
  cdr << ros_message.led_g;
  // Member: led_b
  cdr << ros_message.led_b;
  // Member: set_led_flash
  cdr << (ros_message.set_led_flash ? true : false);
  // Member: led_flash_on
  cdr << ros_message.led_flash_on;
  // Member: led_flash_off
  cdr << ros_message.led_flash_off;
  // Member: set_rumble
  cdr << (ros_message.set_rumble ? true : false);
  // Member: rumble_duration
  cdr << ros_message.rumble_duration;
  // Member: rumble_small
  cdr << ros_message.rumble_small;
  // Member: rumble_big
  cdr << ros_message.rumble_big;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ds4_driver_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ds4_driver_msgs::msg::Feedback & ros_message)
{
  // Member: set_led
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.set_led = tmp ? true : false;
  }

  // Member: led_r
  cdr >> ros_message.led_r;

  // Member: led_g
  cdr >> ros_message.led_g;

  // Member: led_b
  cdr >> ros_message.led_b;

  // Member: set_led_flash
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.set_led_flash = tmp ? true : false;
  }

  // Member: led_flash_on
  cdr >> ros_message.led_flash_on;

  // Member: led_flash_off
  cdr >> ros_message.led_flash_off;

  // Member: set_rumble
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.set_rumble = tmp ? true : false;
  }

  // Member: rumble_duration
  cdr >> ros_message.rumble_duration;

  // Member: rumble_small
  cdr >> ros_message.rumble_small;

  // Member: rumble_big
  cdr >> ros_message.rumble_big;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ds4_driver_msgs
get_serialized_size(
  const ds4_driver_msgs::msg::Feedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: set_led
  {
    size_t item_size = sizeof(ros_message.set_led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led_r
  {
    size_t item_size = sizeof(ros_message.led_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led_g
  {
    size_t item_size = sizeof(ros_message.led_g);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led_b
  {
    size_t item_size = sizeof(ros_message.led_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_led_flash
  {
    size_t item_size = sizeof(ros_message.set_led_flash);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led_flash_on
  {
    size_t item_size = sizeof(ros_message.led_flash_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led_flash_off
  {
    size_t item_size = sizeof(ros_message.led_flash_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_rumble
  {
    size_t item_size = sizeof(ros_message.set_rumble);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rumble_duration
  {
    size_t item_size = sizeof(ros_message.rumble_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rumble_small
  {
    size_t item_size = sizeof(ros_message.rumble_small);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rumble_big
  {
    size_t item_size = sizeof(ros_message.rumble_big);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ds4_driver_msgs
max_serialized_size_Feedback(
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


  // Member: set_led
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: led_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: led_g
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: led_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_led_flash
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: led_flash_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: led_flash_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: set_rumble
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rumble_duration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rumble_small
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rumble_big
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ds4_driver_msgs::msg::Feedback;
    is_plain =
      (
      offsetof(DataType, rumble_big) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ds4_driver_msgs::msg::Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ds4_driver_msgs::msg::Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ds4_driver_msgs::msg::Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Feedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Feedback(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Feedback__callbacks = {
  "ds4_driver_msgs::msg",
  "Feedback",
  _Feedback__cdr_serialize,
  _Feedback__cdr_deserialize,
  _Feedback__get_serialized_size,
  _Feedback__max_serialized_size
};

static rosidl_message_type_support_t _Feedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Feedback__callbacks,
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
get_message_type_support_handle<ds4_driver_msgs::msg::Feedback>()
{
  return &ds4_driver_msgs::msg::typesupport_fastrtps_cpp::_Feedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ds4_driver_msgs, msg, Feedback)() {
  return &ds4_driver_msgs::msg::typesupport_fastrtps_cpp::_Feedback__handle;
}

#ifdef __cplusplus
}
#endif
