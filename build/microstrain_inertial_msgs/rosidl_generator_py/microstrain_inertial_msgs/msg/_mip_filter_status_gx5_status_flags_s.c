// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGx5StatusFlags.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_filter_status_gx5_status_flags.MipFilterStatusGx5StatusFlags", full_classname_dest, 95) == 0);
  }
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * ros_message = _ros_message;
  {  // init_no_attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_no_attitude");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->init_no_attitude = (Py_True == field);
    Py_DECREF(field);
  }
  {  // init_no_position_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_no_position_velocity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->init_no_position_velocity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_imu_unavailable
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_imu_unavailable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_imu_unavailable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_gps_unavailable
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_gps_unavailable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_gps_unavailable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_matrix_singularity
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_matrix_singularity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_matrix_singularity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_position_covariance_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_position_covariance_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_position_covariance_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_velocity_covariance_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_velocity_covariance_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_velocity_covariance_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_attitude_covariance_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_attitude_covariance_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_attitude_covariance_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_nan_in_solution_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_nan_in_solution_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_nan_in_solution_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_gyro_bias_est_high_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_gyro_bias_est_high_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_gyro_bias_est_high_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_accel_bias_est_high_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_accel_bias_est_high_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_accel_bias_est_high_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_gyro_scale_factor_est_high_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_gyro_scale_factor_est_high_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_gyro_scale_factor_est_high_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_accel_scale_factor_est_high_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_accel_scale_factor_est_high_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_accel_scale_factor_est_high_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_mag_bias_est_high_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_mag_bias_est_high_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_mag_bias_est_high_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_ant_offset_correction_est_high_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_ant_offset_correction_est_high_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_ant_offset_correction_est_high_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_mag_hard_iron_est_high_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_mag_hard_iron_est_high_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_mag_hard_iron_est_high_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // run_mag_soft_iron_est_high_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_mag_soft_iron_est_high_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->run_mag_soft_iron_est_high_warning = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipFilterStatusGx5StatusFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_filter_status_gx5_status_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipFilterStatusGx5StatusFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * ros_message = (microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags *)raw_ros_message;
  {  // init_no_attitude
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->init_no_attitude ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_no_attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // init_no_position_velocity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->init_no_position_velocity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_no_position_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_imu_unavailable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_imu_unavailable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_imu_unavailable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_gps_unavailable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_gps_unavailable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_gps_unavailable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_matrix_singularity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_matrix_singularity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_matrix_singularity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_position_covariance_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_position_covariance_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_position_covariance_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_velocity_covariance_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_velocity_covariance_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_velocity_covariance_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_attitude_covariance_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_attitude_covariance_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_attitude_covariance_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_nan_in_solution_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_nan_in_solution_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_nan_in_solution_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_gyro_bias_est_high_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_gyro_bias_est_high_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_gyro_bias_est_high_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_accel_bias_est_high_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_accel_bias_est_high_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_accel_bias_est_high_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_gyro_scale_factor_est_high_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_gyro_scale_factor_est_high_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_gyro_scale_factor_est_high_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_accel_scale_factor_est_high_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_accel_scale_factor_est_high_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_accel_scale_factor_est_high_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_mag_bias_est_high_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_mag_bias_est_high_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_mag_bias_est_high_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_ant_offset_correction_est_high_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_ant_offset_correction_est_high_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_ant_offset_correction_est_high_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_mag_hard_iron_est_high_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_mag_hard_iron_est_high_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_mag_hard_iron_est_high_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_mag_soft_iron_est_high_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->run_mag_soft_iron_est_high_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_mag_soft_iron_est_high_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
