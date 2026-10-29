/// Generated from class `MR::OverloadSuffix::A`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_OverloadSuffix_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::OverloadSuffix::B`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_OverloadSuffix_B
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::OverloadSuffix::C`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_OverloadSuffix_C
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_OverloadSuffix_foo_a_1_int32_t(_1: i32);
    pub fn MR_OverloadSuffix_foo_a_1_float(_1: f32);
    pub fn MR_OverloadSuffix_foo_a_2(_1: i32, _2: i32);
    pub fn MR_OverloadSuffix_bar_a_int32_t(_1: i32);
    pub fn MR_OverloadSuffix_bar_a_float(_1: f32);
    pub fn MR_OverloadSuffix_baz_a_1(_1: i32);
    pub fn MR_OverloadSuffix_baz_a_2(_1: i32, _2: i32);
    pub fn MR_C_pos_MR_OverloadSuffix_A_ref(_1: *mut crate::ffi::MR_OverloadSuffix_A);
    pub fn MR_C_pos_const_MR_OverloadSuffix_A_ref(_1: *const crate::ffi::MR_OverloadSuffix_A);
    pub fn MR_OverloadSuffix_foo_b(_1: i32);
    pub fn MR_OverloadSuffix_foo_b_1(_1: f32);
    pub fn MR_OverloadSuffix_foo_b_2(_1: i32, _2: i32);
    pub fn MR_OverloadSuffix_bar_b(_1: i32);
    pub fn MR_OverloadSuffix_bar_b_float(_1: f32);
    pub fn MR_OverloadSuffix_baz_b(_1: i32);
    pub fn MR_OverloadSuffix_baz_b_int32_t(_1: i32, _2: i32);
    pub fn MR_C_pos_MR_OverloadSuffix_B_ref(_1: *mut crate::ffi::MR_OverloadSuffix_B);
    pub fn MR_C_pos_const_MR_OverloadSuffix_B_ref(_1: *const crate::ffi::MR_OverloadSuffix_B);
    pub fn MR_OverloadSuffix_foo_c_blah(_1: i32);
    pub fn MR_OverloadSuffix_foo_c_1(_1: f32);
    pub fn MR_OverloadSuffix_foo_c_2(_1: i32, _2: i32);
    pub fn MR_OverloadSuffix_bar_c_blah(_1: i32);
    pub fn MR_OverloadSuffix_bar_c(_1: f32);
    pub fn MR_OverloadSuffix_baz_c_blah(_1: i32);
    pub fn MR_OverloadSuffix_baz_c(_1: i32, _2: i32);
    pub fn MR_C_pos_MR_OverloadSuffix_C_ref(_1: *mut crate::ffi::MR_OverloadSuffix_C);
    pub fn MR_C_pos_const_MR_OverloadSuffix_C_ref(_1: *const crate::ffi::MR_OverloadSuffix_C);
    pub fn MR_OverloadSuffix_A_ConstructFromAnother(_other: *const crate::ffi::MR_OverloadSuffix_A) -> *mut crate::ffi::MR_OverloadSuffix_A;
    pub fn MR_OverloadSuffix_A_Construct_1_int32_t(_1: i32) -> *mut crate::ffi::MR_OverloadSuffix_A;
    pub fn MR_OverloadSuffix_A_Construct_1_float(_1: f32) -> *mut crate::ffi::MR_OverloadSuffix_A;
    pub fn MR_OverloadSuffix_A_Construct_2(_1: i32, _2: i32) -> *mut crate::ffi::MR_OverloadSuffix_A;
    pub fn MR_OverloadSuffix_A_AssignFromAnother(_this: *mut crate::ffi::MR_OverloadSuffix_A, _other: *const crate::ffi::MR_OverloadSuffix_A) -> *mut crate::ffi::MR_OverloadSuffix_A;
    pub fn MR_OverloadSuffix_A_foo_1_int32_t(_this: *mut crate::ffi::MR_OverloadSuffix_A, _1: i32);
    pub fn MR_OverloadSuffix_A_foo_1_float(_this: *mut crate::ffi::MR_OverloadSuffix_A, _1: f32);
    pub fn MR_OverloadSuffix_A_foo_2(_this: *mut crate::ffi::MR_OverloadSuffix_A, _1: i32, _2: i32);
    pub fn MR_C_sub_MR_OverloadSuffix_A_int32_t(_this: *mut crate::ffi::MR_OverloadSuffix_A, _1: i32);
    pub fn MR_C_sub_MR_OverloadSuffix_A_float(_this: *mut crate::ffi::MR_OverloadSuffix_A, _1: f32);
    pub fn MR_OverloadSuffix_A_index_int32_t(_this: *mut crate::ffi::MR_OverloadSuffix_A, _1: i32);
    pub fn MR_OverloadSuffix_A_index_float(_this: *mut crate::ffi::MR_OverloadSuffix_A, _1: f32);
    pub fn MR_OverloadSuffix_A_Destroy(_this: *const MR_OverloadSuffix_A);
    pub fn MR_OverloadSuffix_B_ConstructFromAnother(_other: *const crate::ffi::MR_OverloadSuffix_B) -> *mut crate::ffi::MR_OverloadSuffix_B;
    pub fn MR_OverloadSuffix_B_Construct(_1: i32) -> *mut crate::ffi::MR_OverloadSuffix_B;
    pub fn MR_OverloadSuffix_B_Construct_1(_1: f32) -> *mut crate::ffi::MR_OverloadSuffix_B;
    pub fn MR_OverloadSuffix_B_Construct_2(_1: i32, _2: i32) -> *mut crate::ffi::MR_OverloadSuffix_B;
    pub fn MR_OverloadSuffix_B_AssignFromAnother(_this: *mut crate::ffi::MR_OverloadSuffix_B, _other: *const crate::ffi::MR_OverloadSuffix_B) -> *mut crate::ffi::MR_OverloadSuffix_B;
    pub fn MR_OverloadSuffix_B_foo(_this: *mut crate::ffi::MR_OverloadSuffix_B, _1: i32);
    pub fn MR_OverloadSuffix_B_foo_1(_this: *mut crate::ffi::MR_OverloadSuffix_B, _1: f32);
    pub fn MR_OverloadSuffix_B_foo_2(_this: *mut crate::ffi::MR_OverloadSuffix_B, _1: i32, _2: i32);
    pub fn MR_C_sub_MR_OverloadSuffix_B_int32_t(_this: *mut crate::ffi::MR_OverloadSuffix_B, _1: i32);
    pub fn MR_C_sub_MR_OverloadSuffix_B_float(_this: *mut crate::ffi::MR_OverloadSuffix_B, _1: f32);
    pub fn MR_OverloadSuffix_B_index(_this: *mut crate::ffi::MR_OverloadSuffix_B, _1: i32);
    pub fn MR_OverloadSuffix_B_index_float(_this: *mut crate::ffi::MR_OverloadSuffix_B, _1: f32);
    pub fn MR_OverloadSuffix_B_Destroy(_this: *const MR_OverloadSuffix_B);
    pub fn MR_OverloadSuffix_C_ConstructFromAnother(_other: *const crate::ffi::MR_OverloadSuffix_C) -> *mut crate::ffi::MR_OverloadSuffix_C;
    pub fn MR_OverloadSuffix_C_Construct_blah(_1: i32) -> *mut crate::ffi::MR_OverloadSuffix_C;
    pub fn MR_OverloadSuffix_C_Construct_1(_1: f32) -> *mut crate::ffi::MR_OverloadSuffix_C;
    pub fn MR_OverloadSuffix_C_Construct_2(_1: i32, _2: i32) -> *mut crate::ffi::MR_OverloadSuffix_C;
    pub fn MR_OverloadSuffix_C_AssignFromAnother(_this: *mut crate::ffi::MR_OverloadSuffix_C, _other: *const crate::ffi::MR_OverloadSuffix_C) -> *mut crate::ffi::MR_OverloadSuffix_C;
    pub fn MR_OverloadSuffix_C_foo_blah(_this: *mut crate::ffi::MR_OverloadSuffix_C, _1: i32);
    pub fn MR_OverloadSuffix_C_foo_1(_this: *mut crate::ffi::MR_OverloadSuffix_C, _1: f32);
    pub fn MR_OverloadSuffix_C_foo_2(_this: *mut crate::ffi::MR_OverloadSuffix_C, _1: i32, _2: i32);
    pub fn MR_C_sub_MR_OverloadSuffix_C_int32_t(_this: *mut crate::ffi::MR_OverloadSuffix_C, _1: i32);
    pub fn MR_C_sub_MR_OverloadSuffix_C_float(_this: *mut crate::ffi::MR_OverloadSuffix_C, _1: f32);
    pub fn MR_OverloadSuffix_C_index_blah(_this: *mut crate::ffi::MR_OverloadSuffix_C, _1: i32);
    pub fn MR_OverloadSuffix_C_index(_this: *mut crate::ffi::MR_OverloadSuffix_C, _1: f32);
    pub fn MR_OverloadSuffix_C_Destroy(_this: *const MR_OverloadSuffix_C);
}
