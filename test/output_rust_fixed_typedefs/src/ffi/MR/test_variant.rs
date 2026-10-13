#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_StdVariant_foo() -> *mut crate::ffi::MR_C_std_variant_int32_t_float;
    pub fn MR_StdVariant_bar(_1: *const crate::ffi::MR_C_std_variant_int32_t_float_float);
    pub fn MR_StdVariant_baz(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_variant_int32_t_float_std_string);
    pub fn MR_StdVariant_blah() -> *mut crate::ffi::MR_C_std_variant_std_monostate_int32_t_float;
}
