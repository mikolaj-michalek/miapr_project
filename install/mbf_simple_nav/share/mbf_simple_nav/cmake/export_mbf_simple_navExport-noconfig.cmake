#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mbf_simple_nav::mbf_simple_nav_lib" for configuration ""
set_property(TARGET mbf_simple_nav::mbf_simple_nav_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mbf_simple_nav::mbf_simple_nav_lib PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmbf_simple_nav_lib.so"
  IMPORTED_SONAME_NOCONFIG "libmbf_simple_nav_lib.so"
  )

list(APPEND _cmake_import_check_targets mbf_simple_nav::mbf_simple_nav_lib )
list(APPEND _cmake_import_check_files_for_mbf_simple_nav::mbf_simple_nav_lib "${_IMPORT_PREFIX}/lib/libmbf_simple_nav_lib.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
