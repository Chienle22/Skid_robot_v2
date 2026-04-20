# Install script for directory: /home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/chienle/Desktop/skid_robot_v2/install/microstrain_inertial_driver")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_version.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_cmdqueue.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_descriptors.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_device_models.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_dispatch.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_field.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_interface.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_offsets.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_packet.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_parser.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_result.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_types.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_serialization.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/common.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/mip_all.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/commands_3dm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/commands_aiding.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/commands_base.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/commands_filter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/commands_gnss.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/commands_rtk.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/commands_system.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/data_filter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/data_gnss.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/data_sensor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/data_shared.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/mip/definitions/data_system.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/mip.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/mip_all.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/mip_cmdqueue.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/mip_descriptors.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/mip_field.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/mip_interface.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/mip_packet.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/mip_parser.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/mip_result.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/mip_serialization.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/common.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/commands_3dm.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/commands_aiding.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/commands_base.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/commands_filter.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/commands_gnss.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/commands_rtk.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/commands_system.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/data_filter.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/data_gnss.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/data_sensor.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/data_shared.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/definitions/data_system.hpp")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/cmake_install.cmake")
  include("/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/extras/cmake_install.cmake")

endif()

