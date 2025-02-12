// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stsl_interfaces:msg/TagArray.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__TAG_ARRAY__FUNCTIONS_H_
#define STSL_INTERFACES__MSG__DETAIL__TAG_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stsl_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "stsl_interfaces/msg/detail/tag_array__struct.h"

/// Initialize msg/TagArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stsl_interfaces__msg__TagArray
 * )) before or use
 * stsl_interfaces__msg__TagArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__msg__TagArray__init(stsl_interfaces__msg__TagArray * msg);

/// Finalize msg/TagArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__msg__TagArray__fini(stsl_interfaces__msg__TagArray * msg);

/// Create msg/TagArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stsl_interfaces__msg__TagArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__msg__TagArray *
stsl_interfaces__msg__TagArray__create();

/// Destroy msg/TagArray message.
/**
 * It calls
 * stsl_interfaces__msg__TagArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__msg__TagArray__destroy(stsl_interfaces__msg__TagArray * msg);

/// Check for msg/TagArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__msg__TagArray__are_equal(const stsl_interfaces__msg__TagArray * lhs, const stsl_interfaces__msg__TagArray * rhs);

/// Copy a msg/TagArray message.
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
stsl_interfaces__msg__TagArray__copy(
  const stsl_interfaces__msg__TagArray * input,
  stsl_interfaces__msg__TagArray * output);

/// Initialize array of msg/TagArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * stsl_interfaces__msg__TagArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__msg__TagArray__Sequence__init(stsl_interfaces__msg__TagArray__Sequence * array, size_t size);

/// Finalize array of msg/TagArray messages.
/**
 * It calls
 * stsl_interfaces__msg__TagArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__msg__TagArray__Sequence__fini(stsl_interfaces__msg__TagArray__Sequence * array);

/// Create array of msg/TagArray messages.
/**
 * It allocates the memory for the array and calls
 * stsl_interfaces__msg__TagArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
stsl_interfaces__msg__TagArray__Sequence *
stsl_interfaces__msg__TagArray__Sequence__create(size_t size);

/// Destroy array of msg/TagArray messages.
/**
 * It calls
 * stsl_interfaces__msg__TagArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
void
stsl_interfaces__msg__TagArray__Sequence__destroy(stsl_interfaces__msg__TagArray__Sequence * array);

/// Check for msg/TagArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stsl_interfaces
bool
stsl_interfaces__msg__TagArray__Sequence__are_equal(const stsl_interfaces__msg__TagArray__Sequence * lhs, const stsl_interfaces__msg__TagArray__Sequence * rhs);

/// Copy an array of msg/TagArray messages.
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
stsl_interfaces__msg__TagArray__Sequence__copy(
  const stsl_interfaces__msg__TagArray__Sequence * input,
  stsl_interfaces__msg__TagArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STSL_INTERFACES__MSG__DETAIL__TAG_ARRAY__FUNCTIONS_H_
