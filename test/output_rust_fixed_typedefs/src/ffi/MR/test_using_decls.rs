/// Generated from class `MR::UsingDecls::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_UsingDecls_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from enum `MR::UsingDecls::A::E`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_UsingDecls_A_E(pub i32);

/// Generated from class `MR::UsingDecls::B`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_UsingDecls_B
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_UsingDecls_A_ConstructFromAnother(_other: *const crate::ffi::MR_UsingDecls_A) -> *mut crate::ffi::MR_UsingDecls_A;
    pub fn MR_UsingDecls_A_Construct(_1: i32) -> *mut crate::ffi::MR_UsingDecls_A;
    pub fn MR_UsingDecls_A_ConvertTo_int32_t(_this: *mut crate::ffi::MR_UsingDecls_A) -> i32;
    pub fn MR_UsingDecls_A_AssignFromAnother(_this: *mut crate::ffi::MR_UsingDecls_A, _other: *const crate::ffi::MR_UsingDecls_A) -> *mut crate::ffi::MR_UsingDecls_A;
    pub fn MR_UsingDecls_A_assign(_this: *mut crate::ffi::MR_UsingDecls_A, _1: i32);
    pub fn MR_UsingDecls_A_Method(_this: *mut crate::ffi::MR_UsingDecls_A);
    pub fn MR_UsingDecls_A_StaticFunc();
    pub fn MR_UsingDecls_A_Get_StaticVar() -> *const i32;
    pub fn MR_UsingDecls_A_GetMutable_StaticVar() -> *mut i32;
    pub fn MR_UsingDecls_A_Set_StaticVar(value: i32);
    pub fn MR_UsingDecls_A_Get_Field(_this: *const crate::ffi::MR_UsingDecls_A) -> *const i32;
    pub fn MR_UsingDecls_A_GetMutable_Field(_this: *mut crate::ffi::MR_UsingDecls_A) -> *mut i32;
    pub fn MR_UsingDecls_A_Set_Field(_this: *mut crate::ffi::MR_UsingDecls_A, value: i32);
    pub fn MR_UsingDecls_A_Destroy(_this: *const MR_UsingDecls_A);
    pub fn MR_UsingDecls_B_ConstructFromAnother(_other: *const crate::ffi::MR_UsingDecls_B) -> *mut crate::ffi::MR_UsingDecls_B;
    pub fn MR_UsingDecls_B_AssignFromAnother(_this: *mut crate::ffi::MR_UsingDecls_B, _other: *const crate::ffi::MR_UsingDecls_B) -> *mut crate::ffi::MR_UsingDecls_B;
    pub fn MR_UsingDecls_B_Destroy(_this: *const MR_UsingDecls_B);
    pub fn MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A(object: *const crate::ffi::MR_UsingDecls_B) -> *const crate::ffi::MR_UsingDecls_A;
    pub fn MR_UsingDecls_B_MutableUpcastTo_MR_UsingDecls_A(object: *mut crate::ffi::MR_UsingDecls_B) -> *mut crate::ffi::MR_UsingDecls_A;
    pub fn MR_UsingDecls_B_StaticDowncastFrom_MR_UsingDecls_A(object: *const crate::ffi::MR_UsingDecls_A) -> *const crate::ffi::MR_UsingDecls_B;
    pub fn MR_UsingDecls_B_MutableStaticDowncastFrom_MR_UsingDecls_A(object: *mut crate::ffi::MR_UsingDecls_A) -> *mut crate::ffi::MR_UsingDecls_B;
}
