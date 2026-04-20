// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:srv/RawFileConfigRead.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::RawFileConfigRead_Request>()
{
  return ::microstrain_inertial_msgs::srv::RawFileConfigRead_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace microstrain_inertial_msgs


namespace microstrain_inertial_msgs
{

namespace srv
{

namespace builder
{

class Init_RawFileConfigRead_Response_file_path
{
public:
  explicit Init_RawFileConfigRead_Response_file_path(::microstrain_inertial_msgs::srv::RawFileConfigRead_Response & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::srv::RawFileConfigRead_Response file_path(::microstrain_inertial_msgs::srv::RawFileConfigRead_Response::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::RawFileConfigRead_Response msg_;
};

class Init_RawFileConfigRead_Response_enable
{
public:
  Init_RawFileConfigRead_Response_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawFileConfigRead_Response_file_path enable(::microstrain_inertial_msgs::srv::RawFileConfigRead_Response::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_RawFileConfigRead_Response_file_path(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::RawFileConfigRead_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::RawFileConfigRead_Response>()
{
  return microstrain_inertial_msgs::srv::builder::Init_RawFileConfigRead_Response_enable();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__BUILDER_HPP_
