// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SBAS_SYSTEM_UNKNOWN'.
/**
  * Possible values for the sbas_system field
 */
enum
{
  microstrain_inertial_msgs__msg__MipGnssSbasInfo__SBAS_SYSTEM_UNKNOWN = 0
};

/// Constant 'SBAS_SYSTEM_WAAS'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssSbasInfo__SBAS_SYSTEM_WAAS = 1
};

/// Constant 'SBAS_SYSTEM_EGNOS'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssSbasInfo__SBAS_SYSTEM_EGNOS = 2
};

/// Constant 'SBAS_SYSTEM_MSAS'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssSbasInfo__SBAS_SYSTEM_MSAS = 3
};

/// Constant 'SBAS_SYSTEM_GAGAN'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssSbasInfo__SBAS_SYSTEM_GAGAN = 4
};

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.h"
// Member 'sbas_status'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__struct.h"

/// Struct defined in msg/MipGnssSbasInfo in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_sbas_info.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipGnssSbasInfo
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// GPS time of week (seconds)
  double time_of_week;
  /// GPS weeks since 1980 (weeks)
  uint16_t week_number;
  /// SBAS system if. See SBAS_SYSTEM_* enums for possible values
  uint8_t sbas_system;
  /// SBAS satellite id
  uint8_t sbas_id;
  /// Number of SBAS corrections
  uint8_t count;
  /// Parsed out version of the SBAS status bitfield
  microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus sbas_status;
} microstrain_inertial_msgs__msg__MipGnssSbasInfo;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipGnssSbasInfo.
typedef struct microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence
{
  microstrain_inertial_msgs__msg__MipGnssSbasInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__STRUCT_H_
