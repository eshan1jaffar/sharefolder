// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stsl_interfaces:srv/SampleElevation.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__STRUCT_H_
#define STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SampleElevation in the package stsl_interfaces.
typedef struct stsl_interfaces__srv__SampleElevation_Request
{
  double x;
  double y;
} stsl_interfaces__srv__SampleElevation_Request;

// Struct for a sequence of stsl_interfaces__srv__SampleElevation_Request.
typedef struct stsl_interfaces__srv__SampleElevation_Request__Sequence
{
  stsl_interfaces__srv__SampleElevation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__srv__SampleElevation_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SampleElevation in the package stsl_interfaces.
typedef struct stsl_interfaces__srv__SampleElevation_Response
{
  bool success;
  double elevation;
} stsl_interfaces__srv__SampleElevation_Response;

// Struct for a sequence of stsl_interfaces__srv__SampleElevation_Response.
typedef struct stsl_interfaces__srv__SampleElevation_Response__Sequence
{
  stsl_interfaces__srv__SampleElevation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__srv__SampleElevation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__STRUCT_H_
