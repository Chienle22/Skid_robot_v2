// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FILTER_STATE_GX5_STARTUP'.
/**
  * Possible values for filter_state when the connected device is a philo device (GX5, CX5, CV5, etc)
 */
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__FILTER_STATE_GX5_STARTUP = 0
};

/// Constant 'FILTER_STATE_GX5_INIT'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__FILTER_STATE_GX5_INIT = 1
};

/// Constant 'FILTER_STATE_GX5_RUN_SOLUTION_VALID'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__FILTER_STATE_GX5_RUN_SOLUTION_VALID = 2
};

/// Constant 'FILTER_STATE_GX5_RUN_SOLUTION_ERROR'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__FILTER_STATE_GX5_RUN_SOLUTION_ERROR = 3
};

/// Constant 'FILTER_STATE_GQ7_INIT'.
/**
  * Possible values for filter_state when the connected device is a prospect device (GQ7, CV7, etc)
 */
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__FILTER_STATE_GQ7_INIT = 1
};

/// Constant 'FILTER_STATE_GQ7_VERT_GYRO'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__FILTER_STATE_GQ7_VERT_GYRO = 2
};

/// Constant 'FILTER_STATE_GQ7_AHRS'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__FILTER_STATE_GQ7_AHRS = 3
};

/// Constant 'FILTER_STATE_GQ7_FULL_NAV'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__FILTER_STATE_GQ7_FULL_NAV = 4
};

/// Constant 'DYNAMICS_MODE_GX5_PORTABLE'.
/**
  * Possible values for dynamics_mode when the connected device is a philo device (GX5, CX5, CV5, etc)
 */
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__DYNAMICS_MODE_GX5_PORTABLE = 1
};

/// Constant 'DYNAMICS_MODE_GX5_AUTOMOTIVE'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__DYNAMICS_MODE_GX5_AUTOMOTIVE = 2
};

/// Constant 'DYNAMICS_MODE_GX5_AIRBORNE'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__DYNAMICS_MODE_GX5_AIRBORNE = 3
};

/// Constant 'DYNAMICS_MODE_GQ7_DEFAULT'.
/**
  * Possible values for dynamics_mode when the connected device is a prospect device (GQ7, CV7, etc)
  * Note that on older firmware the GQ7 will often report 0 for it's dynamics mode, it is strongly advised to ignore this field
 */
enum
{
  microstrain_inertial_msgs__msg__MipFilterStatus__DYNAMICS_MODE_GQ7_DEFAULT = 1
};

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.h"
// Member 'gx5_status_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__struct.h"
// Member 'gq7_status_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__struct.h"

/// Struct defined in msg/MipFilterStatus in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_status.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipFilterStatus
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// Device-specific filter state. Please consult the user manual for definition. See FILTER_STATE_* enums for possible values
  uint16_t filter_state;
  /// Device-specific dynamics mode. Please consult the user manual for definition. See DYNAMICS_MODE_* enums for possible values
  /// Note that for prospect devices (GQ7, CV7, etc), this field has a default value, and should be mostly ignored
  uint16_t dynamics_mode;
  /// Parsed out version of the Status Flags bitfield when the connected device is a philo device (GX5, CX5, CV5, etc)
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags gx5_status_flags;
  /// Parsed out version of the Status Flags bitfield when the connected device is a prospect device (GQ7, CV7, etc)
  microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags gq7_status_flags;
} microstrain_inertial_msgs__msg__MipFilterStatus;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipFilterStatus.
typedef struct microstrain_inertial_msgs__msg__MipFilterStatus__Sequence
{
  microstrain_inertial_msgs__msg__MipFilterStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipFilterStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__STRUCT_H_
