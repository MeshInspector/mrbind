/// A C++ input stream.
///
/// Generated from class `std::istream`. Can't be created from Rust, only references to it are used.
#[repr(transparent)]
pub struct std_istream(crate::ffi::MR_C_std_istream);

/// A C++ output stream.
///
/// Generated from class `std::ostream`. Can't be created from Rust, only references to it are used.
#[repr(transparent)]
pub struct std_ostream(crate::ffi::MR_C_std_ostream);

/// Returns the `stdout` stream.
///
/// Calls `MR_C_GetStdCout()`.
pub fn get_std_cout() -> *mut crate::ffi::MR_C_std_ostream
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_GetStdCout()};
    crate::__check_exception();
    __ret
}

/// Returns the `stderr` stream, buffered.
///
/// Calls `MR_C_GetStdCerr()`.
pub fn get_std_cerr() -> *mut crate::ffi::MR_C_std_ostream
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_GetStdCerr()};
    crate::__check_exception();
    __ret
}

/// Returns the `stderr` stream, unbuffered.
///
/// Calls `MR_C_GetStdClog()`.
pub fn get_std_clog() -> *mut crate::ffi::MR_C_std_ostream
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_GetStdClog()};
    crate::__check_exception();
    __ret
}

/// Returns the `stdin` stream.
///
/// Calls `MR_C_GetStdCin()`.
pub fn get_std_cin() -> *mut crate::ffi::MR_C_std_istream
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_GetStdCin()};
    crate::__check_exception();
    __ret
}

