// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipSensorTemperatureStatistics.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__STRUCT_H_

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

/// Struct defined in msg/MipSensorTemperatureStatistics in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/0x80/data/0x14.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// Degrees Celsius
  float min_temp;
  /// Degrees Celsius
  float max_temp;
  /// Degrees Celsius
  float mean_temp;
} microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics.
typedef struct microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence
{
  microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__STRUCT_H_
