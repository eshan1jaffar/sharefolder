// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stsl_interfaces:srv/ResetMineralDepositTracking.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__STRUCT_H_
#define STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__STRUCT_H_

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

/// Struct defined in srv/ResetMineralDepositTracking in the package stsl_interfaces.
typedef struct stsl_interfaces__srv__ResetMineralDepositTracking_Request
{
  int32_t id;
  geometry_msgs__msg__PoseWithCovariance pose;
} stsl_interfaces__srv__ResetMineralDepositTracking_Request;

// Struct for a sequence of stsl_interfaces__srv__ResetMineralDepositTracking_Request.
typedef struct stsl_interfaces__srv__ResetMineralDepositTracking_Request__Sequence
{
  stsl_interfaces__srv__ResetMineralDepositTracking_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__srv__ResetMineralDepositTracking_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResetMineralDepositTracking in the package stsl_interfaces.
typedef struct stsl_interfaces__srv__ResetMineralDepositTracking_Response
{
  uint8_t structure_needs_at_least_one_member;
} stsl_interfaces__srv__ResetMineralDepositTracking_Response;

// Struct for a sequence of stsl_interfaces__srv__ResetMineralDepositTracking_Response.
typedef struct stsl_interfaces__srv__ResetMineralDepositTracking_Response__Sequence
{
  stsl_interfaces__srv__ResetMineralDepositTracking_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__srv__ResetMineralDepositTracking_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__STRUCT_H_
