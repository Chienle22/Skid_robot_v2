// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:srv/Mip3dmGpioStateRead.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_READ__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_READ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Mip3dmGpioStateRead in the package microstrain_inertial_msgs.
typedef struct microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request
{
  /// GPIO pin number counting from 1 which you want to read the configuration for
  uint8_t pin;
} microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request;

// Struct for a sequence of microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request.
typedef struct microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__Sequence
{
  microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Mip3dmGpioStateRead in the package microstrain_inertial_msgs.
typedef struct microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response
{
  uint8_t pin;
  /// The pin state
  bool state;
} microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response;

// Struct for a sequence of microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response.
typedef struct microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__Sequence
{
  microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_READ__STRUCT_H_
