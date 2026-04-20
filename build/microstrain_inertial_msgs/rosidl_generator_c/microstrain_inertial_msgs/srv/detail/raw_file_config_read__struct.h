// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:srv/RawFileConfigRead.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RawFileConfigRead in the package microstrain_inertial_msgs.
typedef struct microstrain_inertial_msgs__srv__RawFileConfigRead_Request
{
  uint8_t structure_needs_at_least_one_member;
} microstrain_inertial_msgs__srv__RawFileConfigRead_Request;

// Struct for a sequence of microstrain_inertial_msgs__srv__RawFileConfigRead_Request.
typedef struct microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence
{
  microstrain_inertial_msgs__srv__RawFileConfigRead_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'file_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RawFileConfigRead in the package microstrain_inertial_msgs.
typedef struct microstrain_inertial_msgs__srv__RawFileConfigRead_Response
{
  bool enable;
  /// Full path to the file we are recording the data to.
  rosidl_runtime_c__String file_path;
} microstrain_inertial_msgs__srv__RawFileConfigRead_Response;

// Struct for a sequence of microstrain_inertial_msgs__srv__RawFileConfigRead_Response.
typedef struct microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence
{
  microstrain_inertial_msgs__srv__RawFileConfigRead_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__STRUCT_H_
