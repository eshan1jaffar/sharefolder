// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stsl_interfaces:msg/TagArray.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__TAG_ARRAY__STRUCT_HPP_
#define STSL_INTERFACES__MSG__DETAIL__TAG_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'tags'
#include "stsl_interfaces/msg/detail/tag__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stsl_interfaces__msg__TagArray __attribute__((deprecated))
#else
# define DEPRECATED__stsl_interfaces__msg__TagArray __declspec(deprecated)
#endif

namespace stsl_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TagArray_
{
  using Type = TagArray_<ContainerAllocator>;

  explicit TagArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TagArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tags_type =
    std::vector<stsl_interfaces::msg::Tag_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<stsl_interfaces::msg::Tag_<ContainerAllocator>>>;
  _tags_type tags;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tags(
    const std::vector<stsl_interfaces::msg::Tag_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<stsl_interfaces::msg::Tag_<ContainerAllocator>>> & _arg)
  {
    this->tags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stsl_interfaces::msg::TagArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const stsl_interfaces::msg::TagArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stsl_interfaces::msg::TagArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stsl_interfaces::msg::TagArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::msg::TagArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::msg::TagArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::msg::TagArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::msg::TagArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stsl_interfaces::msg::TagArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stsl_interfaces::msg::TagArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stsl_interfaces__msg__TagArray
    std::shared_ptr<stsl_interfaces::msg::TagArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stsl_interfaces__msg__TagArray
    std::shared_ptr<stsl_interfaces::msg::TagArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TagArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tags != other.tags) {
      return false;
    }
    return true;
  }
  bool operator!=(const TagArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TagArray_

// alias to use template instance with default allocator
using TagArray =
  stsl_interfaces::msg::TagArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__MSG__DETAIL__TAG_ARRAY__STRUCT_HPP_
