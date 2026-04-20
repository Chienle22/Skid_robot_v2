set(microstrain_serial_VERSION 3.0.0)


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was mip-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

set_and_check(MICROSTRAIN_SERIAL_LIBRARY_DIR "${PACKAGE_PREFIX_DIR}/lib")

set(MICROSTRAIN_SERIAL_INCLUDE_DIRS "")

# Include directories based on supported compilers
if(CMAKE_CXX_COMPILER)
  set_and_check(MICROSTRAIN_SERIAL_CPP_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include/microstrain/cpp")
  list(APPEND MICROSTRAIN_SERIAL_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include/microstrain/cpp")
endif()

if(CMAKE_C_COMPILER)
  set_and_check(MICROSTRAIN_SERIAL_C_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include/microstrain/c")
  list(APPEND MICROSTRAIN_SERIAL_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include/microstrain/c")
endif()

set(MICROSTRAIN_SERIAL_LIBRARY microstrain_serial)

# Add the link directories so CMake can find the library
link_directories("${MICROSTRAIN_SERIAL_LIBRARY_DIR}")

set(MICROSTRAIN_SERIAL_LIBRARIES "${MICROSTRAIN_SERIAL_LIBRARY}")

# Find components
macro(microstrain_serialcfg_find_component comp required)
  set(_microstrain_serial_REQUIRED)
  if(${required} AND microstrain_serial_FIND_REQUIRED)
    set(_microstrain_serial_REQUIRED REQUIRED)
  endif()

  set(__microstrain_serial_comp_nv "${comp}")

  find_package(${__microstrain_serial_comp_nv} ${microstrain_serial_VERSION} EXACT ${_microstrain_serial_REQUIRED} CONFIG)

  set(__microstrain_serial_comp_found ${${__microstrain_serial_comp_nv}_FOUND})

  # FindPackageHandleStandardArgs expects <package>_<component>_FOUND
  set(microstrain_serial_${comp}_FOUND ${__microstrain_serial_comp_found})

  string(TOUPPER ${comp} _MICROSTRAIN_SERIAL_COMP)
  set(microstrain_serial_${_MICROSTRAIN_SERIAL_COMP}_FOUND ${__microstrain_serial_comp_found})

  # Create list of libraries including all the found components
  if(__microstrain_serial_comp_found)
    list(APPEND MICROSTRAIN_SERIAL_LIBRARIES ${__microstrain_serial_comp_nv})
  endif()

  unset(_microstrain_serial_REQUIRED)
  unset(_microstrain_serial_QUIET)
  unset(__microstrain_serial_comp_nv)
  unset(__microstrain_serial_comp_found)
  unset(_MICROSTRAIN_SERIAL_COMP)
endmacro()

# Iterate requested components to find them
foreach(__microstrain_serial_comp IN LISTS microstrain_serial_FIND_COMPONENTS)
  microstrain_serialcfg_find_component(${__microstrain_serial_comp} ${microstrain_serial_FIND_REQUIRED_${__microstrain_serial_comp}} 0)
endforeach()

check_required_components(microstrain_serial)
