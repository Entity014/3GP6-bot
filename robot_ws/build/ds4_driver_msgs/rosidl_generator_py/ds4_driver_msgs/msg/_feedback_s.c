// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ds4_driver_msgs:msg/Feedback.idl
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
#include "ds4_driver_msgs/msg/detail/feedback__struct.h"
#include "ds4_driver_msgs/msg/detail/feedback__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ds4_driver_msgs__msg__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("ds4_driver_msgs.msg._feedback.Feedback", full_classname_dest, 38) == 0);
  }
  ds4_driver_msgs__msg__Feedback * ros_message = _ros_message;
  {  // set_led
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_led");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set_led = (Py_True == field);
    Py_DECREF(field);
  }
  {  // led_r
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_r");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->led_r = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // led_g
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_g");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->led_g = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // led_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->led_b = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // set_led_flash
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_led_flash");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set_led_flash = (Py_True == field);
    Py_DECREF(field);
  }
  {  // led_flash_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_flash_on");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->led_flash_on = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // led_flash_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_flash_off");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->led_flash_off = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // set_rumble
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_rumble");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->set_rumble = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rumble_duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "rumble_duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rumble_duration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rumble_small
    PyObject * field = PyObject_GetAttrString(_pymsg, "rumble_small");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rumble_small = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rumble_big
    PyObject * field = PyObject_GetAttrString(_pymsg, "rumble_big");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rumble_big = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ds4_driver_msgs__msg__feedback__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Feedback */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ds4_driver_msgs.msg._feedback");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Feedback");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ds4_driver_msgs__msg__Feedback * ros_message = (ds4_driver_msgs__msg__Feedback *)raw_ros_message;
  {  // set_led
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set_led ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_led", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_r
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->led_r);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_g
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->led_g);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_g", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->led_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_led_flash
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set_led_flash ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_led_flash", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_flash_on
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->led_flash_on);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_flash_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_flash_off
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->led_flash_off);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_flash_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_rumble
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->set_rumble ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_rumble", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rumble_duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rumble_duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rumble_duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rumble_small
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rumble_small);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rumble_small", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rumble_big
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rumble_big);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rumble_big", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
