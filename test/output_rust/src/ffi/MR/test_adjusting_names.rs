/// Generated from class `MR::AdjustingNames::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_AdjustingNames_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_AdjustingNames_foo();
    pub fn MR_AdjustingNames_bar();
    pub fn MR_AdjustingNames_A_DefaultConstruct() -> *mut crate::ffi::MR_AdjustingNames_A;
    pub fn MR_AdjustingNames_A_ConstructFromAnother(_other: *const crate::ffi::MR_AdjustingNames_A) -> *mut crate::ffi::MR_AdjustingNames_A;
    pub fn MR_AdjustingNames_A_ConvertTo_unsigned_long(_this: *mut crate::ffi::MR_AdjustingNames_A) -> core::ffi::c_ulong;
    pub fn MR_AdjustingNames_A_AssignFromAnother(_this: *mut crate::ffi::MR_AdjustingNames_A, _other: *const crate::ffi::MR_AdjustingNames_A) -> *mut crate::ffi::MR_AdjustingNames_A;
    pub fn MR_AdjustingNames_A_foo(_this: *mut crate::ffi::MR_AdjustingNames_A);
    pub fn MR_AdjustingNames_A_bar(_this: *mut crate::ffi::MR_AdjustingNames_A);
    pub fn MR_AdjustingNames_A_Get_var_unsigned_long() -> *const core::ffi::c_ulong;
    pub fn MR_AdjustingNames_A_GetMutable_var_unsigned_long() -> *mut core::ffi::c_ulong;
    pub fn MR_AdjustingNames_A_Set_var_unsigned_long(value: core::ffi::c_ulong);
    pub fn MR_AdjustingNames_A_Destroy(_this: *const MR_AdjustingNames_A);
}
