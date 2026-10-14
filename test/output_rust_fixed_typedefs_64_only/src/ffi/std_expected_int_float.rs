/// Generated from class `std::expected<int, float>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_expected_int_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_expected_int_float_DefaultConstruct() -> *mut crate::ffi::MR_C_std_expected_int_float;
    pub fn MR_C_std_expected_int_float_ConstructFromAnother(other: *const crate::ffi::MR_C_std_expected_int_float) -> *mut crate::ffi::MR_C_std_expected_int_float;
    pub fn MR_C_std_expected_int_float_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_expected_int_float, other: *const crate::ffi::MR_C_std_expected_int_float);
    pub fn MR_C_std_expected_int_float_success(_this: *const crate::ffi::MR_C_std_expected_int_float) -> bool;
    pub fn MR_C_std_expected_int_float_value(_this: *const crate::ffi::MR_C_std_expected_int_float) -> *const core::ffi::c_int;
    pub fn MR_C_std_expected_int_float_error(_this: *const crate::ffi::MR_C_std_expected_int_float) -> *const f32;
    pub fn MR_C_std_expected_int_float_value_mut(_this: *mut crate::ffi::MR_C_std_expected_int_float) -> *mut core::ffi::c_int;
    pub fn MR_C_std_expected_int_float_error_mut(_this: *mut crate::ffi::MR_C_std_expected_int_float) -> *mut f32;
    pub fn MR_C_std_expected_int_float_Destroy(_this: *const MR_C_std_expected_int_float);
}
