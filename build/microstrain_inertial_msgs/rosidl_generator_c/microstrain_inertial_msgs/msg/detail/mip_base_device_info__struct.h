// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipBaseDeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'firmware_version'
// Member 'model_name'
// Member 'model_number'
// Member 'serial_number'
// Member 'lot_number'
// Member 'device_options'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MipBaseDeviceInfo in the package microstrain_inertial_msgs.
/**
  * Message definition for https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Commands/base_command/data/base_device_info.htm
  *   Note: This message will never be published on it's own, only included in other messages.
 */
typedef struct microstrain_inertial_msgs__msg__MipBaseDeviceInfo
{
  /// String version of the firmware version on the device
  rosidl_runtime_c__String firmware_version;
  /// Model name (3DM-GQ7, 3DM-GX5, etc.)
  rosidl_runtime_c__String model_name;
  /// Model number (6284, 6285, etc.)
  rosidl_runtime_c__String model_number;
  /// Serial number (6284.109766, 6285.13404, etc.)
  rosidl_runtime_c__String serial_number;
  /// Lot number
  rosidl_runtime_c__String lot_number;
  /// Device options
  rosidl_runtime_c__String device_options;
} microstrain_inertial_msgs__msg__MipBaseDeviceInfo;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipBaseDeviceInfo.
typedef struct microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence
{
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__STRUCT_H_
