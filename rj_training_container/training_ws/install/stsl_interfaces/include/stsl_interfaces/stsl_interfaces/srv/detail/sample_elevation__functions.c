// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stsl_interfaces:srv/SampleElevation.idl
// generated code does not contain a copyright notice
#include "stsl_interfaces/srv/detail/sample_elevation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
stsl_interfaces__srv__SampleElevation_Request__init(stsl_interfaces__srv__SampleElevation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
stsl_interfaces__srv__SampleElevation_Request__fini(stsl_interfaces__srv__SampleElevation_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
stsl_interfaces__srv__SampleElevation_Request__are_equal(const stsl_interfaces__srv__SampleElevation_Request * lhs, const stsl_interfaces__srv__SampleElevation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
stsl_interfaces__srv__SampleElevation_Request__copy(
  const stsl_interfaces__srv__SampleElevation_Request * input,
  stsl_interfaces__srv__SampleElevation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

stsl_interfaces__srv__SampleElevation_Request *
stsl_interfaces__srv__SampleElevation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__srv__SampleElevation_Request * msg = (stsl_interfaces__srv__SampleElevation_Request *)allocator.allocate(sizeof(stsl_interfaces__srv__SampleElevation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stsl_interfaces__srv__SampleElevation_Request));
  bool success = stsl_interfaces__srv__SampleElevation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stsl_interfaces__srv__SampleElevation_Request__destroy(stsl_interfaces__srv__SampleElevation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stsl_interfaces__srv__SampleElevation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stsl_interfaces__srv__SampleElevation_Request__Sequence__init(stsl_interfaces__srv__SampleElevation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__srv__SampleElevation_Request * data = NULL;

  if (size) {
    data = (stsl_interfaces__srv__SampleElevation_Request *)allocator.zero_allocate(size, sizeof(stsl_interfaces__srv__SampleElevation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stsl_interfaces__srv__SampleElevation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stsl_interfaces__srv__SampleElevation_Request__fini(&data[i - 1]);
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
stsl_interfaces__srv__SampleElevation_Request__Sequence__fini(stsl_interfaces__srv__SampleElevation_Request__Sequence * array)
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
      stsl_interfaces__srv__SampleElevation_Request__fini(&array->data[i]);
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

stsl_interfaces__srv__SampleElevation_Request__Sequence *
stsl_interfaces__srv__SampleElevation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__srv__SampleElevation_Request__Sequence * array = (stsl_interfaces__srv__SampleElevation_Request__Sequence *)allocator.allocate(sizeof(stsl_interfaces__srv__SampleElevation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stsl_interfaces__srv__SampleElevation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stsl_interfaces__srv__SampleElevation_Request__Sequence__destroy(stsl_interfaces__srv__SampleElevation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stsl_interfaces__srv__SampleElevation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stsl_interfaces__srv__SampleElevation_Request__Sequence__are_equal(const stsl_interfaces__srv__SampleElevation_Request__Sequence * lhs, const stsl_interfaces__srv__SampleElevation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stsl_interfaces__srv__SampleElevation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stsl_interfaces__srv__SampleElevation_Request__Sequence__copy(
  const stsl_interfaces__srv__SampleElevation_Request__Sequence * input,
  stsl_interfaces__srv__SampleElevation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stsl_interfaces__srv__SampleElevation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stsl_interfaces__srv__SampleElevation_Request * data =
      (stsl_interfaces__srv__SampleElevation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stsl_interfaces__srv__SampleElevation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stsl_interfaces__srv__SampleElevation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stsl_interfaces__srv__SampleElevation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
stsl_interfaces__srv__SampleElevation_Response__init(stsl_interfaces__srv__SampleElevation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // elevation
  return true;
}

void
stsl_interfaces__srv__SampleElevation_Response__fini(stsl_interfaces__srv__SampleElevation_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // elevation
}

bool
stsl_interfaces__srv__SampleElevation_Response__are_equal(const stsl_interfaces__srv__SampleElevation_Response * lhs, const stsl_interfaces__srv__SampleElevation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  return true;
}

bool
stsl_interfaces__srv__SampleElevation_Response__copy(
  const stsl_interfaces__srv__SampleElevation_Response * input,
  stsl_interfaces__srv__SampleElevation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // elevation
  output->elevation = input->elevation;
  return true;
}

stsl_interfaces__srv__SampleElevation_Response *
stsl_interfaces__srv__SampleElevation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__srv__SampleElevation_Response * msg = (stsl_interfaces__srv__SampleElevation_Response *)allocator.allocate(sizeof(stsl_interfaces__srv__SampleElevation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stsl_interfaces__srv__SampleElevation_Response));
  bool success = stsl_interfaces__srv__SampleElevation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stsl_interfaces__srv__SampleElevation_Response__destroy(stsl_interfaces__srv__SampleElevation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stsl_interfaces__srv__SampleElevation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stsl_interfaces__srv__SampleElevation_Response__Sequence__init(stsl_interfaces__srv__SampleElevation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__srv__SampleElevation_Response * data = NULL;

  if (size) {
    data = (stsl_interfaces__srv__SampleElevation_Response *)allocator.zero_allocate(size, sizeof(stsl_interfaces__srv__SampleElevation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stsl_interfaces__srv__SampleElevation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stsl_interfaces__srv__SampleElevation_Response__fini(&data[i - 1]);
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
stsl_interfaces__srv__SampleElevation_Response__Sequence__fini(stsl_interfaces__srv__SampleElevation_Response__Sequence * array)
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
      stsl_interfaces__srv__SampleElevation_Response__fini(&array->data[i]);
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

stsl_interfaces__srv__SampleElevation_Response__Sequence *
stsl_interfaces__srv__SampleElevation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__srv__SampleElevation_Response__Sequence * array = (stsl_interfaces__srv__SampleElevation_Response__Sequence *)allocator.allocate(sizeof(stsl_interfaces__srv__SampleElevation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stsl_interfaces__srv__SampleElevation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stsl_interfaces__srv__SampleElevation_Response__Sequence__destroy(stsl_interfaces__srv__SampleElevation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stsl_interfaces__srv__SampleElevation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stsl_interfaces__srv__SampleElevation_Response__Sequence__are_equal(const stsl_interfaces__srv__SampleElevation_Response__Sequence * lhs, const stsl_interfaces__srv__SampleElevation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stsl_interfaces__srv__SampleElevation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stsl_interfaces__srv__SampleElevation_Response__Sequence__copy(
  const stsl_interfaces__srv__SampleElevation_Response__Sequence * input,
  stsl_interfaces__srv__SampleElevation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stsl_interfaces__srv__SampleElevation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stsl_interfaces__srv__SampleElevation_Response * data =
      (stsl_interfaces__srv__SampleElevation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stsl_interfaces__srv__SampleElevation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stsl_interfaces__srv__SampleElevation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stsl_interfaces__srv__SampleElevation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
