// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipGpsTimestampValidFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MipGpsTimestampValidFlags in the package microstrain_inertial_msgs.
/**
  * Message definition for the valid_flags field of https://files.microstrain.com/CV7+Online/external_content/dcp/Data/0xff/data/0xd3.htm
  *   Note: This message will never be published on it's own, only included in other messages.
 */
typedef struct microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags
{
  /// Whole number seconds TOW has been set
  bool tow;
  /// Week number has been set
  bool week_number;
  /// Both TOW and Week Number have been set
  bool time_valid;
} microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags.
typedef struct microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__Sequence
{
  microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__STRUCT_H_
