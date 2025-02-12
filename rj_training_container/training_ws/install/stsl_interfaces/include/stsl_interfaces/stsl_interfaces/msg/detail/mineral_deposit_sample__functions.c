// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stsl_interfaces:msg/MineralDepositSample.idl
// generated code does not contain a copyright notice
#include "stsl_interfaces/msg/detail/mineral_deposit_sample__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"

bool
stsl_interfaces__msg__MineralDepositSample__init(stsl_interfaces__msg__MineralDepositSample * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    stsl_interfaces__msg__MineralDepositSample__fini(msg);
    return false;
  }
  return true;
}

void
stsl_interfaces__msg__MineralDepositSample__fini(stsl_interfaces__msg__MineralDepositSample * msg)
{
  if (!msg) {
    return;
  }
  // id
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
}

bool
stsl_interfaces__msg__MineralDepositSample__are_equal(const stsl_interfaces__msg__MineralDepositSample * lhs, const stsl_interfaces__msg__MineralDepositSample * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
stsl_interfaces__msg__MineralDepositSample__copy(
  const stsl_interfaces__msg__MineralDepositSample * input,
  stsl_interfaces__msg__MineralDepositSample * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

stsl_interfaces__msg__MineralDepositSample *
stsl_interfaces__msg__MineralDepositSample__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__msg__MineralDepositSample * msg = (stsl_interfaces__msg__MineralDepositSample *)allocator.allocate(sizeof(stsl_interfaces__msg__MineralDepositSample), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stsl_interfaces__msg__MineralDepositSample));
  bool success = stsl_interfaces__msg__MineralDepositSample__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stsl_interfaces__msg__MineralDepositSample__destroy(stsl_interfaces__msg__MineralDepositSample * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stsl_interfaces__msg__MineralDepositSample__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stsl_interfaces__msg__MineralDepositSample__Sequence__init(stsl_interfaces__msg__MineralDepositSample__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__msg__MineralDepositSample * data = NULL;

  if (size) {
    data = (stsl_interfaces__msg__MineralDepositSample *)allocator.zero_allocate(size, sizeof(stsl_interfaces__msg__MineralDepositSample), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stsl_interfaces__msg__MineralDepositSample__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stsl_interfaces__msg__MineralDepositSample__fini(&data[i - 1]);
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
stsl_interfaces__msg__MineralDepositSample__Sequence__fini(stsl_interfaces__msg__MineralDepositSample__Sequence * array)
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
      stsl_interfaces__msg__MineralDepositSample__fini(&array->data[i]);
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

stsl_interfaces__msg__MineralDepositSample__Sequence *
stsl_interfaces__msg__MineralDepositSample__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__msg__MineralDepositSample__Sequence * array = (stsl_interfaces__msg__MineralDepositSample__Sequence *)allocator.allocate(sizeof(stsl_interfaces__msg__MineralDepositSample__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stsl_interfaces__msg__MineralDepositSample__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stsl_interfaces__msg__MineralDepositSample__Sequence__destroy(stsl_interfaces__msg__MineralDepositSample__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stsl_interfaces__msg__MineralDepositSample__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stsl_interfaces__msg__MineralDepositSample__Sequence__are_equal(const stsl_interfaces__msg__MineralDepositSample__Sequence * lhs, const stsl_interfaces__msg__MineralDepositSample__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stsl_interfaces__msg__MineralDepositSample__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stsl_interfaces__msg__MineralDepositSample__Sequence__copy(
  const stsl_interfaces__msg__MineralDepositSample__Sequence * input,
  stsl_interfaces__msg__MineralDepositSample__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stsl_interfaces__msg__MineralDepositSample);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stsl_interfaces__msg__MineralDepositSample * data =
      (stsl_interfaces__msg__MineralDepositSample *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stsl_interfaces__msg__MineralDepositSample__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stsl_interfaces__msg__MineralDepositSample__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stsl_interfaces__msg__MineralDepositSample__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
