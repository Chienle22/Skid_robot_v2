// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipBaseDeviceInfo.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // device_options, firmware_version, lot_number, model_name, model_number, serial_number
#include "rosidl_runtime_c/string_functions.h"  // device_options, firmware_version, lot_number, model_name, model_number, serial_number

// forward declare type support functions


using _MipBaseDeviceInfo__ros_msg_type = microstrain_inertial_msgs__msg__MipBaseDeviceInfo;

static bool _MipBaseDeviceInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipBaseDeviceInfo__ros_msg_type * ros_message = static_cast<const _MipBaseDeviceInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: firmware_version
  {
    const rosidl_runtime_c__String * str = &ros_message->firmware_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model_name
  {
    const rosidl_runtime_c__String * str = &ros_message->model_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: model_number
  {
    const rosidl_runtime_c__String * str = &ros_message->model_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: serial_number
  {
    const rosidl_runtime_c__String * str = &ros_message->serial_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lot_number
  {
    const rosidl_runtime_c__String * str = &ros_message->lot_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: device_options
  {
    const rosidl_runtime_c__String * str = &ros_message->device_options;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MipBaseDeviceInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipBaseDeviceInfo__ros_msg_type * ros_message = static_cast<_MipBaseDeviceInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: firmware_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->firmware_version.data) {
      rosidl_runtime_c__String__init(&ros_message->firmware_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->firmware_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'firmware_version'\n");
      return false;
    }
  }

  // Field name: model_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model_name.data) {
      rosidl_runtime_c__String__init(&ros_message->model_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model_name'\n");
      return false;
    }
  }

  // Field name: model_number
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model_number.data) {
      rosidl_runtime_c__String__init(&ros_message->model_number);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model_number,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model_number'\n");
      return false;
    }
  }

  // Field name: serial_number
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->serial_number.data) {
      rosidl_runtime_c__String__init(&ros_message->serial_number);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->serial_number,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'serial_number'\n");
      return false;
    }
  }

  // Field name: lot_number
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lot_number.data) {
      rosidl_runtime_c__String__init(&ros_message->lot_number);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lot_number,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lot_number'\n");
      return false;
    }
  }

  // Field name: device_options
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->device_options.data) {
      rosidl_runtime_c__String__init(&ros_message->device_options);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->device_options,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'device_options'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipBaseDeviceInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipBaseDeviceInfo__ros_msg_type * ros_message = static_cast<const _MipBaseDeviceInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name firmware_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->firmware_version.size + 1);
  // field.name model_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_name.size + 1);
  // field.name model_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model_number.size + 1);
  // field.name serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->serial_number.size + 1);
  // field.name lot_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lot_number.size + 1);
  // field.name device_options
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->device_options.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MipBaseDeviceInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipBaseDeviceInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipBaseDeviceInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: firmware_version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: model_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: model_number
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: serial_number
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lot_number
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: device_options
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = microstrain_inertial_msgs__msg__MipBaseDeviceInfo;
    is_plain =
      (
      offsetof(DataType, device_options) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipBaseDeviceInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipBaseDeviceInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipBaseDeviceInfo = {
  "microstrain_inertial_msgs::msg",
  "MipBaseDeviceInfo",
  _MipBaseDeviceInfo__cdr_serialize,
  _MipBaseDeviceInfo__cdr_deserialize,
  _MipBaseDeviceInfo__get_serialized_size,
  _MipBaseDeviceInfo__max_serialized_size
};

static rosidl_message_type_support_t _MipBaseDeviceInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipBaseDeviceInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipBaseDeviceInfo)() {
  return &_MipBaseDeviceInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
