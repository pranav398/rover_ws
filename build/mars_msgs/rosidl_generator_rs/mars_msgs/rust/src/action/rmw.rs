
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_Goal() -> *const std::ffi::c_void;
}

#[link(name = "mars_msgs__rosidl_generator_c")]
extern "C" {
    fn mars_msgs__action__DriveTo_Goal__init(msg: *mut DriveTo_Goal) -> bool;
    fn mars_msgs__action__DriveTo_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_Goal>, size: usize) -> bool;
    fn mars_msgs__action__DriveTo_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_Goal>);
    fn mars_msgs__action__DriveTo_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveTo_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveTo_Goal>) -> bool;
}

// Corresponds to mars_msgs__action__DriveTo_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveTo_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tolerance: f32,

}



impl Default for DriveTo_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mars_msgs__action__DriveTo_Goal__init(&mut msg as *mut _) {
        panic!("Call to mars_msgs__action__DriveTo_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveTo_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveTo_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveTo_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "mars_msgs/action/DriveTo_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_Goal() }
  }
}


#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_Result() -> *const std::ffi::c_void;
}

#[link(name = "mars_msgs__rosidl_generator_c")]
extern "C" {
    fn mars_msgs__action__DriveTo_Result__init(msg: *mut DriveTo_Result) -> bool;
    fn mars_msgs__action__DriveTo_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_Result>, size: usize) -> bool;
    fn mars_msgs__action__DriveTo_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_Result>);
    fn mars_msgs__action__DriveTo_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveTo_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveTo_Result>) -> bool;
}

// Corresponds to mars_msgs__action__DriveTo_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveTo_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reached: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub final_error: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_used: f32,

}



impl Default for DriveTo_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mars_msgs__action__DriveTo_Result__init(&mut msg as *mut _) {
        panic!("Call to mars_msgs__action__DriveTo_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveTo_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveTo_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveTo_Result where Self: Sized {
  const TYPE_NAME: &'static str = "mars_msgs/action/DriveTo_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_Result() }
  }
}


#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "mars_msgs__rosidl_generator_c")]
extern "C" {
    fn mars_msgs__action__DriveTo_Feedback__init(msg: *mut DriveTo_Feedback) -> bool;
    fn mars_msgs__action__DriveTo_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_Feedback>, size: usize) -> bool;
    fn mars_msgs__action__DriveTo_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_Feedback>);
    fn mars_msgs__action__DriveTo_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveTo_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveTo_Feedback>) -> bool;
}

// Corresponds to mars_msgs__action__DriveTo_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveTo_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_remaining: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_pct: f32,

}



impl Default for DriveTo_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mars_msgs__action__DriveTo_Feedback__init(&mut msg as *mut _) {
        panic!("Call to mars_msgs__action__DriveTo_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveTo_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveTo_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveTo_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "mars_msgs/action/DriveTo_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_Feedback() }
  }
}


#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "mars_msgs__rosidl_generator_c")]
extern "C" {
    fn mars_msgs__action__DriveTo_FeedbackMessage__init(msg: *mut DriveTo_FeedbackMessage) -> bool;
    fn mars_msgs__action__DriveTo_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_FeedbackMessage>, size: usize) -> bool;
    fn mars_msgs__action__DriveTo_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_FeedbackMessage>);
    fn mars_msgs__action__DriveTo_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveTo_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveTo_FeedbackMessage>) -> bool;
}

// Corresponds to mars_msgs__action__DriveTo_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveTo_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::DriveTo_Feedback,

}



impl Default for DriveTo_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mars_msgs__action__DriveTo_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to mars_msgs__action__DriveTo_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveTo_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveTo_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveTo_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "mars_msgs/action/DriveTo_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_FeedbackMessage() }
  }
}




#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "mars_msgs__rosidl_generator_c")]
extern "C" {
    fn mars_msgs__action__DriveTo_SendGoal_Request__init(msg: *mut DriveTo_SendGoal_Request) -> bool;
    fn mars_msgs__action__DriveTo_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_SendGoal_Request>, size: usize) -> bool;
    fn mars_msgs__action__DriveTo_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_SendGoal_Request>);
    fn mars_msgs__action__DriveTo_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveTo_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveTo_SendGoal_Request>) -> bool;
}

// Corresponds to mars_msgs__action__DriveTo_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveTo_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::DriveTo_Goal,

}



impl Default for DriveTo_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mars_msgs__action__DriveTo_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to mars_msgs__action__DriveTo_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveTo_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveTo_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveTo_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mars_msgs/action/DriveTo_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_SendGoal_Request() }
  }
}


#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "mars_msgs__rosidl_generator_c")]
extern "C" {
    fn mars_msgs__action__DriveTo_SendGoal_Response__init(msg: *mut DriveTo_SendGoal_Response) -> bool;
    fn mars_msgs__action__DriveTo_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_SendGoal_Response>, size: usize) -> bool;
    fn mars_msgs__action__DriveTo_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_SendGoal_Response>);
    fn mars_msgs__action__DriveTo_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveTo_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveTo_SendGoal_Response>) -> bool;
}

// Corresponds to mars_msgs__action__DriveTo_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveTo_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for DriveTo_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mars_msgs__action__DriveTo_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to mars_msgs__action__DriveTo_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveTo_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveTo_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveTo_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mars_msgs/action/DriveTo_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_SendGoal_Response() }
  }
}


#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "mars_msgs__rosidl_generator_c")]
extern "C" {
    fn mars_msgs__action__DriveTo_GetResult_Request__init(msg: *mut DriveTo_GetResult_Request) -> bool;
    fn mars_msgs__action__DriveTo_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_GetResult_Request>, size: usize) -> bool;
    fn mars_msgs__action__DriveTo_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_GetResult_Request>);
    fn mars_msgs__action__DriveTo_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveTo_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveTo_GetResult_Request>) -> bool;
}

// Corresponds to mars_msgs__action__DriveTo_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveTo_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for DriveTo_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mars_msgs__action__DriveTo_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to mars_msgs__action__DriveTo_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveTo_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveTo_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveTo_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mars_msgs/action/DriveTo_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_GetResult_Request() }
  }
}


#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "mars_msgs__rosidl_generator_c")]
extern "C" {
    fn mars_msgs__action__DriveTo_GetResult_Response__init(msg: *mut DriveTo_GetResult_Response) -> bool;
    fn mars_msgs__action__DriveTo_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_GetResult_Response>, size: usize) -> bool;
    fn mars_msgs__action__DriveTo_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveTo_GetResult_Response>);
    fn mars_msgs__action__DriveTo_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveTo_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveTo_GetResult_Response>) -> bool;
}

// Corresponds to mars_msgs__action__DriveTo_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveTo_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::DriveTo_Result,

}



impl Default for DriveTo_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mars_msgs__action__DriveTo_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to mars_msgs__action__DriveTo_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveTo_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__action__DriveTo_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveTo_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveTo_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mars_msgs/action/DriveTo_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__action__DriveTo_GetResult_Response() }
  }
}






#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mars_msgs__action__DriveTo_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to mars_msgs__action__DriveTo_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct DriveTo_SendGoal;

impl rosidl_runtime_rs::Service for DriveTo_SendGoal {
    type Request = DriveTo_SendGoal_Request;
    type Response = DriveTo_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mars_msgs__action__DriveTo_SendGoal() }
    }
}




#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mars_msgs__action__DriveTo_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to mars_msgs__action__DriveTo_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct DriveTo_GetResult;

impl rosidl_runtime_rs::Service for DriveTo_GetResult {
    type Request = DriveTo_GetResult_Request;
    type Response = DriveTo_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mars_msgs__action__DriveTo_GetResult() }
    }
}


