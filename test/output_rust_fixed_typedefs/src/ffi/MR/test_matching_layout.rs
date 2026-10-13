/// Generated from struct `MR::MatchingLayout::A`. Has the same layout in C, C++, and Rust.
#[repr(C, align(8))]
#[derive(Clone, Copy, Debug)]
pub struct MR_MatchingLayout_A
{
    /// first
    pub a: i32,
    /// second
    pub b: i16,
    /// third
    pub c: f32,
    pub ll: i64,
    pub arr: [i32; 3],
    pub arr2d: [[i32; 5]; 4],
}
const _: () =
{
    assert!(core::mem::size_of::<MR_MatchingLayout_A>() == 120);
    assert!(core::mem::align_of::<MR_MatchingLayout_A>() == 8);
    assert!(core::mem::offset_of!(MR_MatchingLayout_A, a) == 0);
    assert!(core::mem::offset_of!(MR_MatchingLayout_A, b) == 4);
    assert!(core::mem::offset_of!(MR_MatchingLayout_A, c) == 8);
    assert!(core::mem::offset_of!(MR_MatchingLayout_A, ll) == 16);
    assert!(core::mem::offset_of!(MR_MatchingLayout_A, arr) == 24);
    assert!(core::mem::offset_of!(MR_MatchingLayout_A, arr2d) == 36);
};

/// Generated from struct `MR::MatchingLayout::B`. Has the same layout in C, C++, and Rust.
#[repr(C, align(8))]
#[derive(Clone, Copy, Debug)]
pub struct MR_MatchingLayout_B
{
    pub x: i16,
    pub a: crate::ffi::MR_MatchingLayout_A,
    pub y: core::ffi::c_char,
}
const _: () =
{
    assert!(core::mem::size_of::<MR_MatchingLayout_B>() == 136);
    assert!(core::mem::align_of::<MR_MatchingLayout_B>() == 8);
    assert!(core::mem::offset_of!(MR_MatchingLayout_B, x) == 0);
    assert!(core::mem::offset_of!(MR_MatchingLayout_B, a) == 8);
    assert!(core::mem::offset_of!(MR_MatchingLayout_B, y) == 128);
};

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_MatchingLayout_foo() -> crate::ffi::MR_MatchingLayout_B;
    pub fn MR_MatchingLayout_bar(_1: crate::ffi::MR_MatchingLayout_B);
    pub fn MR_MatchingLayout_baz(_1: *const crate::ffi::MR_MatchingLayout_B);
    pub fn MR_MatchingLayout_bleh(_1: *mut crate::ffi::MR_MatchingLayout_B) -> *mut crate::ffi::MR_MatchingLayout_B;
    pub fn MR_MatchingLayout_A_Get_x() -> *const i32;
    pub fn MR_MatchingLayout_A_GetMutable_x() -> *mut i32;
    pub fn MR_MatchingLayout_A_Set_x(value: i32);
    pub fn MR_MatchingLayout_B_DefaultConstruct() -> crate::ffi::MR_MatchingLayout_B;
}
