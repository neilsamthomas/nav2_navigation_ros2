// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface:srv/MyServiceMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__MY_SERVICE_MESSAGE__STRUCT_H_
#define CUSTOM_INTERFACE__SRV__DETAIL__MY_SERVICE_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MyServiceMessage in the package custom_interface.
typedef struct custom_interface__srv__MyServiceMessage_Request
{
  rosidl_runtime_c__String label;
} custom_interface__srv__MyServiceMessage_Request;

// Struct for a sequence of custom_interface__srv__MyServiceMessage_Request.
typedef struct custom_interface__srv__MyServiceMessage_Request__Sequence
{
  custom_interface__srv__MyServiceMessage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__srv__MyServiceMessage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MyServiceMessage in the package custom_interface.
typedef struct custom_interface__srv__MyServiceMessage_Response
{
  bool navigation_successful;
  rosidl_runtime_c__String message;
} custom_interface__srv__MyServiceMessage_Response;

// Struct for a sequence of custom_interface__srv__MyServiceMessage_Response.
typedef struct custom_interface__srv__MyServiceMessage_Response__Sequence
{
  custom_interface__srv__MyServiceMessage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__srv__MyServiceMessage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__MY_SERVICE_MESSAGE__STRUCT_H_
