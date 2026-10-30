#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__msg__RoverOdometry() -> *const std::ffi::c_void;
}

#[link(name = "mars_msgs__rosidl_generator_c")]
extern "C" {
    fn mars_msgs__msg__RoverOdometry__init(msg: *mut RoverOdometry) -> bool;
    fn mars_msgs__msg__RoverOdometry__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RoverOdometry>, size: usize) -> bool;
    fn mars_msgs__msg__RoverOdometry__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RoverOdometry>);
    fn mars_msgs__msg__RoverOdometry__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RoverOdometry>, out_seq: *mut rosidl_runtime_rs::Sequence<RoverOdometry>) -> bool;
}

// Corresponds to mars_msgs__msg__RoverOdometry
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverOdometry {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rover_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::rmw::Twist,

}



impl Default for RoverOdometry {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mars_msgs__msg__RoverOdometry__init(&mut msg as *mut _) {
        panic!("Call to mars_msgs__msg__RoverOdometry__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RoverOdometry {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__msg__RoverOdometry__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__msg__RoverOdometry__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__msg__RoverOdometry__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RoverOdometry {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RoverOdometry where Self: Sized {
  const TYPE_NAME: &'static str = "mars_msgs/msg/RoverOdometry";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__msg__RoverOdometry() }
  }
}


#[link(name = "mars_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__msg__Monitor() -> *const std::ffi::c_void;
}

#[link(name = "mars_msgs__rosidl_generator_c")]
extern "C" {
    fn mars_msgs__msg__Monitor__init(msg: *mut Monitor) -> bool;
    fn mars_msgs__msg__Monitor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Monitor>, size: usize) -> bool;
    fn mars_msgs__msg__Monitor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Monitor>);
    fn mars_msgs__msg__Monitor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Monitor>, out_seq: *mut rosidl_runtime_rs::Sequence<Monitor>) -> bool;
}

// Corresponds to mars_msgs__msg__Monitor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Monitor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub battery: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub health: rosidl_runtime_rs::String,

}



impl Default for Monitor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mars_msgs__msg__Monitor__init(&mut msg as *mut _) {
        panic!("Call to mars_msgs__msg__Monitor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Monitor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__msg__Monitor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__msg__Monitor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mars_msgs__msg__Monitor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Monitor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Monitor where Self: Sized {
  const TYPE_NAME: &'static str = "mars_msgs/msg/Monitor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mars_msgs__msg__Monitor() }
  }
}


