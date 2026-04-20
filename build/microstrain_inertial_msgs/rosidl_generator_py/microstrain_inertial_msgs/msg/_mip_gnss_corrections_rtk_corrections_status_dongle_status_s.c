// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[140];
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_gnss_corrections_rtk_corrections_status_dongle_status.MipGnssCorrectionsRtkCorrectionsStatusDongleStatus", full_classname_dest, 139) == 0);
  }
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus * ros_message = _ros_message;
  {  // modem_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "modem_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->modem_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // connection_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->connection_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rssi
    PyObject * field = PyObject_GetAttrString(_pymsg, "rssi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rssi = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // signal_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_quality = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tower_change_indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "tower_change_indicator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tower_change_indicator = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nmea_timeout_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "nmea_timeout_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->nmea_timeout_flag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // server_timeout_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "server_timeout_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->server_timeout_flag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rtcm_timeout_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtcm_timeout_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rtcm_timeout_flag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // device_out_of_range_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_out_of_range_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->device_out_of_range_flag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // corrections_unavailable_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "corrections_unavailable_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->corrections_unavailable_flag = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipGnssCorrectionsRtkCorrectionsStatusDongleStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_gnss_corrections_rtk_corrections_status_dongle_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipGnssCorrectionsRtkCorrectionsStatusDongleStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus * ros_message = (microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus *)raw_ros_message;
  {  // modem_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->modem_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "modem_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->connection_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rssi
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rssi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rssi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_quality
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signal_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tower_change_indicator
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tower_change_indicator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tower_change_indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nmea_timeout_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->nmea_timeout_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nmea_timeout_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // server_timeout_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->server_timeout_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "server_timeout_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtcm_timeout_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rtcm_timeout_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtcm_timeout_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_out_of_range_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->device_out_of_range_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_out_of_range_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // corrections_unavailable_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->corrections_unavailable_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "corrections_unavailable_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
