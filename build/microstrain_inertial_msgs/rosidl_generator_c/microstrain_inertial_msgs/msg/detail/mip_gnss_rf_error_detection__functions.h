// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from microstrain_inertial_msgs:msg/MipGnssRfErrorDetection.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__FUNCTIONS_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "microstrain_inertial_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_rf_error_detection__struct.h"

/// Initialize msg/MipGnssRfErrorDetection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * microstrain_inertial_msgs__msg__MipGnssRfErrorDetection
 * )) before or use
 * microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__init(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection * msg);

/// Finalize msg/MipGnssRfErrorDetection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__fini(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection * msg);

/// Create msg/MipGnssRfErrorDetection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection *
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__create();

/// Destroy msg/MipGnssRfErrorDetection message.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__destroy(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection * msg);

/// Check for msg/MipGnssRfErrorDetection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__are_equal(const microstrain_inertial_msgs__msg__MipGnssRfErrorDetection * lhs, const microstrain_inertial_msgs__msg__MipGnssRfErrorDetection * rhs);

/// Copy a msg/MipGnssRfErrorDetection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__copy(
  const microstrain_inertial_msgs__msg__MipGnssRfErrorDetection * input,
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection * output);

/// Initialize array of msg/MipGnssRfErrorDetection messages.
/**
 * It allocates the memory for the number of elements and calls
 * microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__init(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence * array, size_t size);

/// Finalize array of msg/MipGnssRfErrorDetection messages.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__fini(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence * array);

/// Create array of msg/MipGnssRfErrorDetection messages.
/**
 * It allocates the memory for the array and calls
 * microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence *
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__create(size_t size);

/// Destroy array of msg/MipGnssRfErrorDetection messages.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__destroy(microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence * array);

/// Check for msg/MipGnssRfErrorDetection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence * lhs, const microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence * rhs);

/// Copy an array of msg/MipGnssRfErrorDetection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence * input,
  microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__FUNCTIONS_H_
