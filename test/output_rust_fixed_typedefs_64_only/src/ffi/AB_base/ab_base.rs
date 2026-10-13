/// Generated from class `MR::CommonBaseAB`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_CommonBaseAB
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_mark_shared_common_base_ab() -> *mut crate::ffi::MR_C_std_shared_ptr_MR_CommonBaseAB;
    pub fn MR_CommonBaseAB_ConstructFromAnother(_other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_CommonBaseAB) -> *mut crate::ffi::MR_CommonBaseAB;
    pub fn MR_CommonBaseAB_AssignFromAnother(_this: *mut crate::ffi::MR_CommonBaseAB, _other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_CommonBaseAB) -> *mut crate::ffi::MR_CommonBaseAB;
    pub fn MR_CommonBaseAB_Destroy(_this: *const MR_CommonBaseAB);
}
