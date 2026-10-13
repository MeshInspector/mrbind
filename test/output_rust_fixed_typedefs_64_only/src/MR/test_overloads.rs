/// Generated from function `MR::Overloads::a`.
///
/// Calls `MR_Overloads_a_1()`.
pub fn a_1(_1: core::ffi::c_int)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_a_1(_1)};
    __ret
}

/// Generated from function `MR::Overloads::a`.
///
/// Calls `MR_Overloads_a_2()`.
pub fn a_2(_1: core::ffi::c_int, _2: core::ffi::c_int)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_a_2(_1, _2)};
    __ret
}

/// Generated from function `MR::Overloads::b<int>`.
///
/// Calls `MR_Overloads_b_int()`.
pub fn b_int()
{
    let __ret = unsafe {crate::ffi::MR_Overloads_b_int()};
    __ret
}

/// Generated from function `MR::Overloads::b<float>`.
///
/// Calls `MR_Overloads_b_float()`.
pub fn b_float()
{
    let __ret = unsafe {crate::ffi::MR_Overloads_b_float()};
    __ret
}

/// Generated from function `MR::Overloads::c`.
///
/// Calls `MR_Overloads_c_int()`.
pub fn c_int(_1: core::ffi::c_int)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_c_int(_1)};
    __ret
}

/// Generated from function `MR::Overloads::c`.
///
/// Calls `MR_Overloads_c_float()`.
pub fn c_float(_1: f32)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_c_float(_1)};
    __ret
}

/// Generated from function `MR::Overloads::d`.
///
/// Calls `MR_Overloads_d_int()`.
pub fn d_int(_1: core::ffi::c_char, _2: core::ffi::c_int, _3: core::ffi::c_char)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_d_int(_1, _2, _3)};
    __ret
}

/// Generated from function `MR::Overloads::d`.
///
/// Calls `MR_Overloads_d_float()`.
pub fn d_float(_1: core::ffi::c_char, _2: f32, _3: core::ffi::c_char)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_d_float(_1, _2, _3)};
    __ret
}

/// Generated from function `MR::Overloads::e`.
///
/// Calls `MR_Overloads_e_const_int_ref()`.
pub fn e_const_int_ref(_1: &core::ffi::c_int, _2: &mut core::ffi::c_int)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_e_const_int_ref(_1 as *const core::ffi::c_int as *const core::ffi::c_int, _2 as *mut core::ffi::c_int as *mut core::ffi::c_int)};
    __ret
}

/// Generated from function `MR::Overloads::e`.
///
/// Calls `MR_Overloads_e_int_rvalue_ref_int()`.
pub fn e_int_rvalue_ref_int(_1: &mut core::ffi::c_int, _2: &mut core::ffi::c_int)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_e_int_rvalue_ref_int(_1 as *mut core::ffi::c_int as *mut core::ffi::c_int, _2 as *mut core::ffi::c_int as *mut core::ffi::c_int)};
    __ret
}

/// Generated from function `MR::Overloads::e`.
///
/// Calls `MR_Overloads_e_int_rvalue_ref_float()`.
pub fn e_int_rvalue_ref_float(_1: &mut core::ffi::c_int, _2: &mut f32)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_e_int_rvalue_ref_float(_1 as *mut core::ffi::c_int as *mut core::ffi::c_int, _2 as *mut f32 as *mut f32)};
    __ret
}

/// This is a fun testcase. Here we must not omit cvref on the first parameter, even if it partially helps with disambiguation,
///   because that ultimately leads to an ambiguity.
/// So we can only omit cvref if each function has cvref in that parameter).
/// Generated from function `MR::Overloads::f`.
///
/// Calls `MR_Overloads_f_float()`.
pub fn f_float(_1: f32, _2: core::ffi::c_int)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_f_float(_1, _2)};
    __ret
}

/// Generated from function `MR::Overloads::f`.
///
/// Calls `MR_Overloads_f_int_rvalue_ref()`.
pub fn f_int_rvalue_ref(_1: &mut core::ffi::c_int, _2: f32)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_f_int_rvalue_ref(_1 as *mut core::ffi::c_int as *mut core::ffi::c_int, _2)};
    __ret
}

/// Generated from function `MR::Overloads::f`.
///
/// Calls `MR_Overloads_f_const_int_ref()`.
pub fn f_const_int_ref(_1: &core::ffi::c_int, _2: f32)
{
    let __ret = unsafe {crate::ffi::MR_Overloads_f_const_int_ref(_1 as *const core::ffi::c_int as *const core::ffi::c_int, _2)};
    __ret
}

