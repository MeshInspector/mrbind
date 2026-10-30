/// Generated from class `MR::InstantiateOnly::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_InstantiateOnly_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_InstantiateOnly_A_DefaultConstruct() -> *mut crate::ffi::MR_InstantiateOnly_A;
    pub fn MR_InstantiateOnly_A_ConstructFromAnother(_other: *const crate::ffi::MR_InstantiateOnly_A) -> *mut crate::ffi::MR_InstantiateOnly_A;
    pub fn MR_InstantiateOnly_A_AssignFromAnother(_this: *mut crate::ffi::MR_InstantiateOnly_A, _other: *const crate::ffi::MR_InstantiateOnly_A) -> *mut crate::ffi::MR_InstantiateOnly_A;
    pub fn MR_InstantiateOnly_A_Destroy(_this: *const MR_InstantiateOnly_A);
}
