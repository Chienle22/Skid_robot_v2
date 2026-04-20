// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from microstrain_inertial_msgs:msg/HumanReadableStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "microstrain_inertial_msgs/msg/detail/human_readable_status__rosidl_typesupport_introspection_c.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "microstrain_inertial_msgs/msg/detail/human_readable_status__functions.h"
#include "microstrain_inertial_msgs/msg/detail/human_readable_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `device_info`
#include "microstrain_inertial_msgs/msg/mip_base_device_info.h"
// Member `device_info`
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__rosidl_typesupport_introspection_c.h"
// Member `gnss_state`
// Member `dual_antenna_fix_type`
// Member `filter_state`
// Member `status_flags`
// Member `continuous_bit_flags`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  microstrain_inertial_msgs__msg__HumanReadableStatus__init(message_memory);
}

void microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_fini_function(void * message_memory)
{
  microstrain_inertial_msgs__msg__HumanReadableStatus__fini(message_memory);
}

size_t microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__size_function__HumanReadableStatus__status_flags(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_const_function__HumanReadableStatus__status_flags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_function__HumanReadableStatus__status_flags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__fetch_function__HumanReadableStatus__status_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_const_function__HumanReadableStatus__status_flags(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__assign_function__HumanReadableStatus__status_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_function__HumanReadableStatus__status_flags(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__resize_function__HumanReadableStatus__status_flags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__size_function__HumanReadableStatus__continuous_bit_flags(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_const_function__HumanReadableStatus__continuous_bit_flags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_function__HumanReadableStatus__continuous_bit_flags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__fetch_function__HumanReadableStatus__continuous_bit_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_const_function__HumanReadableStatus__continuous_bit_flags(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__assign_function__HumanReadableStatus__continuous_bit_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_function__HumanReadableStatus__continuous_bit_flags(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__resize_function__HumanReadableStatus__continuous_bit_flags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__HumanReadableStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__HumanReadableStatus, device_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gnss_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__HumanReadableStatus, gnss_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dual_antenna_fix_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__HumanReadableStatus, dual_antenna_fix_type),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__HumanReadableStatus, filter_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__HumanReadableStatus, status_flags),  // bytes offset in struct
    NULL,  // default value
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__size_function__HumanReadableStatus__status_flags,  // size() function pointer
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_const_function__HumanReadableStatus__status_flags,  // get_const(index) function pointer
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_function__HumanReadableStatus__status_flags,  // get(index) function pointer
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__fetch_function__HumanReadableStatus__status_flags,  // fetch(index, &value) function pointer
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__assign_function__HumanReadableStatus__status_flags,  // assign(index, value) function pointer
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__resize_function__HumanReadableStatus__status_flags  // resize(index) function pointer
  },
  {
    "continuous_bit_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__HumanReadableStatus, continuous_bit_flags),  // bytes offset in struct
    NULL,  // default value
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__size_function__HumanReadableStatus__continuous_bit_flags,  // size() function pointer
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_const_function__HumanReadableStatus__continuous_bit_flags,  // get_const(index) function pointer
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__get_function__HumanReadableStatus__continuous_bit_flags,  // get(index) function pointer
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__fetch_function__HumanReadableStatus__continuous_bit_flags,  // fetch(index, &value) function pointer
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__assign_function__HumanReadableStatus__continuous_bit_flags,  // assign(index, value) function pointer
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__resize_function__HumanReadableStatus__continuous_bit_flags  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_message_members = {
  "microstrain_inertial_msgs__msg",  // message namespace
  "HumanReadableStatus",  // message name
  7,  // number of fields
  sizeof(microstrain_inertial_msgs__msg__HumanReadableStatus),
  microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_message_member_array,  // message members
  microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_message_type_support_handle = {
  0,
  &microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_microstrain_inertial_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, HumanReadableStatus)() {
  microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipBaseDeviceInfo)();
  if (!microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_message_type_support_handle.typesupport_identifier) {
    microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &microstrain_inertial_msgs__msg__HumanReadableStatus__rosidl_typesupport_introspection_c__HumanReadableStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
