/// Generated from class `MR::StdUniquePtr::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_StdUniquePtr_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_StdUniquePtr_GetInt() -> *mut core::ffi::c_int;
    pub fn MR_StdUniquePtr_SetInt(_1: *mut core::ffi::c_int);
    pub fn MR_StdUniquePtr_SetIntConstRef(_1: *const crate::ffi::MR_C_std_unique_ptr_int);
    pub fn MR_StdUniquePtr_SetIntDefTrivial(_1: *mut core::ffi::c_int);
    pub fn MR_StdUniquePtr_SetIntDef(_1: *const *mut core::ffi::c_int);
    pub fn MR_StdUniquePtr_SetIntLvalueRef(_1: *mut crate::ffi::MR_C_std_unique_ptr_int);
    pub fn MR_StdUniquePtr_SetIntLvalueConstRef(_1: *const crate::ffi::MR_C_std_unique_ptr_int);
    pub fn MR_StdUniquePtr_SetIntRvalueRef(_1: *mut core::ffi::c_int);
    pub fn MR_StdUniquePtr_SetIntRvalueConstRef(_1: *mut core::ffi::c_int);
    pub fn MR_StdUniquePtr_GetIntArr() -> *mut core::ffi::c_int;
    pub fn MR_StdUniquePtr_SetIntArr(_1: *mut core::ffi::c_int);
    pub fn MR_StdUniquePtr_SetIntArrDefTrivial(_1: *mut core::ffi::c_int);
    pub fn MR_StdUniquePtr_SetIntArrDef(_1: *const *mut core::ffi::c_int);
    pub fn MR_StdUniquePtr_GetClass() -> *mut crate::ffi::MR_StdUniquePtr_A;
    pub fn MR_StdUniquePtr_SetClass(_1: *mut crate::ffi::MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_SetClassConstRef(_1: *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_SetClassDefTrivial(_1: *mut crate::ffi::MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_SetClassDef(_1: *const *mut crate::ffi::MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_SetClassLvalueRef(_1: *mut crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_SetClassLvalueConstRef(_1: *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_SetClassRvalueRef(_1: *mut crate::ffi::MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_SetClassRvalueConstRef(_1: *mut crate::ffi::MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_GetClassArr() -> *mut crate::ffi::MR_StdUniquePtr_A;
    pub fn MR_StdUniquePtr_SetClassArr(_1: *mut crate::ffi::MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_SetClassArrDefTrivial(_1: *mut crate::ffi::MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_SetClassArrDef(_1: *const *mut crate::ffi::MR_StdUniquePtr_A);
    pub fn MR_StdUniquePtr_GetConstInt() -> *const core::ffi::c_int;
    pub fn MR_StdUniquePtr_GetConstIntArr() -> *const core::ffi::c_int;
    pub fn MR_StdUniquePtr_GetConstClass() -> *const crate::ffi::MR_StdUniquePtr_A;
    pub fn MR_StdUniquePtr_GetConstClassArr() -> *const crate::ffi::MR_StdUniquePtr_A;
    pub fn MR_StdUniquePtr_GetFloat() -> *mut f32;
    pub fn MR_StdUniquePtr_SetFloat(_1: *mut f32);
    pub fn MR_StdUniquePtr_SetFloatDefTrivial(_1: *mut f32);
    pub fn MR_StdUniquePtr_A_DefaultConstruct() -> *mut crate::ffi::MR_StdUniquePtr_A;
    pub fn MR_StdUniquePtr_A_ConstructFromAnother(_other: *const crate::ffi::MR_StdUniquePtr_A) -> *mut crate::ffi::MR_StdUniquePtr_A;
    pub fn MR_StdUniquePtr_A_AssignFromAnother(_this: *mut crate::ffi::MR_StdUniquePtr_A, _other: *const crate::ffi::MR_StdUniquePtr_A) -> *mut crate::ffi::MR_StdUniquePtr_A;
    pub fn MR_StdUniquePtr_A_Destroy(_this: *const MR_StdUniquePtr_A);
}
