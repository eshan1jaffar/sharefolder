// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stsl_interfaces:msg/Tag.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__TAG__STRUCT_H_
#define STSL_INTERFACES__MSG__DETAIL__TAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Tag in the package stsl_interfaces.
typedef struct stsl_interfaces__msg__Tag
{
  int32_t id;
  geometry_msgs__msg__Pose pose;
} stsl_interfaces__msg__Tag;

// Struct for a sequence of stsl_interfaces__msg__Tag.
typedef struct stsl_interfaces__msg__Tag__Sequence
{
  stsl_interfaces__msg__Tag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__msg__Tag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STSL_INTERFACES__MSG__DETAIL__TAG__STRUCT_H_
