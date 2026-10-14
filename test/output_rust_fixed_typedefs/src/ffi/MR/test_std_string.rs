#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_StdString_Set(s: *const core::ffi::c_char, s_end: *const core::ffi::c_char);
    pub fn MR_StdString_SetWithDefault(s: *const core::ffi::c_char, s_end: *const core::ffi::c_char);
    pub fn MR_StdString_Get() -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_StdString_WriteToRef(r#ref: *mut crate::ffi::MR_C_std_string);
    pub fn MR_StdString_WriteToPtr(ptr: *mut crate::ffi::MR_C_std_string);
    pub fn MR_StdString_ConstRef(s: *const core::ffi::c_char, s_end: *const core::ffi::c_char);
    pub fn MR_StdString_RvalueRef(s: *const core::ffi::c_char, s_end: *const core::ffi::c_char);
    pub fn MR_StdString_ConstRvalueRef(s: *const core::ffi::c_char, s_end: *const core::ffi::c_char);
}
