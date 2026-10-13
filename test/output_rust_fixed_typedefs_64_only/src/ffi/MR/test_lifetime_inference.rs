/// Generated from class `MR::LifetimeInference::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_LifetimeInference_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::LifetimeInference::B`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_LifetimeInference_B
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::LifetimeInference::C`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_LifetimeInference_C
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_LifetimeInference_begin_MR_LifetimeInference_A(a: *mut crate::ffi::MR_LifetimeInference_A) -> *mut core::ffi::c_int;
    pub fn MR_LifetimeInference_end_MR_LifetimeInference_A(a: *mut crate::ffi::MR_LifetimeInference_A) -> *mut core::ffi::c_int;
    pub fn MR_LifetimeInference_begin_MR_LifetimeInference_B(b: *mut crate::ffi::MR_LifetimeInference_B) -> *mut core::ffi::c_int;
    pub fn MR_LifetimeInference_end_MR_LifetimeInference_B(b: *mut crate::ffi::MR_LifetimeInference_B) -> *mut core::ffi::c_int;
    pub fn MR_LifetimeInference_A_DefaultConstruct() -> *mut crate::ffi::MR_LifetimeInference_A;
    pub fn MR_LifetimeInference_A_ConstructFrom(x: core::ffi::c_int) -> *mut crate::ffi::MR_LifetimeInference_A;
    pub fn MR_LifetimeInference_A_ConstructFromAnother(_other: *const crate::ffi::MR_LifetimeInference_A) -> *mut crate::ffi::MR_LifetimeInference_A;
    pub fn MR_LifetimeInference_A_AssignFromAnother(_this: *mut crate::ffi::MR_LifetimeInference_A, _other: *const crate::ffi::MR_LifetimeInference_A) -> *mut crate::ffi::MR_LifetimeInference_A;
    pub fn MR_LifetimeInference_A_begin(_this: *mut crate::ffi::MR_LifetimeInference_A) -> *mut core::ffi::c_int;
    pub fn MR_LifetimeInference_A_end(_this: *mut crate::ffi::MR_LifetimeInference_A) -> *mut core::ffi::c_int;
    pub fn MR_LifetimeInference_A_Get_x(_this: *const crate::ffi::MR_LifetimeInference_A) -> *const core::ffi::c_int;
    pub fn MR_LifetimeInference_A_GetMutable_x(_this: *mut crate::ffi::MR_LifetimeInference_A) -> *mut core::ffi::c_int;
    pub fn MR_LifetimeInference_A_Set_x(_this: *mut crate::ffi::MR_LifetimeInference_A, value: core::ffi::c_int);
    pub fn MR_LifetimeInference_A_Destroy(_this: *const MR_LifetimeInference_A);
    pub fn MR_LifetimeInference_B_DefaultConstruct() -> *mut crate::ffi::MR_LifetimeInference_B;
    pub fn MR_LifetimeInference_B_ConstructFrom(x: core::ffi::c_int) -> *mut crate::ffi::MR_LifetimeInference_B;
    pub fn MR_LifetimeInference_B_ConstructFromAnother(_other: *const crate::ffi::MR_LifetimeInference_B) -> *mut crate::ffi::MR_LifetimeInference_B;
    pub fn MR_LifetimeInference_B_AssignFromAnother(_this: *mut crate::ffi::MR_LifetimeInference_B, _other: *const crate::ffi::MR_LifetimeInference_B) -> *mut crate::ffi::MR_LifetimeInference_B;
    pub fn MR_LifetimeInference_B_Get_x(_this: *const crate::ffi::MR_LifetimeInference_B) -> *const core::ffi::c_int;
    pub fn MR_LifetimeInference_B_GetMutable_x(_this: *mut crate::ffi::MR_LifetimeInference_B) -> *mut core::ffi::c_int;
    pub fn MR_LifetimeInference_B_Set_x(_this: *mut crate::ffi::MR_LifetimeInference_B, value: core::ffi::c_int);
    pub fn MR_LifetimeInference_B_Destroy(_this: *const MR_LifetimeInference_B);
    pub fn MR_LifetimeInference_C_ConstructFromAnother(_other: *const crate::ffi::MR_LifetimeInference_C) -> *mut crate::ffi::MR_LifetimeInference_C;
    pub fn MR_LifetimeInference_C_Construct(_1: *mut crate::ffi::MR_LifetimeInference_A, _2: *mut core::ffi::c_int, _3: core::ffi::c_int) -> *mut crate::ffi::MR_LifetimeInference_C;
    pub fn MR_LifetimeInference_C_AssignFromAnother(_this: *mut crate::ffi::MR_LifetimeInference_C, _other: *const crate::ffi::MR_LifetimeInference_C) -> *mut crate::ffi::MR_LifetimeInference_C;
    pub fn MR_LifetimeInference_C_Destroy(_this: *const MR_LifetimeInference_C);
}
