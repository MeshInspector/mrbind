/// Generated from struct `MR::DeclOrder::A`. Has the same layout in C, C++, and Rust.
#[repr(C, align(4))]
#[derive(Clone, Copy, Debug)]
pub struct MR_DeclOrder_A
{
    pub blah: core::ffi::c_int,
}
const _: () =
{
    assert!(core::mem::size_of::<MR_DeclOrder_A>() == 4);
    assert!(core::mem::align_of::<MR_DeclOrder_A>() == 4);
    assert!(core::mem::offset_of!(MR_DeclOrder_A, blah) == 0);
};

/// Generated from struct `MR::DeclOrder::A::B`. Has the same layout in C, C++, and Rust.
#[repr(C, align(4))]
#[derive(Clone, Copy, Debug)]
pub struct MR_DeclOrder_A_B
{
    pub bleh: core::ffi::c_int,
}
const _: () =
{
    assert!(core::mem::size_of::<MR_DeclOrder_A_B>() == 4);
    assert!(core::mem::align_of::<MR_DeclOrder_A_B>() == 4);
    assert!(core::mem::offset_of!(MR_DeclOrder_A_B, bleh) == 0);
};

/// Generated from enum `MR::DeclOrder::A::E`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_DeclOrder_A_E(pub core::ffi::c_int);

/// Generated from struct `MR::DeclOrder::C<false>`. Has the same layout in C, C++, and Rust.
#[repr(C, align(4))]
#[derive(Clone, Copy, Debug)]
pub struct MR_DeclOrder_C_false
{
    pub bleh: core::ffi::c_int,
}
const _: () =
{
    assert!(core::mem::size_of::<MR_DeclOrder_C_false>() == 4);
    assert!(core::mem::align_of::<MR_DeclOrder_C_false>() == 4);
    assert!(core::mem::offset_of!(MR_DeclOrder_C_false, bleh) == 0);
};

/// Generated from struct `MR::DeclOrder::C<true>`. Has the same layout in C, C++, and Rust.
#[repr(C, align(4))]
#[derive(Clone, Copy, Debug)]
pub struct MR_DeclOrder_C_true
{
    pub bleh: core::ffi::c_int,
}
const _: () =
{
    assert!(core::mem::size_of::<MR_DeclOrder_C_true>() == 4);
    assert!(core::mem::align_of::<MR_DeclOrder_C_true>() == 4);
    assert!(core::mem::offset_of!(MR_DeclOrder_C_true, bleh) == 0);
};

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_DeclOrder_A_c(_this: *mut crate::ffi::MR_DeclOrder_A) -> crate::ffi::MR_DeclOrder_A_B;
    pub fn MR_DeclOrder_A_d(_this: *mut crate::ffi::MR_DeclOrder_A) -> crate::ffi::MR_DeclOrder_A_E;
    pub fn MR_DeclOrder_A_B_a(_this: *mut crate::ffi::MR_DeclOrder_A_B) -> crate::ffi::MR_DeclOrder_A;
    pub fn MR_DeclOrder_A_B_b(_this: *mut crate::ffi::MR_DeclOrder_A_B) -> crate::ffi::MR_DeclOrder_A_E;
    pub fn MR_DeclOrder_C_false_blah(_this: *mut crate::ffi::MR_DeclOrder_C_false) -> crate::ffi::MR_DeclOrder_C_true;
    pub fn MR_DeclOrder_C_true_blah(_this: *mut crate::ffi::MR_DeclOrder_C_true) -> crate::ffi::MR_DeclOrder_C_false;
}
