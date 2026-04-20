// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipGnssFixInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FIX_TYPE_FIX_3D'.
/**
  * Valid values for the fix_type field
 */
enum
{
  microstrain_inertial_msgs__msg__MipGnssFixInfo__FIX_TYPE_FIX_3D = 0
};

/// Constant 'FIX_TYPE_FIX_2D'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssFixInfo__FIX_TYPE_FIX_2D = 1
};

/// Constant 'FIX_TYPE_FIX_TIME_ONLY'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssFixInfo__FIX_TYPE_FIX_TIME_ONLY = 2
};

/// Constant 'FIX_TYPE_FIX_NONE'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssFixInfo__FIX_TYPE_FIX_NONE = 3
};

/// Constant 'FIX_TYPE_FIX_INVALID'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssFixInfo__FIX_TYPE_FIX_INVALID = 4
};

/// Constant 'FIX_TYPE_FIX_RTK_FLOAT'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssFixInfo__FIX_TYPE_FIX_RTK_FLOAT = 5
};

/// Constant 'FIX_TYPE_FIX_RTK_FIXED'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssFixInfo__FIX_TYPE_FIX_RTK_FIXED = 6
};

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.h"
// Member 'fix_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info_fix_flags__struct.h"

/// Struct defined in msg/MipGnssFixInfo in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_fix_info.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipGnssFixInfo
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// Fix type. See FIX_TYPE_* enums for possible values
  uint8_t fix_type;
  /// Number of satellites in view for this receiver
  uint8_t num_sv;
  /// Parsed out version of the fix_flags bitfield
  microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags fix_flags;
} microstrain_inertial_msgs__msg__MipGnssFixInfo;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipGnssFixInfo.
typedef struct microstrain_inertial_msgs__msg__MipGnssFixInfo__Sequence
{
  microstrain_inertial_msgs__msg__MipGnssFixInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipGnssFixInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__STRUCT_H_
