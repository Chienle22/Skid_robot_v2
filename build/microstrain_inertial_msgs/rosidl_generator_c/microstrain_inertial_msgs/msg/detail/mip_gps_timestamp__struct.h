// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipGpsTimestamp.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'valid_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__struct.h"

/// Struct defined in msg/MipGpsTimestamp in the package microstrain_inertial_msgs.
/**
  * Definition of a GPS timestamp.
  * For more information see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_gps_timestamp.htm
  *   Note: This message will never be published on it's own, only included in other messages
 */
typedef struct microstrain_inertial_msgs__msg__MipGpsTimestamp
{
  /// GPS time of week (seconds)
  double tow;
  /// GPS Week number since 1980 (weeks)
  uint16_t week_number;
  /// Valid Flags bitfield
  microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags valid_flags;
} microstrain_inertial_msgs__msg__MipGpsTimestamp;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipGpsTimestamp.
typedef struct microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence
{
  microstrain_inertial_msgs__msg__MipGpsTimestamp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__STRUCT_H_
