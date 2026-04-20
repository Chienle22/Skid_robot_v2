// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipGnssRfErrorDetection.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RF_BAND_UNKNOWN'.
/**
  * Enum values for rf_band field
 */
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__RF_BAND_UNKNOWN = 0
};

/// Constant 'RF_BAND_L1'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__RF_BAND_L1 = 1
};

/// Constant 'RF_BAND_L2'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__RF_BAND_L2 = 2
};

/// Constant 'RF_BAND_L5'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__RF_BAND_L5 = 5
};

/// Constant 'JAMMING_STATE_UNKNOWN'.
/**
  * Enum values for jamming_state field
 */
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__JAMMING_STATE_UNKNOWN = 0
};

/// Constant 'JAMMING_STATE_NONE'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__JAMMING_STATE_NONE = 1
};

/// Constant 'JAMMING_STATE_PARTIAL'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__JAMMING_STATE_PARTIAL = 2
};

/// Constant 'JAMMING_STATE_SIGNIFICANT'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__JAMMING_STATE_SIGNIFICANT = 3
};

/// Constant 'SPOOFING_STATE_UNKNOWN'.
/**
  * Enum values for spoofing_state field
 */
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__SPOOFING_STATE_UNKNOWN = 0
};

/// Constant 'SPOOFING_STATE_NONE'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__SPOOFING_STATE_NONE = 1
};

/// Constant 'SPOOFING_STATE_PARTIAL'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__SPOOFING_STATE_PARTIAL = 2
};

/// Constant 'SPOOFING_STATE_SIGNIFICANT'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__SPOOFING_STATE_SIGNIFICANT = 3
};

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.h"

/// Struct defined in msg/MipGnssRfErrorDetection in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_rf_error_detection.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipGnssRfErrorDetection
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// RF Band of the reported information. See RF_BAND_* enums for possible values
  uint8_t rf_band;
  /// GNSS Jamming State (as reported by the GNSS module). See JAMMING_STATE_* enums for possible values
  uint8_t jamming_state;
  /// GNSS Spoofing State (as reported by the GNSS module). See SPOOFING_STATE_* enums for possible values
  uint8_t spoofing_state;
} microstrain_inertial_msgs__msg__MipGnssRfErrorDetection;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipGnssRfErrorDetection.
typedef struct microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence
{
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__STRUCT_H_
