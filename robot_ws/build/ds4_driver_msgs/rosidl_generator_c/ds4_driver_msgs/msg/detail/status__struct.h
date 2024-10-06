// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ds4_driver_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.h"
// Member 'touch0'
// Member 'touch1'
#include "ds4_driver_msgs/msg/detail/trackpad__struct.h"

/// Struct defined in msg/Status in the package ds4_driver_msgs.
/**
  * Human-readable and more ROS-compatible status of the device
 */
typedef struct ds4_driver_msgs__msg__Status
{
  std_msgs__msg__Header header;
  /// Stick
  /// Left: 1.0, Right: -1.0
  float axis_left_x;
  /// Up: 1.0, Down: -1.0
  float axis_left_y;
  float axis_right_x;
  float axis_right_y;
  /// Shoulder buttons [0, 1.0]
  float axis_l2;
  float axis_r2;
  /// Buttons (0: Not pressed, 1: Pressed)
  int32_t button_dpad_up;
  int32_t button_dpad_down;
  int32_t button_dpad_left;
  int32_t button_dpad_right;
  int32_t button_cross;
  int32_t button_circle;
  int32_t button_square;
  int32_t button_triangle;
  int32_t button_l1;
  int32_t button_l2;
  int32_t button_l3;
  int32_t button_r1;
  int32_t button_r2;
  int32_t button_r3;
  int32_t button_share;
  int32_t button_options;
  int32_t button_trackpad;
  int32_t button_ps;
  /// Gyro
  sensor_msgs__msg__Imu imu;
  /// Battery
  /// [0.0, 1.0]
  float battery_percentage;
  /// 0: No, 1: Yes
  int32_t battery_full_charging;
  /// Trackpads
  ds4_driver_msgs__msg__Trackpad touch0;
  ds4_driver_msgs__msg__Trackpad touch1;
  /// Plugs
  /// 0: No, 1: Yes
  int32_t plug_usb;
  /// 0: No, 1: Yes
  int32_t plug_audio;
  /// 0: No, 1: Yes
  int32_t plug_mic;
} ds4_driver_msgs__msg__Status;

// Struct for a sequence of ds4_driver_msgs__msg__Status.
typedef struct ds4_driver_msgs__msg__Status__Sequence
{
  ds4_driver_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ds4_driver_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
