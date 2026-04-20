// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__FUNCTIONS_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "microstrain_inertial_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info__struct.h"

/// Initialize msg/MipGnssSbasInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * microstrain_inertial_msgs__msg__MipGnssSbasInfo
 * )) before or use
 * microstrain_inertial_msgs__msg__MipGnssSbasInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipGnssSbasInfo__init(microstrain_inertial_msgs__msg__MipGnssSbasInfo * msg);

/// Finalize msg/MipGnssSbasInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipGnssSbasInfo__fini(microstrain_inertial_msgs__msg__MipGnssSbasInfo * msg);

/// Create msg/MipGnssSbasInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * microstrain_inertial_msgs__msg__MipGnssSbasInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
microstrain_inertial_msgs__msg__MipGnssSbasInfo *
microstrain_inertial_msgs__msg__MipGnssSbasInfo__create();

/// Destroy msg/MipGnssSbasInfo message.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipGnssSbasInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipGnssSbasInfo__destroy(microstrain_inertial_msgs__msg__MipGnssSbasInfo * msg);

/// Check for msg/MipGnssSbasInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipGnssSbasInfo__are_equal(const microstrain_inertial_msgs__msg__MipGnssSbasInfo * lhs, const microstrain_inertial_msgs__msg__MipGnssSbasInfo * rhs);

/// Copy a msg/MipGnssSbasInfo message.
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
microstrain_inertial_msgs__msg__MipGnssSbasInfo__copy(
  const microstrain_inertial_msgs__msg__MipGnssSbasInfo * input,
  microstrain_inertial_msgs__msg__MipGnssSbasInfo * output);

/// Initialize array of msg/MipGnssSbasInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * microstrain_inertial_msgs__msg__MipGnssSbasInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__init(microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * array, size_t size);

/// Finalize array of msg/MipGnssSbasInfo messages.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipGnssSbasInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__fini(microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * array);

/// Create array of msg/MipGnssSbasInfo messages.
/**
 * It allocates the memory for the array and calls
 * microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence *
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__create(size_t size);

/// Destroy array of msg/MipGnssSbasInfo messages.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__destroy(microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * array);

/// Check for msg/MipGnssSbasInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * lhs, const microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * rhs);

/// Copy an array of msg/MipGnssSbasInfo messages.
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
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * input,
  microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__FUNCTIONS_H_
