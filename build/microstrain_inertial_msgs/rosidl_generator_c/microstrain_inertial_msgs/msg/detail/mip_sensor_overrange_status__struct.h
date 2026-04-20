// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS__STRUCT_H_

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
// Member 'status'
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__struct.h"

/// Struct defined in msg/MipSensorOverrangeStatus in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/sensor_data/data/mip_field_sensor_overrange_status.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipSensorOverrangeStatus
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// Parsed out representation of the status bitfield
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus status;
} microstrain_inertial_msgs__msg__MipSensorOverrangeStatus;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipSensorOverrangeStatus.
typedef struct microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__Sequence
{
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS__STRUCT_H_
