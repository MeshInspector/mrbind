/// Generated from class `MR::SeparateABC`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_SeparateABC
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_GetSeparateVecABC() -> *mut crate::ffi::MR_C_std_vector_MR_SeparateABC;
    pub fn MR_SeparateABC_DefaultConstruct() -> *mut crate::ffi::MR_SeparateABC;
    pub fn MR_SeparateABC_ConstructFromAnother(_other: *const crate::ffi::MR_SeparateABC) -> *mut crate::ffi::MR_SeparateABC;
    pub fn MR_SeparateABC_AssignFromAnother(_this: *mut crate::ffi::MR_SeparateABC, _other: *const crate::ffi::MR_SeparateABC) -> *mut crate::ffi::MR_SeparateABC;
    pub fn MR_SeparateABC_Destroy(_this: *const MR_SeparateABC);
}
