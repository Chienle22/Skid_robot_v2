// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummary.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__FUNCTIONS_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "microstrain_inertial_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary__struct.h"

/// Initialize msg/MipFilterAidingMeasurementSummary message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary
 * )) before or use
 * microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__init(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * msg);

/// Finalize msg/MipFilterAidingMeasurementSummary message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__fini(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * msg);

/// Create msg/MipFilterAidingMeasurementSummary message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary *
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__create();

/// Destroy msg/MipFilterAidingMeasurementSummary message.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__destroy(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * msg);

/// Check for msg/MipFilterAidingMeasurementSummary message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__are_equal(const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * lhs, const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * rhs);

/// Copy a msg/MipFilterAidingMeasurementSummary message.
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
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__copy(
  const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * input,
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * output);

/// Initialize array of msg/MipFilterAidingMeasurementSummary messages.
/**
 * It allocates the memory for the number of elements and calls
 * microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__init(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * array, size_t size);

/// Finalize array of msg/MipFilterAidingMeasurementSummary messages.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__fini(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * array);

/// Create array of msg/MipFilterAidingMeasurementSummary messages.
/**
 * It allocates the memory for the array and calls
 * microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence *
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__create(size_t size);

/// Destroy array of msg/MipFilterAidingMeasurementSummary messages.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__destroy(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * array);

/// Check for msg/MipFilterAidingMeasurementSummary message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * lhs, const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * rhs);

/// Copy an array of msg/MipFilterAidingMeasurementSummary messages.
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
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * input,
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__FUNCTIONS_H_
