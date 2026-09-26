#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "messages__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__messages__msg__ExampleMsg() -> *const std::ffi::c_void;
}

#[link(name = "messages__rosidl_generator_c")]
extern "C" {
    fn messages__msg__ExampleMsg__init(msg: *mut ExampleMsg) -> bool;
    fn messages__msg__ExampleMsg__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExampleMsg>, size: usize) -> bool;
    fn messages__msg__ExampleMsg__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExampleMsg>);
    fn messages__msg__ExampleMsg__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExampleMsg>, out_seq: *mut rosidl_runtime_rs::Sequence<ExampleMsg>) -> bool;
}

// Corresponds to messages__msg__ExampleMsg
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExampleMsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: i64,

}



impl Default for ExampleMsg {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !messages__msg__ExampleMsg__init(&mut msg as *mut _) {
        panic!("Call to messages__msg__ExampleMsg__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExampleMsg {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { messages__msg__ExampleMsg__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { messages__msg__ExampleMsg__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { messages__msg__ExampleMsg__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExampleMsg {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExampleMsg where Self: Sized {
  const TYPE_NAME: &'static str = "messages/msg/ExampleMsg";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__messages__msg__ExampleMsg() }
  }
}


