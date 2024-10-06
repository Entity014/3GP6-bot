// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ds4_driver_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
#define DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Feedback in the package ds4_driver_msgs.
/**
  * Message file for controlling DualShock4
  * LED intensities [0.0, 1.0]
 */
typedef struct ds4_driver_msgs__msg__Feedback
{
  bool set_led;
  float led_r;
  float led_g;
  float led_b;
  /// LED flash durations in seconds (max is 2.5 sec)
  bool set_led_flash;
  /// Note: Set led_flash_off to 0 to stop flashing
  float led_flash_on;
  float led_flash_off;
  /// Rumble intensities [0.0, 1.0] (continues rumbling for 5 sec by default)
  bool set_rumble;
  float rumble_duration;
  float rumble_small;
  float rumble_big;
} ds4_driver_msgs__msg__Feedback;

// Struct for a sequence of ds4_driver_msgs__msg__Feedback.
typedef struct ds4_driver_msgs__msg__Feedback__Sequence
{
  ds4_driver_msgs__msg__Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ds4_driver_msgs__msg__Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
