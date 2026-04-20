// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/HumanReadableStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "microstrain_inertial_msgs/msg/detail/human_readable_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace microstrain_inertial_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HumanReadableStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) microstrain_inertial_msgs::msg::HumanReadableStatus(_init);
}

void HumanReadableStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<microstrain_inertial_msgs::msg::HumanReadableStatus *>(message_memory);
  typed_message->~HumanReadableStatus();
}

size_t size_function__HumanReadableStatus__status_flags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HumanReadableStatus__status_flags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__HumanReadableStatus__status_flags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__HumanReadableStatus__status_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__HumanReadableStatus__status_flags(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__HumanReadableStatus__status_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__HumanReadableStatus__status_flags(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__HumanReadableStatus__status_flags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__HumanReadableStatus__continuous_bit_flags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HumanReadableStatus__continuous_bit_flags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__HumanReadableStatus__continuous_bit_flags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__HumanReadableStatus__continuous_bit_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__HumanReadableStatus__continuous_bit_flags(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__HumanReadableStatus__continuous_bit_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__HumanReadableStatus__continuous_bit_flags(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__HumanReadableStatus__continuous_bit_flags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HumanReadableStatus_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::HumanReadableStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<microstrain_inertial_msgs::msg::MipBaseDeviceInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::HumanReadableStatus, device_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gnss_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::HumanReadableStatus, gnss_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dual_antenna_fix_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::HumanReadableStatus, dual_antenna_fix_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "filter_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::HumanReadableStatus, filter_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status_flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::HumanReadableStatus, status_flags),  // bytes offset in struct
    nullptr,  // default value
    size_function__HumanReadableStatus__status_flags,  // size() function pointer
    get_const_function__HumanReadableStatus__status_flags,  // get_const(index) function pointer
    get_function__HumanReadableStatus__status_flags,  // get(index) function pointer
    fetch_function__HumanReadableStatus__status_flags,  // fetch(index, &value) function pointer
    assign_function__HumanReadableStatus__status_flags,  // assign(index, value) function pointer
    resize_function__HumanReadableStatus__status_flags  // resize(index) function pointer
  },
  {
    "continuous_bit_flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::HumanReadableStatus, continuous_bit_flags),  // bytes offset in struct
    nullptr,  // default value
    size_function__HumanReadableStatus__continuous_bit_flags,  // size() function pointer
    get_const_function__HumanReadableStatus__continuous_bit_flags,  // get_const(index) function pointer
    get_function__HumanReadableStatus__continuous_bit_flags,  // get(index) function pointer
    fetch_function__HumanReadableStatus__continuous_bit_flags,  // fetch(index, &value) function pointer
    assign_function__HumanReadableStatus__continuous_bit_flags,  // assign(index, value) function pointer
    resize_function__HumanReadableStatus__continuous_bit_flags  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HumanReadableStatus_message_members = {
  "microstrain_inertial_msgs::msg",  // message namespace
  "HumanReadableStatus",  // message name
  7,  // number of fields
  sizeof(microstrain_inertial_msgs::msg::HumanReadableStatus),
  HumanReadableStatus_message_member_array,  // message members
  HumanReadableStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  HumanReadableStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HumanReadableStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HumanReadableStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace microstrain_inertial_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<microstrain_inertial_msgs::msg::HumanReadableStatus>()
{
  return &::microstrain_inertial_msgs::msg::rosidl_typesupport_introspection_cpp::HumanReadableStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, microstrain_inertial_msgs, msg, HumanReadableStatus)() {
  return &::microstrain_inertial_msgs::msg::rosidl_typesupport_introspection_cpp::HumanReadableStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
