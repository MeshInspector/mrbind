/// Generated from class `std::expected<MR::CSharp::NonTrivial, float>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_expected_MR_CSharp_NonTrivial_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_expected_MR_CSharp_NonTrivial_float_DefaultConstruct() -> *mut crate::ffi::MR_C_std_expected_MR_CSharp_NonTrivial_float;
    pub fn MR_C_std_expected_MR_CSharp_NonTrivial_float_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_expected_MR_CSharp_NonTrivial_float) -> *mut crate::ffi::MR_C_std_expected_MR_CSharp_NonTrivial_float;
    pub fn MR_C_std_expected_MR_CSharp_NonTrivial_float_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_expected_MR_CSharp_NonTrivial_float, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_expected_MR_CSharp_NonTrivial_float);
    pub fn MR_C_std_expected_MR_CSharp_NonTrivial_float_success(_this: *const crate::ffi::MR_C_std_expected_MR_CSharp_NonTrivial_float) -> bool;
    pub fn MR_C_std_expected_MR_CSharp_NonTrivial_float_value(_this: *const crate::ffi::MR_C_std_expected_MR_CSharp_NonTrivial_float) -> *const crate::ffi::MR_CSharp_NonTrivial;
    pub fn MR_C_std_expected_MR_CSharp_NonTrivial_float_error(_this: *const crate::ffi::MR_C_std_expected_MR_CSharp_NonTrivial_float) -> *const f32;
    pub fn MR_C_std_expected_MR_CSharp_NonTrivial_float_value_mut(_this: *mut crate::ffi::MR_C_std_expected_MR_CSharp_NonTrivial_float) -> *mut crate::ffi::MR_CSharp_NonTrivial;
    pub fn MR_C_std_expected_MR_CSharp_NonTrivial_float_error_mut(_this: *mut crate::ffi::MR_C_std_expected_MR_CSharp_NonTrivial_float) -> *mut f32;
    pub fn MR_C_std_expected_MR_CSharp_NonTrivial_float_Destroy(_this: *const MR_C_std_expected_MR_CSharp_NonTrivial_float);
}
