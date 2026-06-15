# CMake generated Testfile for 
# Source directory: /root/Shared/MIAPR_Projekt/colcon_ws/src/mesh_navigation/mesh_layers
# Build directory: /root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_layers
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(mesh_layers_inflation_layer_test "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_layers/test_results/mesh_layers/mesh_layers_inflation_layer_test.gtest.xml" "--package-name" "mesh_layers" "--output-file" "/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_layers/ament_cmake_gtest/mesh_layers_inflation_layer_test.txt" "--command" "/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_layers/mesh_layers_inflation_layer_test" "--gtest_output=xml:/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_layers/test_results/mesh_layers/mesh_layers_inflation_layer_test.gtest.xml")
set_tests_properties(mesh_layers_inflation_layer_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_layers/mesh_layers_inflation_layer_test" TIMEOUT "60" WORKING_DIRECTORY "/root/Shared/MIAPR_Projekt/colcon_ws/build/mesh_layers" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/Shared/MIAPR_Projekt/colcon_ws/src/mesh_navigation/mesh_layers/CMakeLists.txt;60;ament_add_gtest;/root/Shared/MIAPR_Projekt/colcon_ws/src/mesh_navigation/mesh_layers/CMakeLists.txt;0;")
subdirs("gtest")
