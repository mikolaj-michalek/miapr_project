#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mesh_msgs_transform::mesh_msgs_transform" for configuration ""
set_property(TARGET mesh_msgs_transform::mesh_msgs_transform APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mesh_msgs_transform::mesh_msgs_transform PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmesh_msgs_transform.a"
  )

list(APPEND _cmake_import_check_targets mesh_msgs_transform::mesh_msgs_transform )
list(APPEND _cmake_import_check_files_for_mesh_msgs_transform::mesh_msgs_transform "${_IMPORT_PREFIX}/lib/libmesh_msgs_transform.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
