// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from label_manager:srv/DeleteLabel.idl
// generated code does not contain a copyright notice
#include "label_manager/srv/detail/delete_label__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `uuid`
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

bool
label_manager__srv__DeleteLabel_Request__init(label_manager__srv__DeleteLabel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  if (!rosidl_runtime_c__String__init(&msg->uuid)) {
    label_manager__srv__DeleteLabel_Request__fini(msg);
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    label_manager__srv__DeleteLabel_Request__fini(msg);
    return false;
  }
  return true;
}

void
label_manager__srv__DeleteLabel_Request__fini(label_manager__srv__DeleteLabel_Request * msg)
{
  if (!msg) {
    return;
  }
  // uuid
  rosidl_runtime_c__String__fini(&msg->uuid);
  // label
  rosidl_runtime_c__String__fini(&msg->label);
}

bool
label_manager__srv__DeleteLabel_Request__are_equal(const label_manager__srv__DeleteLabel_Request * lhs, const label_manager__srv__DeleteLabel_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uuid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  return true;
}

bool
label_manager__srv__DeleteLabel_Request__copy(
  const label_manager__srv__DeleteLabel_Request * input,
  label_manager__srv__DeleteLabel_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // uuid
  if (!rosidl_runtime_c__String__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  return true;
}

label_manager__srv__DeleteLabel_Request *
label_manager__srv__DeleteLabel_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  label_manager__srv__DeleteLabel_Request * msg = (label_manager__srv__DeleteLabel_Request *)allocator.allocate(sizeof(label_manager__srv__DeleteLabel_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(label_manager__srv__DeleteLabel_Request));
  bool success = label_manager__srv__DeleteLabel_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
label_manager__srv__DeleteLabel_Request__destroy(label_manager__srv__DeleteLabel_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    label_manager__srv__DeleteLabel_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
label_manager__srv__DeleteLabel_Request__Sequence__init(label_manager__srv__DeleteLabel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  label_manager__srv__DeleteLabel_Request * data = NULL;

  if (size) {
    data = (label_manager__srv__DeleteLabel_Request *)allocator.zero_allocate(size, sizeof(label_manager__srv__DeleteLabel_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = label_manager__srv__DeleteLabel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        label_manager__srv__DeleteLabel_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
label_manager__srv__DeleteLabel_Request__Sequence__fini(label_manager__srv__DeleteLabel_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      label_manager__srv__DeleteLabel_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

label_manager__srv__DeleteLabel_Request__Sequence *
label_manager__srv__DeleteLabel_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  label_manager__srv__DeleteLabel_Request__Sequence * array = (label_manager__srv__DeleteLabel_Request__Sequence *)allocator.allocate(sizeof(label_manager__srv__DeleteLabel_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = label_manager__srv__DeleteLabel_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
label_manager__srv__DeleteLabel_Request__Sequence__destroy(label_manager__srv__DeleteLabel_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    label_manager__srv__DeleteLabel_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
label_manager__srv__DeleteLabel_Request__Sequence__are_equal(const label_manager__srv__DeleteLabel_Request__Sequence * lhs, const label_manager__srv__DeleteLabel_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!label_manager__srv__DeleteLabel_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
label_manager__srv__DeleteLabel_Request__Sequence__copy(
  const label_manager__srv__DeleteLabel_Request__Sequence * input,
  label_manager__srv__DeleteLabel_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(label_manager__srv__DeleteLabel_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    label_manager__srv__DeleteLabel_Request * data =
      (label_manager__srv__DeleteLabel_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!label_manager__srv__DeleteLabel_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          label_manager__srv__DeleteLabel_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!label_manager__srv__DeleteLabel_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `cluster`
#include "mesh_msgs/msg/detail/mesh_face_cluster__functions.h"

bool
label_manager__srv__DeleteLabel_Response__init(label_manager__srv__DeleteLabel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // cluster
  if (!mesh_msgs__msg__MeshFaceCluster__init(&msg->cluster)) {
    label_manager__srv__DeleteLabel_Response__fini(msg);
    return false;
  }
  return true;
}

void
label_manager__srv__DeleteLabel_Response__fini(label_manager__srv__DeleteLabel_Response * msg)
{
  if (!msg) {
    return;
  }
  // cluster
  mesh_msgs__msg__MeshFaceCluster__fini(&msg->cluster);
}

bool
label_manager__srv__DeleteLabel_Response__are_equal(const label_manager__srv__DeleteLabel_Response * lhs, const label_manager__srv__DeleteLabel_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cluster
  if (!mesh_msgs__msg__MeshFaceCluster__are_equal(
      &(lhs->cluster), &(rhs->cluster)))
  {
    return false;
  }
  return true;
}

bool
label_manager__srv__DeleteLabel_Response__copy(
  const label_manager__srv__DeleteLabel_Response * input,
  label_manager__srv__DeleteLabel_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // cluster
  if (!mesh_msgs__msg__MeshFaceCluster__copy(
      &(input->cluster), &(output->cluster)))
  {
    return false;
  }
  return true;
}

label_manager__srv__DeleteLabel_Response *
label_manager__srv__DeleteLabel_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  label_manager__srv__DeleteLabel_Response * msg = (label_manager__srv__DeleteLabel_Response *)allocator.allocate(sizeof(label_manager__srv__DeleteLabel_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(label_manager__srv__DeleteLabel_Response));
  bool success = label_manager__srv__DeleteLabel_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
label_manager__srv__DeleteLabel_Response__destroy(label_manager__srv__DeleteLabel_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    label_manager__srv__DeleteLabel_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
label_manager__srv__DeleteLabel_Response__Sequence__init(label_manager__srv__DeleteLabel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  label_manager__srv__DeleteLabel_Response * data = NULL;

  if (size) {
    data = (label_manager__srv__DeleteLabel_Response *)allocator.zero_allocate(size, sizeof(label_manager__srv__DeleteLabel_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = label_manager__srv__DeleteLabel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        label_manager__srv__DeleteLabel_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
label_manager__srv__DeleteLabel_Response__Sequence__fini(label_manager__srv__DeleteLabel_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      label_manager__srv__DeleteLabel_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

label_manager__srv__DeleteLabel_Response__Sequence *
label_manager__srv__DeleteLabel_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  label_manager__srv__DeleteLabel_Response__Sequence * array = (label_manager__srv__DeleteLabel_Response__Sequence *)allocator.allocate(sizeof(label_manager__srv__DeleteLabel_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = label_manager__srv__DeleteLabel_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
label_manager__srv__DeleteLabel_Response__Sequence__destroy(label_manager__srv__DeleteLabel_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    label_manager__srv__DeleteLabel_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
label_manager__srv__DeleteLabel_Response__Sequence__are_equal(const label_manager__srv__DeleteLabel_Response__Sequence * lhs, const label_manager__srv__DeleteLabel_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!label_manager__srv__DeleteLabel_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
label_manager__srv__DeleteLabel_Response__Sequence__copy(
  const label_manager__srv__DeleteLabel_Response__Sequence * input,
  label_manager__srv__DeleteLabel_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(label_manager__srv__DeleteLabel_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    label_manager__srv__DeleteLabel_Response * data =
      (label_manager__srv__DeleteLabel_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!label_manager__srv__DeleteLabel_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          label_manager__srv__DeleteLabel_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!label_manager__srv__DeleteLabel_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "label_manager/srv/detail/delete_label__functions.h"

bool
label_manager__srv__DeleteLabel_Event__init(label_manager__srv__DeleteLabel_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    label_manager__srv__DeleteLabel_Event__fini(msg);
    return false;
  }
  // request
  if (!label_manager__srv__DeleteLabel_Request__Sequence__init(&msg->request, 0)) {
    label_manager__srv__DeleteLabel_Event__fini(msg);
    return false;
  }
  // response
  if (!label_manager__srv__DeleteLabel_Response__Sequence__init(&msg->response, 0)) {
    label_manager__srv__DeleteLabel_Event__fini(msg);
    return false;
  }
  return true;
}

void
label_manager__srv__DeleteLabel_Event__fini(label_manager__srv__DeleteLabel_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  label_manager__srv__DeleteLabel_Request__Sequence__fini(&msg->request);
  // response
  label_manager__srv__DeleteLabel_Response__Sequence__fini(&msg->response);
}

bool
label_manager__srv__DeleteLabel_Event__are_equal(const label_manager__srv__DeleteLabel_Event * lhs, const label_manager__srv__DeleteLabel_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!label_manager__srv__DeleteLabel_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!label_manager__srv__DeleteLabel_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
label_manager__srv__DeleteLabel_Event__copy(
  const label_manager__srv__DeleteLabel_Event * input,
  label_manager__srv__DeleteLabel_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!label_manager__srv__DeleteLabel_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!label_manager__srv__DeleteLabel_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

label_manager__srv__DeleteLabel_Event *
label_manager__srv__DeleteLabel_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  label_manager__srv__DeleteLabel_Event * msg = (label_manager__srv__DeleteLabel_Event *)allocator.allocate(sizeof(label_manager__srv__DeleteLabel_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(label_manager__srv__DeleteLabel_Event));
  bool success = label_manager__srv__DeleteLabel_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
label_manager__srv__DeleteLabel_Event__destroy(label_manager__srv__DeleteLabel_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    label_manager__srv__DeleteLabel_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
label_manager__srv__DeleteLabel_Event__Sequence__init(label_manager__srv__DeleteLabel_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  label_manager__srv__DeleteLabel_Event * data = NULL;

  if (size) {
    data = (label_manager__srv__DeleteLabel_Event *)allocator.zero_allocate(size, sizeof(label_manager__srv__DeleteLabel_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = label_manager__srv__DeleteLabel_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        label_manager__srv__DeleteLabel_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
label_manager__srv__DeleteLabel_Event__Sequence__fini(label_manager__srv__DeleteLabel_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      label_manager__srv__DeleteLabel_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

label_manager__srv__DeleteLabel_Event__Sequence *
label_manager__srv__DeleteLabel_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  label_manager__srv__DeleteLabel_Event__Sequence * array = (label_manager__srv__DeleteLabel_Event__Sequence *)allocator.allocate(sizeof(label_manager__srv__DeleteLabel_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = label_manager__srv__DeleteLabel_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
label_manager__srv__DeleteLabel_Event__Sequence__destroy(label_manager__srv__DeleteLabel_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    label_manager__srv__DeleteLabel_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
label_manager__srv__DeleteLabel_Event__Sequence__are_equal(const label_manager__srv__DeleteLabel_Event__Sequence * lhs, const label_manager__srv__DeleteLabel_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!label_manager__srv__DeleteLabel_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
label_manager__srv__DeleteLabel_Event__Sequence__copy(
  const label_manager__srv__DeleteLabel_Event__Sequence * input,
  label_manager__srv__DeleteLabel_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(label_manager__srv__DeleteLabel_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    label_manager__srv__DeleteLabel_Event * data =
      (label_manager__srv__DeleteLabel_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!label_manager__srv__DeleteLabel_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          label_manager__srv__DeleteLabel_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!label_manager__srv__DeleteLabel_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
