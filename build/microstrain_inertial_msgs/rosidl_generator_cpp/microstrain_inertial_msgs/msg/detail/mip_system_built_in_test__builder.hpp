// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSystemBuiltInTest.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_BUILT_IN_TEST__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_BUILT_IN_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_system_built_in_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipSystemBuiltInTest_result
{
public:
  explicit Init_MipSystemBuiltInTest_result(::microstrain_inertial_msgs::msg::MipSystemBuiltInTest & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipSystemBuiltInTest result(::microstrain_inertial_msgs::msg::MipSystemBuiltInTest::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSystemBuiltInTest msg_;
};

class Init_MipSystemBuiltInTest_header
{
public:
  Init_MipSystemBuiltInTest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipSystemBuiltInTest_result header(::microstrain_inertial_msgs::msg::MipSystemBuiltInTest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipSystemBuiltInTest_result(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSystemBuiltInTest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipSystemBuiltInTest>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipSystemBuiltInTest_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_BUILT_IN_TEST__BUILDER_HPP_
