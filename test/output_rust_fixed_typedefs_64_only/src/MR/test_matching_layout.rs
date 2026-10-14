/// Generated from class `MR::MatchingLayout::A`.
///
/// Generated from struct `MR::MatchingLayout::A`. The fields are accessed directly.
pub use crate::ffi::MR_MatchingLayout_A as A;

impl A
{
    /// Having static fields is not an error! Those get their normal getters and setters.
    /// Returns a pointer to a member variable of class `MR::MatchingLayout::A` named `x`.
    ///
    /// Calls `MR_MatchingLayout_A_Get_x()`.
    pub fn x() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MatchingLayout_A_Get_x()};
        __ret
    }

    /// Having static fields is not an error! Those get their normal getters and setters.
    /// Returns a mutable pointer to a member variable of class `MR::MatchingLayout::A` named `x`.
    ///
    /// Calls `MR_MatchingLayout_A_GetMutable_x()`.
    pub fn x_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MatchingLayout_A_GetMutable_x()};
        __ret
    }

    /// Having static fields is not an error! Those get their normal getters and setters.
    /// Modifies a member variable of class `MR::MatchingLayout::A` named `x`.
    ///
    /// Calls `MR_MatchingLayout_A_Set_x()`.
    pub fn set_x(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_MatchingLayout_A_Set_x(value)};
        __ret
    }

}

/// Generated from class `MR::MatchingLayout::B`.
///
/// Generated from struct `MR::MatchingLayout::B`. The fields are accessed directly.
pub use crate::ffi::MR_MatchingLayout_B as B;

impl B
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_MatchingLayout_B_DefaultConstruct()`.
    pub fn new() -> crate::ffi::MR_MatchingLayout_B
    {
        let __ret = unsafe {crate::ffi::MR_MatchingLayout_B_DefaultConstruct()};
        __ret
    }

}

/// Generated from function `MR::MatchingLayout::foo`.
///
/// Calls `MR_MatchingLayout_foo()`.
pub fn foo() -> crate::ffi::MR_MatchingLayout_B
{
    let __ret = unsafe {crate::ffi::MR_MatchingLayout_foo()};
    __ret
}

/// Generated from function `MR::MatchingLayout::bar`.
///
/// Calls `MR_MatchingLayout_bar()`.
pub fn bar(_1: crate::ffi::MR_MatchingLayout_B)
{
    let __ret = unsafe {crate::ffi::MR_MatchingLayout_bar(_1)};
    __ret
}

/// Generated from function `MR::MatchingLayout::baz`.
///
/// Calls `MR_MatchingLayout_baz()`.
pub fn baz(_1: Option<&crate::ffi::MR_MatchingLayout_B>)
{
    let __ret = unsafe {crate::ffi::MR_MatchingLayout_baz(_1.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_MatchingLayout_B as *const crate::ffi::MR_MatchingLayout_B))};
    __ret
}

/// Generated from function `MR::MatchingLayout::bleh`.
///
/// Calls `MR_MatchingLayout_bleh()`.
pub fn bleh(_1: Option<&mut crate::ffi::MR_MatchingLayout_B>) -> Option<&mut crate::ffi::MR_MatchingLayout_B>
{
    let __ret = unsafe {crate::ffi::MR_MatchingLayout_bleh(_1.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_MatchingLayout_B as *mut crate::ffi::MR_MatchingLayout_B))};
    unsafe {(__ret as *mut crate::ffi::MR_MatchingLayout_B).as_mut()}
}

