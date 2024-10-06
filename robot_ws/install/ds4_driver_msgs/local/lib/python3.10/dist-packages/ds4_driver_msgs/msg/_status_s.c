// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ds4_driver_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ds4_driver_msgs/msg/detail/status__struct.h"
#include "ds4_driver_msgs/msg/detail/status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__imu__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__imu__convert_to_py(void * raw_ros_message);
bool ds4_driver_msgs__msg__trackpad__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ds4_driver_msgs__msg__trackpad__convert_to_py(void * raw_ros_message);
bool ds4_driver_msgs__msg__trackpad__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ds4_driver_msgs__msg__trackpad__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ds4_driver_msgs__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ds4_driver_msgs.msg._status.Status", full_classname_dest, 34) == 0);
  }
  ds4_driver_msgs__msg__Status * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // axis_left_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_left_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->axis_left_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // axis_left_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_left_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->axis_left_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // axis_right_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_right_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->axis_right_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // axis_right_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_right_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->axis_right_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // axis_l2
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_l2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->axis_l2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // axis_r2
    PyObject * field = PyObject_GetAttrString(_pymsg, "axis_r2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->axis_r2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // button_dpad_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_dpad_up");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_dpad_up = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_dpad_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_dpad_down");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_dpad_down = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_dpad_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_dpad_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_dpad_left = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_dpad_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_dpad_right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_dpad_right = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_cross
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_cross");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_cross = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_circle
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_circle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_circle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_square
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_square");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_square = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_triangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_triangle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_triangle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_l1
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_l1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_l1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_l2
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_l2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_l2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_l3
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_l3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_l3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_r1
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_r1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_r1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_r2
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_r2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_r2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_r3
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_r3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_r3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_share
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_share");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_share = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_options
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_options");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_options = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_trackpad
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_trackpad");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_trackpad = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // button_ps
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_ps");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->button_ps = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__imu__convert_from_py(field, &ros_message->imu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // battery_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_percentage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_full_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_full_charging");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_full_charging = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // touch0
    PyObject * field = PyObject_GetAttrString(_pymsg, "touch0");
    if (!field) {
      return false;
    }
    if (!ds4_driver_msgs__msg__trackpad__convert_from_py(field, &ros_message->touch0)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // touch1
    PyObject * field = PyObject_GetAttrString(_pymsg, "touch1");
    if (!field) {
      return false;
    }
    if (!ds4_driver_msgs__msg__trackpad__convert_from_py(field, &ros_message->touch1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // plug_usb
    PyObject * field = PyObject_GetAttrString(_pymsg, "plug_usb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plug_usb = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plug_audio
    PyObject * field = PyObject_GetAttrString(_pymsg, "plug_audio");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plug_audio = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plug_mic
    PyObject * field = PyObject_GetAttrString(_pymsg, "plug_mic");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plug_mic = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ds4_driver_msgs__msg__status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Status */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ds4_driver_msgs.msg._status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Status");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ds4_driver_msgs__msg__Status * ros_message = (ds4_driver_msgs__msg__Status *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_left_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->axis_left_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_left_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_left_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->axis_left_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_left_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_right_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->axis_right_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_right_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_right_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->axis_right_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_right_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_l2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->axis_l2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_l2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axis_r2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->axis_r2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axis_r2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_dpad_up
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_dpad_up);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_dpad_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_dpad_down
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_dpad_down);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_dpad_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_dpad_left
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_dpad_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_dpad_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_dpad_right
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_dpad_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_dpad_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_cross
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_cross);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_cross", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_circle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_circle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_circle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_square
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_square);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_square", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_triangle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_triangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_triangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_l1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_l1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_l1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_l2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_l2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_l2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_l3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_l3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_l3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_r1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_r1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_r1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_r2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_r2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_r2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_r3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_r3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_r3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_share
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_share);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_share", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_options
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_options);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_options", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_trackpad
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_trackpad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_trackpad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_ps
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->button_ps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_ps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu
    PyObject * field = NULL;
    field = sensor_msgs__msg__imu__convert_to_py(&ros_message->imu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_full_charging
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->battery_full_charging);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_full_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // touch0
    PyObject * field = NULL;
    field = ds4_driver_msgs__msg__trackpad__convert_to_py(&ros_message->touch0);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "touch0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // touch1
    PyObject * field = NULL;
    field = ds4_driver_msgs__msg__trackpad__convert_to_py(&ros_message->touch1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "touch1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plug_usb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plug_usb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plug_usb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plug_audio
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plug_audio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plug_audio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plug_mic
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plug_mic);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plug_mic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
