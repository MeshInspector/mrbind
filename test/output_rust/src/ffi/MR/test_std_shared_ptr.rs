/// Generated from class `MR::StdSharedPtr::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_StdSharedPtr_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_StdSharedPtr_GetInt() -> *mut crate::ffi::MR_C_std_shared_ptr_int;
    pub fn MR_StdSharedPtr_SetInt(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_int);
    pub fn MR_StdSharedPtr_SetIntConstRef(_1: *const crate::ffi::MR_C_std_shared_ptr_int);
    pub fn MR_StdSharedPtr_SetIntDefTrivial(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_int);
    pub fn MR_StdSharedPtr_SetIntDef(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_int);
    pub fn MR_StdSharedPtr_SetIntLvalueRef(_1: *mut crate::ffi::MR_C_std_shared_ptr_int);
    pub fn MR_StdSharedPtr_SetIntLvalueConstRef(_1: *const crate::ffi::MR_C_std_shared_ptr_int);
    pub fn MR_StdSharedPtr_SetIntRvalueRef(_1: *mut crate::ffi::MR_C_std_shared_ptr_int);
    pub fn MR_StdSharedPtr_SetIntRvalueConstRef(_1: *const crate::ffi::MR_C_std_shared_ptr_int);
    pub fn MR_StdSharedPtr_GetIntArr() -> *mut crate::ffi::MR_C_std_shared_ptr_int_array;
    pub fn MR_StdSharedPtr_SetIntArr(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_int_array);
    pub fn MR_StdSharedPtr_SetIntArrDefTrivial(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_int_array);
    pub fn MR_StdSharedPtr_SetIntArrDef(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_int_array);
    pub fn MR_StdSharedPtr_GetIntArr42() -> *mut crate::ffi::MR_C_std_shared_ptr_int_array_42;
    pub fn MR_StdSharedPtr_SetIntArr42(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_int_array_42);
    pub fn MR_StdSharedPtr_SetIntArr42DefTrivial(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_int_array_42);
    pub fn MR_StdSharedPtr_SetIntArr42Def(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_int_array_42);
    pub fn MR_StdSharedPtr_GetClass() -> *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A;
    pub fn MR_StdSharedPtr_SetClass(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A);
    pub fn MR_StdSharedPtr_SetClassConstRef(_1: *const crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A);
    pub fn MR_StdSharedPtr_SetClassDefTrivial(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A);
    pub fn MR_StdSharedPtr_SetClassDef(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A);
    pub fn MR_StdSharedPtr_SetClassLvalueRef(_1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A);
    pub fn MR_StdSharedPtr_SetClassLvalueConstRef(_1: *const crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A);
    pub fn MR_StdSharedPtr_SetClassRvalueRef(_1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A);
    pub fn MR_StdSharedPtr_SetClassRvalueConstRef(_1: *const crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A);
    pub fn MR_StdSharedPtr_GetClassArr() -> *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A_array;
    pub fn MR_StdSharedPtr_SetClassArr(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A_array);
    pub fn MR_StdSharedPtr_SetClassArrDefTrivial(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A_array);
    pub fn MR_StdSharedPtr_SetClassArrDef(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A_array);
    pub fn MR_StdSharedPtr_GetClassArr42() -> *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42;
    pub fn MR_StdSharedPtr_SetClassArr42(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42);
    pub fn MR_StdSharedPtr_SetClassArr42DefTrivial(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42);
    pub fn MR_StdSharedPtr_SetClassArr42Def(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42);
    pub fn MR_StdSharedPtr_GetConstInt() -> *mut crate::ffi::MR_C_std_shared_ptr_const_int;
    pub fn MR_StdSharedPtr_GetConstIntArr() -> *mut crate::ffi::MR_C_std_shared_ptr_const_int_array;
    pub fn MR_StdSharedPtr_GetConstIntArr42() -> *mut crate::ffi::MR_C_std_shared_ptr_const_int_array_42;
    pub fn MR_StdSharedPtr_GetConstClass() -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A;
    pub fn MR_StdSharedPtr_GetConstClassArr() -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array;
    pub fn MR_StdSharedPtr_GetConstClassArr42() -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42;
    pub fn MR_StdSharedPtr_A_DefaultConstruct() -> *mut crate::ffi::MR_StdSharedPtr_A;
    pub fn MR_StdSharedPtr_A_ConstructFromAnother(_other: *const crate::ffi::MR_StdSharedPtr_A) -> *mut crate::ffi::MR_StdSharedPtr_A;
    pub fn MR_StdSharedPtr_A_AssignFromAnother(_this: *mut crate::ffi::MR_StdSharedPtr_A, _other: *const crate::ffi::MR_StdSharedPtr_A) -> *mut crate::ffi::MR_StdSharedPtr_A;
    pub fn MR_StdSharedPtr_A_Destroy(_this: *const MR_StdSharedPtr_A);
}
