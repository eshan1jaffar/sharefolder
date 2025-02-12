// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stsl_interfaces:msg/MineralDepositArray.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__STRUCT_H_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__STRUCT_H_

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
// Member 'deposits'
#include "stsl_interfaces/msg/detail/mineral_deposit__struct.h"

/// Struct defined in msg/MineralDepositArray in the package stsl_interfaces.
typedef struct stsl_interfaces__msg__MineralDepositArray
{
  std_msgs__msg__Header header;
  stsl_interfaces__msg__MineralDeposit__Sequence deposits;
} stsl_interfaces__msg__MineralDepositArray;

// Struct for a sequence of stsl_interfaces__msg__MineralDepositArray.
typedef struct stsl_interfaces__msg__MineralDepositArray__Sequence
{
  stsl_interfaces__msg__MineralDepositArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__msg__MineralDepositArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__STRUCT_H_
