// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterMultiAntennaOffsetCorrection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_multi_antenna_offset_correction__struct.hpp"
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

void MipFilterMultiAntennaOffsetCorrection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection(_init);
}

void MipFilterMultiAntennaOffsetCorrection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection *>(message_memory);
  typed_message->~MipFilterMultiAntennaOffsetCorrection();
}

size_t size_function__MipFilterMultiAntennaOffsetCorrection__offset(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MipFilterMultiAntennaOffsetCorrection__offset(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MipFilterMultiAntennaOffsetCorrection__offset(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MipFilterMultiAntennaOffsetCorrection__offset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MipFilterMultiAntennaOffsetCorrection__offset(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MipFilterMultiAntennaOffsetCorrection__offset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MipFilterMultiAntennaOffsetCorrection__offset(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MipFilterMultiAntennaOffsetCorrection_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<microstrain_inertial_msgs::msg::MipHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "receiver_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection, receiver_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection, offset),  // bytes offset in struct
    nullptr,  // default value
    size_function__MipFilterMultiAntennaOffsetCorrection__offset,  // size() function pointer
    get_const_function__MipFilterMultiAntennaOffsetCorrection__offset,  // get_const(index) function pointer
    get_function__MipFilterMultiAntennaOffsetCorrection__offset,  // get(index) function pointer
    fetch_function__MipFilterMultiAntennaOffsetCorrection__offset,  // fetch(index, &value) function pointer
    assign_function__MipFilterMultiAntennaOffsetCorrection__offset,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MipFilterMultiAntennaOffsetCorrection_message_members = {
  "microstrain_inertial_msgs::msg",  // message namespace
  "MipFilterMultiAntennaOffsetCorrection",  // message name
  3,  // number of fields
  sizeof(microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection),
  MipFilterMultiAntennaOffsetCorrection_message_member_array,  // message members
  MipFilterMultiAntennaOffsetCorrection_init_function,  // function to initialize message memory (memory has to be allocated)
  MipFilterMultiAntennaOffsetCorrection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MipFilterMultiAntennaOffsetCorrection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MipFilterMultiAntennaOffsetCorrection_message_members,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection>()
{
  return &::microstrain_inertial_msgs::msg::rosidl_typesupport_introspection_cpp::MipFilterMultiAntennaOffsetCorrection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, microstrain_inertial_msgs, msg, MipFilterMultiAntennaOffsetCorrection)() {
  return &::microstrain_inertial_msgs::msg::rosidl_typesupport_introspection_cpp::MipFilterMultiAntennaOffsetCorrection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
