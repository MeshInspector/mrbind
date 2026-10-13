/// Generated from class `MR::TypedefsInTemplates::A<int>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_TypedefsInTemplates_A_int
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::TypedefsInTemplates::B<int>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_TypedefsInTemplates_B_int
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::TypedefsInTemplates::B<int>::BB<float>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_TypedefsInTemplates_B_int_BB_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_TypedefsInTemplates_bar(_1: core::ffi::c_int);
    pub fn MR_TypedefsInTemplates_A_int_DefaultConstruct() -> *mut crate::ffi::MR_TypedefsInTemplates_A_int;
    pub fn MR_TypedefsInTemplates_A_int_ConstructFromAnother(_other: *const crate::ffi::MR_TypedefsInTemplates_A_int) -> *mut crate::ffi::MR_TypedefsInTemplates_A_int;
    pub fn MR_TypedefsInTemplates_A_int_AssignFromAnother(_this: *mut crate::ffi::MR_TypedefsInTemplates_A_int, _other: *const crate::ffi::MR_TypedefsInTemplates_A_int) -> *mut crate::ffi::MR_TypedefsInTemplates_A_int;
    pub fn MR_TypedefsInTemplates_A_int_foo(_this: *mut crate::ffi::MR_TypedefsInTemplates_A_int) -> core::ffi::c_int;
    pub fn MR_TypedefsInTemplates_A_int_Destroy(_this: *const MR_TypedefsInTemplates_A_int);
    pub fn MR_TypedefsInTemplates_B_int_DefaultConstruct() -> *mut crate::ffi::MR_TypedefsInTemplates_B_int;
    pub fn MR_TypedefsInTemplates_B_int_ConstructFromAnother(_other: *const crate::ffi::MR_TypedefsInTemplates_B_int) -> *mut crate::ffi::MR_TypedefsInTemplates_B_int;
    pub fn MR_TypedefsInTemplates_B_int_AssignFromAnother(_this: *mut crate::ffi::MR_TypedefsInTemplates_B_int, _other: *const crate::ffi::MR_TypedefsInTemplates_B_int) -> *mut crate::ffi::MR_TypedefsInTemplates_B_int;
    pub fn MR_TypedefsInTemplates_B_int_Destroy(_this: *const MR_TypedefsInTemplates_B_int);
    pub fn MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct() -> *mut crate::ffi::MR_TypedefsInTemplates_B_int_BB_float;
    pub fn MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(_other: *const crate::ffi::MR_TypedefsInTemplates_B_int_BB_float) -> *mut crate::ffi::MR_TypedefsInTemplates_B_int_BB_float;
    pub fn MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother(_this: *mut crate::ffi::MR_TypedefsInTemplates_B_int_BB_float, _other: *const crate::ffi::MR_TypedefsInTemplates_B_int_BB_float) -> *mut crate::ffi::MR_TypedefsInTemplates_B_int_BB_float;
    pub fn MR_TypedefsInTemplates_B_int_BB_float_foo(_this: *mut crate::ffi::MR_TypedefsInTemplates_B_int_BB_float) -> core::ffi::c_int;
    pub fn MR_TypedefsInTemplates_B_int_BB_float_foo2(_this: *mut crate::ffi::MR_TypedefsInTemplates_B_int_BB_float) -> core::ffi::c_int;
    pub fn MR_TypedefsInTemplates_B_int_BB_float_Destroy(_this: *const MR_TypedefsInTemplates_B_int_BB_float);
}
