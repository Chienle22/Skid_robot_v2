// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from microstrain_inertial_msgs:msg/MipBaseDeviceInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__rosidl_typesupport_introspection_c.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__functions.h"
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__struct.h"


// Include directives for member types
// Member `firmware_version`
// Member `model_name`
// Member `model_number`
// Member `serial_number`
// Member `lot_number`
// Member `device_options`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo__init(message_memory);
}

void microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_fini_function(void * message_memory)
{
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_message_member_array[6] = {
  {
    "firmware_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo, firmware_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo, model_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo, model_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo, serial_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lot_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo, lot_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo, device_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_message_members = {
  "microstrain_inertial_msgs__msg",  // message namespace
  "MipBaseDeviceInfo",  // message name
  6,  // number of fields
  sizeof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo),
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_message_member_array,  // message members
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_message_type_support_handle = {
  0,
  &microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_microstrain_inertial_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, microstrain_inertial_msgs, msg, MipBaseDeviceInfo)() {
  if (!microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_message_type_support_handle.typesupport_identifier) {
    microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &microstrain_inertial_msgs__msg__MipBaseDeviceInfo__rosidl_typesupport_introspection_c__MipBaseDeviceInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
