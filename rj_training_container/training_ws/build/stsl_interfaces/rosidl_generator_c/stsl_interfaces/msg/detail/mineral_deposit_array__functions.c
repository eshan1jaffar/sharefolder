// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stsl_interfaces:msg/MineralDepositArray.idl
// generated code does not contain a copyright notice
#include "stsl_interfaces/msg/detail/mineral_deposit_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `deposits`
#include "stsl_interfaces/msg/detail/mineral_deposit__functions.h"

bool
stsl_interfaces__msg__MineralDepositArray__init(stsl_interfaces__msg__MineralDepositArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    stsl_interfaces__msg__MineralDepositArray__fini(msg);
    return false;
  }
  // deposits
  if (!stsl_interfaces__msg__MineralDeposit__Sequence__init(&msg->deposits, 0)) {
    stsl_interfaces__msg__MineralDepositArray__fini(msg);
    return false;
  }
  return true;
}

void
stsl_interfaces__msg__MineralDepositArray__fini(stsl_interfaces__msg__MineralDepositArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // deposits
  stsl_interfaces__msg__MineralDeposit__Sequence__fini(&msg->deposits);
}

bool
stsl_interfaces__msg__MineralDepositArray__are_equal(const stsl_interfaces__msg__MineralDepositArray * lhs, const stsl_interfaces__msg__MineralDepositArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // deposits
  if (!stsl_interfaces__msg__MineralDeposit__Sequence__are_equal(
      &(lhs->deposits), &(rhs->deposits)))
  {
    return false;
  }
  return true;
}

bool
stsl_interfaces__msg__MineralDepositArray__copy(
  const stsl_interfaces__msg__MineralDepositArray * input,
  stsl_interfaces__msg__MineralDepositArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // deposits
  if (!stsl_interfaces__msg__MineralDeposit__Sequence__copy(
      &(input->deposits), &(output->deposits)))
  {
    return false;
  }
  return true;
}

stsl_interfaces__msg__MineralDepositArray *
stsl_interfaces__msg__MineralDepositArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__msg__MineralDepositArray * msg = (stsl_interfaces__msg__MineralDepositArray *)allocator.allocate(sizeof(stsl_interfaces__msg__MineralDepositArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stsl_interfaces__msg__MineralDepositArray));
  bool success = stsl_interfaces__msg__MineralDepositArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stsl_interfaces__msg__MineralDepositArray__destroy(stsl_interfaces__msg__MineralDepositArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stsl_interfaces__msg__MineralDepositArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stsl_interfaces__msg__MineralDepositArray__Sequence__init(stsl_interfaces__msg__MineralDepositArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__msg__MineralDepositArray * data = NULL;

  if (size) {
    data = (stsl_interfaces__msg__MineralDepositArray *)allocator.zero_allocate(size, sizeof(stsl_interfaces__msg__MineralDepositArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stsl_interfaces__msg__MineralDepositArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stsl_interfaces__msg__MineralDepositArray__fini(&data[i - 1]);
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
stsl_interfaces__msg__MineralDepositArray__Sequence__fini(stsl_interfaces__msg__MineralDepositArray__Sequence * array)
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
      stsl_interfaces__msg__MineralDepositArray__fini(&array->data[i]);
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

stsl_interfaces__msg__MineralDepositArray__Sequence *
stsl_interfaces__msg__MineralDepositArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stsl_interfaces__msg__MineralDepositArray__Sequence * array = (stsl_interfaces__msg__MineralDepositArray__Sequence *)allocator.allocate(sizeof(stsl_interfaces__msg__MineralDepositArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stsl_interfaces__msg__MineralDepositArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stsl_interfaces__msg__MineralDepositArray__Sequence__destroy(stsl_interfaces__msg__MineralDepositArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stsl_interfaces__msg__MineralDepositArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stsl_interfaces__msg__MineralDepositArray__Sequence__are_equal(const stsl_interfaces__msg__MineralDepositArray__Sequence * lhs, const stsl_interfaces__msg__MineralDepositArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stsl_interfaces__msg__MineralDepositArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stsl_interfaces__msg__MineralDepositArray__Sequence__copy(
  const stsl_interfaces__msg__MineralDepositArray__Sequence * input,
  stsl_interfaces__msg__MineralDepositArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stsl_interfaces__msg__MineralDepositArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stsl_interfaces__msg__MineralDepositArray * data =
      (stsl_interfaces__msg__MineralDepositArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stsl_interfaces__msg__MineralDepositArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stsl_interfaces__msg__MineralDepositArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stsl_interfaces__msg__MineralDepositArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
