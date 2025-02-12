// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from joystick_msgs:msg/VelocityPair.idl
// generated code does not contain a copyright notice
#include "joystick_msgs/msg/detail/velocity_pair__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
joystick_msgs__msg__VelocityPair__init(joystick_msgs__msg__VelocityPair * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    joystick_msgs__msg__VelocityPair__fini(msg);
    return false;
  }
  // left_velocity
  // right_velocity
  // duration
  return true;
}

void
joystick_msgs__msg__VelocityPair__fini(joystick_msgs__msg__VelocityPair * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left_velocity
  // right_velocity
  // duration
}

bool
joystick_msgs__msg__VelocityPair__are_equal(const joystick_msgs__msg__VelocityPair * lhs, const joystick_msgs__msg__VelocityPair * rhs)
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
  // left_velocity
  if (lhs->left_velocity != rhs->left_velocity) {
    return false;
  }
  // right_velocity
  if (lhs->right_velocity != rhs->right_velocity) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
joystick_msgs__msg__VelocityPair__copy(
  const joystick_msgs__msg__VelocityPair * input,
  joystick_msgs__msg__VelocityPair * output)
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
  // left_velocity
  output->left_velocity = input->left_velocity;
  // right_velocity
  output->right_velocity = input->right_velocity;
  // duration
  output->duration = input->duration;
  return true;
}

joystick_msgs__msg__VelocityPair *
joystick_msgs__msg__VelocityPair__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  joystick_msgs__msg__VelocityPair * msg = (joystick_msgs__msg__VelocityPair *)allocator.allocate(sizeof(joystick_msgs__msg__VelocityPair), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(joystick_msgs__msg__VelocityPair));
  bool success = joystick_msgs__msg__VelocityPair__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
joystick_msgs__msg__VelocityPair__destroy(joystick_msgs__msg__VelocityPair * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    joystick_msgs__msg__VelocityPair__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
joystick_msgs__msg__VelocityPair__Sequence__init(joystick_msgs__msg__VelocityPair__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  joystick_msgs__msg__VelocityPair * data = NULL;

  if (size) {
    data = (joystick_msgs__msg__VelocityPair *)allocator.zero_allocate(size, sizeof(joystick_msgs__msg__VelocityPair), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = joystick_msgs__msg__VelocityPair__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        joystick_msgs__msg__VelocityPair__fini(&data[i - 1]);
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
joystick_msgs__msg__VelocityPair__Sequence__fini(joystick_msgs__msg__VelocityPair__Sequence * array)
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
      joystick_msgs__msg__VelocityPair__fini(&array->data[i]);
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

joystick_msgs__msg__VelocityPair__Sequence *
joystick_msgs__msg__VelocityPair__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  joystick_msgs__msg__VelocityPair__Sequence * array = (joystick_msgs__msg__VelocityPair__Sequence *)allocator.allocate(sizeof(joystick_msgs__msg__VelocityPair__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = joystick_msgs__msg__VelocityPair__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
joystick_msgs__msg__VelocityPair__Sequence__destroy(joystick_msgs__msg__VelocityPair__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    joystick_msgs__msg__VelocityPair__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
joystick_msgs__msg__VelocityPair__Sequence__are_equal(const joystick_msgs__msg__VelocityPair__Sequence * lhs, const joystick_msgs__msg__VelocityPair__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!joystick_msgs__msg__VelocityPair__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
joystick_msgs__msg__VelocityPair__Sequence__copy(
  const joystick_msgs__msg__VelocityPair__Sequence * input,
  joystick_msgs__msg__VelocityPair__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(joystick_msgs__msg__VelocityPair);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    joystick_msgs__msg__VelocityPair * data =
      (joystick_msgs__msg__VelocityPair *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!joystick_msgs__msg__VelocityPair__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          joystick_msgs__msg__VelocityPair__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!joystick_msgs__msg__VelocityPair__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
