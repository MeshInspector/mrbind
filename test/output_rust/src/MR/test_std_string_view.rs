/// Generated from function `MR::StdStringView::Set`.
///
/// Calls `MR_StdStringView_Set()`.
pub fn set(s: &str)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdStringView_Set(s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdStringView::SetWithDefault`.
///
/// Calls `MR_StdStringView_SetWithDefault()`.
pub fn set_with_default(s: Option<&str>)
{
    let (__begin_s, __end_s) = match s {Some(s) => (s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char), None => (core::ptr::null(), core::ptr::null())};
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdStringView_SetWithDefault(__begin_s, __end_s)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdStringView::Get`.
///
/// Calls `MR_StdStringView_Get()`.
pub fn get() -> crate::Owned<crate::mr::cs::std_string_view>
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdStringView_Get()};
    crate::__check_exception();
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_string_view)}
}

/// Generated from function `MR::StdStringView::WriteToRef`.
///
/// Calls `MR_StdStringView_WriteToRef()`.
pub fn write_to_ref(r#ref: &mut crate::mr::cs::std_string_view)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdStringView_WriteToRef(r#ref as *mut crate::mr::cs::std_string_view as *mut crate::ffi::MR_C_std_string_view)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdStringView::WriteToPtr`.
///
/// Calls `MR_StdStringView_WriteToPtr()`.
pub fn write_to_ptr(ptr: Option<&mut crate::mr::cs::std_string_view>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdStringView_WriteToPtr(ptr.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::cs::std_string_view as *mut crate::ffi::MR_C_std_string_view))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdStringView::ConstRef`.
///
/// Calls `MR_StdStringView_ConstRef()`.
pub fn const_ref(s: &str)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdStringView_ConstRef(s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdStringView::RvalueRef`.
///
/// Calls `MR_StdStringView_RvalueRef()`.
pub fn rvalue_ref(s: &str)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdStringView_RvalueRef(s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdStringView::ConstRvalueRef`.
///
/// Calls `MR_StdStringView_ConstRvalueRef()`.
pub fn const_rvalue_ref(s: &str)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdStringView_ConstRvalueRef(s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char)};
    crate::__check_exception();
    __ret
}

