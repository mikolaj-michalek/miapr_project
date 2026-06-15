# CMake generated Testfile for 
# Source directory: /root/Shared/MIAPR_Projekt/colcon_ws/src/move_base_flex/mbf_simple_nav
# Build directory: /root/Shared/MIAPR_Projekt/build/mbf_simple_nav
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(mbf_simple_nav_integration_test "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/Shared/MIAPR_Projekt/build/mbf_simple_nav/test_results/mbf_simple_nav/mbf_simple_nav_integration_test.gtest.xml" "--package-name" "mbf_simple_nav" "--output-file" "/root/Shared/MIAPR_Projekt/build/mbf_simple_nav/ament_cmake_gmock/mbf_simple_nav_integration_test.txt" "--command" "/root/Shared/MIAPR_Projekt/build/mbf_simple_nav/mbf_simple_nav_integration_test" "--gtest_output=xml:/root/Shared/MIAPR_Projekt/build/mbf_simple_nav/test_results/mbf_simple_nav/mbf_simple_nav_integration_test.gtest.xml")
set_tests_properties(mbf_simple_nav_integration_test PROPERTIES  LABELS "gmock" REQUIRED_FILES "/root/Shared/MIAPR_Projekt/build/mbf_simple_nav/mbf_simple_nav_integration_test" TIMEOUT "60" WORKING_DIRECTORY "/root/Shared/MIAPR_Projekt/build/mbf_simple_nav" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gmock/cmake/ament_add_gmock_test.cmake;98;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;90;ament_add_gmock_test;/root/Shared/MIAPR_Projekt/colcon_ws/src/move_base_flex/mbf_simple_nav/CMakeLists.txt;76;ament_add_gmock;/root/Shared/MIAPR_Projekt/colcon_ws/src/move_base_flex/mbf_simple_nav/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
