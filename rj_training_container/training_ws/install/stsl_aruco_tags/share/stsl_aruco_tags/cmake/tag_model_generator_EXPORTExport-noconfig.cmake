#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "stsl_aruco_tags::tag_model_generator" for configuration ""
set_property(TARGET stsl_aruco_tags::tag_model_generator APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(stsl_aruco_tags::tag_model_generator PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/stsl_aruco_tags/tag_model_generator"
  )

list(APPEND _IMPORT_CHECK_TARGETS stsl_aruco_tags::tag_model_generator )
list(APPEND _IMPORT_CHECK_FILES_FOR_stsl_aruco_tags::tag_model_generator "${_IMPORT_PREFIX}/lib/stsl_aruco_tags/tag_model_generator" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
