// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummaryIndicator.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary_indicator__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[122];
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_filter_aiding_measurement_summary_indicator.MipFilterAidingMeasurementSummaryIndicator", full_classname_dest, 121) == 0);
  }
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * ros_message = _ros_message;
  {  // enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // used
    PyObject * field = PyObject_GetAttrString(_pymsg, "used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // residual_high_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "residual_high_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->residual_high_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sample_time_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "sample_time_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sample_time_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // configuration_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "configuration_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->configuration_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_num_meas_exceeded
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_num_meas_exceeded");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->max_num_meas_exceeded = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary_indicator__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipFilterAidingMeasurementSummaryIndicator */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_filter_aiding_measurement_summary_indicator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipFilterAidingMeasurementSummaryIndicator");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * ros_message = (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator *)raw_ros_message;
  {  // enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // residual_high_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->residual_high_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "residual_high_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sample_time_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sample_time_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sample_time_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // configuration_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->configuration_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "configuration_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_num_meas_exceeded
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->max_num_meas_exceeded ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_num_meas_exceeded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
