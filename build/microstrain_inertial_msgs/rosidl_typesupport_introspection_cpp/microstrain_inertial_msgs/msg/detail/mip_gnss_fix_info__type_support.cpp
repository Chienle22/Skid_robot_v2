// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssFixInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info__struct.hpp"
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

void MipGnssFixInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) microstrain_inertial_msgs::msg::MipGnssFixInfo(_init);
}

void MipGnssFixInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<microstrain_inertial_msgs::msg::MipGnssFixInfo *>(message_memory);
  typed_message->~MipGnssFixInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MipGnssFixInfo_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<microstrain_inertial_msgs::msg::MipHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::MipGnssFixInfo, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fix_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::MipGnssFixInfo, fix_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_sv",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::MipGnssFixInfo, num_sv),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fix_flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::MipGnssFixInfo, fix_flags),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MipGnssFixInfo_message_members = {
  "microstrain_inertial_msgs::msg",  // message namespace
  "MipGnssFixInfo",  // message name
  4,  // number of fields
  sizeof(microstrain_inertial_msgs::msg::MipGnssFixInfo),
  MipGnssFixInfo_message_member_array,  // message members
  MipGnssFixInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  MipGnssFixInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MipGnssFixInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MipGnssFixInfo_message_members,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipGnssFixInfo>()
{
  return &::microstrain_inertial_msgs::msg::rosidl_typesupport_introspection_cpp::MipGnssFixInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, microstrain_inertial_msgs, msg, MipGnssFixInfo)() {
  return &::microstrain_inertial_msgs::msg::rosidl_typesupport_introspection_cpp::MipGnssFixInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
