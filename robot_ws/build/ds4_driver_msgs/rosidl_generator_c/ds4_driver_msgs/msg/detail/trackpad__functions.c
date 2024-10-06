// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ds4_driver_msgs:msg/Trackpad.idl
// generated code does not contain a copyright notice
#include "ds4_driver_msgs/msg/detail/trackpad__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ds4_driver_msgs__msg__Trackpad__init(ds4_driver_msgs__msg__Trackpad * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // active
  // x
  // y
  return true;
}

void
ds4_driver_msgs__msg__Trackpad__fini(ds4_driver_msgs__msg__Trackpad * msg)
{
  if (!msg) {
    return;
  }
  // id
  // active
  // x
  // y
}

bool
ds4_driver_msgs__msg__Trackpad__are_equal(const ds4_driver_msgs__msg__Trackpad * lhs, const ds4_driver_msgs__msg__Trackpad * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
ds4_driver_msgs__msg__Trackpad__copy(
  const ds4_driver_msgs__msg__Trackpad * input,
  ds4_driver_msgs__msg__Trackpad * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // active
  output->active = input->active;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

ds4_driver_msgs__msg__Trackpad *
ds4_driver_msgs__msg__Trackpad__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ds4_driver_msgs__msg__Trackpad * msg = (ds4_driver_msgs__msg__Trackpad *)allocator.allocate(sizeof(ds4_driver_msgs__msg__Trackpad), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ds4_driver_msgs__msg__Trackpad));
  bool success = ds4_driver_msgs__msg__Trackpad__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ds4_driver_msgs__msg__Trackpad__destroy(ds4_driver_msgs__msg__Trackpad * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ds4_driver_msgs__msg__Trackpad__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ds4_driver_msgs__msg__Trackpad__Sequence__init(ds4_driver_msgs__msg__Trackpad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ds4_driver_msgs__msg__Trackpad * data = NULL;

  if (size) {
    data = (ds4_driver_msgs__msg__Trackpad *)allocator.zero_allocate(size, sizeof(ds4_driver_msgs__msg__Trackpad), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ds4_driver_msgs__msg__Trackpad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ds4_driver_msgs__msg__Trackpad__fini(&data[i - 1]);
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
ds4_driver_msgs__msg__Trackpad__Sequence__fini(ds4_driver_msgs__msg__Trackpad__Sequence * array)
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
      ds4_driver_msgs__msg__Trackpad__fini(&array->data[i]);
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

ds4_driver_msgs__msg__Trackpad__Sequence *
ds4_driver_msgs__msg__Trackpad__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ds4_driver_msgs__msg__Trackpad__Sequence * array = (ds4_driver_msgs__msg__Trackpad__Sequence *)allocator.allocate(sizeof(ds4_driver_msgs__msg__Trackpad__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ds4_driver_msgs__msg__Trackpad__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ds4_driver_msgs__msg__Trackpad__Sequence__destroy(ds4_driver_msgs__msg__Trackpad__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ds4_driver_msgs__msg__Trackpad__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ds4_driver_msgs__msg__Trackpad__Sequence__are_equal(const ds4_driver_msgs__msg__Trackpad__Sequence * lhs, const ds4_driver_msgs__msg__Trackpad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ds4_driver_msgs__msg__Trackpad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ds4_driver_msgs__msg__Trackpad__Sequence__copy(
  const ds4_driver_msgs__msg__Trackpad__Sequence * input,
  ds4_driver_msgs__msg__Trackpad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ds4_driver_msgs__msg__Trackpad);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ds4_driver_msgs__msg__Trackpad * data =
      (ds4_driver_msgs__msg__Trackpad *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ds4_driver_msgs__msg__Trackpad__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ds4_driver_msgs__msg__Trackpad__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ds4_driver_msgs__msg__Trackpad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
