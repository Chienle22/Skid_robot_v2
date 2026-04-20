// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatus.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__functions.h"

bool microstrain_inertial_msgs__msg__mip_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * microstrain_inertial_msgs__msg__mip_header__convert_to_py(void * raw_ros_message);
bool microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__convert_to_py(void * raw_ros_message);
bool microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_filter_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_filter_status.MipFilterStatus", full_classname_dest, 64) == 0);
  }
  microstrain_inertial_msgs__msg__MipFilterStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!microstrain_inertial_msgs__msg__mip_header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // filter_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_state = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dynamics_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamics_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dynamics_mode = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gx5_status_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "gx5_status_flags");
    if (!field) {
      return false;
    }
    if (!microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__convert_from_py(field, &ros_message->gx5_status_flags)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gq7_status_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "gq7_status_flags");
    if (!field) {
      return false;
    }
    if (!microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__convert_from_py(field, &ros_message->gq7_status_flags)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipFilterStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_filter_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipFilterStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipFilterStatus * ros_message = (microstrain_inertial_msgs__msg__MipFilterStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = microstrain_inertial_msgs__msg__mip_header__convert_to_py(&ros_message->header);
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
  {  // filter_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynamics_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dynamics_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynamics_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gx5_status_flags
    PyObject * field = NULL;
    field = microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__convert_to_py(&ros_message->gx5_status_flags);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gx5_status_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gq7_status_flags
    PyObject * field = NULL;
    field = microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__convert_to_py(&ros_message->gq7_status_flags);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gq7_status_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
