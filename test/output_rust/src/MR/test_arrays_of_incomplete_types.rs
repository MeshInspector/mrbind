/// Generated from function `MR::IncompleteArrayElemType::foo`.
///
/// Calls `MR_IncompleteArrayElemType_foo()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn foo(_1: *mut [crate::ffi::MR_IncompleteArrayElemType_E; 4])
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_IncompleteArrayElemType_foo(_1)};
    crate::__check_exception();
    __ret
}

