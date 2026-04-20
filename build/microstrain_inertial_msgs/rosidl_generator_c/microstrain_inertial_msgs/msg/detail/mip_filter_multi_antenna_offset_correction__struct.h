// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipFilterMultiAntennaOffsetCorrection.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__STRUCT_H_

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

/// Struct defined in msg/MipFilterMultiAntennaOffsetCorrection in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_multi_antenna_offset_correction.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// Receiver ID. For GQ7, this will be 1 for GNSS1 and 2 for GNSS2
  uint8_t receiver_id;
  /// Offset (x, y, z) in meters
  float offset[3];
} microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection.
typedef struct microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__Sequence
{
  microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__STRUCT_H_
