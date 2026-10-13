/// Generated from class `std::optional<MR::CSharp::Trivial>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_optional_MR_CSharp_Trivial
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct() -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial;
    pub fn MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother(other: *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial) -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial;
    pub fn MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom(other: *const crate::ffi::MR_CSharp_Trivial) -> *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial;
    pub fn MR_C_std_optional_MR_CSharp_Trivial_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial, other: *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial);
    pub fn MR_C_std_optional_MR_CSharp_Trivial_AssignFrom(_this: *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial, other: *const crate::ffi::MR_CSharp_Trivial);
    pub fn MR_C_std_optional_MR_CSharp_Trivial_has_value(_this: *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial) -> bool;
    pub fn MR_C_std_optional_MR_CSharp_Trivial_value(_this: *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial) -> *const crate::ffi::MR_CSharp_Trivial;
    pub fn MR_C_std_optional_MR_CSharp_Trivial_value_mut(_this: *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial) -> *mut crate::ffi::MR_CSharp_Trivial;
    pub fn MR_C_std_optional_MR_CSharp_Trivial_Destroy(_this: *const MR_C_std_optional_MR_CSharp_Trivial);
}
