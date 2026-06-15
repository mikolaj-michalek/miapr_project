# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:label_manager__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:label_manager__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:label_manager__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:label_manager__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:label_manager__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:label_manager__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:label_manager__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:label_manager__rosidl_typesupport_cpp;:label_manager__rosidl_generator_py")

# populate label_manager_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "label_manager::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'label_manager' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND label_manager_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
