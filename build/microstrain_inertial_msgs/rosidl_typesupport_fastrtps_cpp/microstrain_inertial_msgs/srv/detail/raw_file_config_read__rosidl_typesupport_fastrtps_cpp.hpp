// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from microstrain_inertial_msgs:srv/RawFileConfigRead.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace microstrain_inertial_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_serialize(
  const microstrain_inertial_msgs::srv::RawFileConfigRead_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::srv::RawFileConfigRead_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::srv::RawFileConfigRead_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_RawFileConfigRead_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace microstrain_inertial_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, srv, RawFileConfigRead_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace microstrain_inertial_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_serialize(
  const microstrain_inertial_msgs::srv::RawFileConfigRead_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::srv::RawFileConfigRead_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::srv::RawFileConfigRead_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_RawFileConfigRead_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace microstrain_inertial_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, srv, RawFileConfigRead_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, srv, RawFileConfigRead)();

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
