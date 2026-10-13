/// Generated from struct `MR::MatchingLayout::A`. Has the same layout in C, C++, and Rust.
#[repr(C)]
#[derive(Clone, Copy, Debug)]
pub struct MR_MatchingLayout_A
{
    /// first
    pub a: core::ffi::c_int,
    /// second
    pub b: core::ffi::c_short,
    /// third
    pub c: f32,
    pub ll: core::ffi::c_long,
    pub arr: [core::ffi::c_int; 3],
    pub arr2d: [[core::ffi::c_int; 5]; 4],
}
// No layout assertions: this struct has platform-sized fields, and the sizes in the description JSON are for the platform the C bindings were generated on.

/// Generated from struct `MR::MatchingLayout::B`. Has the same layout in C, C++, and Rust.
#[repr(C)]
#[derive(Clone, Copy, Debug)]
pub struct MR_MatchingLayout_B
{
    pub x: core::ffi::c_short,
    pub a: crate::ffi::MR_MatchingLayout_A,
    pub y: core::ffi::c_char,
}
// No layout assertions: this struct has platform-sized fields, and the sizes in the description JSON are for the platform the C bindings were generated on.

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_MatchingLayout_foo() -> crate::ffi::MR_MatchingLayout_B;
    pub fn MR_MatchingLayout_bar(_1: crate::ffi::MR_MatchingLayout_B);
    pub fn MR_MatchingLayout_baz(_1: *const crate::ffi::MR_MatchingLayout_B);
    pub fn MR_MatchingLayout_bleh(_1: *mut crate::ffi::MR_MatchingLayout_B) -> *mut crate::ffi::MR_MatchingLayout_B;
    pub fn MR_MatchingLayout_A_Get_x() -> *const core::ffi::c_int;
    pub fn MR_MatchingLayout_A_GetMutable_x() -> *mut core::ffi::c_int;
    pub fn MR_MatchingLayout_A_Set_x(value: core::ffi::c_int);
    pub fn MR_MatchingLayout_B_DefaultConstruct() -> crate::ffi::MR_MatchingLayout_B;
}
