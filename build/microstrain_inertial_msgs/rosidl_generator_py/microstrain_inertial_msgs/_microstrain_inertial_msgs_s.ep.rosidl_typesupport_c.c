// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef microstrain_inertial_msgs__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef microstrain_inertial_msgs__module = {
  PyModuleDef_HEAD_INIT,
  "_microstrain_inertial_msgs_support",
  "_microstrain_inertial_msgs_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  microstrain_inertial_msgs__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

#include <stdbool.h>
#include <stdint.h>
#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/human_readable_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/human_readable_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/human_readable_status__functions.h"

static void * microstrain_inertial_msgs__msg__human_readable_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__HumanReadableStatus__create();
}

static void microstrain_inertial_msgs__msg__human_readable_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__HumanReadableStatus * ros_message = (microstrain_inertial_msgs__msg__HumanReadableStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__HumanReadableStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__human_readable_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__human_readable_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, HumanReadableStatus);

int8_t
_register_msg_type__msg__human_readable_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__human_readable_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__human_readable_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__human_readable_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__human_readable_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__human_readable_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__human_readable_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__human_readable_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__human_readable_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, HumanReadableStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__human_readable_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__functions.h"

static void * microstrain_inertial_msgs__msg__mip_base_device_info__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipBaseDeviceInfo__create();
}

static void microstrain_inertial_msgs__msg__mip_base_device_info__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo * ros_message = (microstrain_inertial_msgs__msg__MipBaseDeviceInfo *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_base_device_info__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_base_device_info__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipBaseDeviceInfo);

int8_t
_register_msg_type__msg__mip_base_device_info(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_base_device_info__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_base_device_info",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_base_device_info__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_base_device_info",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_base_device_info__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_base_device_info",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_base_device_info__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_base_device_info",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipBaseDeviceInfo),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_base_device_info",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary__functions.h"

static void * microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__create();
}

static void microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * ros_message = (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterAidingMeasurementSummary);

int8_t
_register_msg_type__msg__mip_filter_aiding_measurement_summary(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_filter_aiding_measurement_summary",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_filter_aiding_measurement_summary",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_filter_aiding_measurement_summary",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_filter_aiding_measurement_summary",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterAidingMeasurementSummary),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_filter_aiding_measurement_summary",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__functions.h"

static void * microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary_indicator__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__create();
}

static void microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary_indicator__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * ros_message = (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary_indicator__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary_indicator__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterAidingMeasurementSummaryIndicator);

int8_t
_register_msg_type__msg__mip_filter_aiding_measurement_summary_indicator(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary_indicator__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_filter_aiding_measurement_summary_indicator",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary_indicator__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_filter_aiding_measurement_summary_indicator",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary_indicator__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_filter_aiding_measurement_summary_indicator",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_aiding_measurement_summary_indicator__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_filter_aiding_measurement_summary_indicator",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterAidingMeasurementSummaryIndicator),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_filter_aiding_measurement_summary_indicator",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * ros_message = (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterGnssDualAntennaStatus);

int8_t
_register_msg_type__msg__mip_filter_gnss_dual_antenna_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_filter_gnss_dual_antenna_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_filter_gnss_dual_antenna_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_filter_gnss_dual_antenna_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_filter_gnss_dual_antenna_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterGnssDualAntennaStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_filter_gnss_dual_antenna_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__functions.h"

static void * microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__create();
}

static void microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * ros_message = (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterGnssDualAntennaStatusStatusFlags);

int8_t
_register_msg_type__msg__mip_filter_gnss_dual_antenna_status_status_flags(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_filter_gnss_dual_antenna_status_status_flags",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_filter_gnss_dual_antenna_status_status_flags",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_filter_gnss_dual_antenna_status_status_flags",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_dual_antenna_status_status_flags__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_filter_gnss_dual_antenna_status_status_flags",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterGnssDualAntennaStatusStatusFlags),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_filter_gnss_dual_antenna_status_status_flags",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * ros_message = (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterGnssPositionAidingStatus);

int8_t
_register_msg_type__msg__mip_filter_gnss_position_aiding_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_filter_gnss_position_aiding_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_filter_gnss_position_aiding_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_filter_gnss_position_aiding_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_filter_gnss_position_aiding_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterGnssPositionAidingStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_filter_gnss_position_aiding_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * ros_message = (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterGnssPositionAidingStatusStatus);

int8_t
_register_msg_type__msg__mip_filter_gnss_position_aiding_status_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_filter_gnss_position_aiding_status_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_filter_gnss_position_aiding_status_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_filter_gnss_position_aiding_status_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_gnss_position_aiding_status_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_filter_gnss_position_aiding_status_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterGnssPositionAidingStatusStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_filter_gnss_position_aiding_status_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_multi_antenna_offset_correction__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_multi_antenna_offset_correction__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_multi_antenna_offset_correction__functions.h"

static void * microstrain_inertial_msgs__msg__mip_filter_multi_antenna_offset_correction__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__create();
}

static void microstrain_inertial_msgs__msg__mip_filter_multi_antenna_offset_correction__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection * ros_message = (microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_filter_multi_antenna_offset_correction__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_multi_antenna_offset_correction__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterMultiAntennaOffsetCorrection);

int8_t
_register_msg_type__msg__mip_filter_multi_antenna_offset_correction(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_multi_antenna_offset_correction__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_filter_multi_antenna_offset_correction",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_multi_antenna_offset_correction__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_filter_multi_antenna_offset_correction",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_multi_antenna_offset_correction__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_filter_multi_antenna_offset_correction",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_multi_antenna_offset_correction__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_filter_multi_antenna_offset_correction",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterMultiAntennaOffsetCorrection),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_filter_multi_antenna_offset_correction",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_filter_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipFilterStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_filter_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipFilterStatus * ros_message = (microstrain_inertial_msgs__msg__MipFilterStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipFilterStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_filter_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterStatus);

int8_t
_register_msg_type__msg__mip_filter_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_filter_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_filter_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_filter_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_filter_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_filter_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__functions.h"

static void * microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__create();
}

static void microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags * ros_message = (microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterStatusGq7StatusFlags);

int8_t
_register_msg_type__msg__mip_filter_status_gq7_status_flags(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_filter_status_gq7_status_flags",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_filter_status_gq7_status_flags",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_filter_status_gq7_status_flags",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status_gq7_status_flags__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_filter_status_gq7_status_flags",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterStatusGq7StatusFlags),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_filter_status_gq7_status_flags",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__functions.h"

static void * microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__create();
}

static void microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * ros_message = (microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterStatusGx5StatusFlags);

int8_t
_register_msg_type__msg__mip_filter_status_gx5_status_flags(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_filter_status_gx5_status_flags",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_filter_status_gx5_status_flags",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_filter_status_gx5_status_flags",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_filter_status_gx5_status_flags__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_filter_status_gx5_status_flags",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipFilterStatusGx5StatusFlags),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_filter_status_gx5_status_flags",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * ros_message = (microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatus);

int8_t
_register_msg_type__msg__mip_gnss_corrections_rtk_corrections_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_gnss_corrections_rtk_corrections_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_gnss_corrections_rtk_corrections_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_gnss_corrections_rtk_corrections_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus * ros_message = (microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusDongleStatus);

int8_t
_register_msg_type__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusDongleStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus * ros_message = (microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusEpochStatus);

int8_t
_register_msg_type__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusEpochStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info__functions.h"

static void * microstrain_inertial_msgs__msg__mip_gnss_fix_info__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipGnssFixInfo__create();
}

static void microstrain_inertial_msgs__msg__mip_gnss_fix_info__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipGnssFixInfo * ros_message = (microstrain_inertial_msgs__msg__MipGnssFixInfo *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipGnssFixInfo__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_gnss_fix_info__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_fix_info__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssFixInfo);

int8_t
_register_msg_type__msg__mip_gnss_fix_info(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_fix_info__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_gnss_fix_info",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_fix_info__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_gnss_fix_info",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_fix_info__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_gnss_fix_info",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_fix_info__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_gnss_fix_info",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssFixInfo),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_gnss_fix_info",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info_fix_flags__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info_fix_flags__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info_fix_flags__functions.h"

static void * microstrain_inertial_msgs__msg__mip_gnss_fix_info_fix_flags__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__create();
}

static void microstrain_inertial_msgs__msg__mip_gnss_fix_info_fix_flags__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags * ros_message = (microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_gnss_fix_info_fix_flags__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_fix_info_fix_flags__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssFixInfoFixFlags);

int8_t
_register_msg_type__msg__mip_gnss_fix_info_fix_flags(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_fix_info_fix_flags__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_gnss_fix_info_fix_flags",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_fix_info_fix_flags__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_gnss_fix_info_fix_flags",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_fix_info_fix_flags__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_gnss_fix_info_fix_flags",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_fix_info_fix_flags__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_gnss_fix_info_fix_flags",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssFixInfoFixFlags),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_gnss_fix_info_fix_flags",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_rf_error_detection__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_rf_error_detection__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_rf_error_detection__functions.h"

static void * microstrain_inertial_msgs__msg__mip_gnss_rf_error_detection__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__create();
}

static void microstrain_inertial_msgs__msg__mip_gnss_rf_error_detection__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection * ros_message = (microstrain_inertial_msgs__msg__MipGnssRfErrorDetection *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_gnss_rf_error_detection__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_rf_error_detection__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssRfErrorDetection);

int8_t
_register_msg_type__msg__mip_gnss_rf_error_detection(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_rf_error_detection__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_gnss_rf_error_detection",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_rf_error_detection__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_gnss_rf_error_detection",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_rf_error_detection__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_gnss_rf_error_detection",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_rf_error_detection__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_gnss_rf_error_detection",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssRfErrorDetection),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_gnss_rf_error_detection",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info__functions.h"

static void * microstrain_inertial_msgs__msg__mip_gnss_sbas_info__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipGnssSbasInfo__create();
}

static void microstrain_inertial_msgs__msg__mip_gnss_sbas_info__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipGnssSbasInfo * ros_message = (microstrain_inertial_msgs__msg__MipGnssSbasInfo *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipGnssSbasInfo__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_gnss_sbas_info__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_sbas_info__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssSbasInfo);

int8_t
_register_msg_type__msg__mip_gnss_sbas_info(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_sbas_info__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_gnss_sbas_info",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_sbas_info__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_gnss_sbas_info",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_sbas_info__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_gnss_sbas_info",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_sbas_info__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_gnss_sbas_info",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssSbasInfo),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_gnss_sbas_info",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus * ros_message = (microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssSbasInfoSbasStatus);

int8_t
_register_msg_type__msg__mip_gnss_sbas_info_sbas_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_gnss_sbas_info_sbas_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_gnss_sbas_info_sbas_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_gnss_sbas_info_sbas_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gnss_sbas_info_sbas_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_gnss_sbas_info_sbas_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGnssSbasInfoSbasStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_gnss_sbas_info_sbas_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp__functions.h"

static void * microstrain_inertial_msgs__msg__mip_gps_timestamp__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipGpsTimestamp__create();
}

static void microstrain_inertial_msgs__msg__mip_gps_timestamp__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipGpsTimestamp * ros_message = (microstrain_inertial_msgs__msg__MipGpsTimestamp *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipGpsTimestamp__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_gps_timestamp__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_gps_timestamp__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGpsTimestamp);

int8_t
_register_msg_type__msg__mip_gps_timestamp(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gps_timestamp__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_gps_timestamp",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gps_timestamp__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_gps_timestamp",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gps_timestamp__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_gps_timestamp",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gps_timestamp__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_gps_timestamp",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGpsTimestamp),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_gps_timestamp",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__functions.h"

static void * microstrain_inertial_msgs__msg__mip_gps_timestamp_valid_flags__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__create();
}

static void microstrain_inertial_msgs__msg__mip_gps_timestamp_valid_flags__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags * ros_message = (microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_gps_timestamp_valid_flags__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_gps_timestamp_valid_flags__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGpsTimestampValidFlags);

int8_t
_register_msg_type__msg__mip_gps_timestamp_valid_flags(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gps_timestamp_valid_flags__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_gps_timestamp_valid_flags",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gps_timestamp_valid_flags__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_gps_timestamp_valid_flags",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gps_timestamp_valid_flags__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_gps_timestamp_valid_flags",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_gps_timestamp_valid_flags__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_gps_timestamp_valid_flags",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipGpsTimestampValidFlags),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_gps_timestamp_valid_flags",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_header__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_header__functions.h"

static void * microstrain_inertial_msgs__msg__mip_header__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipHeader__create();
}

static void microstrain_inertial_msgs__msg__mip_header__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipHeader * ros_message = (microstrain_inertial_msgs__msg__MipHeader *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipHeader__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_header__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_header__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipHeader);

int8_t
_register_msg_type__msg__mip_header(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_header__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_header",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_header__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_header",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_header__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_header",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_header__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_header",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipHeader),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_header",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_sensor_overrange_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_sensor_overrange_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatus * ros_message = (microstrain_inertial_msgs__msg__MipSensorOverrangeStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_sensor_overrange_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_sensor_overrange_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipSensorOverrangeStatus);

int8_t
_register_msg_type__msg__mip_sensor_overrange_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_overrange_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_sensor_overrange_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_overrange_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_sensor_overrange_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_overrange_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_sensor_overrange_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_overrange_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_sensor_overrange_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipSensorOverrangeStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_sensor_overrange_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_sensor_overrange_status_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_sensor_overrange_status_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * ros_message = (microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_sensor_overrange_status_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_sensor_overrange_status_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipSensorOverrangeStatusStatus);

int8_t
_register_msg_type__msg__mip_sensor_overrange_status_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_overrange_status_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_sensor_overrange_status_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_overrange_status_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_sensor_overrange_status_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_overrange_status_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_sensor_overrange_status_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_overrange_status_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_sensor_overrange_status_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipSensorOverrangeStatusStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_sensor_overrange_status_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_temperature_statistics__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_temperature_statistics__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_temperature_statistics__functions.h"

static void * microstrain_inertial_msgs__msg__mip_sensor_temperature_statistics__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__create();
}

static void microstrain_inertial_msgs__msg__mip_sensor_temperature_statistics__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * ros_message = (microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_sensor_temperature_statistics__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_sensor_temperature_statistics__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipSensorTemperatureStatistics);

int8_t
_register_msg_type__msg__mip_sensor_temperature_statistics(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_temperature_statistics__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_sensor_temperature_statistics",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_temperature_statistics__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_sensor_temperature_statistics",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_temperature_statistics__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_sensor_temperature_statistics",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_sensor_temperature_statistics__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_sensor_temperature_statistics",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipSensorTemperatureStatistics),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_sensor_temperature_statistics",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_system_built_in_test__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_system_built_in_test__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_system_built_in_test__functions.h"

static void * microstrain_inertial_msgs__msg__mip_system_built_in_test__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipSystemBuiltInTest__create();
}

static void microstrain_inertial_msgs__msg__mip_system_built_in_test__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipSystemBuiltInTest * ros_message = (microstrain_inertial_msgs__msg__MipSystemBuiltInTest *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipSystemBuiltInTest__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_system_built_in_test__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_system_built_in_test__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipSystemBuiltInTest);

int8_t
_register_msg_type__msg__mip_system_built_in_test(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_system_built_in_test__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_system_built_in_test",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_system_built_in_test__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_system_built_in_test",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_system_built_in_test__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_system_built_in_test",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_system_built_in_test__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_system_built_in_test",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipSystemBuiltInTest),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_system_built_in_test",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_system_time_sync_status__type_support.h"
#include "microstrain_inertial_msgs/msg/detail/mip_system_time_sync_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_system_time_sync_status__functions.h"

static void * microstrain_inertial_msgs__msg__mip_system_time_sync_status__create_ros_message(void)
{
  return microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__create();
}

static void microstrain_inertial_msgs__msg__mip_system_time_sync_status__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus * ros_message = (microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus *)raw_ros_message;
  microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__msg__mip_system_time_sync_status__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__msg__mip_system_time_sync_status__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipSystemTimeSyncStatus);

int8_t
_register_msg_type__msg__mip_system_time_sync_status(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_system_time_sync_status__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__mip_system_time_sync_status",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_system_time_sync_status__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__mip_system_time_sync_status",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_system_time_sync_status__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__mip_system_time_sync_status",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__msg__mip_system_time_sync_status__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__mip_system_time_sync_status",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, msg, MipSystemTimeSyncStatus),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__mip_system_time_sync_status",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/srv/detail/mip3dm_capture_gyro_bias__type_support.h"
#include "microstrain_inertial_msgs/srv/detail/mip3dm_capture_gyro_bias__struct.h"
#include "microstrain_inertial_msgs/srv/detail/mip3dm_capture_gyro_bias__functions.h"

static void * microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__request__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__create();
}

static void microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__request__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request * ros_message = (microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request *)raw_ros_message;
  microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmCaptureGyroBias_Request);

int8_t
_register_msg_type__srv__mip3dm_capture_gyro_bias__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__mip3dm_capture_gyro_bias__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__mip3dm_capture_gyro_bias__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__mip3dm_capture_gyro_bias__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__mip3dm_capture_gyro_bias__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmCaptureGyroBias_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__mip3dm_capture_gyro_bias__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip3dm_capture_gyro_bias__type_support.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip3dm_capture_gyro_bias__struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip3dm_capture_gyro_bias__functions.h"

static void * microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__response__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__create();
}

static void microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__response__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response * ros_message = (microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response *)raw_ros_message;
  microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmCaptureGyroBias_Response);

int8_t
_register_msg_type__srv__mip3dm_capture_gyro_bias__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__mip3dm_capture_gyro_bias__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__mip3dm_capture_gyro_bias__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__mip3dm_capture_gyro_bias__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_capture_gyro_bias__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__mip3dm_capture_gyro_bias__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmCaptureGyroBias_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__mip3dm_capture_gyro_bias__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, Mip3dmCaptureGyroBias)();

int8_t
_register_srv_type__srv__mip3dm_capture_gyro_bias(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, Mip3dmCaptureGyroBias)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__mip3dm_capture_gyro_bias",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_read__type_support.h"
#include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_read__struct.h"
#include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_read__functions.h"

static void * microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__request__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__create();
}

static void microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__request__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request * ros_message = (microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request *)raw_ros_message;
  microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmGpioStateRead_Request);

int8_t
_register_msg_type__srv__mip3dm_gpio_state_read__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__mip3dm_gpio_state_read__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__mip3dm_gpio_state_read__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__mip3dm_gpio_state_read__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__mip3dm_gpio_state_read__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmGpioStateRead_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__mip3dm_gpio_state_read__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_read__type_support.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_read__struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_read__functions.h"

static void * microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__response__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__create();
}

static void microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__response__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response * ros_message = (microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response *)raw_ros_message;
  microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmGpioStateRead_Response);

int8_t
_register_msg_type__srv__mip3dm_gpio_state_read__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__mip3dm_gpio_state_read__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__mip3dm_gpio_state_read__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__mip3dm_gpio_state_read__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_read__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__mip3dm_gpio_state_read__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmGpioStateRead_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__mip3dm_gpio_state_read__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, Mip3dmGpioStateRead)();

int8_t
_register_srv_type__srv__mip3dm_gpio_state_read(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, Mip3dmGpioStateRead)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__mip3dm_gpio_state_read",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_write__type_support.h"
#include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_write__struct.h"
#include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_write__functions.h"

static void * microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__request__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__create();
}

static void microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__request__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request * ros_message = (microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request *)raw_ros_message;
  microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmGpioStateWrite_Request);

int8_t
_register_msg_type__srv__mip3dm_gpio_state_write__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__mip3dm_gpio_state_write__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__mip3dm_gpio_state_write__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__mip3dm_gpio_state_write__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__mip3dm_gpio_state_write__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmGpioStateWrite_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__mip3dm_gpio_state_write__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_write__type_support.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_write__struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_write__functions.h"

static void * microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__response__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__create();
}

static void microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__response__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response * ros_message = (microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response *)raw_ros_message;
  microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmGpioStateWrite_Response);

int8_t
_register_msg_type__srv__mip3dm_gpio_state_write__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__mip3dm_gpio_state_write__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__mip3dm_gpio_state_write__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__mip3dm_gpio_state_write__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip3dm_gpio_state_write__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__mip3dm_gpio_state_write__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, Mip3dmGpioStateWrite_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__mip3dm_gpio_state_write__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, Mip3dmGpioStateWrite)();

int8_t
_register_srv_type__srv__mip3dm_gpio_state_write(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, Mip3dmGpioStateWrite)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__mip3dm_gpio_state_write",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/srv/detail/mip_base_get_device_information__type_support.h"
#include "microstrain_inertial_msgs/srv/detail/mip_base_get_device_information__struct.h"
#include "microstrain_inertial_msgs/srv/detail/mip_base_get_device_information__functions.h"

static void * microstrain_inertial_msgs__srv__mip_base_get_device_information__request__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__create();
}

static void microstrain_inertial_msgs__srv__mip_base_get_device_information__request__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request * ros_message = (microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request *)raw_ros_message;
  microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__mip_base_get_device_information__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__mip_base_get_device_information__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, MipBaseGetDeviceInformation_Request);

int8_t
_register_msg_type__srv__mip_base_get_device_information__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip_base_get_device_information__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__mip_base_get_device_information__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip_base_get_device_information__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__mip_base_get_device_information__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip_base_get_device_information__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__mip_base_get_device_information__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip_base_get_device_information__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__mip_base_get_device_information__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, MipBaseGetDeviceInformation_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__mip_base_get_device_information__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip_base_get_device_information__type_support.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip_base_get_device_information__struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/mip_base_get_device_information__functions.h"

static void * microstrain_inertial_msgs__srv__mip_base_get_device_information__response__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__create();
}

static void microstrain_inertial_msgs__srv__mip_base_get_device_information__response__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response * ros_message = (microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response *)raw_ros_message;
  microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__mip_base_get_device_information__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__mip_base_get_device_information__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, MipBaseGetDeviceInformation_Response);

int8_t
_register_msg_type__srv__mip_base_get_device_information__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip_base_get_device_information__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__mip_base_get_device_information__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip_base_get_device_information__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__mip_base_get_device_information__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip_base_get_device_information__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__mip_base_get_device_information__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__mip_base_get_device_information__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__mip_base_get_device_information__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, MipBaseGetDeviceInformation_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__mip_base_get_device_information__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, MipBaseGetDeviceInformation)();

int8_t
_register_srv_type__srv__mip_base_get_device_information(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, MipBaseGetDeviceInformation)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__mip_base_get_device_information",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__type_support.h"
#include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__struct.h"
#include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__functions.h"

static void * microstrain_inertial_msgs__srv__raw_file_config_read__request__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__RawFileConfigRead_Request__create();
}

static void microstrain_inertial_msgs__srv__raw_file_config_read__request__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__RawFileConfigRead_Request * ros_message = (microstrain_inertial_msgs__srv__RawFileConfigRead_Request *)raw_ros_message;
  microstrain_inertial_msgs__srv__RawFileConfigRead_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__raw_file_config_read__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__raw_file_config_read__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, RawFileConfigRead_Request);

int8_t
_register_msg_type__srv__raw_file_config_read__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_read__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__raw_file_config_read__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_read__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__raw_file_config_read__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_read__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__raw_file_config_read__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_read__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__raw_file_config_read__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, RawFileConfigRead_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__raw_file_config_read__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__type_support.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__functions.h"

static void * microstrain_inertial_msgs__srv__raw_file_config_read__response__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__RawFileConfigRead_Response__create();
}

static void microstrain_inertial_msgs__srv__raw_file_config_read__response__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__RawFileConfigRead_Response * ros_message = (microstrain_inertial_msgs__srv__RawFileConfigRead_Response *)raw_ros_message;
  microstrain_inertial_msgs__srv__RawFileConfigRead_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__raw_file_config_read__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__raw_file_config_read__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, RawFileConfigRead_Response);

int8_t
_register_msg_type__srv__raw_file_config_read__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_read__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__raw_file_config_read__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_read__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__raw_file_config_read__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_read__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__raw_file_config_read__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_read__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__raw_file_config_read__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, RawFileConfigRead_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__raw_file_config_read__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, RawFileConfigRead)();

int8_t
_register_srv_type__srv__raw_file_config_read(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, RawFileConfigRead)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__raw_file_config_read",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "microstrain_inertial_msgs/srv/detail/raw_file_config_write__type_support.h"
#include "microstrain_inertial_msgs/srv/detail/raw_file_config_write__struct.h"
#include "microstrain_inertial_msgs/srv/detail/raw_file_config_write__functions.h"

static void * microstrain_inertial_msgs__srv__raw_file_config_write__request__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__create();
}

static void microstrain_inertial_msgs__srv__raw_file_config_write__request__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__RawFileConfigWrite_Request * ros_message = (microstrain_inertial_msgs__srv__RawFileConfigWrite_Request *)raw_ros_message;
  microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__raw_file_config_write__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__raw_file_config_write__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, RawFileConfigWrite_Request);

int8_t
_register_msg_type__srv__raw_file_config_write__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_write__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__raw_file_config_write__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_write__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__raw_file_config_write__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_write__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__raw_file_config_write__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_write__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__raw_file_config_write__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, RawFileConfigWrite_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__raw_file_config_write__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/raw_file_config_write__type_support.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/raw_file_config_write__struct.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/raw_file_config_write__functions.h"

static void * microstrain_inertial_msgs__srv__raw_file_config_write__response__create_ros_message(void)
{
  return microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__create();
}

static void microstrain_inertial_msgs__srv__raw_file_config_write__response__destroy_ros_message(void * raw_ros_message)
{
  microstrain_inertial_msgs__srv__RawFileConfigWrite_Response * ros_message = (microstrain_inertial_msgs__srv__RawFileConfigWrite_Response *)raw_ros_message;
  microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool microstrain_inertial_msgs__srv__raw_file_config_write__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * microstrain_inertial_msgs__srv__raw_file_config_write__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, RawFileConfigWrite_Response);

int8_t
_register_msg_type__srv__raw_file_config_write__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_write__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__raw_file_config_write__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_write__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__raw_file_config_write__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_write__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__raw_file_config_write__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&microstrain_inertial_msgs__srv__raw_file_config_write__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__raw_file_config_write__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(microstrain_inertial_msgs, srv, RawFileConfigWrite_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__raw_file_config_write__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, RawFileConfigWrite)();

int8_t
_register_srv_type__srv__raw_file_config_write(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, microstrain_inertial_msgs, srv, RawFileConfigWrite)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__raw_file_config_write",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_microstrain_inertial_msgs_s__rosidl_typesupport_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&microstrain_inertial_msgs__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__msg__human_readable_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_base_device_info(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_filter_aiding_measurement_summary(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_filter_aiding_measurement_summary_indicator(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_filter_gnss_dual_antenna_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_filter_gnss_dual_antenna_status_status_flags(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_filter_gnss_position_aiding_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_filter_gnss_position_aiding_status_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_filter_multi_antenna_offset_correction(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_filter_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_filter_status_gq7_status_flags(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_filter_status_gx5_status_flags(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_gnss_corrections_rtk_corrections_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_gnss_fix_info(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_gnss_fix_info_fix_flags(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_gnss_rf_error_detection(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_gnss_sbas_info(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_gnss_sbas_info_sbas_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_gps_timestamp(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_gps_timestamp_valid_flags(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_header(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_sensor_overrange_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_sensor_overrange_status_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_sensor_temperature_statistics(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_system_built_in_test(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__mip_system_time_sync_status(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__mip3dm_capture_gyro_bias__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__mip3dm_capture_gyro_bias__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__mip3dm_capture_gyro_bias(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__mip3dm_gpio_state_read__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__mip3dm_gpio_state_read__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__mip3dm_gpio_state_read(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__mip3dm_gpio_state_write__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__mip3dm_gpio_state_write__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__mip3dm_gpio_state_write(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__mip_base_get_device_information__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__mip_base_get_device_information__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__mip_base_get_device_information(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__raw_file_config_read__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__raw_file_config_read__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__raw_file_config_read(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__raw_file_config_write__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__raw_file_config_write__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__raw_file_config_write(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
