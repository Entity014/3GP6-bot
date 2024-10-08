// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ds4_driver_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice
#include "ds4_driver_msgs/msg/detail/feedback__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ds4_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ds4_driver_msgs/msg/detail/feedback__struct.h"
#include "ds4_driver_msgs/msg/detail/feedback__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Feedback__ros_msg_type = ds4_driver_msgs__msg__Feedback;

static bool _Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Feedback__ros_msg_type * ros_message = static_cast<const _Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: set_led
  {
    cdr << (ros_message->set_led ? true : false);
  }

  // Field name: led_r
  {
    cdr << ros_message->led_r;
  }

  // Field name: led_g
  {
    cdr << ros_message->led_g;
  }

  // Field name: led_b
  {
    cdr << ros_message->led_b;
  }

  // Field name: set_led_flash
  {
    cdr << (ros_message->set_led_flash ? true : false);
  }

  // Field name: led_flash_on
  {
    cdr << ros_message->led_flash_on;
  }

  // Field name: led_flash_off
  {
    cdr << ros_message->led_flash_off;
  }

  // Field name: set_rumble
  {
    cdr << (ros_message->set_rumble ? true : false);
  }

  // Field name: rumble_duration
  {
    cdr << ros_message->rumble_duration;
  }

  // Field name: rumble_small
  {
    cdr << ros_message->rumble_small;
  }

  // Field name: rumble_big
  {
    cdr << ros_message->rumble_big;
  }

  return true;
}

static bool _Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Feedback__ros_msg_type * ros_message = static_cast<_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: set_led
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->set_led = tmp ? true : false;
  }

  // Field name: led_r
  {
    cdr >> ros_message->led_r;
  }

  // Field name: led_g
  {
    cdr >> ros_message->led_g;
  }

  // Field name: led_b
  {
    cdr >> ros_message->led_b;
  }

  // Field name: set_led_flash
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->set_led_flash = tmp ? true : false;
  }

  // Field name: led_flash_on
  {
    cdr >> ros_message->led_flash_on;
  }

  // Field name: led_flash_off
  {
    cdr >> ros_message->led_flash_off;
  }

  // Field name: set_rumble
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->set_rumble = tmp ? true : false;
  }

  // Field name: rumble_duration
  {
    cdr >> ros_message->rumble_duration;
  }

  // Field name: rumble_small
  {
    cdr >> ros_message->rumble_small;
  }

  // Field name: rumble_big
  {
    cdr >> ros_message->rumble_big;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ds4_driver_msgs
size_t get_serialized_size_ds4_driver_msgs__msg__Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Feedback__ros_msg_type * ros_message = static_cast<const _Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name set_led
  {
    size_t item_size = sizeof(ros_message->set_led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led_r
  {
    size_t item_size = sizeof(ros_message->led_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led_g
  {
    size_t item_size = sizeof(ros_message->led_g);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led_b
  {
    size_t item_size = sizeof(ros_message->led_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_led_flash
  {
    size_t item_size = sizeof(ros_message->set_led_flash);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led_flash_on
  {
    size_t item_size = sizeof(ros_message->led_flash_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led_flash_off
  {
    size_t item_size = sizeof(ros_message->led_flash_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_rumble
  {
    size_t item_size = sizeof(ros_message->set_rumble);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rumble_duration
  {
    size_t item_size = sizeof(ros_message->rumble_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rumble_small
  {
    size_t item_size = sizeof(ros_message->rumble_small);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rumble_big
  {
    size_t item_size = sizeof(ros_message->rumble_big);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ds4_driver_msgs__msg__Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ds4_driver_msgs
size_t max_serialized_size_ds4_driver_msgs__msg__Feedback(
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

  // member: set_led
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: led_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: led_g
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: led_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_led_flash
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: led_flash_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: led_flash_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: set_rumble
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rumble_duration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rumble_small
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rumble_big
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
    using DataType = ds4_driver_msgs__msg__Feedback;
    is_plain =
      (
      offsetof(DataType, rumble_big) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Feedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ds4_driver_msgs__msg__Feedback(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Feedback = {
  "ds4_driver_msgs::msg",
  "Feedback",
  _Feedback__cdr_serialize,
  _Feedback__cdr_deserialize,
  _Feedback__get_serialized_size,
  _Feedback__max_serialized_size
};

static rosidl_message_type_support_t _Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ds4_driver_msgs, msg, Feedback)() {
  return &_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif
