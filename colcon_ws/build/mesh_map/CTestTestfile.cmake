# CMake generated Testfile for 
# Source directory: /root/Shared/MIAPR_Projekt/colcon_ws/src/mesh_navigation/mesh_map
# Build directory: /root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_map
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(mesh_map_mesh_map_test "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_map/test_results/mesh_map/mesh_map_mesh_map_test.gtest.xml" "--package-name" "mesh_map" "--output-file" "/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_map/ament_cmake_gtest/mesh_map_mesh_map_test.txt" "--command" "/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_map/mesh_map_mesh_map_test" "--gtest_output=xml:/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_map/test_results/mesh_map/mesh_map_mesh_map_test.gtest.xml")
set_tests_properties(mesh_map_mesh_map_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_map/mesh_map_mesh_map_test" TIMEOUT "60" WORKING_DIRECTORY "/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_map" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/Shared/MIAPR_Projekt/colcon_ws/src/mesh_navigation/mesh_map/CMakeLists.txt;89;ament_add_gtest;/root/Shared/MIAPR_Projekt/colcon_ws/src/mesh_navigation/mesh_map/CMakeLists.txt;0;")
subdirs("gtest")
