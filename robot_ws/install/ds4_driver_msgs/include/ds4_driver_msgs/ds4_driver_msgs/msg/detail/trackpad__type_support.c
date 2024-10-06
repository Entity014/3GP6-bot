// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ds4_driver_msgs:msg/Trackpad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ds4_driver_msgs/msg/detail/trackpad__rosidl_typesupport_introspection_c.h"
#include "ds4_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ds4_driver_msgs/msg/detail/trackpad__functions.h"
#include "ds4_driver_msgs/msg/detail/trackpad__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ds4_driver_msgs__msg__Trackpad__init(message_memory);
}

void ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_fini_function(void * message_memory)
{
  ds4_driver_msgs__msg__Trackpad__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ds4_driver_msgs__msg__Trackpad, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ds4_driver_msgs__msg__Trackpad, active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ds4_driver_msgs__msg__Trackpad, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ds4_driver_msgs__msg__Trackpad, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_message_members = {
  "ds4_driver_msgs__msg",  // message namespace
  "Trackpad",  // message name
  4,  // number of fields
  sizeof(ds4_driver_msgs__msg__Trackpad),
  ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_message_member_array,  // message members
  ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_init_function,  // function to initialize message memory (memory has to be allocated)
  ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_message_type_support_handle = {
  0,
  &ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ds4_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ds4_driver_msgs, msg, Trackpad)() {
  if (!ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_message_type_support_handle.typesupport_identifier) {
    ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ds4_driver_msgs__msg__Trackpad__rosidl_typesupport_introspection_c__Trackpad_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
