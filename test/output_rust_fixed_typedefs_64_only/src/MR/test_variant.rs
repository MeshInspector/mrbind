/// Generated from function `MR::StdVariant::foo`.
///
/// Calls `MR_StdVariant_foo()`.
pub fn foo() -> crate::Owned<crate::mr::cs::std_variant_int_float>
{
    let __ret = unsafe {crate::ffi::MR_StdVariant_foo()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int_float)}
}

/// Generated from function `MR::StdVariant::bar`.
///
/// Calls `MR_StdVariant_bar()`.
pub fn bar(_1: &crate::mr::cs::std_variant_int_float_float)
{
    let __ret = unsafe {crate::ffi::MR_StdVariant_bar(_1 as *const crate::mr::cs::std_variant_int_float_float as *const crate::ffi::MR_C_std_variant_int_float_float)};
    __ret
}

/// Generated from function `MR::StdVariant::baz`.
///
/// Calls `MR_StdVariant_baz()`.
pub fn baz(_1: &crate::mr::cs::std_variant_int_float_std_string)
{
    let __ret = unsafe {crate::ffi::MR_StdVariant_baz(crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::cs::std_variant_int_float_std_string as *mut crate::ffi::MR_C_std_variant_int_float_std_string)};
    __ret
}

/// Generated from function `MR::StdVariant::blah`.
///
/// Calls `MR_StdVariant_blah()`.
pub fn blah() -> crate::Owned<crate::mr::cs::std_variant_std_monostate_int_float>
{
    let __ret = unsafe {crate::ffi::MR_StdVariant_blah()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_std_monostate_int_float)}
}

