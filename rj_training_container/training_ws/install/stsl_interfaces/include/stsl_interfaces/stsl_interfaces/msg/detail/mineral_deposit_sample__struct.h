// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stsl_interfaces:msg/MineralDepositSample.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__STRUCT_H_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__STRUCT_H_

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
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"

/// Struct defined in msg/MineralDepositSample in the package stsl_interfaces.
typedef struct stsl_interfaces__msg__MineralDepositSample
{
  int32_t id;
  geometry_msgs__msg__PoseWithCovariance pose;
} stsl_interfaces__msg__MineralDepositSample;

// Struct for a sequence of stsl_interfaces__msg__MineralDepositSample.
typedef struct stsl_interfaces__msg__MineralDepositSample__Sequence
{
  stsl_interfaces__msg__MineralDepositSample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__msg__MineralDepositSample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__STRUCT_H_
