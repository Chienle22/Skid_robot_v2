// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummaryIndicator.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MipFilterAidingMeasurementSummaryIndicator in the package microstrain_inertial_msgs.
/**
  * Message definition for the indicator field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_aiding_measurement_summary.htm?Highlight=filter%20aiding%20measurement
  *   Note: This message will never be published on it's own, only included in other messages
 */
typedef struct microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator
{
  bool enabled;
  bool used;
  bool residual_high_warning;
  bool sample_time_warning;
  bool configuration_error;
  bool max_num_meas_exceeded;
} microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator.
typedef struct microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence
{
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__STRUCT_H_
