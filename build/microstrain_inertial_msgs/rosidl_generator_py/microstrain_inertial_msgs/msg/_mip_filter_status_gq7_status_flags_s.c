// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGq7StatusFlags.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[96];
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_filter_status_gq7_status_flags.MipFilterStatusGq7StatusFlags", full_classname_dest, 95) == 0);
  }
  microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags * ros_message = _ros_message;
  {  // filter_condition
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_condition");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_condition = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // roll_pitch_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_pitch_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->roll_pitch_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heading_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heading_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->position_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // velocity_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->velocity_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_bias_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_bias_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_bias_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gnss_clk_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_clk_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gnss_clk_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // antenna_lever_arm_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "antenna_lever_arm_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->antenna_lever_arm_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mounting_transform_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "mounting_transform_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mounting_transform_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // time_sync_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_sync_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->time_sync_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // solution_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->solution_error = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipFilterStatusGq7StatusFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_filter_status_gq7_status_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipFilterStatusGq7StatusFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags * ros_message = (microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags *)raw_ros_message;
  {  // filter_condition
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_condition);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_condition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_pitch_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->roll_pitch_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_pitch_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heading_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->position_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->velocity_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_bias_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_bias_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_bias_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_clk_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gnss_clk_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_clk_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // antenna_lever_arm_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->antenna_lever_arm_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "antenna_lever_arm_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mounting_transform_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mounting_transform_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mounting_transform_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_sync_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->time_sync_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_sync_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solution_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->solution_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
