

#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MyServiceMessage_Request {
    pub label: std::string::String,
}



impl Default for MyServiceMessage_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::MyServiceMessage_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MyServiceMessage_Request {
  type RmwMsg = crate::srv::rmw::MyServiceMessage_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        label: msg.label.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        label: msg.label.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      label: msg.label.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MyServiceMessage_Response {
    pub navigation_successful: bool,
    pub message: std::string::String,
}



impl Default for MyServiceMessage_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::MyServiceMessage_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MyServiceMessage_Response {
  type RmwMsg = crate::srv::rmw::MyServiceMessage_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        navigation_successful: msg.navigation_successful,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      navigation_successful: msg.navigation_successful,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      navigation_successful: msg.navigation_successful,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "custom_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interface__srv__MyServiceMessage() -> *const std::os::raw::c_void;
}

// Corresponds to custom_interface__srv__MyServiceMessage
pub struct MyServiceMessage;

impl rosidl_runtime_rs::Service for MyServiceMessage {
  type Request = crate::srv::MyServiceMessage_Request;
  type Response = crate::srv::MyServiceMessage_Response;

  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interface__srv__MyServiceMessage() }
  }
}



pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "custom_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interface__srv__MyServiceMessage_Request() -> *const std::os::raw::c_void;
}

#[link(name = "custom_interface__rosidl_generator_c")]
extern "C" {
    fn custom_interface__srv__MyServiceMessage_Request__init(msg: *mut MyServiceMessage_Request) -> bool;
    fn custom_interface__srv__MyServiceMessage_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MyServiceMessage_Request>, size: usize) -> bool;
    fn custom_interface__srv__MyServiceMessage_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MyServiceMessage_Request>);
    fn custom_interface__srv__MyServiceMessage_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MyServiceMessage_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MyServiceMessage_Request>) -> bool;
}

// Corresponds to custom_interface__srv__MyServiceMessage_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MyServiceMessage_Request {
    pub label: rosidl_runtime_rs::String,
}



impl Default for MyServiceMessage_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interface__srv__MyServiceMessage_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_interface__srv__MyServiceMessage_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MyServiceMessage_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interface__srv__MyServiceMessage_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interface__srv__MyServiceMessage_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interface__srv__MyServiceMessage_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MyServiceMessage_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MyServiceMessage_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interface/srv/MyServiceMessage_Request";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interface__srv__MyServiceMessage_Request() }
  }
}


#[link(name = "custom_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interface__srv__MyServiceMessage_Response() -> *const std::os::raw::c_void;
}

#[link(name = "custom_interface__rosidl_generator_c")]
extern "C" {
    fn custom_interface__srv__MyServiceMessage_Response__init(msg: *mut MyServiceMessage_Response) -> bool;
    fn custom_interface__srv__MyServiceMessage_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MyServiceMessage_Response>, size: usize) -> bool;
    fn custom_interface__srv__MyServiceMessage_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MyServiceMessage_Response>);
    fn custom_interface__srv__MyServiceMessage_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MyServiceMessage_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MyServiceMessage_Response>) -> bool;
}

// Corresponds to custom_interface__srv__MyServiceMessage_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MyServiceMessage_Response {
    pub navigation_successful: bool,
    pub message: rosidl_runtime_rs::String,
}



impl Default for MyServiceMessage_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interface__srv__MyServiceMessage_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_interface__srv__MyServiceMessage_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MyServiceMessage_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interface__srv__MyServiceMessage_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interface__srv__MyServiceMessage_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interface__srv__MyServiceMessage_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MyServiceMessage_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MyServiceMessage_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interface/srv/MyServiceMessage_Response";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interface__srv__MyServiceMessage_Response() }
  }
}






  #[link(name = "custom_interface__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__custom_interface__srv__MyServiceMessage() -> *const std::os::raw::c_void;
  }

  // Corresponds to custom_interface__srv__MyServiceMessage
  pub struct MyServiceMessage;

  impl rosidl_runtime_rs::Service for MyServiceMessage {
    type Request = crate::srv::rmw::MyServiceMessage_Request;
    type Response = crate::srv::rmw::MyServiceMessage_Response;

    fn get_type_support() -> *const std::os::raw::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interface__srv__MyServiceMessage() }
    }
  }



}  // mod rmw
