// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipSystemBuiltInTest.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_BUILT_IN_TEST__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_BUILT_IN_TEST__STRUCT_H_

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

/// Struct defined in msg/MipSystemBuiltInTest in the package microstrain_inertial_msgs.
/**
  * Message definition for the MIP field https://files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/0xa0/data/0x01.htm
 */
typedef struct microstrain_inertial_msgs__msg__MipSystemBuiltInTest
{
  /// Header containing common information
  ///   header.frame_id has no meaning in this message
  microstrain_inertial_msgs__msg__MipHeader header;
  /// Device-specific bitfield (128 bits).
  /// See device user manual.
  /// Bits are least-significant-byte first.
  /// For example, bit 0 is located at bit 0 of result[0], bit 1 is located at bit 1 of result[0], bit 8 is located at bit 0 of result[1], and bit 127 is located at bit 7 of result[15].
  uint8_t result[16];
} microstrain_inertial_msgs__msg__MipSystemBuiltInTest;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipSystemBuiltInTest.
typedef struct microstrain_inertial_msgs__msg__MipSystemBuiltInTest__Sequence
{
  microstrain_inertial_msgs__msg__MipSystemBuiltInTest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipSystemBuiltInTest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_BUILT_IN_TEST__STRUCT_H_
