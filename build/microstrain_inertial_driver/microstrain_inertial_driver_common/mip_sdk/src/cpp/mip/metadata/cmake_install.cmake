# Install script for directory: /home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmip_metadatax" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/libmip_metadata.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/mip_all_definitions.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/mip_definitions.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/mip_metadata.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/mip_structures.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/mip_meta_utils.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/common.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/commands_3dm.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/commands_aiding.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/commands_base.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/commands_filter.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/commands_gnss.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/commands_rtk.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/commands_system.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/data_filter.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/data_gnss.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/data_sensor.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/data_shared.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/metadata/definitions" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/definitions/data_system.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmip_metadatax" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/mip_metadata" TYPE FILE FILES
    "/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/mip_metadata-config.cmake"
    "/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/metadata/mip_metadata-config-version.cmake"
    )
endif()

