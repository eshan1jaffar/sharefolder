// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from joystick_msgs:msg/VelocityPair.idl
// generated code does not contain a copyright notice

#ifndef JOYSTICK_MSGS__MSG__DETAIL__VELOCITY_PAIR__STRUCT_H_
#define JOYSTICK_MSGS__MSG__DETAIL__VELOCITY_PAIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/VelocityPair in the package joystick_msgs.
typedef struct joystick_msgs__msg__VelocityPair
{
  std_msgs__msg__Header header;
  double left_velocity;
  double right_velocity;
  double duration;
} joystick_msgs__msg__VelocityPair;

// Struct for a sequence of joystick_msgs__msg__VelocityPair.
typedef struct joystick_msgs__msg__VelocityPair__Sequence
{
  joystick_msgs__msg__VelocityPair * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} joystick_msgs__msg__VelocityPair__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JOYSTICK_MSGS__MSG__DETAIL__VELOCITY_PAIR__STRUCT_H_
