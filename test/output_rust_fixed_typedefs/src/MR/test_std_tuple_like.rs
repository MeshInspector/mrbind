/// Generated from function `MR::StdTupleLike::SetPair`.
///
/// Calls `MR_StdTupleLike_SetPair()`.
pub fn set_pair(_1: &crate::mr::cs::std_pair_int32_t_float)
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_SetPair(_1 as *const crate::mr::cs::std_pair_int32_t_float as *const crate::ffi::MR_C_std_pair_int32_t_float)};
    __ret
}

/// Generated from function `MR::StdTupleLike::GetPair`.
///
/// Calls `MR_StdTupleLike_GetPair()`.
pub fn get_pair() -> crate::Owned<crate::mr::cs::std_pair_int32_t_float>
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_GetPair()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_int32_t_float)}
}

/// Generated from function `MR::StdTupleLike::GetPair2`.
///
/// Calls `MR_StdTupleLike_GetPair2()`.
pub fn get_pair2() -> crate::Owned<crate::mr::cs::std_pair_const_int32_t_float>
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_GetPair2()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_const_int32_t_float)}
}

/// Generated from function `MR::StdTupleLike::GetPair3`.
///
/// Calls `MR_StdTupleLike_GetPair3()`.
pub fn get_pair3() -> crate::Owned<crate::mr::cs::std_pair_int32_t_ref_float_ref>
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_GetPair3()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_int32_t_ref_float_ref)}
}

/// Generated from function `MR::StdTupleLike::GetPair4`.
///
/// Calls `MR_StdTupleLike_GetPair4()`.
pub fn get_pair4() -> crate::Owned<crate::mr::cs::std_pair_const_int32_t_ref_const_float_ref>
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_GetPair4()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_const_int32_t_ref_const_float_ref)}
}

/// Generated from function `MR::StdTupleLike::GetPair5`.
///
/// Calls `MR_StdTupleLike_GetPair5()`.
pub fn get_pair5() -> crate::Owned<crate::mr::cs::std_pair_int32_t_rvalue_ref_float_rvalue_ref>
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_GetPair5()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_int32_t_rvalue_ref_float_rvalue_ref)}
}

/// Generated from function `MR::StdTupleLike::GetPair6`.
///
/// Calls `MR_StdTupleLike_GetPair6()`.
pub fn get_pair6() -> crate::Owned<crate::mr::cs::std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref>
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_GetPair6()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref)}
}

/// Generated from function `MR::StdTupleLike::SetTuple`.
///
/// Calls `MR_StdTupleLike_SetTuple()`.
pub fn set_tuple(_1: &crate::mr::cs::std_tuple_int32_t_float)
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_SetTuple(_1 as *const crate::mr::cs::std_tuple_int32_t_float as *const crate::ffi::MR_C_std_tuple_int32_t_float)};
    __ret
}

/// Generated from function `MR::StdTupleLike::GetTuple`.
///
/// Calls `MR_StdTupleLike_GetTuple()`.
pub fn get_tuple() -> crate::Owned<crate::mr::cs::std_tuple_int32_t_float>
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_GetTuple()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int32_t_float)}
}

/// Three separate tuples to avoid generating file paths that are too long, as those cause issues on some filesystems apparently.
/// Generated from function `MR::StdTupleLike::GetTuple2`.
///
/// Calls `MR_StdTupleLike_GetTuple2()`.
pub fn get_tuple2() -> crate::Owned<crate::mr::cs::std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref>
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_GetTuple2()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)}
}

/// Generated from function `MR::StdTupleLike::GetTuple7`.
///
/// Calls `MR_StdTupleLike_GetTuple7()`.
pub fn get_tuple7() -> crate::Owned<crate::mr::cs::std_tuple>
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_GetTuple7()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple)}
}

/// Generated from function `MR::StdTupleLike::GetTuple8`.
///
/// Calls `MR_StdTupleLike_GetTuple8()`.
pub fn get_tuple8() -> crate::Owned<crate::mr::cs::std_tuple_float_double_int32_t_int32_t>
{
    let __ret = unsafe {crate::ffi::MR_StdTupleLike_GetTuple8()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_float_double_int32_t_int32_t)}
}

