# Install script for directory: /home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/microstrain" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/microstrain/embedded_time.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/microstrain" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/microstrain/logging.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/microstrain" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/microstrain/platform.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/c/microstrain" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/c/microstrain/serialization.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/microstrain" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/embedded_time.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/microstrain" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/index.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/microstrain" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/logging.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/microstrain" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/platform.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/microstrain" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/serialization.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/microstrain" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/span.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/microstrain/serialization" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/serialization/readwrite.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/microstrain/serialization" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/serialization/serializer.hpp")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/connections/cmake_install.cmake")
  include("/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/microstrain/extras/cmake_install.cmake")

endif()

