/// Generated from class `MR::TypedefsInTemplates::A<int32_t>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_TypedefsInTemplates_A_int32_t
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::TypedefsInTemplates::B<int32_t>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_TypedefsInTemplates_B_int32_t
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::TypedefsInTemplates::B<int32_t>::BB<float>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_TypedefsInTemplates_B_int32_t_BB_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_TypedefsInTemplates_bar(_1: i32);
    pub fn MR_TypedefsInTemplates_A_int32_t_DefaultConstruct() -> *mut crate::ffi::MR_TypedefsInTemplates_A_int32_t;
    pub fn MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother(_other: *const crate::ffi::MR_TypedefsInTemplates_A_int32_t) -> *mut crate::ffi::MR_TypedefsInTemplates_A_int32_t;
    pub fn MR_TypedefsInTemplates_A_int32_t_AssignFromAnother(_this: *mut crate::ffi::MR_TypedefsInTemplates_A_int32_t, _other: *const crate::ffi::MR_TypedefsInTemplates_A_int32_t) -> *mut crate::ffi::MR_TypedefsInTemplates_A_int32_t;
    pub fn MR_TypedefsInTemplates_A_int32_t_foo(_this: *mut crate::ffi::MR_TypedefsInTemplates_A_int32_t) -> i32;
    pub fn MR_TypedefsInTemplates_A_int32_t_Destroy(_this: *const MR_TypedefsInTemplates_A_int32_t);
    pub fn MR_TypedefsInTemplates_B_int32_t_DefaultConstruct() -> *mut crate::ffi::MR_TypedefsInTemplates_B_int32_t;
    pub fn MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother(_other: *const crate::ffi::MR_TypedefsInTemplates_B_int32_t) -> *mut crate::ffi::MR_TypedefsInTemplates_B_int32_t;
    pub fn MR_TypedefsInTemplates_B_int32_t_AssignFromAnother(_this: *mut crate::ffi::MR_TypedefsInTemplates_B_int32_t, _other: *const crate::ffi::MR_TypedefsInTemplates_B_int32_t) -> *mut crate::ffi::MR_TypedefsInTemplates_B_int32_t;
    pub fn MR_TypedefsInTemplates_B_int32_t_Destroy(_this: *const MR_TypedefsInTemplates_B_int32_t);
    pub fn MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct() -> *mut crate::ffi::MR_TypedefsInTemplates_B_int32_t_BB_float;
    pub fn MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother(_other: *const crate::ffi::MR_TypedefsInTemplates_B_int32_t_BB_float) -> *mut crate::ffi::MR_TypedefsInTemplates_B_int32_t_BB_float;
    pub fn MR_TypedefsInTemplates_B_int32_t_BB_float_AssignFromAnother(_this: *mut crate::ffi::MR_TypedefsInTemplates_B_int32_t_BB_float, _other: *const crate::ffi::MR_TypedefsInTemplates_B_int32_t_BB_float) -> *mut crate::ffi::MR_TypedefsInTemplates_B_int32_t_BB_float;
    pub fn MR_TypedefsInTemplates_B_int32_t_BB_float_foo(_this: *mut crate::ffi::MR_TypedefsInTemplates_B_int32_t_BB_float) -> i32;
    pub fn MR_TypedefsInTemplates_B_int32_t_BB_float_foo2(_this: *mut crate::ffi::MR_TypedefsInTemplates_B_int32_t_BB_float) -> i32;
    pub fn MR_TypedefsInTemplates_B_int32_t_BB_float_Destroy(_this: *const MR_TypedefsInTemplates_B_int32_t_BB_float);
}
