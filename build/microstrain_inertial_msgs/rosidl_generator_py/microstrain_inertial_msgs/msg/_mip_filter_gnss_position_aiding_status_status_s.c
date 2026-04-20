// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatusStatus.idl
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
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[117];
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
    assert(strncmp("microstrain_inertial_msgs.msg._mip_filter_gnss_position_aiding_status_status.MipFilterGnssPositionAidingStatusStatus", full_classname_dest, 116) == 0);
  }
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * ros_message = _ros_message;
  {  // tight_coupling
    PyObject * field = PyObject_GetAttrString(_pymsg, "tight_coupling");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tight_coupling = (Py_True == field);
    Py_DECREF(field);
  }
  {  // differential
    PyObject * field = PyObject_GetAttrString(_pymsg, "differential");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->differential = (Py_True == field);
    Py_DECREF(field);
  }
  {  // integer_fix
    PyObject * field = PyObject_GetAttrString(_pymsg, "integer_fix");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->integer_fix = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_l1
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_l1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_l1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_l2
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_l2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_l2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_l5
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_l5");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_l5 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // glo_l1
    PyObject * field = PyObject_GetAttrString(_pymsg, "glo_l1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->glo_l1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // glo_l2
    PyObject * field = PyObject_GetAttrString(_pymsg, "glo_l2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->glo_l2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gal_e1
    PyObject * field = PyObject_GetAttrString(_pymsg, "gal_e1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gal_e1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gal_e5
    PyObject * field = PyObject_GetAttrString(_pymsg, "gal_e5");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gal_e5 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gal_e6
    PyObject * field = PyObject_GetAttrString(_pymsg, "gal_e6");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gal_e6 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bei_b1
    PyObject * field = PyObject_GetAttrString(_pymsg, "bei_b1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bei_b1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bei_b2
    PyObject * field = PyObject_GetAttrString(_pymsg, "bei_b2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bei_b2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bei_b3
    PyObject * field = PyObject_GetAttrString(_pymsg, "bei_b3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bei_b3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // no_fix
    PyObject * field = PyObject_GetAttrString(_pymsg, "no_fix");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->no_fix = (Py_True == field);
    Py_DECREF(field);
  }
  {  // config_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "config_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->config_error = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MipFilterGnssPositionAidingStatusStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("microstrain_inertial_msgs.msg._mip_filter_gnss_position_aiding_status_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MipFilterGnssPositionAidingStatusStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * ros_message = (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus *)raw_ros_message;
  {  // tight_coupling
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tight_coupling ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tight_coupling", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // differential
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->differential ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "differential", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // integer_fix
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->integer_fix ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "integer_fix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_l1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_l1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_l1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_l2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_l2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_l2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_l5
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_l5 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_l5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // glo_l1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->glo_l1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "glo_l1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // glo_l2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->glo_l2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "glo_l2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gal_e1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gal_e1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gal_e1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gal_e5
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gal_e5 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gal_e5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gal_e6
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gal_e6 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gal_e6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bei_b1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bei_b1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bei_b1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bei_b2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bei_b2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bei_b2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bei_b3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bei_b3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bei_b3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // no_fix
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->no_fix ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "no_fix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // config_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->config_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "config_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
