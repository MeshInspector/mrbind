/// Generated from class `MR::MemberVars::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_MemberVars_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_MemberVars_A_ConstructFromAnother(_other: *const crate::ffi::MR_MemberVars_A) -> *mut crate::ffi::MR_MemberVars_A;
    pub fn MR_MemberVars_A_Get_z() -> *const i32;
    pub fn MR_MemberVars_A_GetMutable_z() -> *mut i32;
    pub fn MR_MemberVars_A_Set_z(value: i32);
    pub fn MR_MemberVars_A_Get_w() -> *const i32;
    pub fn MR_MemberVars_A_Get_x(_this: *const crate::ffi::MR_MemberVars_A) -> *const i32;
    pub fn MR_MemberVars_A_GetMutable_x(_this: *mut crate::ffi::MR_MemberVars_A) -> *mut i32;
    pub fn MR_MemberVars_A_Set_x(_this: *mut crate::ffi::MR_MemberVars_A, value: i32);
    pub fn MR_MemberVars_A_Get_y(_this: *const crate::ffi::MR_MemberVars_A) -> *const i32;
    pub fn MR_MemberVars_A_Get_ref(_this: *const crate::ffi::MR_MemberVars_A) -> *mut i32;
    pub fn MR_MemberVars_A_Get_arr(_this: *const crate::ffi::MR_MemberVars_A) -> *const i32;
    pub fn MR_MemberVars_A_GetMutable_arr(_this: *mut crate::ffi::MR_MemberVars_A) -> *mut i32;
    pub fn MR_MemberVars_A_GetSize_arr() -> usize;
    pub fn MR_MemberVars_A_Destroy(_this: *const MR_MemberVars_A);
}
