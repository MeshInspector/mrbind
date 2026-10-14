/// Generated from class `std::tuple<int32_t &, float &&, std::string &, std::string &&>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct(_0: *mut i32, _1: *mut f32, _2: *mut crate::ffi::MR_C_std_string, _3: *const core::ffi::c_char, _3_end: *const core::ffi::c_char) -> *mut crate::ffi::MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref;
    pub fn MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int32_t_ref(_this: *const crate::ffi::MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref) -> *mut i32;
    pub fn MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref(_this: *const crate::ffi::MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref) -> *mut f32;
    pub fn MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref(_this: *const crate::ffi::MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref) -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref(_this: *const crate::ffi::MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref) -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Destroy(_this: *const MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref);
}
