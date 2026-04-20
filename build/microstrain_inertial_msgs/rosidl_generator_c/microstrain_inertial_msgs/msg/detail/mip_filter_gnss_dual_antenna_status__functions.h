// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__FUNCTIONS_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "microstrain_inertial_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status__struct.h"

/// Initialize msg/MipFilterGnssDualAntennaStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus
 * )) before or use
 * microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__init(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * msg);

/// Finalize msg/MipFilterGnssDualAntennaStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__fini(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * msg);

/// Create msg/MipFilterGnssDualAntennaStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus *
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__create();

/// Destroy msg/MipFilterGnssDualAntennaStatus message.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__destroy(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * msg);

/// Check for msg/MipFilterGnssDualAntennaStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__are_equal(const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * lhs, const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * rhs);

/// Copy a msg/MipFilterGnssDualAntennaStatus message.
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
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__copy(
  const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * input,
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * output);

/// Initialize array of msg/MipFilterGnssDualAntennaStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__init(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * array, size_t size);

/// Finalize array of msg/MipFilterGnssDualAntennaStatus messages.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__fini(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * array);

/// Create array of msg/MipFilterGnssDualAntennaStatus messages.
/**
 * It allocates the memory for the array and calls
 * microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence *
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__create(size_t size);

/// Destroy array of msg/MipFilterGnssDualAntennaStatus messages.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__destroy(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * array);

/// Check for msg/MipFilterGnssDualAntennaStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * lhs, const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * rhs);

/// Copy an array of msg/MipFilterGnssDualAntennaStatus messages.
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
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * input,
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__FUNCTIONS_H_
