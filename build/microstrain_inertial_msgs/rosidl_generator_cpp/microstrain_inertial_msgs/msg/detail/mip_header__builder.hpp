// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipHeader.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipHeader_gps_timestamp
{
public:
  explicit Init_MipHeader_gps_timestamp(::microstrain_inertial_msgs::msg::MipHeader & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipHeader gps_timestamp(::microstrain_inertial_msgs::msg::MipHeader::_gps_timestamp_type arg)
  {
    msg_.gps_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipHeader msg_;
};

class Init_MipHeader_reference_timestamp
{
public:
  explicit Init_MipHeader_reference_timestamp(::microstrain_inertial_msgs::msg::MipHeader & msg)
  : msg_(msg)
  {}
  Init_MipHeader_gps_timestamp reference_timestamp(::microstrain_inertial_msgs::msg::MipHeader::_reference_timestamp_type arg)
  {
    msg_.reference_timestamp = std::move(arg);
    return Init_MipHeader_gps_timestamp(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipHeader msg_;
};

class Init_MipHeader_event_source
{
public:
  explicit Init_MipHeader_event_source(::microstrain_inertial_msgs::msg::MipHeader & msg)
  : msg_(msg)
  {}
  Init_MipHeader_reference_timestamp event_source(::microstrain_inertial_msgs::msg::MipHeader::_event_source_type arg)
  {
    msg_.event_source = std::move(arg);
    return Init_MipHeader_reference_timestamp(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipHeader msg_;
};

class Init_MipHeader_header
{
public:
  Init_MipHeader_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipHeader_event_source header(::microstrain_inertial_msgs::msg::MipHeader::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipHeader_event_source(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipHeader>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipHeader_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__BUILDER_HPP_
