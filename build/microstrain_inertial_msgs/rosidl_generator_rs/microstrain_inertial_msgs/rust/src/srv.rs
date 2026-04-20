#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmCaptureGyroBias_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Mip3dmCaptureGyroBias_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Mip3dmCaptureGyroBias_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Mip3dmCaptureGyroBias_Request {
  type RmwMsg = super::srv::rmw::Mip3dmCaptureGyroBias_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmCaptureGyroBias_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub bias: [f32; 3],

}



impl Default for Mip3dmCaptureGyroBias_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Mip3dmCaptureGyroBias_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Mip3dmCaptureGyroBias_Response {
  type RmwMsg = super::srv::rmw::Mip3dmCaptureGyroBias_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        bias: msg.bias,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        bias: msg.bias,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      bias: msg.bias,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmGpioStateRead_Request {
    /// GPIO pin number counting from 1 which you want to read the configuration for
    pub pin: u8,

}



impl Default for Mip3dmGpioStateRead_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Mip3dmGpioStateRead_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Mip3dmGpioStateRead_Request {
  type RmwMsg = super::srv::rmw::Mip3dmGpioStateRead_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pin: msg.pin,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      pin: msg.pin,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pin: msg.pin,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Mip3dmGpioStateRead_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Mip3dmGpioStateRead_Response {
  type RmwMsg = super::srv::rmw::Mip3dmGpioStateRead_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pin: msg.pin,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      pin: msg.pin,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pin: msg.pin,
      state: msg.state,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmGpioStateWrite_Request {
    /// GPIO pin number counting from 1. Cannot be 0.
    pub pin: u8,

    /// The pin state
    pub state: bool,

}



impl Default for Mip3dmGpioStateWrite_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Mip3dmGpioStateWrite_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Mip3dmGpioStateWrite_Request {
  type RmwMsg = super::srv::rmw::Mip3dmGpioStateWrite_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pin: msg.pin,
        state: msg.state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      pin: msg.pin,
      state: msg.state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pin: msg.pin,
      state: msg.state,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__Mip3dmGpioStateWrite_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mip3dmGpioStateWrite_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Mip3dmGpioStateWrite_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Mip3dmGpioStateWrite_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Mip3dmGpioStateWrite_Response {
  type RmwMsg = super::srv::rmw::Mip3dmGpioStateWrite_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipBaseGetDeviceInformation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for MipBaseGetDeviceInformation_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MipBaseGetDeviceInformation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MipBaseGetDeviceInformation_Request {
  type RmwMsg = super::srv::rmw::MipBaseGetDeviceInformation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipBaseGetDeviceInformation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub device_info: super::msg::MipBaseDeviceInfo,

}



impl Default for MipBaseGetDeviceInformation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MipBaseGetDeviceInformation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MipBaseGetDeviceInformation_Response {
  type RmwMsg = super::srv::rmw::MipBaseGetDeviceInformation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_info: super::msg::MipBaseDeviceInfo::into_rmw_message(std::borrow::Cow::Owned(msg.device_info)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_info: super::msg::MipBaseDeviceInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.device_info)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_info: super::msg::MipBaseDeviceInfo::from_rmw_message(msg.device_info),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__RawFileConfigRead_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RawFileConfigRead_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for RawFileConfigRead_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RawFileConfigRead_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RawFileConfigRead_Request {
  type RmwMsg = super::srv::rmw::RawFileConfigRead_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__RawFileConfigRead_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RawFileConfigRead_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub enable: bool,

    /// Full path to the file we are recording the data to.
    pub file_path: std::string::String,

}



impl Default for RawFileConfigRead_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RawFileConfigRead_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RawFileConfigRead_Response {
  type RmwMsg = super::srv::rmw::RawFileConfigRead_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enable: msg.enable,
        file_path: msg.file_path.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enable: msg.enable,
        file_path: msg.file_path.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enable: msg.enable,
      file_path: msg.file_path.to_string(),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__RawFileConfigWrite_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RawFileConfigWrite_Request {
    /// Whether or not to enable raw file collection.
    /// If this is set to true after being set to false, we will start recording in the requested file.
    /// If this is set to false after being set to true, we will stop recording whatever file we were already recording
    pub enable: bool,

    /// Full path to the file we should record the data to. If set to empty, we will read configuration from the raw_file_directory parameter
    pub file_path: std::string::String,

}



impl Default for RawFileConfigWrite_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RawFileConfigWrite_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RawFileConfigWrite_Request {
  type RmwMsg = super::srv::rmw::RawFileConfigWrite_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enable: msg.enable,
        file_path: msg.file_path.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enable: msg.enable,
        file_path: msg.file_path.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enable: msg.enable,
      file_path: msg.file_path.to_string(),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__srv__RawFileConfigWrite_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RawFileConfigWrite_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for RawFileConfigWrite_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RawFileConfigWrite_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RawFileConfigWrite_Response {
  type RmwMsg = super::srv::rmw::RawFileConfigWrite_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
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


