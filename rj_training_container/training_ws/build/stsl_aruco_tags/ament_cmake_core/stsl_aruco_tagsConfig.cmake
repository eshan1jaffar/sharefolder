# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_stsl_aruco_tags_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED stsl_aruco_tags_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(stsl_aruco_tags_FOUND FALSE)
  elseif(NOT stsl_aruco_tags_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(stsl_aruco_tags_FOUND FALSE)
  endif()
  return()
endif()
set(_stsl_aruco_tags_CONFIG_INCLUDED TRUE)

# output package information
if(NOT stsl_aruco_tags_FIND_QUIETLY)
  message(STATUS "Found stsl_aruco_tags: 0.1.0 (${stsl_aruco_tags_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'stsl_aruco_tags' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${stsl_aruco_tags_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(stsl_aruco_tags_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "stsl_aruco_tags-extras.cmake;ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${stsl_aruco_tags_DIR}/${_extra}")
endforeach()
