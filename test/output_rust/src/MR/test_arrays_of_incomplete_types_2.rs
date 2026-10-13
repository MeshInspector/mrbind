/// Can't use an opaque struct as an array element, because, well, it's opaque. But a enum should work.
///
/// Generated from enum `MR::IncompleteArrayElemType::E`. The constants are associated constants of this type.
pub use crate::ffi::MR_IncompleteArrayElemType_E as E;

/// Generated from function `MR::IncompleteArrayElemType::bar`.
///
/// Calls `MR_IncompleteArrayElemType_bar()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn bar(_1: *mut [crate::ffi::MR_IncompleteArrayElemType_E; 4])
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_IncompleteArrayElemType_bar(_1)};
    crate::__check_exception();
    __ret
}

