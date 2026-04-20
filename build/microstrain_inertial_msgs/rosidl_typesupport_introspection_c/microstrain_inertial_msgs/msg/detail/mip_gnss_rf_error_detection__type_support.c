// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from microstrain_inertial_msgs:msg/MipGnssRfErrorDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_rf_error_detection__rosidl_typesupport_introspection_c.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_rf_error_detection__functions.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_rf_error_detection__struct.h"


// Include directives for member types
// Member `header`
#include "microstrain_inertial_msgs/msg/mip_header.h"
// Member `header`
#include "microstrain_inertial_msgs/msg/detail/mip_header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__init(message_memory);
}

void microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_fini_function(void * message_memory)
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rf_band",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection, rf_band),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "jamming_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection, jamming_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spoofing_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection, spoofing_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_message_members = {
  "microstrain_inertial_msgs__msg",  // message namespace
  "MipGnssRfErrorDetection",  // message name
  4,  // number of fields
  sizeof(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection),
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_message_member_array,  // message members
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_message_type_support_handle = {
  0,
  &microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_microstrain_inertial_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipGnssRfErrorDetection)() {
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipHeader)();
  if (!microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_message_type_support_handle.typesupport_identifier) {
    microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__rosidl_typesupport_introspection_c__MipGnssRfErrorDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
