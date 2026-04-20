// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfo.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info__functions.h"

bool microstrain_inertial_msgs__msg__mip_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * microstrain_inertial_msgs__msg__mip_header__convert_to_py(void * raw_ros_message);
bool microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_gnss_sbas_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_gnss_sbas_info.MipGnssSbasInfo", full_classname_dest, 65) == 0);
  }
  microstrain_inertial_msgs__msg__MipGnssSbasInfo * ros_message = _ros_message;
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
    ros_message->time_of_week = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // week_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "week_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->week_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sbas_system
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbas_system");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sbas_system = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sbas_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbas_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sbas_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // count
    PyObject * field = PyObject_GetAttrString(_pymsg, "count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sbas_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "sbas_status");
    if (!field) {
      return false;
    }
    if (!microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__convert_from_py(field, &ros_message->sbas_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_sbas_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipGnssSbasInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_gnss_sbas_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipGnssSbasInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipGnssSbasInfo * ros_message = (microstrain_inertial_msgs__msg__MipGnssSbasInfo *)raw_ros_message;
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
  {  // week_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->week_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "week_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbas_system
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sbas_system);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbas_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbas_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sbas_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbas_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sbas_status
    PyObject * field = NULL;
    field = microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__convert_to_py(&ros_message->sbas_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sbas_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
