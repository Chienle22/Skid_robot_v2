// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatus.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status__functions.h"

bool microstrain_inertial_msgs__msg__mip_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * microstrain_inertial_msgs__msg__mip_header__convert_to_py(void * raw_ros_message);
bool microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[98];
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_filter_gnss_dual_antenna_status.MipFilterGnssDualAntennaStatus", full_classname_dest, 97) == 0);
  }
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * ros_message = _ros_message;
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
  {  // time_of_week
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_of_week");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_of_week = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_unc
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_unc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_unc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fix_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "fix_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fix_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_flags");
    if (!field) {
      return false;
    }
    if (!microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__convert_from_py(field, &ros_message->status_flags)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // valid_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->valid_flags = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipFilterGnssDualAntennaStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_filter_gnss_dual_antenna_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipFilterGnssDualAntennaStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * ros_message = (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus *)raw_ros_message;
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
  {  // time_of_week
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_of_week);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_of_week", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_unc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_unc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_unc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fix_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fix_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fix_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_flags
    PyObject * field = NULL;
    field = microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__convert_to_py(&ros_message->status_flags);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->valid_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
