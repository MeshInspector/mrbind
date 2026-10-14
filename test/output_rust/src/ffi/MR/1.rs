/// Generated from class `MR::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_foo() -> *mut crate::ffi::MR_C_std_vector_MR_A;
    pub fn MR_bar(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_vector_MR_A);
    pub fn MR_A_DefaultConstruct() -> *mut crate::ffi::MR_A;
    pub fn MR_A_ConstructFromAnother(_other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_A) -> *mut crate::ffi::MR_A;
    pub fn MR_A_AssignFromAnother(_this: *mut crate::ffi::MR_A, _other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_A) -> *mut crate::ffi::MR_A;
    pub fn MR_A_Get_x(_this: *const crate::ffi::MR_A) -> *const crate::ffi::MR_C_std_string;
    pub fn MR_A_GetMutable_x(_this: *mut crate::ffi::MR_A) -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_A_Set_x(_this: *mut crate::ffi::MR_A, value: *const core::ffi::c_char, value_end: *const core::ffi::c_char);
    pub fn MR_A_Destroy(_this: *const MR_A);
}
