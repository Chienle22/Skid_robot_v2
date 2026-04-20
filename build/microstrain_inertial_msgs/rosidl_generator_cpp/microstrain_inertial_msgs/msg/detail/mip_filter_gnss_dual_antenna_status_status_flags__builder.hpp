// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatusStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipFilterGnssDualAntennaStatusStatusFlags_antenna_offsets_valid
{
public:
  explicit Init_MipFilterGnssDualAntennaStatusStatusFlags_antenna_offsets_valid(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags antenna_offsets_valid(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags::_antenna_offsets_valid_type arg)
  {
    msg_.antenna_offsets_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags msg_;
};

class Init_MipFilterGnssDualAntennaStatusStatusFlags_rcv_2_data_valid
{
public:
  explicit Init_MipFilterGnssDualAntennaStatusStatusFlags_rcv_2_data_valid(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssDualAntennaStatusStatusFlags_antenna_offsets_valid rcv_2_data_valid(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags::_rcv_2_data_valid_type arg)
  {
    msg_.rcv_2_data_valid = std::move(arg);
    return Init_MipFilterGnssDualAntennaStatusStatusFlags_antenna_offsets_valid(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags msg_;
};

class Init_MipFilterGnssDualAntennaStatusStatusFlags_rcv_1_data_valid
{
public:
  Init_MipFilterGnssDualAntennaStatusStatusFlags_rcv_1_data_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipFilterGnssDualAntennaStatusStatusFlags_rcv_2_data_valid rcv_1_data_valid(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags::_rcv_1_data_valid_type arg)
  {
    msg_.rcv_1_data_valid = std::move(arg);
    return Init_MipFilterGnssDualAntennaStatusStatusFlags_rcv_2_data_valid(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipFilterGnssDualAntennaStatusStatusFlags_rcv_1_data_valid();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__BUILDER_HPP_
