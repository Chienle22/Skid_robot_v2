// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipGnssSbasInfo_sbas_status
{
public:
  explicit Init_MipGnssSbasInfo_sbas_status(::microstrain_inertial_msgs::msg::MipGnssSbasInfo & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfo sbas_status(::microstrain_inertial_msgs::msg::MipGnssSbasInfo::_sbas_status_type arg)
  {
    msg_.sbas_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfo msg_;
};

class Init_MipGnssSbasInfo_count
{
public:
  explicit Init_MipGnssSbasInfo_count(::microstrain_inertial_msgs::msg::MipGnssSbasInfo & msg)
  : msg_(msg)
  {}
  Init_MipGnssSbasInfo_sbas_status count(::microstrain_inertial_msgs::msg::MipGnssSbasInfo::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_MipGnssSbasInfo_sbas_status(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfo msg_;
};

class Init_MipGnssSbasInfo_sbas_id
{
public:
  explicit Init_MipGnssSbasInfo_sbas_id(::microstrain_inertial_msgs::msg::MipGnssSbasInfo & msg)
  : msg_(msg)
  {}
  Init_MipGnssSbasInfo_count sbas_id(::microstrain_inertial_msgs::msg::MipGnssSbasInfo::_sbas_id_type arg)
  {
    msg_.sbas_id = std::move(arg);
    return Init_MipGnssSbasInfo_count(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfo msg_;
};

class Init_MipGnssSbasInfo_sbas_system
{
public:
  explicit Init_MipGnssSbasInfo_sbas_system(::microstrain_inertial_msgs::msg::MipGnssSbasInfo & msg)
  : msg_(msg)
  {}
  Init_MipGnssSbasInfo_sbas_id sbas_system(::microstrain_inertial_msgs::msg::MipGnssSbasInfo::_sbas_system_type arg)
  {
    msg_.sbas_system = std::move(arg);
    return Init_MipGnssSbasInfo_sbas_id(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfo msg_;
};

class Init_MipGnssSbasInfo_week_number
{
public:
  explicit Init_MipGnssSbasInfo_week_number(::microstrain_inertial_msgs::msg::MipGnssSbasInfo & msg)
  : msg_(msg)
  {}
  Init_MipGnssSbasInfo_sbas_system week_number(::microstrain_inertial_msgs::msg::MipGnssSbasInfo::_week_number_type arg)
  {
    msg_.week_number = std::move(arg);
    return Init_MipGnssSbasInfo_sbas_system(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfo msg_;
};

class Init_MipGnssSbasInfo_time_of_week
{
public:
  explicit Init_MipGnssSbasInfo_time_of_week(::microstrain_inertial_msgs::msg::MipGnssSbasInfo & msg)
  : msg_(msg)
  {}
  Init_MipGnssSbasInfo_week_number time_of_week(::microstrain_inertial_msgs::msg::MipGnssSbasInfo::_time_of_week_type arg)
  {
    msg_.time_of_week = std::move(arg);
    return Init_MipGnssSbasInfo_week_number(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfo msg_;
};

class Init_MipGnssSbasInfo_header
{
public:
  Init_MipGnssSbasInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipGnssSbasInfo_time_of_week header(::microstrain_inertial_msgs::msg::MipGnssSbasInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipGnssSbasInfo_time_of_week(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipGnssSbasInfo>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipGnssSbasInfo_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__BUILDER_HPP_
