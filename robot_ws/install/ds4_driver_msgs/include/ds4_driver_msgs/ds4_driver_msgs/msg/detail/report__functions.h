// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ds4_driver_msgs:msg/Report.idl
// generated code does not contain a copyright notice

#ifndef DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__FUNCTIONS_H_
#define DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ds4_driver_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ds4_driver_msgs/msg/detail/report__struct.h"

/// Initialize msg/Report message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ds4_driver_msgs__msg__Report
 * )) before or use
 * ds4_driver_msgs__msg__Report__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
bool
ds4_driver_msgs__msg__Report__init(ds4_driver_msgs__msg__Report * msg);

/// Finalize msg/Report message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
void
ds4_driver_msgs__msg__Report__fini(ds4_driver_msgs__msg__Report * msg);

/// Create msg/Report message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ds4_driver_msgs__msg__Report__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
ds4_driver_msgs__msg__Report *
ds4_driver_msgs__msg__Report__create();

/// Destroy msg/Report message.
/**
 * It calls
 * ds4_driver_msgs__msg__Report__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
void
ds4_driver_msgs__msg__Report__destroy(ds4_driver_msgs__msg__Report * msg);

/// Check for msg/Report message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
bool
ds4_driver_msgs__msg__Report__are_equal(const ds4_driver_msgs__msg__Report * lhs, const ds4_driver_msgs__msg__Report * rhs);

/// Copy a msg/Report message.
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
ds4_driver_msgs__msg__Report__copy(
  const ds4_driver_msgs__msg__Report * input,
  ds4_driver_msgs__msg__Report * output);

/// Initialize array of msg/Report messages.
/**
 * It allocates the memory for the number of elements and calls
 * ds4_driver_msgs__msg__Report__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
bool
ds4_driver_msgs__msg__Report__Sequence__init(ds4_driver_msgs__msg__Report__Sequence * array, size_t size);

/// Finalize array of msg/Report messages.
/**
 * It calls
 * ds4_driver_msgs__msg__Report__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
void
ds4_driver_msgs__msg__Report__Sequence__fini(ds4_driver_msgs__msg__Report__Sequence * array);

/// Create array of msg/Report messages.
/**
 * It allocates the memory for the array and calls
 * ds4_driver_msgs__msg__Report__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
ds4_driver_msgs__msg__Report__Sequence *
ds4_driver_msgs__msg__Report__Sequence__create(size_t size);

/// Destroy array of msg/Report messages.
/**
 * It calls
 * ds4_driver_msgs__msg__Report__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
void
ds4_driver_msgs__msg__Report__Sequence__destroy(ds4_driver_msgs__msg__Report__Sequence * array);

/// Check for msg/Report message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ds4_driver_msgs
bool
ds4_driver_msgs__msg__Report__Sequence__are_equal(const ds4_driver_msgs__msg__Report__Sequence * lhs, const ds4_driver_msgs__msg__Report__Sequence * rhs);

/// Copy an array of msg/Report messages.
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
ds4_driver_msgs__msg__Report__Sequence__copy(
  const ds4_driver_msgs__msg__Report__Sequence * input,
  ds4_driver_msgs__msg__Report__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DS4_DRIVER_MSGS__MSG__DETAIL__REPORT__FUNCTIONS_H_
