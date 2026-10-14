/// Generated from class `MR::SeparateA`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_SeparateA
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_GetSeparateVecA() -> *mut crate::ffi::MR_C_std_vector_MR_SeparateA;
    pub fn MR_SeparateA_ConstructFromAnother(_other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_SeparateA) -> *mut crate::ffi::MR_SeparateA;
    pub fn MR_SeparateA_AssignFromAnother(_this: *mut crate::ffi::MR_SeparateA, _other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_SeparateA) -> *mut crate::ffi::MR_SeparateA;
    pub fn MR_SeparateA_Destroy(_this: *const MR_SeparateA);
    pub fn MR_SeparateA_UpcastTo_MR_CommonBaseAB(object: *const crate::ffi::MR_SeparateA) -> *const crate::ffi::MR_CommonBaseAB;
    pub fn MR_SeparateA_MutableUpcastTo_MR_CommonBaseAB(object: *mut crate::ffi::MR_SeparateA) -> *mut crate::ffi::MR_CommonBaseAB;
    pub fn MR_SeparateA_StaticDowncastFrom_MR_CommonBaseAB(object: *const crate::ffi::MR_CommonBaseAB) -> *const crate::ffi::MR_SeparateA;
    pub fn MR_SeparateA_MutableStaticDowncastFrom_MR_CommonBaseAB(object: *mut crate::ffi::MR_CommonBaseAB) -> *mut crate::ffi::MR_SeparateA;
    pub fn MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(object: *const crate::ffi::MR_CommonBaseAB) -> *const crate::ffi::MR_SeparateA;
    pub fn MR_SeparateA_DynamicDowncastFromOrFail_MR_CommonBaseAB(object: *const crate::ffi::MR_CommonBaseAB) -> *const crate::ffi::MR_SeparateA;
    pub fn MR_SeparateA_MutableDynamicDowncastFrom_MR_CommonBaseAB(object: *mut crate::ffi::MR_CommonBaseAB) -> *mut crate::ffi::MR_SeparateA;
    pub fn MR_SeparateA_MutableDynamicDowncastFromOrFail_MR_CommonBaseAB(object: *mut crate::ffi::MR_CommonBaseAB) -> *mut crate::ffi::MR_SeparateA;
}
