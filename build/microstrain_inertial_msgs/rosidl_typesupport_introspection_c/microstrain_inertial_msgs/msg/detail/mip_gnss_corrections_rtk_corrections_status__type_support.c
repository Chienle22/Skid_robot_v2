// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status__rosidl_typesupport_introspection_c.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status__functions.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status__struct.h"


// Include directives for member types
// Member `header`
#include "microstrain_inertial_msgs/msg/mip_header.h"
// Member `header`
#include "microstrain_inertial_msgs/msg/detail/mip_header__rosidl_typesupport_introspection_c.h"
// Member `epoch_status`
#include "microstrain_inertial_msgs/msg/mip_gnss_corrections_rtk_corrections_status_epoch_status.h"
// Member `epoch_status`
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__rosidl_typesupport_introspection_c.h"
// Member `dongle_status`
#include "microstrain_inertial_msgs/msg/mip_gnss_corrections_rtk_corrections_status_dongle_status.h"
// Member `dongle_status`
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__init(message_memory);
}

void microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_fini_function(void * message_memory)
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_of_week",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus, time_of_week),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "week_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus, week_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "epoch_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus, epoch_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dongle_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus, dongle_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_correction_latency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus, gps_correction_latency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "glonass_correction_latency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus, glonass_correction_latency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "galileo_correction_latency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus, galileo_correction_latency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beidou_correction_latency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus, beidou_correction_latency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_members = {
  "microstrain_inertial_msgs__msg",  // message namespace
  "MipGnssCorrectionsRtkCorrectionsStatus",  // message name
  9,  // number of fields
  sizeof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus),
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_member_array,  // message members
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_type_support_handle = {
  0,
  &microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_microstrain_inertial_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatus)() {
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipHeader)();
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusEpochStatus)();
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusDongleStatus)();
  if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_type_support_handle.typesupport_identifier) {
    microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
