// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssRfErrorDetection.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_rf_error_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipGnssRfErrorDetection_spoofing_state
{
public:
  explicit Init_MipGnssRfErrorDetection_spoofing_state(::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection spoofing_state(::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection::_spoofing_state_type arg)
  {
    msg_.spoofing_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection msg_;
};

class Init_MipGnssRfErrorDetection_jamming_state
{
public:
  explicit Init_MipGnssRfErrorDetection_jamming_state(::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection & msg)
  : msg_(msg)
  {}
  Init_MipGnssRfErrorDetection_spoofing_state jamming_state(::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection::_jamming_state_type arg)
  {
    msg_.jamming_state = std::move(arg);
    return Init_MipGnssRfErrorDetection_spoofing_state(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection msg_;
};

class Init_MipGnssRfErrorDetection_rf_band
{
public:
  explicit Init_MipGnssRfErrorDetection_rf_band(::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection & msg)
  : msg_(msg)
  {}
  Init_MipGnssRfErrorDetection_jamming_state rf_band(::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection::_rf_band_type arg)
  {
    msg_.rf_band = std::move(arg);
    return Init_MipGnssRfErrorDetection_jamming_state(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection msg_;
};

class Init_MipGnssRfErrorDetection_header
{
public:
  Init_MipGnssRfErrorDetection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipGnssRfErrorDetection_rf_band header(::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipGnssRfErrorDetection_rf_band(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipGnssRfErrorDetection>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipGnssRfErrorDetection_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__BUILDER_HPP_
