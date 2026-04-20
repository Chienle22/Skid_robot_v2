// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummary.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_GNSS'.
/**
  * Possible values for type
 */
enum
{
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__TYPE_GNSS = 1
};

/// Constant 'TYPE_DUAL_ANTENNA'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__TYPE_DUAL_ANTENNA = 2
};

/// Constant 'TYPE_HEADING'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__TYPE_HEADING = 3
};

/// Constant 'TYPE_PRESSURE'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__TYPE_PRESSURE = 4
};

/// Constant 'TYPE_MAGNETOMETER'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__TYPE_MAGNETOMETER = 5
};

/// Constant 'TYPE_SPEED'.
enum
{
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__TYPE_SPEED = 6
};

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.h"
// Member 'indicator'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__struct.h"

/// Struct defined in msg/MipFilterAidingMeasurementSummary in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_aiding_measurement_summary.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// GPS time of week (seconds)
  double time_of_week;
  /// Source used when type is set to TYPE_GNSS to specify which GNSS module this message is for
  uint8_t source;
  /// Type of the aiding measurement. See TYPE_* enums for possible values
  uint8_t type;
  /// Parsed version of indicator bitfield
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator indicator;
} microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary.
typedef struct microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence
{
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__STRUCT_H_
