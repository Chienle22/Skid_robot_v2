// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatusStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipFilterGnssPositionAidingStatusStatus_config_error
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_config_error(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus config_error(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_config_error_type arg)
  {
    msg_.config_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_no_fix
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_no_fix(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_config_error no_fix(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_no_fix_type arg)
  {
    msg_.no_fix = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_config_error(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_bei_b3
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_bei_b3(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_no_fix bei_b3(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_bei_b3_type arg)
  {
    msg_.bei_b3 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_no_fix(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_bei_b2
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_bei_b2(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_bei_b3 bei_b2(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_bei_b2_type arg)
  {
    msg_.bei_b2 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_bei_b3(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_bei_b1
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_bei_b1(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_bei_b2 bei_b1(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_bei_b1_type arg)
  {
    msg_.bei_b1 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_bei_b2(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_gal_e6
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_gal_e6(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_bei_b1 gal_e6(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_gal_e6_type arg)
  {
    msg_.gal_e6 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_bei_b1(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_gal_e5
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_gal_e5(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_gal_e6 gal_e5(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_gal_e5_type arg)
  {
    msg_.gal_e5 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_gal_e6(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_gal_e1
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_gal_e1(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_gal_e5 gal_e1(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_gal_e1_type arg)
  {
    msg_.gal_e1 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_gal_e5(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_glo_l2
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_glo_l2(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_gal_e1 glo_l2(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_glo_l2_type arg)
  {
    msg_.glo_l2 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_gal_e1(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_glo_l1
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_glo_l1(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_glo_l2 glo_l1(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_glo_l1_type arg)
  {
    msg_.glo_l1 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_glo_l2(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_gps_l5
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_gps_l5(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_glo_l1 gps_l5(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_gps_l5_type arg)
  {
    msg_.gps_l5 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_glo_l1(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_gps_l2
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_gps_l2(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_gps_l5 gps_l2(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_gps_l2_type arg)
  {
    msg_.gps_l2 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_gps_l5(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_gps_l1
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_gps_l1(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_gps_l2 gps_l1(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_gps_l1_type arg)
  {
    msg_.gps_l1 = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_gps_l2(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_integer_fix
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_integer_fix(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_gps_l1 integer_fix(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_integer_fix_type arg)
  {
    msg_.integer_fix = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_gps_l1(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_differential
{
public:
  explicit Init_MipFilterGnssPositionAidingStatusStatus_differential(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_integer_fix differential(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_differential_type arg)
  {
    msg_.differential = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_integer_fix(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatusStatus_tight_coupling
{
public:
  Init_MipFilterGnssPositionAidingStatusStatus_tight_coupling()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipFilterGnssPositionAidingStatusStatus_differential tight_coupling(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus::_tight_coupling_type arg)
  {
    msg_.tight_coupling = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatusStatus_differential(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipFilterGnssPositionAidingStatusStatus_tight_coupling();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS_STATUS__BUILDER_HPP_
