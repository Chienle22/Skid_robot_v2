// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[138];
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_gnss_corrections_rtk_corrections_status_epoch_status.MipGnssCorrectionsRtkCorrectionsStatusEpochStatus", full_classname_dest, 137) == 0);
  }
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus * ros_message = _ros_message;
  {  // antenna_location_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "antenna_location_received");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->antenna_location_received = (Py_True == field);
    Py_DECREF(field);
  }
  {  // antenna_description_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "antenna_description_received");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->antenna_description_received = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_received");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_received = (Py_True == field);
    Py_DECREF(field);
  }
  {  // galileo_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "galileo_received");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->galileo_received = (Py_True == field);
    Py_DECREF(field);
  }
  {  // glonass_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "glonass_received");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->glonass_received = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beidou_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "beidou_received");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beidou_received = (Py_True == field);
    Py_DECREF(field);
  }
  {  // using_gps_msm_messages
    PyObject * field = PyObject_GetAttrString(_pymsg, "using_gps_msm_messages");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->using_gps_msm_messages = (Py_True == field);
    Py_DECREF(field);
  }
  {  // using_glonass_msm_messages
    PyObject * field = PyObject_GetAttrString(_pymsg, "using_glonass_msm_messages");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->using_glonass_msm_messages = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dongle_status_read_failed
    PyObject * field = PyObject_GetAttrString(_pymsg, "dongle_status_read_failed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dongle_status_read_failed = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipGnssCorrectionsRtkCorrectionsStatusEpochStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_gnss_corrections_rtk_corrections_status_epoch_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipGnssCorrectionsRtkCorrectionsStatusEpochStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus * ros_message = (microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus *)raw_ros_message;
  {  // antenna_location_received
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->antenna_location_received ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antenna_location_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // antenna_description_received
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->antenna_description_received ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antenna_description_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_received
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_received ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // galileo_received
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->galileo_received ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "galileo_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // glonass_received
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->glonass_received ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "glonass_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beidou_received
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beidou_received ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beidou_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // using_gps_msm_messages
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->using_gps_msm_messages ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "using_gps_msm_messages", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // using_glonass_msm_messages
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->using_glonass_msm_messages ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "using_glonass_msm_messages", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dongle_status_read_failed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dongle_status_read_failed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dongle_status_read_failed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
