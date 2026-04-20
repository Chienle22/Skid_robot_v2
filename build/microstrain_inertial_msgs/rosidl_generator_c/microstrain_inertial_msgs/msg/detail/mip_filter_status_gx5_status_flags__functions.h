// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGx5StatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__FUNCTIONS_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "microstrain_inertial_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__struct.h"

/// Initialize msg/MipFilterStatusGx5StatusFlags message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags
 * )) before or use
 * microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__init(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * msg);

/// Finalize msg/MipFilterStatusGx5StatusFlags message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__fini(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * msg);

/// Create msg/MipFilterStatusGx5StatusFlags message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags *
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__create();

/// Destroy msg/MipFilterStatusGx5StatusFlags message.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__destroy(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * msg);

/// Check for msg/MipFilterStatusGx5StatusFlags message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__are_equal(const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * lhs, const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * rhs);

/// Copy a msg/MipFilterStatusGx5StatusFlags message.
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
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__copy(
  const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * input,
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * output);

/// Initialize array of msg/MipFilterStatusGx5StatusFlags messages.
/**
 * It allocates the memory for the number of elements and calls
 * microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__init(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * array, size_t size);

/// Finalize array of msg/MipFilterStatusGx5StatusFlags messages.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__fini(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * array);

/// Create array of msg/MipFilterStatusGx5StatusFlags messages.
/**
 * It allocates the memory for the array and calls
 * microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence *
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__create(size_t size);

/// Destroy array of msg/MipFilterStatusGx5StatusFlags messages.
/**
 * It calls
 * microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
void
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__destroy(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * array);

/// Check for msg/MipFilterStatusGx5StatusFlags message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_microstrain_inertial_msgs
bool
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * lhs, const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * rhs);

/// Copy an array of msg/MipFilterStatusGx5StatusFlags messages.
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
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * input,
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__FUNCTIONS_H_
