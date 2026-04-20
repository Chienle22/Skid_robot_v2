// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfoSbasStatus.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[88];
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_gnss_sbas_info_sbas_status.MipGnssSbasInfoSbasStatus", full_classname_dest, 87) == 0);
  }
  microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus * ros_message = _ros_message;
  {  // range_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->range_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // corrections_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "corrections_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->corrections_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // integrity_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "integrity_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->integrity_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // test_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "test_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->test_mode = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipGnssSbasInfoSbasStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_gnss_sbas_info_sbas_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipGnssSbasInfoSbasStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus * ros_message = (microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus *)raw_ros_message;
  {  // range_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->range_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // corrections_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->corrections_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "corrections_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // integrity_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->integrity_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "integrity_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // test_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->test_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "test_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
