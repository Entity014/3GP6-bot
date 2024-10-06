// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ds4_driver_msgs:msg/Trackpad.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__FUNCTIONS_H_
#define DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ds4_driver_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ds4_driver_msgs/msg/detail/trackpad__struct.h"

/// Initialize msg/Trackpad message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ds4_driver_msgs__msg__Trackpad
 * )) before or use
 * ds4_driver_msgs__msg__Trackpad__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
bool
ds4_driver_msgs__msg__Trackpad__init(ds4_driver_msgs__msg__Trackpad * msg);

/// Finalize msg/Trackpad message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
void
ds4_driver_msgs__msg__Trackpad__fini(ds4_driver_msgs__msg__Trackpad * msg);

/// Create msg/Trackpad message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ds4_driver_msgs__msg__Trackpad__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
ds4_driver_msgs__msg__Trackpad *
ds4_driver_msgs__msg__Trackpad__create();

/// Destroy msg/Trackpad message.
/**
 * It calls
 * ds4_driver_msgs__msg__Trackpad__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
void
ds4_driver_msgs__msg__Trackpad__destroy(ds4_driver_msgs__msg__Trackpad * msg);

/// Check for msg/Trackpad message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
bool
ds4_driver_msgs__msg__Trackpad__are_equal(const ds4_driver_msgs__msg__Trackpad * lhs, const ds4_driver_msgs__msg__Trackpad * rhs);

/// Copy a msg/Trackpad message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
bool
ds4_driver_msgs__msg__Trackpad__copy(
  const ds4_driver_msgs__msg__Trackpad * input,
  ds4_driver_msgs__msg__Trackpad * output);

/// Initialize array of msg/Trackpad messages.
/**
 * It allocates the memory for the number of elements and calls
 * ds4_driver_msgs__msg__Trackpad__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
bool
ds4_driver_msgs__msg__Trackpad__Sequence__init(ds4_driver_msgs__msg__Trackpad__Sequence * array, size_t size);

/// Finalize array of msg/Trackpad messages.
/**
 * It calls
 * ds4_driver_msgs__msg__Trackpad__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
void
ds4_driver_msgs__msg__Trackpad__Sequence__fini(ds4_driver_msgs__msg__Trackpad__Sequence * array);

/// Create array of msg/Trackpad messages.
/**
 * It allocates the memory for the array and calls
 * ds4_driver_msgs__msg__Trackpad__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
ds4_driver_msgs__msg__Trackpad__Sequence *
ds4_driver_msgs__msg__Trackpad__Sequence__create(size_t size);

/// Destroy array of msg/Trackpad messages.
/**
 * It calls
 * ds4_driver_msgs__msg__Trackpad__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
void
ds4_driver_msgs__msg__Trackpad__Sequence__destroy(ds4_driver_msgs__msg__Trackpad__Sequence * array);

/// Check for msg/Trackpad message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
bool
ds4_driver_msgs__msg__Trackpad__Sequence__are_equal(const ds4_driver_msgs__msg__Trackpad__Sequence * lhs, const ds4_driver_msgs__msg__Trackpad__Sequence * rhs);

/// Copy an array of msg/Trackpad messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
bool
ds4_driver_msgs__msg__Trackpad__Sequence__copy(
  const ds4_driver_msgs__msg__Trackpad__Sequence * input,
  ds4_driver_msgs__msg__Trackpad__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__TRACKPAD__FUNCTIONS_H_
