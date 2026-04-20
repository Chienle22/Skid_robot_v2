// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_
{
  using Type = MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>;

  explicit MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->modem_state = 0;
      this->connection_type = 0;
      this->rssi = 0;
      this->signal_quality = 0;
      this->tower_change_indicator = 0;
      this->nmea_timeout_flag = false;
      this->server_timeout_flag = false;
      this->rtcm_timeout_flag = false;
      this->device_out_of_range_flag = false;
      this->corrections_unavailable_flag = false;
    }
  }

  explicit MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->modem_state = 0;
      this->connection_type = 0;
      this->rssi = 0;
      this->signal_quality = 0;
      this->tower_change_indicator = 0;
      this->nmea_timeout_flag = false;
      this->server_timeout_flag = false;
      this->rtcm_timeout_flag = false;
      this->device_out_of_range_flag = false;
      this->corrections_unavailable_flag = false;
    }
  }

  // field types and members
  using _modem_state_type =
    uint8_t;
  _modem_state_type modem_state;
  using _connection_type_type =
    uint8_t;
  _connection_type_type connection_type;
  using _rssi_type =
    int8_t;
  _rssi_type rssi;
  using _signal_quality_type =
    uint8_t;
  _signal_quality_type signal_quality;
  using _tower_change_indicator_type =
    uint8_t;
  _tower_change_indicator_type tower_change_indicator;
  using _nmea_timeout_flag_type =
    bool;
  _nmea_timeout_flag_type nmea_timeout_flag;
  using _server_timeout_flag_type =
    bool;
  _server_timeout_flag_type server_timeout_flag;
  using _rtcm_timeout_flag_type =
    bool;
  _rtcm_timeout_flag_type rtcm_timeout_flag;
  using _device_out_of_range_flag_type =
    bool;
  _device_out_of_range_flag_type device_out_of_range_flag;
  using _corrections_unavailable_flag_type =
    bool;
  _corrections_unavailable_flag_type corrections_unavailable_flag;

  // setters for named parameter idiom
  Type & set__modem_state(
    const uint8_t & _arg)
  {
    this->modem_state = _arg;
    return *this;
  }
  Type & set__connection_type(
    const uint8_t & _arg)
  {
    this->connection_type = _arg;
    return *this;
  }
  Type & set__rssi(
    const int8_t & _arg)
  {
    this->rssi = _arg;
    return *this;
  }
  Type & set__signal_quality(
    const uint8_t & _arg)
  {
    this->signal_quality = _arg;
    return *this;
  }
  Type & set__tower_change_indicator(
    const uint8_t & _arg)
  {
    this->tower_change_indicator = _arg;
    return *this;
  }
  Type & set__nmea_timeout_flag(
    const bool & _arg)
  {
    this->nmea_timeout_flag = _arg;
    return *this;
  }
  Type & set__server_timeout_flag(
    const bool & _arg)
  {
    this->server_timeout_flag = _arg;
    return *this;
  }
  Type & set__rtcm_timeout_flag(
    const bool & _arg)
  {
    this->rtcm_timeout_flag = _arg;
    return *this;
  }
  Type & set__device_out_of_range_flag(
    const bool & _arg)
  {
    this->device_out_of_range_flag = _arg;
    return *this;
  }
  Type & set__corrections_unavailable_flag(
    const bool & _arg)
  {
    this->corrections_unavailable_flag = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODEM_STATE_OFF =
    0u;
  static constexpr uint8_t MODEM_STATE_NO_NETWORK =
    1u;
  static constexpr uint8_t MODEM_STATE_NETWORK_CONNECTED =
    2u;
  static constexpr uint8_t MODEM_STATE_CONFIGURING_DATA_CONTEXT =
    3u;
  static constexpr uint8_t MODEM_STATE_ACTIVATING_DATA_CONTEXT =
    4u;
  static constexpr uint8_t MODEM_STATE_CONFIGURING_SOCKET =
    5u;
  static constexpr uint8_t MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE =
    6u;
  static constexpr uint8_t MODEM_STATE_CONNECTED_AND_IDLE =
    7u;
  static constexpr uint8_t MODEM_STATE_CONNECTED_AND_STREAMING =
    8u;
  static constexpr uint8_t CONNECTION_TYPE_NO_CONNECTION =
    0u;
  static constexpr uint8_t CONNECTION_TYPE_CONNECTION_2G =
    2u;
  static constexpr uint8_t CONNECTION_TYPE_CONNECTION_3G =
    3u;
  static constexpr uint8_t CONNECTION_TYPE_CONNECTION_4G =
    4u;
  static constexpr uint8_t CONNECTION_TYPE_CONNECTION_5G =
    5u;

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_ & other) const
  {
    if (this->modem_state != other.modem_state) {
      return false;
    }
    if (this->connection_type != other.connection_type) {
      return false;
    }
    if (this->rssi != other.rssi) {
      return false;
    }
    if (this->signal_quality != other.signal_quality) {
      return false;
    }
    if (this->tower_change_indicator != other.tower_change_indicator) {
      return false;
    }
    if (this->nmea_timeout_flag != other.nmea_timeout_flag) {
      return false;
    }
    if (this->server_timeout_flag != other.server_timeout_flag) {
      return false;
    }
    if (this->rtcm_timeout_flag != other.rtcm_timeout_flag) {
      return false;
    }
    if (this->device_out_of_range_flag != other.device_out_of_range_flag) {
      return false;
    }
    if (this->corrections_unavailable_flag != other.corrections_unavailable_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_

// alias to use template instance with default allocator
using MipGnssCorrectionsRtkCorrectionsStatusDongleStatus =
  microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::MODEM_STATE_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::MODEM_STATE_NO_NETWORK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::MODEM_STATE_NETWORK_CONNECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::MODEM_STATE_CONFIGURING_DATA_CONTEXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::MODEM_STATE_ACTIVATING_DATA_CONTEXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::MODEM_STATE_CONFIGURING_SOCKET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::MODEM_STATE_CONNECTED_AND_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::MODEM_STATE_CONNECTED_AND_STREAMING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::CONNECTION_TYPE_NO_CONNECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::CONNECTION_TYPE_CONNECTION_2G;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::CONNECTION_TYPE_CONNECTION_3G;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::CONNECTION_TYPE_CONNECTION_4G;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>::CONNECTION_TYPE_CONNECTION_5G;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__STRUCT_HPP_
