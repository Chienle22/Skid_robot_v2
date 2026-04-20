#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__init(msg: *mut Mip3dmCaptureGyroBias_Request) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmCaptureGyroBias_Request>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmCaptureGyroBias_Request>);
    fn microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Mip3dmCaptureGyroBias_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Mip3dmCaptureGyroBias_Request>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmCaptureGyroBias_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Mip3dmCaptureGyroBias_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Mip3dmCaptureGyroBias_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Mip3dmCaptureGyroBias_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Mip3dmCaptureGyroBias_Request where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/Mip3dmCaptureGyroBias_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__init(msg: *mut Mip3dmCaptureGyroBias_Response) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmCaptureGyroBias_Response>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmCaptureGyroBias_Response>);
    fn microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Mip3dmCaptureGyroBias_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Mip3dmCaptureGyroBias_Response>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmCaptureGyroBias_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub bias: [f32; 3],

}



impl Default for Mip3dmCaptureGyroBias_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Mip3dmCaptureGyroBias_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Mip3dmCaptureGyroBias_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Mip3dmCaptureGyroBias_Response where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/Mip3dmCaptureGyroBias_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__init(msg: *mut Mip3dmGpioStateRead_Request) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateRead_Request>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateRead_Request>);
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Mip3dmGpioStateRead_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateRead_Request>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmGpioStateRead_Request {
    /// GPIO pin number counting from 1 which you want to read the configuration for
    pub pin: u8,

}



impl Default for Mip3dmGpioStateRead_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Mip3dmGpioStateRead_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Mip3dmGpioStateRead_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Mip3dmGpioStateRead_Request where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/Mip3dmGpioStateRead_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__init(msg: *mut Mip3dmGpioStateRead_Response) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateRead_Response>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateRead_Response>);
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Mip3dmGpioStateRead_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateRead_Response>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmGpioStateRead_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pin: u8,

    /// The pin state
    pub state: bool,

}



impl Default for Mip3dmGpioStateRead_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Mip3dmGpioStateRead_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Mip3dmGpioStateRead_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Mip3dmGpioStateRead_Response where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/Mip3dmGpioStateRead_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__init(msg: *mut Mip3dmGpioStateWrite_Request) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateWrite_Request>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateWrite_Request>);
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Mip3dmGpioStateWrite_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateWrite_Request>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmGpioStateWrite_Request {
    /// GPIO pin number counting from 1. Cannot be 0.
    pub pin: u8,

    /// The pin state
    pub state: bool,

}



impl Default for Mip3dmGpioStateWrite_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Mip3dmGpioStateWrite_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Mip3dmGpioStateWrite_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Mip3dmGpioStateWrite_Request where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/Mip3dmGpioStateWrite_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__init(msg: *mut Mip3dmGpioStateWrite_Response) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateWrite_Response>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateWrite_Response>);
    fn microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Mip3dmGpioStateWrite_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Mip3dmGpioStateWrite_Response>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmGpioStateWrite_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Mip3dmGpioStateWrite_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Mip3dmGpioStateWrite_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Mip3dmGpioStateWrite_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Mip3dmGpioStateWrite_Response where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/Mip3dmGpioStateWrite_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__init(msg: *mut MipBaseGetDeviceInformation_Request) -> bool;
    fn microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipBaseGetDeviceInformation_Request>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipBaseGetDeviceInformation_Request>);
    fn microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipBaseGetDeviceInformation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MipBaseGetDeviceInformation_Request>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipBaseGetDeviceInformation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for MipBaseGetDeviceInformation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipBaseGetDeviceInformation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipBaseGetDeviceInformation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipBaseGetDeviceInformation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/MipBaseGetDeviceInformation_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__init(msg: *mut MipBaseGetDeviceInformation_Response) -> bool;
    fn microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipBaseGetDeviceInformation_Response>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipBaseGetDeviceInformation_Response>);
    fn microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipBaseGetDeviceInformation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MipBaseGetDeviceInformation_Response>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipBaseGetDeviceInformation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub device_info: super::super::msg::rmw::MipBaseDeviceInfo,

}



impl Default for MipBaseGetDeviceInformation_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipBaseGetDeviceInformation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipBaseGetDeviceInformation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipBaseGetDeviceInformation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/MipBaseGetDeviceInformation_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigRead_Request() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__RawFileConfigRead_Request__init(msg: *mut RawFileConfigRead_Request) -> bool;
    fn microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigRead_Request>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigRead_Request>);
    fn microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RawFileConfigRead_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigRead_Request>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__RawFileConfigRead_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RawFileConfigRead_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for RawFileConfigRead_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__RawFileConfigRead_Request__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__RawFileConfigRead_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RawFileConfigRead_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RawFileConfigRead_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RawFileConfigRead_Request where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/RawFileConfigRead_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigRead_Request() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigRead_Response() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__RawFileConfigRead_Response__init(msg: *mut RawFileConfigRead_Response) -> bool;
    fn microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigRead_Response>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigRead_Response>);
    fn microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RawFileConfigRead_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigRead_Response>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__RawFileConfigRead_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RawFileConfigRead_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub enable: bool,

    /// Full path to the file we are recording the data to.
    pub file_path: rosidl_runtime_rs::String,

}



impl Default for RawFileConfigRead_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__RawFileConfigRead_Response__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__RawFileConfigRead_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RawFileConfigRead_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RawFileConfigRead_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RawFileConfigRead_Response where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/RawFileConfigRead_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigRead_Response() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigWrite_Request() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__init(msg: *mut RawFileConfigWrite_Request) -> bool;
    fn microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigWrite_Request>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigWrite_Request>);
    fn microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RawFileConfigWrite_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigWrite_Request>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__RawFileConfigWrite_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RawFileConfigWrite_Request {
    /// Whether or not to enable raw file collection.
    /// If this is set to true after being set to false, we will start recording in the requested file.
    /// If this is set to false after being set to true, we will stop recording whatever file we were already recording
    pub enable: bool,

    /// Full path to the file we should record the data to. If set to empty, we will read configuration from the raw_file_directory parameter
    pub file_path: rosidl_runtime_rs::String,

}



impl Default for RawFileConfigWrite_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RawFileConfigWrite_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigWrite_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RawFileConfigWrite_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RawFileConfigWrite_Request where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/RawFileConfigWrite_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigWrite_Request() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigWrite_Response() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__init(msg: *mut RawFileConfigWrite_Response) -> bool;
    fn microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigWrite_Response>, size: usize) -> bool;
    fn microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigWrite_Response>);
    fn microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RawFileConfigWrite_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RawFileConfigWrite_Response>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__srv__RawFileConfigWrite_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RawFileConfigWrite_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for RawFileConfigWrite_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RawFileConfigWrite_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__srv__RawFileConfigWrite_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RawFileConfigWrite_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RawFileConfigWrite_Response where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/srv/RawFileConfigWrite_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigWrite_Response() }
  }
}






#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias() -> *const std::ffi::c_void;
}

// Corresponds to microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias
#[allow(missing_docs, non_camel_case_types)]
pub struct Mip3dmCaptureGyroBias;

impl rosidl_runtime_rs::Service for Mip3dmCaptureGyroBias {
    type Request = Mip3dmCaptureGyroBias_Request;
    type Response = Mip3dmCaptureGyroBias_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias() }
    }
}




#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead() -> *const std::ffi::c_void;
}

// Corresponds to microstrain_inertial_msgs__srv__Mip3dmGpioStateRead
#[allow(missing_docs, non_camel_case_types)]
pub struct Mip3dmGpioStateRead;

impl rosidl_runtime_rs::Service for Mip3dmGpioStateRead {
    type Request = Mip3dmGpioStateRead_Request;
    type Response = Mip3dmGpioStateRead_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead() }
    }
}




#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite() -> *const std::ffi::c_void;
}

// Corresponds to microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite
#[allow(missing_docs, non_camel_case_types)]
pub struct Mip3dmGpioStateWrite;

impl rosidl_runtime_rs::Service for Mip3dmGpioStateWrite {
    type Request = Mip3dmGpioStateWrite_Request;
    type Response = Mip3dmGpioStateWrite_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite() }
    }
}




#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation() -> *const std::ffi::c_void;
}

// Corresponds to microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation
#[allow(missing_docs, non_camel_case_types)]
pub struct MipBaseGetDeviceInformation;

impl rosidl_runtime_rs::Service for MipBaseGetDeviceInformation {
    type Request = MipBaseGetDeviceInformation_Request;
    type Response = MipBaseGetDeviceInformation_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation() }
    }
}




#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigRead() -> *const std::ffi::c_void;
}

// Corresponds to microstrain_inertial_msgs__srv__RawFileConfigRead
#[allow(missing_docs, non_camel_case_types)]
pub struct RawFileConfigRead;

impl rosidl_runtime_rs::Service for RawFileConfigRead {
    type Request = RawFileConfigRead_Request;
    type Response = RawFileConfigRead_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigRead() }
    }
}




#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigWrite() -> *const std::ffi::c_void;
}

// Corresponds to microstrain_inertial_msgs__srv__RawFileConfigWrite
#[allow(missing_docs, non_camel_case_types)]
pub struct RawFileConfigWrite;

impl rosidl_runtime_rs::Service for RawFileConfigWrite {
    type Request = RawFileConfigWrite_Request;
    type Response = RawFileConfigWrite_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__microstrain_inertial_msgs__srv__RawFileConfigWrite() }
    }
}


