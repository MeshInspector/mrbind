/// Generated from enum `MR::DeclOrder::A::E`. The constants are associated constants of this type.
pub use crate::ffi::MR_DeclOrder_A_E as A_E;

/// Here all classes are whitelisted using `--expose-as-struct`.
/// Generated from class `MR::DeclOrder::A`.
///
/// Generated from struct `MR::DeclOrder::A`. The fields are accessed directly.
pub use crate::ffi::MR_DeclOrder_A as A;

impl A
{
    /// Generated from method `MR::DeclOrder::A::c`.
    ///
    /// Calls `MR_DeclOrder_A_c()`.
    pub fn c(&mut self) -> crate::ffi::MR_DeclOrder_A_B
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_DeclOrder_A_c(self as *mut Self as *mut crate::ffi::MR_DeclOrder_A)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::DeclOrder::A::d`.
    ///
    /// Calls `MR_DeclOrder_A_d()`.
    pub fn d(&mut self) -> crate::ffi::MR_DeclOrder_A_E
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_DeclOrder_A_d(self as *mut Self as *mut crate::ffi::MR_DeclOrder_A)};
        crate::__check_exception();
        __ret
    }

}

/// Generated from class `MR::DeclOrder::A::B`.
///
/// Generated from struct `MR::DeclOrder::A::B`. The fields are accessed directly.
pub use crate::ffi::MR_DeclOrder_A_B as A_B;

impl A_B
{
    /// Generated from method `MR::DeclOrder::A::B::a`.
    ///
    /// Calls `MR_DeclOrder_A_B_a()`.
    pub fn a(&mut self) -> crate::ffi::MR_DeclOrder_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_DeclOrder_A_B_a(self as *mut Self as *mut crate::ffi::MR_DeclOrder_A_B)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::DeclOrder::A::B::b`.
    ///
    /// Calls `MR_DeclOrder_A_B_b()`.
    pub fn b(&mut self) -> crate::ffi::MR_DeclOrder_A_E
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_DeclOrder_A_B_b(self as *mut Self as *mut crate::ffi::MR_DeclOrder_A_B)};
        crate::__check_exception();
        __ret
    }

}

/// Generated from class `MR::DeclOrder::C<false>`.
///
/// Generated from struct `MR::DeclOrder::C<false>`. The fields are accessed directly.
pub use crate::ffi::MR_DeclOrder_C_false as C_false;

impl C_false
{
    /// Generated from method `MR::DeclOrder::C<false>::blah`.
    ///
    /// Calls `MR_DeclOrder_C_false_blah()`.
    pub fn blah(&mut self) -> crate::ffi::MR_DeclOrder_C_true
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_DeclOrder_C_false_blah(self as *mut Self as *mut crate::ffi::MR_DeclOrder_C_false)};
        crate::__check_exception();
        __ret
    }

}

/// Generated from class `MR::DeclOrder::C<true>`.
///
/// Generated from struct `MR::DeclOrder::C<true>`. The fields are accessed directly.
pub use crate::ffi::MR_DeclOrder_C_true as C_true;

impl C_true
{
    /// Generated from method `MR::DeclOrder::C<true>::blah`.
    ///
    /// Calls `MR_DeclOrder_C_true_blah()`.
    pub fn blah(&mut self) -> crate::ffi::MR_DeclOrder_C_false
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_DeclOrder_C_true_blah(self as *mut Self as *mut crate::ffi::MR_DeclOrder_C_true)};
        crate::__check_exception();
        __ret
    }

}

