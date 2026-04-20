// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatusStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MipSensorOverrangeStatusStatus in the package microstrain_inertial_msgs.
/**
  * Message definition for the Status field of https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/sensor_data/data/mip_field_sensor_overrange_status.htm?Highlight=overrange
  *   Note: This message will never be published on it's own, only included in other messages.
 */
typedef struct microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus
{
  bool accel_x;
  bool accel_y;
  bool accel_z;
  bool gyro_x;
  bool gyro_y;
  bool gyro_z;
  bool mag_x;
  bool mag_y;
  bool mag_z;
  bool press;
} microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus.
typedef struct microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence
{
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__STRUCT_H_
