// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGq7StatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FILTER_CONDITION_STABLE'.
/**
  * Possible values for filter_condition when the connected device is a prospect device (GQ7, CV7, etc)
 */
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__FILTER_CONDITION_STABLE = 1
};

/// Constant 'FILTER_CONDITION_CONVERGING'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__FILTER_CONDITION_CONVERGING = 2
};

/// Constant 'FILTER_CONDITION_UNSTABLE'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__FILTER_CONDITION_UNSTABLE = 3
};

/// Struct defined in msg/MipFilterStatusGq7StatusFlags in the package microstrain_inertial_msgs.
/**
  * Message definition for the Status Flags (GQ7, CV7, etc.) field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_status.htm?Highlight=filter%20status
  *   Note: This message will never be published on it's own, only included in other messages.
 */
typedef struct microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags
{
  /// See FILTER_CONDITION_* enums for possible values
  uint8_t filter_condition;
  bool roll_pitch_warning;
  bool heading_warning;
  bool position_warning;
  bool velocity_warning;
  bool imu_bias_warning;
  bool gnss_clk_warning;
  bool antenna_lever_arm_warning;
  bool mounting_transform_warning;
  /// No time synchronization pulse detected
  bool time_sync_warning;
  /// This includes all bits between 12 and 15, if any of them are set there is a GQ7 solution error
  bool solution_error;
} microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags.
typedef struct microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__Sequence
{
  microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__STRUCT_H_
