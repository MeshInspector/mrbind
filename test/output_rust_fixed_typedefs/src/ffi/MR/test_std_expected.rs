#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_StdExpected_GetExp() -> *mut crate::ffi::MR_C_expected_int32_t_std_string;
    pub fn MR_StdExpected_SetExp(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_expected_int32_t_std_string);
    pub fn MR_StdExpected_SetExpConstRef(_1: *const crate::ffi::MR_C_expected_int32_t_std_string);
    pub fn MR_StdExpected_SetExpDefTrivial(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_expected_int32_t_std_string);
    pub fn MR_StdExpected_SetExpDef(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_expected_int32_t_std_string);
    pub fn MR_StdExpected_GetExpVoid() -> *mut crate::ffi::MR_C_expected_void_float;
    pub fn MR_StdExpected_SetExpVoid(_1: *const crate::ffi::MR_C_expected_void_float);
    pub fn MR_StdExpected_SetExpVoidConstRef(_1: *const crate::ffi::MR_C_expected_void_float);
    pub fn MR_StdExpected_SetExpVoidDefTrivial(_1: *const crate::ffi::MR_C_expected_void_float);
    pub fn MR_StdExpected_SetExpVoidDef(_1: *const crate::ffi::MR_C_expected_void_float);
    pub fn MR_StdExpected_GetExpVec() -> *mut crate::ffi::MR_C_std_vector_expected_int32_t_std_string;
}
