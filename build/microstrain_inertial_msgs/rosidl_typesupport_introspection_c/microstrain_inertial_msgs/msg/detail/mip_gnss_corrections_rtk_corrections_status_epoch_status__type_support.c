// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__rosidl_typesupport_introspection_c.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__functions.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__init(message_memory);
}

void microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_fini_function(void * message_memory)
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_message_member_array[9] = {
  {
    "antenna_location_received",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus, antenna_location_received),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "antenna_description_received",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus, antenna_description_received),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gps_received",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus, gps_received),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "galileo_received",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus, galileo_received),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "glonass_received",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus, glonass_received),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beidou_received",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus, beidou_received),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "using_gps_msm_messages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus, using_gps_msm_messages),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "using_glonass_msm_messages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus, using_glonass_msm_messages),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dongle_status_read_failed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus, dongle_status_read_failed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_message_members = {
  "microstrain_inertial_msgs__msg",  // message namespace
  "MipGnssCorrectionsRtkCorrectionsStatusEpochStatus",  // message name
  9,  // number of fields
  sizeof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus),
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_message_member_array,  // message members
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_message_type_support_handle = {
  0,
  &microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_microstrain_inertial_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusEpochStatus)() {
  if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_message_type_support_handle.typesupport_identifier) {
    microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__rosidl_typesupport_introspection_c__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
