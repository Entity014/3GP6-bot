// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ds4_driver_msgs:msg/Report.idl
// generated code does not contain a copyright notice
#include "ds4_driver_msgs/msg/detail/report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ds4_driver_msgs__msg__Report__init(ds4_driver_msgs__msg__Report * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ds4_driver_msgs__msg__Report__fini(msg);
    return false;
  }
  // left_analog_x
  // left_analog_y
  // right_analog_x
  // right_analog_y
  // l2_analog
  // r2_analog
  // dpad_up
  // dpad_down
  // dpad_left
  // dpad_right
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
  // lin_acc_x
  // lin_acc_y
  // lin_acc_z
  // ang_vel_x
  // ang_vel_y
  // ang_vel_z
  // trackpad_touch0_id
  // trackpad_touch0_active
  // trackpad_touch0_x
  // trackpad_touch0_y
  // trackpad_touch1_id
  // trackpad_touch1_active
  // trackpad_touch1_x
  // trackpad_touch1_y
  // timestamp
  // battery
  // plug_usb
  // plug_audio
  // plug_mic
  return true;
}

void
ds4_driver_msgs__msg__Report__fini(ds4_driver_msgs__msg__Report * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left_analog_x
  // left_analog_y
  // right_analog_x
  // right_analog_y
  // l2_analog
  // r2_analog
  // dpad_up
  // dpad_down
  // dpad_left
  // dpad_right
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
  // lin_acc_x
  // lin_acc_y
  // lin_acc_z
  // ang_vel_x
  // ang_vel_y
  // ang_vel_z
  // trackpad_touch0_id
  // trackpad_touch0_active
  // trackpad_touch0_x
  // trackpad_touch0_y
  // trackpad_touch1_id
  // trackpad_touch1_active
  // trackpad_touch1_x
  // trackpad_touch1_y
  // timestamp
  // battery
  // plug_usb
  // plug_audio
  // plug_mic
}

bool
ds4_driver_msgs__msg__Report__are_equal(const ds4_driver_msgs__msg__Report * lhs, const ds4_driver_msgs__msg__Report * rhs)
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
  // left_analog_x
  if (lhs->left_analog_x != rhs->left_analog_x) {
    return false;
  }
  // left_analog_y
  if (lhs->left_analog_y != rhs->left_analog_y) {
    return false;
  }
  // right_analog_x
  if (lhs->right_analog_x != rhs->right_analog_x) {
    return false;
  }
  // right_analog_y
  if (lhs->right_analog_y != rhs->right_analog_y) {
    return false;
  }
  // l2_analog
  if (lhs->l2_analog != rhs->l2_analog) {
    return false;
  }
  // r2_analog
  if (lhs->r2_analog != rhs->r2_analog) {
    return false;
  }
  // dpad_up
  if (lhs->dpad_up != rhs->dpad_up) {
    return false;
  }
  // dpad_down
  if (lhs->dpad_down != rhs->dpad_down) {
    return false;
  }
  // dpad_left
  if (lhs->dpad_left != rhs->dpad_left) {
    return false;
  }
  // dpad_right
  if (lhs->dpad_right != rhs->dpad_right) {
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
  // lin_acc_x
  if (lhs->lin_acc_x != rhs->lin_acc_x) {
    return false;
  }
  // lin_acc_y
  if (lhs->lin_acc_y != rhs->lin_acc_y) {
    return false;
  }
  // lin_acc_z
  if (lhs->lin_acc_z != rhs->lin_acc_z) {
    return false;
  }
  // ang_vel_x
  if (lhs->ang_vel_x != rhs->ang_vel_x) {
    return false;
  }
  // ang_vel_y
  if (lhs->ang_vel_y != rhs->ang_vel_y) {
    return false;
  }
  // ang_vel_z
  if (lhs->ang_vel_z != rhs->ang_vel_z) {
    return false;
  }
  // trackpad_touch0_id
  if (lhs->trackpad_touch0_id != rhs->trackpad_touch0_id) {
    return false;
  }
  // trackpad_touch0_active
  if (lhs->trackpad_touch0_active != rhs->trackpad_touch0_active) {
    return false;
  }
  // trackpad_touch0_x
  if (lhs->trackpad_touch0_x != rhs->trackpad_touch0_x) {
    return false;
  }
  // trackpad_touch0_y
  if (lhs->trackpad_touch0_y != rhs->trackpad_touch0_y) {
    return false;
  }
  // trackpad_touch1_id
  if (lhs->trackpad_touch1_id != rhs->trackpad_touch1_id) {
    return false;
  }
  // trackpad_touch1_active
  if (lhs->trackpad_touch1_active != rhs->trackpad_touch1_active) {
    return false;
  }
  // trackpad_touch1_x
  if (lhs->trackpad_touch1_x != rhs->trackpad_touch1_x) {
    return false;
  }
  // trackpad_touch1_y
  if (lhs->trackpad_touch1_y != rhs->trackpad_touch1_y) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // battery
  if (lhs->battery != rhs->battery) {
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
ds4_driver_msgs__msg__Report__copy(
  const ds4_driver_msgs__msg__Report * input,
  ds4_driver_msgs__msg__Report * output)
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
  // left_analog_x
  output->left_analog_x = input->left_analog_x;
  // left_analog_y
  output->left_analog_y = input->left_analog_y;
  // right_analog_x
  output->right_analog_x = input->right_analog_x;
  // right_analog_y
  output->right_analog_y = input->right_analog_y;
  // l2_analog
  output->l2_analog = input->l2_analog;
  // r2_analog
  output->r2_analog = input->r2_analog;
  // dpad_up
  output->dpad_up = input->dpad_up;
  // dpad_down
  output->dpad_down = input->dpad_down;
  // dpad_left
  output->dpad_left = input->dpad_left;
  // dpad_right
  output->dpad_right = input->dpad_right;
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
  // lin_acc_x
  output->lin_acc_x = input->lin_acc_x;
  // lin_acc_y
  output->lin_acc_y = input->lin_acc_y;
  // lin_acc_z
  output->lin_acc_z = input->lin_acc_z;
  // ang_vel_x
  output->ang_vel_x = input->ang_vel_x;
  // ang_vel_y
  output->ang_vel_y = input->ang_vel_y;
  // ang_vel_z
  output->ang_vel_z = input->ang_vel_z;
  // trackpad_touch0_id
  output->trackpad_touch0_id = input->trackpad_touch0_id;
  // trackpad_touch0_active
  output->trackpad_touch0_active = input->trackpad_touch0_active;
  // trackpad_touch0_x
  output->trackpad_touch0_x = input->trackpad_touch0_x;
  // trackpad_touch0_y
  output->trackpad_touch0_y = input->trackpad_touch0_y;
  // trackpad_touch1_id
  output->trackpad_touch1_id = input->trackpad_touch1_id;
  // trackpad_touch1_active
  output->trackpad_touch1_active = input->trackpad_touch1_active;
  // trackpad_touch1_x
  output->trackpad_touch1_x = input->trackpad_touch1_x;
  // trackpad_touch1_y
  output->trackpad_touch1_y = input->trackpad_touch1_y;
  // timestamp
  output->timestamp = input->timestamp;
  // battery
  output->battery = input->battery;
  // plug_usb
  output->plug_usb = input->plug_usb;
  // plug_audio
  output->plug_audio = input->plug_audio;
  // plug_mic
  output->plug_mic = input->plug_mic;
  return true;
}

ds4_driver_msgs__msg__Report *
ds4_driver_msgs__msg__Report__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ds4_driver_msgs__msg__Report * msg = (ds4_driver_msgs__msg__Report *)allocator.allocate(sizeof(ds4_driver_msgs__msg__Report), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ds4_driver_msgs__msg__Report));
  bool success = ds4_driver_msgs__msg__Report__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ds4_driver_msgs__msg__Report__destroy(ds4_driver_msgs__msg__Report * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ds4_driver_msgs__msg__Report__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ds4_driver_msgs__msg__Report__Sequence__init(ds4_driver_msgs__msg__Report__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ds4_driver_msgs__msg__Report * data = NULL;

  if (size) {
    data = (ds4_driver_msgs__msg__Report *)allocator.zero_allocate(size, sizeof(ds4_driver_msgs__msg__Report), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ds4_driver_msgs__msg__Report__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ds4_driver_msgs__msg__Report__fini(&data[i - 1]);
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
ds4_driver_msgs__msg__Report__Sequence__fini(ds4_driver_msgs__msg__Report__Sequence * array)
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
      ds4_driver_msgs__msg__Report__fini(&array->data[i]);
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

ds4_driver_msgs__msg__Report__Sequence *
ds4_driver_msgs__msg__Report__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ds4_driver_msgs__msg__Report__Sequence * array = (ds4_driver_msgs__msg__Report__Sequence *)allocator.allocate(sizeof(ds4_driver_msgs__msg__Report__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ds4_driver_msgs__msg__Report__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ds4_driver_msgs__msg__Report__Sequence__destroy(ds4_driver_msgs__msg__Report__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ds4_driver_msgs__msg__Report__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ds4_driver_msgs__msg__Report__Sequence__are_equal(const ds4_driver_msgs__msg__Report__Sequence * lhs, const ds4_driver_msgs__msg__Report__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ds4_driver_msgs__msg__Report__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ds4_driver_msgs__msg__Report__Sequence__copy(
  const ds4_driver_msgs__msg__Report__Sequence * input,
  ds4_driver_msgs__msg__Report__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ds4_driver_msgs__msg__Report);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ds4_driver_msgs__msg__Report * data =
      (ds4_driver_msgs__msg__Report *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ds4_driver_msgs__msg__Report__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ds4_driver_msgs__msg__Report__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ds4_driver_msgs__msg__Report__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
