/// Generated from function `MR::StdExpected::GetExp`.
///
/// Calls `MR_StdExpected_GetExp()`.
pub fn get_exp() -> crate::Owned<crate::mr::cs::std_expected_int_std_string>
{
    let __ret = unsafe {crate::ffi::MR_StdExpected_GetExp()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_expected_int_std_string)}
}

/// Generated from function `MR::StdExpected::SetExp`.
///
/// Calls `MR_StdExpected_SetExp()`.
pub fn set_exp(_1: &crate::mr::cs::std_expected_int_std_string)
{
    let __ret = unsafe {crate::ffi::MR_StdExpected_SetExp(crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::cs::std_expected_int_std_string as *mut crate::ffi::MR_C_std_expected_int_std_string)};
    __ret
}

/// Generated from function `MR::StdExpected::SetExpConstRef`.
///
/// Calls `MR_StdExpected_SetExpConstRef()`.
pub fn set_exp_const_ref(_1: &crate::mr::cs::std_expected_int_std_string)
{
    let __ret = unsafe {crate::ffi::MR_StdExpected_SetExpConstRef(_1 as *const crate::mr::cs::std_expected_int_std_string as *const crate::ffi::MR_C_std_expected_int_std_string)};
    __ret
}

/// Generated from function `MR::StdExpected::SetExpDefTrivial`.
///
/// Calls `MR_StdExpected_SetExpDefTrivial()`.
pub fn set_exp_def_trivial(_1: Option<&crate::mr::cs::std_expected_int_std_string>)
{
    let (__pb__1, __ptr__1) = match _1 {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_expected_int_std_string as *mut crate::ffi::MR_C_std_expected_int_std_string), None => (crate::ffi::MR_C_PassBy_DefaultArgument, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_StdExpected_SetExpDefTrivial(__pb__1, __ptr__1)};
    __ret
}

/// Generated from function `MR::StdExpected::SetExpDef`.
///
/// Calls `MR_StdExpected_SetExpDef()`.
pub fn set_exp_def(_1: Option<&crate::mr::cs::std_expected_int_std_string>)
{
    let (__pb__1, __ptr__1) = match _1 {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_expected_int_std_string as *mut crate::ffi::MR_C_std_expected_int_std_string), None => (crate::ffi::MR_C_PassBy_DefaultArgument, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_StdExpected_SetExpDef(__pb__1, __ptr__1)};
    __ret
}

/// Generated from function `MR::StdExpected::GetExpVoid`.
///
/// Calls `MR_StdExpected_GetExpVoid()`.
pub fn get_exp_void() -> crate::Owned<crate::mr::cs::std_expected_void_float>
{
    let __ret = unsafe {crate::ffi::MR_StdExpected_GetExpVoid()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_expected_void_float)}
}

/// Generated from function `MR::StdExpected::SetExpVoid`.
///
/// Calls `MR_StdExpected_SetExpVoid()`.
pub fn set_exp_void(_1: &crate::mr::cs::std_expected_void_float)
{
    let __ret = unsafe {crate::ffi::MR_StdExpected_SetExpVoid(_1 as *const crate::mr::cs::std_expected_void_float as *const crate::ffi::MR_C_std_expected_void_float)};
    __ret
}

/// Generated from function `MR::StdExpected::SetExpVoidConstRef`.
///
/// Calls `MR_StdExpected_SetExpVoidConstRef()`.
pub fn set_exp_void_const_ref(_1: &crate::mr::cs::std_expected_void_float)
{
    let __ret = unsafe {crate::ffi::MR_StdExpected_SetExpVoidConstRef(_1 as *const crate::mr::cs::std_expected_void_float as *const crate::ffi::MR_C_std_expected_void_float)};
    __ret
}

/// Generated from function `MR::StdExpected::SetExpVoidDefTrivial`.
///
/// Calls `MR_StdExpected_SetExpVoidDefTrivial()`.
pub fn set_exp_void_def_trivial(_1: Option<&crate::mr::cs::std_expected_void_float>)
{
    let __ret = unsafe {crate::ffi::MR_StdExpected_SetExpVoidDefTrivial(_1.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_expected_void_float as *const crate::ffi::MR_C_std_expected_void_float))};
    __ret
}

/// Generated from function `MR::StdExpected::SetExpVoidDef`.
///
/// Calls `MR_StdExpected_SetExpVoidDef()`.
pub fn set_exp_void_def(_1: Option<&crate::mr::cs::std_expected_void_float>)
{
    let __ret = unsafe {crate::ffi::MR_StdExpected_SetExpVoidDef(_1.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_expected_void_float as *const crate::ffi::MR_C_std_expected_void_float))};
    __ret
}

/// Generated from function `MR::StdExpected::GetExpVec`.
///
/// Calls `MR_StdExpected_GetExpVec()`.
pub fn get_exp_vec() -> crate::Owned<crate::mr::cs::std_vector_std_expected_int_std_string>
{
    let __ret = unsafe {crate::ffi::MR_StdExpected_GetExpVec()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_std_expected_int_std_string)}
}

