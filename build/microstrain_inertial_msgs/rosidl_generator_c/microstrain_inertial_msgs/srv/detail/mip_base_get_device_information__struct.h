// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:srv/MipBaseGetDeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MipBaseGetDeviceInformation in the package microstrain_inertial_msgs.
typedef struct microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request
{
  uint8_t structure_needs_at_least_one_member;
} microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request;

// Struct for a sequence of microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request.
typedef struct microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__Sequence
{
  microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'device_info'
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__struct.h"

/// Struct defined in srv/MipBaseGetDeviceInformation in the package microstrain_inertial_msgs.
typedef struct microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response
{
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo device_info;
} microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response;

// Struct for a sequence of microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response.
typedef struct microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__Sequence
{
  microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__STRUCT_H_
