// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ds4_driver_msgs:msg/Report.idl
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
#include "ds4_driver_msgs/msg/detail/report__struct.h"
#include "ds4_driver_msgs/msg/detail/report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ds4_driver_msgs__msg__report__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ds4_driver_msgs.msg._report.Report", full_classname_dest, 34) == 0);
  }
  ds4_driver_msgs__msg__Report * ros_message = _ros_message;
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
  {  // left_analog_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_analog_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_analog_x = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_analog_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_analog_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_analog_y = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_analog_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_analog_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_analog_x = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_analog_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_analog_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_analog_y = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // l2_analog
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2_analog");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l2_analog = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // r2_analog
    PyObject * field = PyObject_GetAttrString(_pymsg, "r2_analog");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r2_analog = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dpad_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "dpad_up");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dpad_up = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dpad_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "dpad_down");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dpad_down = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dpad_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "dpad_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dpad_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dpad_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "dpad_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dpad_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_cross
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_cross");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_cross = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_circle
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_circle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_circle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_square
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_square");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_square = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_triangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_triangle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_triangle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_l1
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_l1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_l1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_l2
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_l2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_l2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_l3
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_l3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_l3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_r1
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_r1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_r1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_r2
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_r2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_r2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_r3
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_r3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_r3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_share
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_share");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_share = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_options
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_options");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_options = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_trackpad
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_trackpad");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_trackpad = (Py_True == field);
    Py_DECREF(field);
  }
  {  // button_ps
    PyObject * field = PyObject_GetAttrString(_pymsg, "button_ps");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->button_ps = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lin_acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "lin_acc_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lin_acc_x = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lin_acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "lin_acc_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lin_acc_y = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lin_acc_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "lin_acc_z");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lin_acc_z = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ang_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_vel_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ang_vel_x = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ang_vel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_vel_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ang_vel_y = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ang_vel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_vel_z");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ang_vel_z = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trackpad_touch0_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_touch0_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackpad_touch0_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trackpad_touch0_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_touch0_active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackpad_touch0_active = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trackpad_touch0_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_touch0_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackpad_touch0_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trackpad_touch0_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_touch0_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackpad_touch0_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trackpad_touch1_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_touch1_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackpad_touch1_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trackpad_touch1_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_touch1_active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackpad_touch1_active = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trackpad_touch1_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_touch1_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackpad_touch1_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trackpad_touch1_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackpad_touch1_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackpad_touch1_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // plug_usb
    PyObject * field = PyObject_GetAttrString(_pymsg, "plug_usb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->plug_usb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // plug_audio
    PyObject * field = PyObject_GetAttrString(_pymsg, "plug_audio");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->plug_audio = (Py_True == field);
    Py_DECREF(field);
  }
  {  // plug_mic
    PyObject * field = PyObject_GetAttrString(_pymsg, "plug_mic");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->plug_mic = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ds4_driver_msgs__msg__report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Report */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ds4_driver_msgs.msg._report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Report");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ds4_driver_msgs__msg__Report * ros_message = (ds4_driver_msgs__msg__Report *)raw_ros_message;
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
  {  // left_analog_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_analog_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_analog_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_analog_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_analog_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_analog_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_analog_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_analog_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_analog_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_analog_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_analog_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_analog_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l2_analog
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->l2_analog);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l2_analog", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r2_analog
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->r2_analog);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r2_analog", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dpad_up
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dpad_up ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dpad_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dpad_down
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dpad_down ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dpad_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dpad_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dpad_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dpad_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dpad_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dpad_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dpad_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // button_cross
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->button_cross ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_circle ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_square ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_triangle ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_l1 ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_l2 ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_l3 ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_r1 ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_r2 ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_r3 ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_share ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_options ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_trackpad ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->button_ps ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "button_ps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lin_acc_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lin_acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lin_acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lin_acc_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lin_acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lin_acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lin_acc_z
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lin_acc_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lin_acc_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_vel_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ang_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_vel_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ang_vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_vel_z
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ang_vel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_vel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_touch0_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trackpad_touch0_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_touch0_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_touch0_active
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trackpad_touch0_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_touch0_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_touch0_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trackpad_touch0_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_touch0_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_touch0_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trackpad_touch0_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_touch0_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_touch1_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trackpad_touch1_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_touch1_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_touch1_active
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trackpad_touch1_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_touch1_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_touch1_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trackpad_touch1_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_touch1_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackpad_touch1_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trackpad_touch1_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackpad_touch1_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plug_usb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->plug_usb ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->plug_audio ? 1 : 0);
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
    field = PyBool_FromLong(ros_message->plug_mic ? 1 : 0);
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
