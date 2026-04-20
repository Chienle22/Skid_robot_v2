// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__rosidl_typesupport_introspection_c.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__functions.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__struct.h"


// Include directives for member types
// Member `header`
#include "microstrain_inertial_msgs/msg/mip_header.h"
// Member `header`
#include "microstrain_inertial_msgs/msg/detail/mip_header__rosidl_typesupport_introspection_c.h"
// Member `gx5_status_flags`
#include "microstrain_inertial_msgs/msg/mip_filter_status_gx5_status_flags.h"
// Member `gx5_status_flags`
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__rosidl_typesupport_introspection_c.h"
// Member `gq7_status_flags`
#include "microstrain_inertial_msgs/msg/mip_filter_status_gq7_status_flags.h"
// Member `gq7_status_flags`
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  microstrain_inertial_msgs__msg__MipFilterStatus__init(message_memory);
}

void microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_fini_function(void * message_memory)
{
  microstrain_inertial_msgs__msg__MipFilterStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipFilterStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filter_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipFilterStatus, filter_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dynamics_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipFilterStatus, dynamics_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gx5_status_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipFilterStatus, gx5_status_flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gq7_status_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipFilterStatus, gq7_status_flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_members = {
  "microstrain_inertial_msgs__msg",  // message namespace
  "MipFilterStatus",  // message name
  5,  // number of fields
  sizeof(microstrain_inertial_msgs__msg__MipFilterStatus),
  microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_member_array,  // message members
  microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_type_support_handle = {
  0,
  &microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_microstrain_inertial_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipFilterStatus)() {
  microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipHeader)();
  microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipFilterStatusGx5StatusFlags)();
  microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipFilterStatusGq7StatusFlags)();
  if (!microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_type_support_handle.typesupport_identifier) {
    microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &microstrain_inertial_msgs__msg__MipFilterStatus__rosidl_typesupport_introspection_c__MipFilterStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
