# Install script for directory: /home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/extras

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmip_extrasx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/extras/libmip_extras.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/extras" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/extras/composite_result.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/extras" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/extras/descriptor_id.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/extras" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/extras/firmware_version.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/extras" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/extras/mip_extras_all.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/microstrain/cpp/mip/extras" TYPE FILE FILES "/home/chienle/Desktop/skid_robot_v2/src/hardware/microstrain_inertial/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/extras/platform_connection.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmip_extrasx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/mip_extras" TYPE FILE FILES
    "/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/extras/mip_extras-config.cmake"
    "/home/chienle/Desktop/skid_robot_v2/build/microstrain_inertial_driver/microstrain_inertial_driver_common/mip_sdk/src/cpp/mip/extras/mip_extras-config-version.cmake"
    )
endif()

