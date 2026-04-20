// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipSystemTimeSyncStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.h"

/// Struct defined in msg/MipSystemTimeSyncStatus in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://files.microstrain.com/CV7+Online/external_content/dcp/Data/0xa0/data/0x02.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// True if sync with the PPS signal is currently valid. False if PPS feature is disabled or a PPS signal is not detected.
  bool time_sync;
  /// Elapsed time in seconds since last PPS was received, with a maximum value of 255.
  uint8_t last_pps_rcvd;
} microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus.
typedef struct microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__Sequence
{
  microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__STRUCT_H_
