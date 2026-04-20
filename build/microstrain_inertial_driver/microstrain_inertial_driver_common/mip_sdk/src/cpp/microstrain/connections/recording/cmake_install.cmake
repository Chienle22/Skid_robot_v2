# Install script for directory: /home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/connections/recording

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmicrostrain_recording_connectionx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/connections/recording/libmicrostrain_recording_connection.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/microstrain/connections/recording" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/connections/recording/recording_connection.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/microstrain/connections" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/connections/connection.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmicrostrain_recording_connectionx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/microstrain_recording_connection" TYPE FILE FILES
    "/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/connections/recording/microstrain_recording_connection-config.cmake"
    "/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/connections/recording/microstrain_recording_connection-config-version.cmake"
    )
endif()

