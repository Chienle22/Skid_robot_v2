// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatusStatus.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_sensor_overrange_status_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[97];
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_sensor_overrange_status_status.MipSensorOverrangeStatusStatus", full_classname_dest, 96) == 0);
  }
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * ros_message = _ros_message;
  {  // accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accel_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accel_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accel_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gyro_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gyro_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gyro_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gyro_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gyro_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gyro_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mag_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mag_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mag_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // press
    PyObject * field = PyObject_GetAttrString(_pymsg, "press");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->press = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_sensor_overrange_status_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipSensorOverrangeStatusStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_sensor_overrange_status_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipSensorOverrangeStatusStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * ros_message = (microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus *)raw_ros_message;
  {  // accel_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accel_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accel_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accel_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gyro_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gyro_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gyro_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // press
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->press ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "press", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
