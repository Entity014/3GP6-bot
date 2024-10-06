// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ds4_driver_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "ds4_driver_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__functions.h"
// Member `touch0`
// Member `touch1`
#include "ds4_driver_msgs/msg/detail/trackpad__functions.h"

bool
ds4_driver_msgs__msg__Status__init(ds4_driver_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ds4_driver_msgs__msg__Status__fini(msg);
    return false;
  }
  // axis_left_x
  // axis_left_y
  // axis_right_x
  // axis_right_y
  // axis_l2
  // axis_r2
  // button_dpad_up
  // button_dpad_down
  // button_dpad_left
  // button_dpad_right
  // button_cross
  // button_circle
  // button_square
  // button_triangle
  // button_l1
  // button_l2
  // button_l3
  // button_r1
  // button_r2
  // button_r3
  // button_share
  // button_options
  // button_trackpad
  // button_ps
  // imu
  if (!sensor_msgs__msg__Imu__init(&msg->imu)) {
    ds4_driver_msgs__msg__Status__fini(msg);
    return false;
  }
  // battery_percentage
  // battery_full_charging
  // touch0
  if (!ds4_driver_msgs__msg__Trackpad__init(&msg->touch0)) {
    ds4_driver_msgs__msg__Status__fini(msg);
    return false;
  }
  // touch1
  if (!ds4_driver_msgs__msg__Trackpad__init(&msg->touch1)) {
    ds4_driver_msgs__msg__Status__fini(msg);
    return false;
  }
  // plug_usb
  // plug_audio
  // plug_mic
  return true;
}

void
ds4_driver_msgs__msg__Status__fini(ds4_driver_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // axis_left_x
  // axis_left_y
  // axis_right_x
  // axis_right_y
  // axis_l2
  // axis_r2
  // button_dpad_up
  // button_dpad_down
  // button_dpad_left
  // button_dpad_right
  // button_cross
  // button_circle
  // button_square
  // button_triangle
  // button_l1
  // button_l2
  // button_l3
  // button_r1
  // button_r2
  // button_r3
  // button_share
  // button_options
  // button_trackpad
  // button_ps
  // imu
  sensor_msgs__msg__Imu__fini(&msg->imu);
  // battery_percentage
  // battery_full_charging
  // touch0
  ds4_driver_msgs__msg__Trackpad__fini(&msg->touch0);
  // touch1
  ds4_driver_msgs__msg__Trackpad__fini(&msg->touch1);
  // plug_usb
  // plug_audio
  // plug_mic
}

bool
ds4_driver_msgs__msg__Status__are_equal(const ds4_driver_msgs__msg__Status * lhs, const ds4_driver_msgs__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // axis_left_x
  if (lhs->axis_left_x != rhs->axis_left_x) {
    return false;
  }
  // axis_left_y
  if (lhs->axis_left_y != rhs->axis_left_y) {
    return false;
  }
  // axis_right_x
  if (lhs->axis_right_x != rhs->axis_right_x) {
    return false;
  }
  // axis_right_y
  if (lhs->axis_right_y != rhs->axis_right_y) {
    return false;
  }
  // axis_l2
  if (lhs->axis_l2 != rhs->axis_l2) {
    return false;
  }
  // axis_r2
  if (lhs->axis_r2 != rhs->axis_r2) {
    return false;
  }
  // button_dpad_up
  if (lhs->button_dpad_up != rhs->button_dpad_up) {
    return false;
  }
  // button_dpad_down
  if (lhs->button_dpad_down != rhs->button_dpad_down) {
    return false;
  }
  // button_dpad_left
  if (lhs->button_dpad_left != rhs->button_dpad_left) {
    return false;
  }
  // button_dpad_right
  if (lhs->button_dpad_right != rhs->button_dpad_right) {
    return false;
  }
  // button_cross
  if (lhs->button_cross != rhs->button_cross) {
    return false;
  }
  // button_circle
  if (lhs->button_circle != rhs->button_circle) {
    return false;
  }
  // button_square
  if (lhs->button_square != rhs->button_square) {
    return false;
  }
  // button_triangle
  if (lhs->button_triangle != rhs->button_triangle) {
    return false;
  }
  // button_l1
  if (lhs->button_l1 != rhs->button_l1) {
    return false;
  }
  // button_l2
  if (lhs->button_l2 != rhs->button_l2) {
    return false;
  }
  // button_l3
  if (lhs->button_l3 != rhs->button_l3) {
    return false;
  }
  // button_r1
  if (lhs->button_r1 != rhs->button_r1) {
    return false;
  }
  // button_r2
  if (lhs->button_r2 != rhs->button_r2) {
    return false;
  }
  // button_r3
  if (lhs->button_r3 != rhs->button_r3) {
    return false;
  }
  // button_share
  if (lhs->button_share != rhs->button_share) {
    return false;
  }
  // button_options
  if (lhs->button_options != rhs->button_options) {
    return false;
  }
  // button_trackpad
  if (lhs->button_trackpad != rhs->button_trackpad) {
    return false;
  }
  // button_ps
  if (lhs->button_ps != rhs->button_ps) {
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__are_equal(
      &(lhs->imu), &(rhs->imu)))
  {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // battery_full_charging
  if (lhs->battery_full_charging != rhs->battery_full_charging) {
    return false;
  }
  // touch0
  if (!ds4_driver_msgs__msg__Trackpad__are_equal(
      &(lhs->touch0), &(rhs->touch0)))
  {
    return false;
  }
  // touch1
  if (!ds4_driver_msgs__msg__Trackpad__are_equal(
      &(lhs->touch1), &(rhs->touch1)))
  {
    return false;
  }
  // plug_usb
  if (lhs->plug_usb != rhs->plug_usb) {
    return false;
  }
  // plug_audio
  if (lhs->plug_audio != rhs->plug_audio) {
    return false;
  }
  // plug_mic
  if (lhs->plug_mic != rhs->plug_mic) {
    return false;
  }
  return true;
}

bool
ds4_driver_msgs__msg__Status__copy(
  const ds4_driver_msgs__msg__Status * input,
  ds4_driver_msgs__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // axis_left_x
  output->axis_left_x = input->axis_left_x;
  // axis_left_y
  output->axis_left_y = input->axis_left_y;
  // axis_right_x
  output->axis_right_x = input->axis_right_x;
  // axis_right_y
  output->axis_right_y = input->axis_right_y;
  // axis_l2
  output->axis_l2 = input->axis_l2;
  // axis_r2
  output->axis_r2 = input->axis_r2;
  // button_dpad_up
  output->button_dpad_up = input->button_dpad_up;
  // button_dpad_down
  output->button_dpad_down = input->button_dpad_down;
  // button_dpad_left
  output->button_dpad_left = input->button_dpad_left;
  // button_dpad_right
  output->button_dpad_right = input->button_dpad_right;
  // button_cross
  output->button_cross = input->button_cross;
  // button_circle
  output->button_circle = input->button_circle;
  // button_square
  output->button_square = input->button_square;
  // button_triangle
  output->button_triangle = input->button_triangle;
  // button_l1
  output->button_l1 = input->button_l1;
  // button_l2
  output->button_l2 = input->button_l2;
  // button_l3
  output->button_l3 = input->button_l3;
  // button_r1
  output->button_r1 = input->button_r1;
  // button_r2
  output->button_r2 = input->button_r2;
  // button_r3
  output->button_r3 = input->button_r3;
  // button_share
  output->button_share = input->button_share;
  // button_options
  output->button_options = input->button_options;
  // button_trackpad
  output->button_trackpad = input->button_trackpad;
  // button_ps
  output->button_ps = input->button_ps;
  // imu
  if (!sensor_msgs__msg__Imu__copy(
      &(input->imu), &(output->imu)))
  {
    return false;
  }
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // battery_full_charging
  output->battery_full_charging = input->battery_full_charging;
  // touch0
  if (!ds4_driver_msgs__msg__Trackpad__copy(
      &(input->touch0), &(output->touch0)))
  {
    return false;
  }
  // touch1
  if (!ds4_driver_msgs__msg__Trackpad__copy(
      &(input->touch1), &(output->touch1)))
  {
    return false;
  }
  // plug_usb
  output->plug_usb = input->plug_usb;
  // plug_audio
  output->plug_audio = input->plug_audio;
  // plug_mic
  output->plug_mic = input->plug_mic;
  return true;
}

ds4_driver_msgs__msg__Status *
ds4_driver_msgs__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ds4_driver_msgs__msg__Status * msg = (ds4_driver_msgs__msg__Status *)allocator.allocate(sizeof(ds4_driver_msgs__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ds4_driver_msgs__msg__Status));
  bool success = ds4_driver_msgs__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ds4_driver_msgs__msg__Status__destroy(ds4_driver_msgs__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ds4_driver_msgs__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ds4_driver_msgs__msg__Status__Sequence__init(ds4_driver_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ds4_driver_msgs__msg__Status * data = NULL;

  if (size) {
    data = (ds4_driver_msgs__msg__Status *)allocator.zero_allocate(size, sizeof(ds4_driver_msgs__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ds4_driver_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ds4_driver_msgs__msg__Status__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ds4_driver_msgs__msg__Status__Sequence__fini(ds4_driver_msgs__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ds4_driver_msgs__msg__Status__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ds4_driver_msgs__msg__Status__Sequence *
ds4_driver_msgs__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ds4_driver_msgs__msg__Status__Sequence * array = (ds4_driver_msgs__msg__Status__Sequence *)allocator.allocate(sizeof(ds4_driver_msgs__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ds4_driver_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ds4_driver_msgs__msg__Status__Sequence__destroy(ds4_driver_msgs__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ds4_driver_msgs__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ds4_driver_msgs__msg__Status__Sequence__are_equal(const ds4_driver_msgs__msg__Status__Sequence * lhs, const ds4_driver_msgs__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ds4_driver_msgs__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ds4_driver_msgs__msg__Status__Sequence__copy(
  const ds4_driver_msgs__msg__Status__Sequence * input,
  ds4_driver_msgs__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ds4_driver_msgs__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ds4_driver_msgs__msg__Status * data =
      (ds4_driver_msgs__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ds4_driver_msgs__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ds4_driver_msgs__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ds4_driver_msgs__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
