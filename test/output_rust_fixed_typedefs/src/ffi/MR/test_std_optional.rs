/// Generated from class `MR::StdOptional::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_StdOptional_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::StdOptional::B`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_StdOptional_B
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from enum `MR::StdOptional::E`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_StdOptional_E(pub i32);
impl MR_StdOptional_E
{
    pub const e1: MR_StdOptional_E = MR_StdOptional_E(0i64 as i32);
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_StdOptional_GetInt() -> *mut crate::ffi::MR_C_std_optional_int32_t;
    pub fn MR_StdOptional_SetInt(_1: *const i32);
    pub fn MR_StdOptional_SetIntConstRef(_1: *const i32);
    pub fn MR_StdOptional_SetIntDefTrivial(_1: *const i32);
    pub fn MR_StdOptional_SetIntDef(_1: *const crate::ffi::MR_C_std_optional_int32_t);
    pub fn MR_StdOptional_GetEnum() -> *mut crate::ffi::MR_C_std_optional_MR_StdOptional_E;
    pub fn MR_StdOptional_SetEnum(_1: *const crate::ffi::MR_StdOptional_E);
    pub fn MR_StdOptional_SetEnumConstRef(_1: *const crate::ffi::MR_StdOptional_E);
    pub fn MR_StdOptional_SetEnumDefTrivial(_1: *const crate::ffi::MR_StdOptional_E);
    pub fn MR_StdOptional_SetEnumDef(_1: *const crate::ffi::MR_C_std_optional_MR_StdOptional_E);
    pub fn MR_StdOptional_GetClass() -> *mut crate::ffi::MR_C_std_optional_MR_StdOptional_A;
    pub fn MR_StdOptional_SetClass(_1: *const crate::ffi::MR_StdOptional_A);
    pub fn MR_StdOptional_SetClassConstRef(_1: *const crate::ffi::MR_StdOptional_A);
    pub fn MR_StdOptional_SetClassDefTrivial(_1: *const crate::ffi::MR_StdOptional_A);
    pub fn MR_StdOptional_SetClassDef(_1: *const crate::ffi::MR_C_std_optional_MR_StdOptional_A);
    pub fn MR_StdOptional_GetClass2() -> *mut crate::ffi::MR_C_std_optional_MR_StdOptional_B;
    pub fn MR_StdOptional_SetClass2(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_StdOptional_B);
    pub fn MR_StdOptional_SetClass2ConstRef(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_StdOptional_B);
    pub fn MR_StdOptional_SetClass2DefTrivial(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_StdOptional_B);
    pub fn MR_StdOptional_SetClass2Def(_1_pass_by: crate::ffi::MR_C_PassBy, _1: *mut crate::ffi::MR_StdOptional_B);
    pub fn MR_StdOptional_A_DefaultConstruct() -> *mut crate::ffi::MR_StdOptional_A;
    pub fn MR_StdOptional_A_ConstructFrom(x: i32) -> *mut crate::ffi::MR_StdOptional_A;
    pub fn MR_StdOptional_A_ConstructFromAnother(_other: *const crate::ffi::MR_StdOptional_A) -> *mut crate::ffi::MR_StdOptional_A;
    pub fn MR_StdOptional_A_AssignFromAnother(_this: *mut crate::ffi::MR_StdOptional_A, _other: *const crate::ffi::MR_StdOptional_A) -> *mut crate::ffi::MR_StdOptional_A;
    pub fn MR_StdOptional_A_Get_x(_this: *const crate::ffi::MR_StdOptional_A) -> *const i32;
    pub fn MR_StdOptional_A_GetMutable_x(_this: *mut crate::ffi::MR_StdOptional_A) -> *mut i32;
    pub fn MR_StdOptional_A_Set_x(_this: *mut crate::ffi::MR_StdOptional_A, value: i32);
    pub fn MR_StdOptional_A_Destroy(_this: *const MR_StdOptional_A);
    pub fn MR_StdOptional_B_DefaultConstruct() -> *mut crate::ffi::MR_StdOptional_B;
    pub fn MR_StdOptional_B_ConstructFrom(s: *const core::ffi::c_char, s_end: *const core::ffi::c_char) -> *mut crate::ffi::MR_StdOptional_B;
    pub fn MR_StdOptional_B_ConstructFromAnother(_other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_StdOptional_B) -> *mut crate::ffi::MR_StdOptional_B;
    pub fn MR_StdOptional_B_AssignFromAnother(_this: *mut crate::ffi::MR_StdOptional_B, _other_pass_by: crate::ffi::MR_C_PassBy, _other: *mut crate::ffi::MR_StdOptional_B) -> *mut crate::ffi::MR_StdOptional_B;
    pub fn MR_StdOptional_B_Get_s(_this: *const crate::ffi::MR_StdOptional_B) -> *const crate::ffi::MR_C_std_string;
    pub fn MR_StdOptional_B_GetMutable_s(_this: *mut crate::ffi::MR_StdOptional_B) -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_StdOptional_B_Set_s(_this: *mut crate::ffi::MR_StdOptional_B, value: *const core::ffi::c_char, value_end: *const core::ffi::c_char);
    pub fn MR_StdOptional_B_Destroy(_this: *const MR_StdOptional_B);
}
