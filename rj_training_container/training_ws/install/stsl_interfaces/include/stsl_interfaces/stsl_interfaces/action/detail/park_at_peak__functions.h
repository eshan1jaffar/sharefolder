// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stsl_interfaces:action/ParkAtPeak.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__ACTION__DETAIL__PARK_AT_PEAK__FUNCTIONS_H_
#define STSL_INTERFACES__ACTION__DETAIL__PARK_AT_PEAK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stsl_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "stsl_interfaces/action/detail/park_at_peak__struct.h"

/// Initialize action/ParkAtPeak message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stsl_interfaces__action__ParkAtPeak_Goal
 * )) before or use
 * stsl_interfaces__action__ParkAtPeak_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Goal__init(stsl_interfaces__action__ParkAtPeak_Goal * msg);

/// Finalize action/ParkAtPeak message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Goal__fini(stsl_interfaces__action__ParkAtPeak_Goal * msg);

/// Create action/ParkAtPeak message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stsl_interfaces__action__ParkAtPeak_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_Goal *
stsl_interfaces__action__ParkAtPeak_Goal__create();

/// Destroy action/ParkAtPeak message.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Goal__destroy(stsl_interfaces__action__ParkAtPeak_Goal * msg);

/// Check for action/ParkAtPeak message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Goal__are_equal(const stsl_interfaces__action__ParkAtPeak_Goal * lhs, const stsl_interfaces__action__ParkAtPeak_Goal * rhs);

/// Copy a action/ParkAtPeak message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Goal__copy(
  const stsl_interfaces__action__ParkAtPeak_Goal * input,
  stsl_interfaces__action__ParkAtPeak_Goal * output);

/// Initialize array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the number of elements and calls
 * stsl_interfaces__action__ParkAtPeak_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Goal__Sequence__init(stsl_interfaces__action__ParkAtPeak_Goal__Sequence * array, size_t size);

/// Finalize array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Goal__Sequence__fini(stsl_interfaces__action__ParkAtPeak_Goal__Sequence * array);

/// Create array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the array and calls
 * stsl_interfaces__action__ParkAtPeak_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_Goal__Sequence *
stsl_interfaces__action__ParkAtPeak_Goal__Sequence__create(size_t size);

/// Destroy array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Goal__Sequence__destroy(stsl_interfaces__action__ParkAtPeak_Goal__Sequence * array);

/// Check for action/ParkAtPeak message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Goal__Sequence__are_equal(const stsl_interfaces__action__ParkAtPeak_Goal__Sequence * lhs, const stsl_interfaces__action__ParkAtPeak_Goal__Sequence * rhs);

/// Copy an array of action/ParkAtPeak messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Goal__Sequence__copy(
  const stsl_interfaces__action__ParkAtPeak_Goal__Sequence * input,
  stsl_interfaces__action__ParkAtPeak_Goal__Sequence * output);

/// Initialize action/ParkAtPeak message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stsl_interfaces__action__ParkAtPeak_Result
 * )) before or use
 * stsl_interfaces__action__ParkAtPeak_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Result__init(stsl_interfaces__action__ParkAtPeak_Result * msg);

/// Finalize action/ParkAtPeak message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Result__fini(stsl_interfaces__action__ParkAtPeak_Result * msg);

/// Create action/ParkAtPeak message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stsl_interfaces__action__ParkAtPeak_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_Result *
stsl_interfaces__action__ParkAtPeak_Result__create();

/// Destroy action/ParkAtPeak message.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Result__destroy(stsl_interfaces__action__ParkAtPeak_Result * msg);

/// Check for action/ParkAtPeak message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Result__are_equal(const stsl_interfaces__action__ParkAtPeak_Result * lhs, const stsl_interfaces__action__ParkAtPeak_Result * rhs);

/// Copy a action/ParkAtPeak message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Result__copy(
  const stsl_interfaces__action__ParkAtPeak_Result * input,
  stsl_interfaces__action__ParkAtPeak_Result * output);

/// Initialize array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the number of elements and calls
 * stsl_interfaces__action__ParkAtPeak_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Result__Sequence__init(stsl_interfaces__action__ParkAtPeak_Result__Sequence * array, size_t size);

/// Finalize array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Result__Sequence__fini(stsl_interfaces__action__ParkAtPeak_Result__Sequence * array);

/// Create array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the array and calls
 * stsl_interfaces__action__ParkAtPeak_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_Result__Sequence *
stsl_interfaces__action__ParkAtPeak_Result__Sequence__create(size_t size);

/// Destroy array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Result__Sequence__destroy(stsl_interfaces__action__ParkAtPeak_Result__Sequence * array);

/// Check for action/ParkAtPeak message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Result__Sequence__are_equal(const stsl_interfaces__action__ParkAtPeak_Result__Sequence * lhs, const stsl_interfaces__action__ParkAtPeak_Result__Sequence * rhs);

/// Copy an array of action/ParkAtPeak messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Result__Sequence__copy(
  const stsl_interfaces__action__ParkAtPeak_Result__Sequence * input,
  stsl_interfaces__action__ParkAtPeak_Result__Sequence * output);

/// Initialize action/ParkAtPeak message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stsl_interfaces__action__ParkAtPeak_Feedback
 * )) before or use
 * stsl_interfaces__action__ParkAtPeak_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Feedback__init(stsl_interfaces__action__ParkAtPeak_Feedback * msg);

/// Finalize action/ParkAtPeak message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Feedback__fini(stsl_interfaces__action__ParkAtPeak_Feedback * msg);

/// Create action/ParkAtPeak message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stsl_interfaces__action__ParkAtPeak_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_Feedback *
stsl_interfaces__action__ParkAtPeak_Feedback__create();

/// Destroy action/ParkAtPeak message.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Feedback__destroy(stsl_interfaces__action__ParkAtPeak_Feedback * msg);

/// Check for action/ParkAtPeak message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Feedback__are_equal(const stsl_interfaces__action__ParkAtPeak_Feedback * lhs, const stsl_interfaces__action__ParkAtPeak_Feedback * rhs);

/// Copy a action/ParkAtPeak message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Feedback__copy(
  const stsl_interfaces__action__ParkAtPeak_Feedback * input,
  stsl_interfaces__action__ParkAtPeak_Feedback * output);

/// Initialize array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the number of elements and calls
 * stsl_interfaces__action__ParkAtPeak_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Feedback__Sequence__init(stsl_interfaces__action__ParkAtPeak_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Feedback__Sequence__fini(stsl_interfaces__action__ParkAtPeak_Feedback__Sequence * array);

/// Create array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the array and calls
 * stsl_interfaces__action__ParkAtPeak_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_Feedback__Sequence *
stsl_interfaces__action__ParkAtPeak_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_Feedback__Sequence__destroy(stsl_interfaces__action__ParkAtPeak_Feedback__Sequence * array);

/// Check for action/ParkAtPeak message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Feedback__Sequence__are_equal(const stsl_interfaces__action__ParkAtPeak_Feedback__Sequence * lhs, const stsl_interfaces__action__ParkAtPeak_Feedback__Sequence * rhs);

/// Copy an array of action/ParkAtPeak messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_Feedback__Sequence__copy(
  const stsl_interfaces__action__ParkAtPeak_Feedback__Sequence * input,
  stsl_interfaces__action__ParkAtPeak_Feedback__Sequence * output);

/// Initialize action/ParkAtPeak message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Request
 * )) before or use
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__init(stsl_interfaces__action__ParkAtPeak_SendGoal_Request * msg);

/// Finalize action/ParkAtPeak message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__fini(stsl_interfaces__action__ParkAtPeak_SendGoal_Request * msg);

/// Create action/ParkAtPeak message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_SendGoal_Request *
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__create();

/// Destroy action/ParkAtPeak message.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__destroy(stsl_interfaces__action__ParkAtPeak_SendGoal_Request * msg);

/// Check for action/ParkAtPeak message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__are_equal(const stsl_interfaces__action__ParkAtPeak_SendGoal_Request * lhs, const stsl_interfaces__action__ParkAtPeak_SendGoal_Request * rhs);

/// Copy a action/ParkAtPeak message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__copy(
  const stsl_interfaces__action__ParkAtPeak_SendGoal_Request * input,
  stsl_interfaces__action__ParkAtPeak_SendGoal_Request * output);

/// Initialize array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the number of elements and calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence__init(stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence__fini(stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence * array);

/// Create array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the array and calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence *
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence__destroy(stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence * array);

/// Check for action/ParkAtPeak message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence__are_equal(const stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence * lhs, const stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ParkAtPeak messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence__copy(
  const stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence * input,
  stsl_interfaces__action__ParkAtPeak_SendGoal_Request__Sequence * output);

/// Initialize action/ParkAtPeak message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Response
 * )) before or use
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__init(stsl_interfaces__action__ParkAtPeak_SendGoal_Response * msg);

/// Finalize action/ParkAtPeak message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__fini(stsl_interfaces__action__ParkAtPeak_SendGoal_Response * msg);

/// Create action/ParkAtPeak message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_SendGoal_Response *
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__create();

/// Destroy action/ParkAtPeak message.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__destroy(stsl_interfaces__action__ParkAtPeak_SendGoal_Response * msg);

/// Check for action/ParkAtPeak message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__are_equal(const stsl_interfaces__action__ParkAtPeak_SendGoal_Response * lhs, const stsl_interfaces__action__ParkAtPeak_SendGoal_Response * rhs);

/// Copy a action/ParkAtPeak message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__copy(
  const stsl_interfaces__action__ParkAtPeak_SendGoal_Response * input,
  stsl_interfaces__action__ParkAtPeak_SendGoal_Response * output);

/// Initialize array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the number of elements and calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence__init(stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence__fini(stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence * array);

/// Create array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the array and calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence *
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence__destroy(stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence * array);

/// Check for action/ParkAtPeak message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence__are_equal(const stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence * lhs, const stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ParkAtPeak messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence__copy(
  const stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence * input,
  stsl_interfaces__action__ParkAtPeak_SendGoal_Response__Sequence * output);

/// Initialize action/ParkAtPeak message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stsl_interfaces__action__ParkAtPeak_GetResult_Request
 * )) before or use
 * stsl_interfaces__action__ParkAtPeak_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Request__init(stsl_interfaces__action__ParkAtPeak_GetResult_Request * msg);

/// Finalize action/ParkAtPeak message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_GetResult_Request__fini(stsl_interfaces__action__ParkAtPeak_GetResult_Request * msg);

/// Create action/ParkAtPeak message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_GetResult_Request *
stsl_interfaces__action__ParkAtPeak_GetResult_Request__create();

/// Destroy action/ParkAtPeak message.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_GetResult_Request__destroy(stsl_interfaces__action__ParkAtPeak_GetResult_Request * msg);

/// Check for action/ParkAtPeak message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Request__are_equal(const stsl_interfaces__action__ParkAtPeak_GetResult_Request * lhs, const stsl_interfaces__action__ParkAtPeak_GetResult_Request * rhs);

/// Copy a action/ParkAtPeak message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Request__copy(
  const stsl_interfaces__action__ParkAtPeak_GetResult_Request * input,
  stsl_interfaces__action__ParkAtPeak_GetResult_Request * output);

/// Initialize array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the number of elements and calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence__init(stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence__fini(stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence * array);

/// Create array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the array and calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence *
stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence__destroy(stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence * array);

/// Check for action/ParkAtPeak message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence__are_equal(const stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence * lhs, const stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ParkAtPeak messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence__copy(
  const stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence * input,
  stsl_interfaces__action__ParkAtPeak_GetResult_Request__Sequence * output);

/// Initialize action/ParkAtPeak message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stsl_interfaces__action__ParkAtPeak_GetResult_Response
 * )) before or use
 * stsl_interfaces__action__ParkAtPeak_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Response__init(stsl_interfaces__action__ParkAtPeak_GetResult_Response * msg);

/// Finalize action/ParkAtPeak message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_GetResult_Response__fini(stsl_interfaces__action__ParkAtPeak_GetResult_Response * msg);

/// Create action/ParkAtPeak message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_GetResult_Response *
stsl_interfaces__action__ParkAtPeak_GetResult_Response__create();

/// Destroy action/ParkAtPeak message.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_GetResult_Response__destroy(stsl_interfaces__action__ParkAtPeak_GetResult_Response * msg);

/// Check for action/ParkAtPeak message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Response__are_equal(const stsl_interfaces__action__ParkAtPeak_GetResult_Response * lhs, const stsl_interfaces__action__ParkAtPeak_GetResult_Response * rhs);

/// Copy a action/ParkAtPeak message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Response__copy(
  const stsl_interfaces__action__ParkAtPeak_GetResult_Response * input,
  stsl_interfaces__action__ParkAtPeak_GetResult_Response * output);

/// Initialize array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the number of elements and calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence__init(stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence__fini(stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence * array);

/// Create array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the array and calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence *
stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence__destroy(stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence * array);

/// Check for action/ParkAtPeak message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence__are_equal(const stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence * lhs, const stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ParkAtPeak messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence__copy(
  const stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence * input,
  stsl_interfaces__action__ParkAtPeak_GetResult_Response__Sequence * output);

/// Initialize action/ParkAtPeak message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stsl_interfaces__action__ParkAtPeak_FeedbackMessage
 * )) before or use
 * stsl_interfaces__action__ParkAtPeak_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__init(stsl_interfaces__action__ParkAtPeak_FeedbackMessage * msg);

/// Finalize action/ParkAtPeak message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__fini(stsl_interfaces__action__ParkAtPeak_FeedbackMessage * msg);

/// Create action/ParkAtPeak message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stsl_interfaces__action__ParkAtPeak_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_FeedbackMessage *
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__create();

/// Destroy action/ParkAtPeak message.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__destroy(stsl_interfaces__action__ParkAtPeak_FeedbackMessage * msg);

/// Check for action/ParkAtPeak message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__are_equal(const stsl_interfaces__action__ParkAtPeak_FeedbackMessage * lhs, const stsl_interfaces__action__ParkAtPeak_FeedbackMessage * rhs);

/// Copy a action/ParkAtPeak message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__copy(
  const stsl_interfaces__action__ParkAtPeak_FeedbackMessage * input,
  stsl_interfaces__action__ParkAtPeak_FeedbackMessage * output);

/// Initialize array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the number of elements and calls
 * stsl_interfaces__action__ParkAtPeak_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence__init(stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence__fini(stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence * array);

/// Create array of action/ParkAtPeak messages.
/**
 * It allocates the memory for the array and calls
 * stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence *
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ParkAtPeak messages.
/**
 * It calls
 * stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence__destroy(stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence * array);

/// Check for action/ParkAtPeak message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence__are_equal(const stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence * lhs, const stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ParkAtPeak messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence__copy(
  const stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence * input,
  stsl_interfaces__action__ParkAtPeak_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STSL_INTERFACES__ACTION__DETAIL__PARK_AT_PEAK__FUNCTIONS_H_
