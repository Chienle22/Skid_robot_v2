// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:srv/RawFileConfigWrite.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_WRITE__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_WRITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/srv/detail/raw_file_config_write__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace srv
{

namespace builder
{

class Init_RawFileConfigWrite_Request_file_path
{
public:
  explicit Init_RawFileConfigWrite_Request_file_path(::microstrain_inertial_msgs::srv::RawFileConfigWrite_Request & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::srv::RawFileConfigWrite_Request file_path(::microstrain_inertial_msgs::srv::RawFileConfigWrite_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::RawFileConfigWrite_Request msg_;
};

class Init_RawFileConfigWrite_Request_enable
{
public:
  Init_RawFileConfigWrite_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawFileConfigWrite_Request_file_path enable(::microstrain_inertial_msgs::srv::RawFileConfigWrite_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_RawFileConfigWrite_Request_file_path(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::RawFileConfigWrite_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::RawFileConfigWrite_Request>()
{
  return microstrain_inertial_msgs::srv::builder::Init_RawFileConfigWrite_Request_enable();
}

}  // namespace microstrain_inertial_msgs


namespace microstrain_inertial_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::RawFileConfigWrite_Response>()
{
  return ::microstrain_inertial_msgs::srv::RawFileConfigWrite_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_WRITE__BUILDER_HPP_
