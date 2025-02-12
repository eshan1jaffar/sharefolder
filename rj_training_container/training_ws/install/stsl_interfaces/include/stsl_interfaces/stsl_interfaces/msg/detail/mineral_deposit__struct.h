// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stsl_interfaces:msg/MineralDeposit.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__STRUCT_H_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MineralDeposit in the package stsl_interfaces.
typedef struct stsl_interfaces__msg__MineralDeposit
{
  int32_t id;
  double heading;
  double range;
} stsl_interfaces__msg__MineralDeposit;

// Struct for a sequence of stsl_interfaces__msg__MineralDeposit.
typedef struct stsl_interfaces__msg__MineralDeposit__Sequence
{
  stsl_interfaces__msg__MineralDeposit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__msg__MineralDeposit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__STRUCT_H_
