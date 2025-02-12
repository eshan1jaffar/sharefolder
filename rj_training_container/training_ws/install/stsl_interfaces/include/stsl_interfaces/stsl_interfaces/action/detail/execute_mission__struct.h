// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stsl_interfaces:action/ExecuteMission.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__ACTION__DETAIL__EXECUTE_MISSION__STRUCT_H_
#define STSL_INTERFACES__ACTION__DETAIL__EXECUTE_MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ExecuteMission in the package stsl_interfaces.
typedef struct stsl_interfaces__action__ExecuteMission_Goal
{
  uint8_t structure_needs_at_least_one_member;
} stsl_interfaces__action__ExecuteMission_Goal;

// Struct for a sequence of stsl_interfaces__action__ExecuteMission_Goal.
typedef struct stsl_interfaces__action__ExecuteMission_Goal__Sequence
{
  stsl_interfaces__action__ExecuteMission_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__action__ExecuteMission_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ExecuteMission in the package stsl_interfaces.
typedef struct stsl_interfaces__action__ExecuteMission_Result
{
  uint8_t structure_needs_at_least_one_member;
} stsl_interfaces__action__ExecuteMission_Result;

// Struct for a sequence of stsl_interfaces__action__ExecuteMission_Result.
typedef struct stsl_interfaces__action__ExecuteMission_Result__Sequence
{
  stsl_interfaces__action__ExecuteMission_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__action__ExecuteMission_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ExecuteMission in the package stsl_interfaces.
typedef struct stsl_interfaces__action__ExecuteMission_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} stsl_interfaces__action__ExecuteMission_Feedback;

// Struct for a sequence of stsl_interfaces__action__ExecuteMission_Feedback.
typedef struct stsl_interfaces__action__ExecuteMission_Feedback__Sequence
{
  stsl_interfaces__action__ExecuteMission_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__action__ExecuteMission_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "stsl_interfaces/action/detail/execute_mission__struct.h"

/// Struct defined in action/ExecuteMission in the package stsl_interfaces.
typedef struct stsl_interfaces__action__ExecuteMission_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  stsl_interfaces__action__ExecuteMission_Goal goal;
} stsl_interfaces__action__ExecuteMission_SendGoal_Request;

// Struct for a sequence of stsl_interfaces__action__ExecuteMission_SendGoal_Request.
typedef struct stsl_interfaces__action__ExecuteMission_SendGoal_Request__Sequence
{
  stsl_interfaces__action__ExecuteMission_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__action__ExecuteMission_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteMission in the package stsl_interfaces.
typedef struct stsl_interfaces__action__ExecuteMission_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} stsl_interfaces__action__ExecuteMission_SendGoal_Response;

// Struct for a sequence of stsl_interfaces__action__ExecuteMission_SendGoal_Response.
typedef struct stsl_interfaces__action__ExecuteMission_SendGoal_Response__Sequence
{
  stsl_interfaces__action__ExecuteMission_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__action__ExecuteMission_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteMission in the package stsl_interfaces.
typedef struct stsl_interfaces__action__ExecuteMission_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} stsl_interfaces__action__ExecuteMission_GetResult_Request;

// Struct for a sequence of stsl_interfaces__action__ExecuteMission_GetResult_Request.
typedef struct stsl_interfaces__action__ExecuteMission_GetResult_Request__Sequence
{
  stsl_interfaces__action__ExecuteMission_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__action__ExecuteMission_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "stsl_interfaces/action/detail/execute_mission__struct.h"

/// Struct defined in action/ExecuteMission in the package stsl_interfaces.
typedef struct stsl_interfaces__action__ExecuteMission_GetResult_Response
{
  int8_t status;
  stsl_interfaces__action__ExecuteMission_Result result;
} stsl_interfaces__action__ExecuteMission_GetResult_Response;

// Struct for a sequence of stsl_interfaces__action__ExecuteMission_GetResult_Response.
typedef struct stsl_interfaces__action__ExecuteMission_GetResult_Response__Sequence
{
  stsl_interfaces__action__ExecuteMission_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__action__ExecuteMission_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "stsl_interfaces/action/detail/execute_mission__struct.h"

/// Struct defined in action/ExecuteMission in the package stsl_interfaces.
typedef struct stsl_interfaces__action__ExecuteMission_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  stsl_interfaces__action__ExecuteMission_Feedback feedback;
} stsl_interfaces__action__ExecuteMission_FeedbackMessage;

// Struct for a sequence of stsl_interfaces__action__ExecuteMission_FeedbackMessage.
typedef struct stsl_interfaces__action__ExecuteMission_FeedbackMessage__Sequence
{
  stsl_interfaces__action__ExecuteMission_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stsl_interfaces__action__ExecuteMission_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STSL_INTERFACES__ACTION__DETAIL__EXECUTE_MISSION__STRUCT_H_
