// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipHeader.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__STRUCT_H_

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
#include "std_msgs/msg/detail/header__struct.h"
// Member 'gps_timestamp'
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp__struct.h"

/// Struct defined in msg/MipHeader in the package microstrain_inertial_msgs.
/**
  * Represents a standard header that all MIP fields should include at the beginning of their message definition
  *   Note: This message will never be published on it's own, only included in other messages
 */
typedef struct microstrain_inertial_msgs__msg__MipHeader
{
  /// Standard ROS header.
  ///   header.stamp will always be populated with the ROS time that this message was populated
  ///   header.frame_id is dependent on the full message definition. Most messages will not use this
  std_msgs__msg__Header header;
  /// If the message was triggered by an event, this will be set, otherwise it will be set to 0 (will be 0 most of the time)
  /// For more information, see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_event_source.htm
  uint8_t event_source;
  /// Reference timestamp of when the data was sampled if the device supports it. For devices that do not support this, it will always be 0
  /// For more information, see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_reference_timestamp.htm
  uint64_t reference_timestamp;
  /// GPS timestamp of when the data was sampled if the device supports it
  /// For more information, see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_gps_timestamp.htm
  /// Note that this timestamp may be blank in certain messages, but there will often be equivalent fields in the messages
  microstrain_inertial_msgs__msg__MipGpsTimestamp gps_timestamp;
} microstrain_inertial_msgs__msg__MipHeader;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipHeader.
typedef struct microstrain_inertial_msgs__msg__MipHeader__Sequence
{
  microstrain_inertial_msgs__msg__MipHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__STRUCT_H_
