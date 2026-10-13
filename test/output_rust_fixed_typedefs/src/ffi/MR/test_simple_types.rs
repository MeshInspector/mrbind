/// Generated from class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_TestSimpleTypes_ClassTemplate_uint64_t
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from enum `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::Enum`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_TestSimpleTypes_ClassTemplate_uint64_t_Enum(pub i32);

/// Generated from enum `MR::TestSimpleTypes::E`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_TestSimpleTypes_E(pub i32);
impl MR_TestSimpleTypes_E
{
    pub const e1: MR_TestSimpleTypes_E = MR_TestSimpleTypes_E(0i64 as i32);
}

/// Generated from enum `MR::TestSimpleTypes::E2`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_TestSimpleTypes_E2(pub i16);
impl MR_TestSimpleTypes_E2
{
    pub const e1: MR_TestSimpleTypes_E2 = MR_TestSimpleTypes_E2(0i64 as i16);
}

/// Generated from enum `MR::TestSimpleTypes::E3`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_TestSimpleTypes_E3(pub i32);

/// Generated from enum `MR::TestSimpleTypes::E4`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_TestSimpleTypes_E4(pub u32);

/// Generated from enum `MR::TestSimpleTypes::E5`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_TestSimpleTypes_E5(pub i64);

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_TestSimpleTypes_GetInt() -> i32;
    pub fn MR_TestSimpleTypes_SetInt(_1: i32);
    pub fn MR_TestSimpleTypes_SetIntDef(_1: *const i32);
    pub fn MR_TestSimpleTypes_GetIntPtr() -> *mut i32;
    pub fn MR_TestSimpleTypes_SetIntPtr(_1: *mut i32);
    pub fn MR_TestSimpleTypes_SetIntPtrDef(_1: *const *mut i32);
    pub fn MR_TestSimpleTypes_SetIntPtrDefNull(_1: *mut i32);
    pub fn MR_TestSimpleTypes_GetIntRef() -> *mut i32;
    pub fn MR_TestSimpleTypes_SetIntRef(_1: *mut i32);
    pub fn MR_TestSimpleTypes_SetIntRefDef(_1: *mut i32);
    pub fn MR_TestSimpleTypes_GetVoidPtr() -> *mut core::ffi::c_void;
    pub fn MR_TestSimpleTypes_SetVoidPtr(_1: *mut core::ffi::c_void);
    pub fn MR_TestSimpleTypes_SetVoidPtrDef(_1: *const *mut core::ffi::c_void);
    pub fn MR_TestSimpleTypes_SetVoidPtrDefNull(_1: *mut core::ffi::c_void);
    pub fn MR_TestSimpleTypes_GetConstVoidPtr() -> *const core::ffi::c_void;
    pub fn MR_TestSimpleTypes_SetConstVoidPtr(_1: *const core::ffi::c_void);
    pub fn MR_TestSimpleTypes_SetConstVoidPtrDef(_1: *const *const core::ffi::c_void);
    pub fn MR_TestSimpleTypes_SetConstVoidPtrDefNull(_1: *const core::ffi::c_void);
    pub fn MR_TestSimpleTypes_GetVoidPtrPtr() -> *mut *mut core::ffi::c_void;
    pub fn MR_TestSimpleTypes_SetVoidPtrPtr(_1: *mut *mut core::ffi::c_void);
    pub fn MR_TestSimpleTypes_SetVoidPtrPtrDef(_1: *const *mut *mut core::ffi::c_void);
    pub fn MR_TestSimpleTypes_SetVoidPtrPtrDefNull(_1: *mut *mut core::ffi::c_void);
    pub fn MR_TestSimpleTypes_GetEnum() -> i32;
    pub fn MR_TestSimpleTypes_SetEnum(_1: crate::ffi::MR_TestSimpleTypes_E);
    pub fn MR_TestSimpleTypes_SetEnumDef(_1: *const crate::ffi::MR_TestSimpleTypes_E);
    pub fn MR_TestSimpleTypes_GetEnumPtr() -> *mut crate::ffi::MR_TestSimpleTypes_E;
    pub fn MR_TestSimpleTypes_SetEnumPtr(_1: *mut crate::ffi::MR_TestSimpleTypes_E);
    pub fn MR_TestSimpleTypes_SetEnumPtrDef(_1: *const *mut crate::ffi::MR_TestSimpleTypes_E);
    pub fn MR_TestSimpleTypes_SetEnumPtrDefNull(_1: *mut crate::ffi::MR_TestSimpleTypes_E);
    pub fn MR_TestSimpleTypes_GetEnumRef() -> *mut crate::ffi::MR_TestSimpleTypes_E;
    pub fn MR_TestSimpleTypes_SetEnumRef(_1: *mut crate::ffi::MR_TestSimpleTypes_E);
    pub fn MR_TestSimpleTypes_SetEnumRefDef(_1: *mut crate::ffi::MR_TestSimpleTypes_E);
    pub fn MR_TestSimpleTypes_GetEnum2() -> i32;
    pub fn MR_TestSimpleTypes_SetEnum2(_1: crate::ffi::MR_TestSimpleTypes_E2);
    pub fn MR_TestSimpleTypes_SetEnum2Def(_1: *const crate::ffi::MR_TestSimpleTypes_E2);
    pub fn MR_TestSimpleTypes_GetEnum2Ptr() -> *mut crate::ffi::MR_TestSimpleTypes_E2;
    pub fn MR_TestSimpleTypes_SetEnum2Ptr(_1: *mut crate::ffi::MR_TestSimpleTypes_E2);
    pub fn MR_TestSimpleTypes_SetEnum2PtrDef(_1: *const *mut crate::ffi::MR_TestSimpleTypes_E2);
    pub fn MR_TestSimpleTypes_SetEnum2PtrDefNull(_1: *mut crate::ffi::MR_TestSimpleTypes_E2);
    pub fn MR_TestSimpleTypes_GetEnum2Ref() -> *mut crate::ffi::MR_TestSimpleTypes_E2;
    pub fn MR_TestSimpleTypes_SetEnum2Ref(_1: *mut crate::ffi::MR_TestSimpleTypes_E2);
    pub fn MR_TestSimpleTypes_SetEnum2RefDef(_1: *mut crate::ffi::MR_TestSimpleTypes_E2);
    pub fn MR_TestSimpleTypes_CheckCharMaybeUnsigned(_1: *mut core::ffi::c_char);
    pub fn MR_TestSimpleTypes_CheckChar_uint8_t_ptr(_1: *mut u8);
    pub fn MR_TestSimpleTypes_CheckChar_int8_t_ptr(_1: *mut i8);
    pub fn MR_TestSimpleTypes_blah_uint64_t(x: u64) -> u64;
    pub fn MR_TestSimpleTypes_blah_int64_t(x: i64) -> i64;
    pub fn MR_TestSimpleTypes_FuncTemplate_uint64_t(_1: u64) -> u64;
    pub fn MR_TestSimpleTypes_FuncTemplate_int32_t(_1: i32) -> i32;
    pub fn MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother(_other: *const crate::ffi::MR_TestSimpleTypes_ClassTemplate_uint64_t) -> *mut crate::ffi::MR_TestSimpleTypes_ClassTemplate_uint64_t;
    pub fn MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t(_1: u64) -> *mut crate::ffi::MR_TestSimpleTypes_ClassTemplate_uint64_t;
    pub fn MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int32_t(_1: i32) -> *mut crate::ffi::MR_TestSimpleTypes_ClassTemplate_uint64_t;
    pub fn MR_TestSimpleTypes_ClassTemplate_uint64_t_AssignFromAnother(_this: *mut crate::ffi::MR_TestSimpleTypes_ClassTemplate_uint64_t, _other: *const crate::ffi::MR_TestSimpleTypes_ClassTemplate_uint64_t) -> *mut crate::ffi::MR_TestSimpleTypes_ClassTemplate_uint64_t;
    pub fn MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_uint64_t(_this: *mut crate::ffi::MR_TestSimpleTypes_ClassTemplate_uint64_t);
    pub fn MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_int32_t(_this: *mut crate::ffi::MR_TestSimpleTypes_ClassTemplate_uint64_t);
    pub fn MR_TestSimpleTypes_ClassTemplate_uint64_t_Get_var_uint64_t() -> *const u64;
    pub fn MR_TestSimpleTypes_ClassTemplate_uint64_t_GetMutable_var_uint64_t() -> *mut u64;
    pub fn MR_TestSimpleTypes_ClassTemplate_uint64_t_Set_var_uint64_t(value: u64);
    pub fn MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy(_this: *const MR_TestSimpleTypes_ClassTemplate_uint64_t);
}
