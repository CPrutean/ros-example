#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "messages__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__messages__srv__ExampleService_Request() -> *const std::ffi::c_void;
}

#[link(name = "messages__rosidl_generator_c")]
extern "C" {
    fn messages__srv__ExampleService_Request__init(msg: *mut ExampleService_Request) -> bool;
    fn messages__srv__ExampleService_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExampleService_Request>, size: usize) -> bool;
    fn messages__srv__ExampleService_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExampleService_Request>);
    fn messages__srv__ExampleService_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExampleService_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExampleService_Request>) -> bool;
}

// Corresponds to messages__srv__ExampleService_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExampleService_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: i64,

}



impl Default for ExampleService_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !messages__srv__ExampleService_Request__init(&mut msg as *mut _) {
        panic!("Call to messages__srv__ExampleService_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExampleService_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { messages__srv__ExampleService_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { messages__srv__ExampleService_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { messages__srv__ExampleService_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExampleService_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExampleService_Request where Self: Sized {
  const TYPE_NAME: &'static str = "messages/srv/ExampleService_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__messages__srv__ExampleService_Request() }
  }
}


#[link(name = "messages__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__messages__srv__ExampleService_Response() -> *const std::ffi::c_void;
}

#[link(name = "messages__rosidl_generator_c")]
extern "C" {
    fn messages__srv__ExampleService_Response__init(msg: *mut ExampleService_Response) -> bool;
    fn messages__srv__ExampleService_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExampleService_Response>, size: usize) -> bool;
    fn messages__srv__ExampleService_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExampleService_Response>);
    fn messages__srv__ExampleService_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExampleService_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExampleService_Response>) -> bool;
}

// Corresponds to messages__srv__ExampleService_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExampleService_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: i64,

}



impl Default for ExampleService_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !messages__srv__ExampleService_Response__init(&mut msg as *mut _) {
        panic!("Call to messages__srv__ExampleService_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExampleService_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { messages__srv__ExampleService_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { messages__srv__ExampleService_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { messages__srv__ExampleService_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExampleService_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExampleService_Response where Self: Sized {
  const TYPE_NAME: &'static str = "messages/srv/ExampleService_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__messages__srv__ExampleService_Response() }
  }
}






#[link(name = "messages__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__messages__srv__ExampleService() -> *const std::ffi::c_void;
}

// Corresponds to messages__srv__ExampleService
#[allow(missing_docs, non_camel_case_types)]
pub struct ExampleService;

impl rosidl_runtime_rs::Service for ExampleService {
    type Request = ExampleService_Request;
    type Response = ExampleService_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__messages__srv__ExampleService() }
    }
}


