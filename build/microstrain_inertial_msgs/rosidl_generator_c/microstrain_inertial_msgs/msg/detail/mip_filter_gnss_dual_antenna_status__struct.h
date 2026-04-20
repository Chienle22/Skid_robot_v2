// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FIX_TYPE_FIX_NONE'.
/**
  * Possible values for fix_type
 */
enum
{
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__FIX_TYPE_FIX_NONE = 0
};

/// Constant 'FIX_TYPE_FIX_DA_FLOAT'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__FIX_TYPE_FIX_DA_FLOAT = 1
};

/// Constant 'FIX_TYPE_FIX_DA_FIXED'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__FIX_TYPE_FIX_DA_FIXED = 2
};

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.h"
// Member 'status_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__struct.h"

/// Struct defined in msg/MipFilterGnssDualAntennaStatus in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_gnss_dual_antenna_status.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// Last dual-antenna GNSS aiding measurement time of week (seconds)
  float time_of_week;
  /// Heading in radians
  float heading;
  /// Heading uncertainty in radians
  float heading_unc;
  /// Fix type indicator. See FIX_TYPE_* enums for possible values
  uint8_t fix_type;
  /// Parsed out version of the Status Flags bitfield
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags status_flags;
  /// Valid flags (0 = invalid, 1 = valid)
  uint16_t valid_flags;
} microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus.
typedef struct microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence
{
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__STRUCT_H_
