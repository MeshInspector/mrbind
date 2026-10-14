/// Generated from class `std::optional<MR::StdOptional::E>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_optional_MR_StdOptional_E
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_optional_MR_StdOptional_E_DefaultConstruct() -> *mut crate::ffi::MR_C_std_optional_MR_StdOptional_E;
    pub fn MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(other: *const crate::ffi::MR_C_std_optional_MR_StdOptional_E) -> *mut crate::ffi::MR_C_std_optional_MR_StdOptional_E;
    pub fn MR_C_std_optional_MR_StdOptional_E_ConstructFrom(other: *const crate::ffi::MR_StdOptional_E) -> *mut crate::ffi::MR_C_std_optional_MR_StdOptional_E;
    pub fn MR_C_std_optional_MR_StdOptional_E_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_optional_MR_StdOptional_E, other: *const crate::ffi::MR_C_std_optional_MR_StdOptional_E);
    pub fn MR_C_std_optional_MR_StdOptional_E_AssignFrom(_this: *mut crate::ffi::MR_C_std_optional_MR_StdOptional_E, other: *const crate::ffi::MR_StdOptional_E);
    pub fn MR_C_std_optional_MR_StdOptional_E_has_value(_this: *const crate::ffi::MR_C_std_optional_MR_StdOptional_E) -> bool;
    pub fn MR_C_std_optional_MR_StdOptional_E_value(_this: *const crate::ffi::MR_C_std_optional_MR_StdOptional_E) -> *const crate::ffi::MR_StdOptional_E;
    pub fn MR_C_std_optional_MR_StdOptional_E_value_mut(_this: *mut crate::ffi::MR_C_std_optional_MR_StdOptional_E) -> *mut crate::ffi::MR_StdOptional_E;
    pub fn MR_C_std_optional_MR_StdOptional_E_Destroy(_this: *const MR_C_std_optional_MR_StdOptional_E);
}
