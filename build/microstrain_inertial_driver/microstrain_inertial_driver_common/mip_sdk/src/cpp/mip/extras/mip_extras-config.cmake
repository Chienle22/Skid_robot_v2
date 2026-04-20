set(mip_extras_VERSION 3.0.0)


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

set_and_check(MIP_EXTRAS_LIBRARY_DIR "${PACKAGE_PREFIX_DIR}/lib")

set(MIP_EXTRAS_INCLUDE_DIRS "")

# Include directories based on supported compilers
if(CMAKE_CXX_COMPILER)
  set_and_check(MIP_EXTRAS_CPP_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include/microstrain/cpp")
  list(APPEND MIP_EXTRAS_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include/microstrain/cpp")
endif()

if(CMAKE_C_COMPILER)
  set_and_check(MIP_EXTRAS_C_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include/microstrain/c")
  list(APPEND MIP_EXTRAS_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include/microstrain/c")
endif()

set(MIP_EXTRAS_LIBRARY mip_extras)

# Add the link directories so CMake can find the library
link_directories("${MIP_EXTRAS_LIBRARY_DIR}")

set(MIP_EXTRAS_LIBRARIES "${MIP_EXTRAS_LIBRARY}")

# Find components
macro(mip_extrascfg_find_component comp required)
  set(_mip_extras_REQUIRED)
  if(${required} AND mip_extras_FIND_REQUIRED)
    set(_mip_extras_REQUIRED REQUIRED)
  endif()

  set(__mip_extras_comp_nv "${comp}")

  find_package(${__mip_extras_comp_nv} ${mip_extras_VERSION} EXACT ${_mip_extras_REQUIRED} CONFIG)

  set(__mip_extras_comp_found ${${__mip_extras_comp_nv}_FOUND})

  # FindPackageHandleStandardArgs expects <package>_<component>_FOUND
  set(mip_extras_${comp}_FOUND ${__mip_extras_comp_found})

  string(TOUPPER ${comp} _MIP_EXTRAS_COMP)
  set(mip_extras_${_MIP_EXTRAS_COMP}_FOUND ${__mip_extras_comp_found})

  # Create list of libraries including all the found components
  if(__mip_extras_comp_found)
    list(APPEND MIP_EXTRAS_LIBRARIES ${__mip_extras_comp_nv})
  endif()

  unset(_mip_extras_REQUIRED)
  unset(_mip_extras_QUIET)
  unset(__mip_extras_comp_nv)
  unset(__mip_extras_comp_found)
  unset(_MIP_EXTRAS_COMP)
endmacro()

# Iterate requested components to find them
foreach(__mip_extras_comp IN LISTS mip_extras_FIND_COMPONENTS)
  mip_extrascfg_find_component(${__mip_extras_comp} ${mip_extras_FIND_REQUIRED_${__mip_extras_comp}} 0)
endforeach()

check_required_components(mip_extras)
