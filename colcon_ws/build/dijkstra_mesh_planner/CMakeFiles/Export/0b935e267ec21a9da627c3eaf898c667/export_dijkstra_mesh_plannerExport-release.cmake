#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dijkstra_mesh_planner::dijkstra_mesh_planner" for configuration "Release"
set_property(TARGET dijkstra_mesh_planner::dijkstra_mesh_planner APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(dijkstra_mesh_planner::dijkstra_mesh_planner PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libdijkstra_mesh_planner.so"
  IMPORTED_SONAME_RELEASE "libdijkstra_mesh_planner.so"
  )

list(APPEND _cmake_import_check_targets dijkstra_mesh_planner::dijkstra_mesh_planner )
list(APPEND _cmake_import_check_files_for_dijkstra_mesh_planner::dijkstra_mesh_planner "${_IMPORT_PREFIX}/lib/libdijkstra_mesh_planner.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
