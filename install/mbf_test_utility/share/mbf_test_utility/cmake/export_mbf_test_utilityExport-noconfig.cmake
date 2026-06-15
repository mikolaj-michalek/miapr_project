#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mbf_test_utility::mbf_test_utility_sim" for configuration ""
set_property(TARGET mbf_test_utility::mbf_test_utility_sim APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mbf_test_utility::mbf_test_utility_sim PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmbf_test_utility_sim.so"
  IMPORTED_SONAME_NOCONFIG "libmbf_test_utility_sim.so"
  )

list(APPEND _cmake_import_check_targets mbf_test_utility::mbf_test_utility_sim )
list(APPEND _cmake_import_check_files_for_mbf_test_utility::mbf_test_utility_sim "${_IMPORT_PREFIX}/lib/libmbf_test_utility_sim.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
