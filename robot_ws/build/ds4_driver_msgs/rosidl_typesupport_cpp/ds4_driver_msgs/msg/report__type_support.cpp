// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ds4_driver_msgs:msg/Report.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ds4_driver_msgs/msg/detail/report__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ds4_driver_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Report_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Report_type_support_ids_t;

static const _Report_type_support_ids_t _Report_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Report_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Report_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Report_type_support_symbol_names_t _Report_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ds4_driver_msgs, msg, Report)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ds4_driver_msgs, msg, Report)),
  }
};

typedef struct _Report_type_support_data_t
{
  void * data[2];
} _Report_type_support_data_t;

static _Report_type_support_data_t _Report_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Report_message_typesupport_map = {
  2,
  "ds4_driver_msgs",
  &_Report_message_typesupport_ids.typesupport_identifier[0],
  &_Report_message_typesupport_symbol_names.symbol_name[0],
  &_Report_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Report_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Report_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace ds4_driver_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ds4_driver_msgs::msg::Report>()
{
  return &::ds4_driver_msgs::msg::rosidl_typesupport_cpp::Report_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ds4_driver_msgs, msg, Report)() {
  return get_message_type_support_handle<ds4_driver_msgs::msg::Report>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
