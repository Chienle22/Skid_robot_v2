// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatusStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MipFilterGnssDualAntennaStatusStatusFlags in the package microstrain_inertial_msgs.
/**
  * Message definition for Status Flags field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_gnss_dual_antenna_status.htm?Highlight=dual%20antenna
  *   Note: This message will never be published on it's own, only included in other messages.
 */
typedef struct microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags
{
  bool rcv_1_data_valid;
  bool rcv_2_data_valid;
  bool antenna_offsets_valid;
} microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags.
typedef struct microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence
{
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__STRUCT_H_
