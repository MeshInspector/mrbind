/// Generated from class `std::tuple<const int, std::string>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_tuple_const_int_std_string
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_tuple_const_int_std_string_DefaultConstruct() -> *mut crate::ffi::MR_C_std_tuple_const_int_std_string;
    pub fn MR_C_std_tuple_const_int_std_string_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_tuple_const_int_std_string) -> *mut crate::ffi::MR_C_std_tuple_const_int_std_string;
    pub fn MR_C_std_tuple_const_int_std_string_Construct(_0: core::ffi::c_int, _1: *const core::ffi::c_char, _1_end: *const core::ffi::c_char) -> *mut crate::ffi::MR_C_std_tuple_const_int_std_string;
    pub fn MR_C_std_tuple_const_int_std_string_get_const_int(_this: *const crate::ffi::MR_C_std_tuple_const_int_std_string) -> *const core::ffi::c_int;
    pub fn MR_C_std_tuple_const_int_std_string_get_std_string(_this: *const crate::ffi::MR_C_std_tuple_const_int_std_string) -> *const crate::ffi::MR_C_std_string;
    pub fn MR_C_std_tuple_const_int_std_string_get_std_string_mut(_this: *mut crate::ffi::MR_C_std_tuple_const_int_std_string) -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_C_std_tuple_const_int_std_string_Destroy(_this: *const MR_C_std_tuple_const_int_std_string);
}
