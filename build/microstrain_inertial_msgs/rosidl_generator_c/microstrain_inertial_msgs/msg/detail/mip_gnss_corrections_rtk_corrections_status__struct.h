// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__STRUCT_H_

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
// Member 'epoch_status'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__struct.h"
// Member 'dongle_status'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__struct.h"

/// Struct defined in msg/MipGnssCorrectionsRtkCorrectionsStatus in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_corrections/data/mip_field_gnss_rtk_corrections_status.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// GPS time of week (seconds)
  double time_of_week;
  /// GPS weeks since 1980 (weeks)
  uint16_t week_number;
  /// Parsed out version of the Epoch Status bitfield
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus epoch_status;
  /// Parsed out version of the Dongle Status bitfield
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus dongle_status;
  /// Latency of last GPS correction (seconds)
  float gps_correction_latency;
  /// Latency of last GLONASS correction (seconds)
  float glonass_correction_latency;
  /// Latency of last Galileo correction (seconds)
  float galileo_correction_latency;
  /// Latency of last Beidou correction (seconds)
  float beidou_correction_latency;
} microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus.
typedef struct microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__STRUCT_H_
