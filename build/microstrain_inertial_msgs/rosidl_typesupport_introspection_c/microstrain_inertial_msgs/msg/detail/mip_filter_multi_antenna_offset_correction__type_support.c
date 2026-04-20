// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterMultiAntennaOffsetCorrection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "microstrain_inertial_msgs/msg/detail/mip_filter_multi_antenna_offset_correction__rosidl_typesupport_introspection_c.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_multi_antenna_offset_correction__functions.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_multi_antenna_offset_correction__struct.h"


// Include directives for member types
// Member `header`
#include "microstrain_inertial_msgs/msg/mip_header.h"
// Member `header`
#include "microstrain_inertial_msgs/msg/detail/mip_header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__init(message_memory);
}

void microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_fini_function(void * message_memory)
{
  microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__fini(message_memory);
}

size_t microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__size_function__MipFilterMultiAntennaOffsetCorrection__offset(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__get_const_function__MipFilterMultiAntennaOffsetCorrection__offset(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__get_function__MipFilterMultiAntennaOffsetCorrection__offset(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__fetch_function__MipFilterMultiAntennaOffsetCorrection__offset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__get_const_function__MipFilterMultiAntennaOffsetCorrection__offset(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__assign_function__MipFilterMultiAntennaOffsetCorrection__offset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__get_function__MipFilterMultiAntennaOffsetCorrection__offset(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "receiver_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection, receiver_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection, offset),  // bytes offset in struct
    NULL,  // default value
    microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__size_function__MipFilterMultiAntennaOffsetCorrection__offset,  // size() function pointer
    microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__get_const_function__MipFilterMultiAntennaOffsetCorrection__offset,  // get_const(index) function pointer
    microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__get_function__MipFilterMultiAntennaOffsetCorrection__offset,  // get(index) function pointer
    microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__fetch_function__MipFilterMultiAntennaOffsetCorrection__offset,  // fetch(index, &value) function pointer
    microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__assign_function__MipFilterMultiAntennaOffsetCorrection__offset,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_message_members = {
  "microstrain_inertial_msgs__msg",  // message namespace
  "MipFilterMultiAntennaOffsetCorrection",  // message name
  3,  // number of fields
  sizeof(microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection),
  microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_message_member_array,  // message members
  microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_init_function,  // function to initialize message memory (memory has to be allocated)
  microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_message_type_support_handle = {
  0,
  &microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_microstrain_inertial_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipFilterMultiAntennaOffsetCorrection)() {
  microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipHeader)();
  if (!microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_message_type_support_handle.typesupport_identifier) {
    microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__rosidl_typesupport_introspection_c__MipFilterMultiAntennaOffsetCorrection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
