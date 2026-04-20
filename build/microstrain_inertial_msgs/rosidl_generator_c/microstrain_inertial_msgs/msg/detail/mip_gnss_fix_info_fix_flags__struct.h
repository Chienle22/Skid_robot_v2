// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipGnssFixInfoFixFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MipGnssFixInfoFixFlags in the package microstrain_inertial_msgs.
/**
  * Message definition for the Fix Type field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_fix_info.htm?Highlight=fix%20info
  *   Note: This message will never be published on it's own, only included in other messages.
 */
typedef struct microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags
{
  bool sbas_used;
  bool dgnss_used;
} microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags.
typedef struct microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__Sequence
{
  microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__STRUCT_H_
