//! The common helpers of the C bindings.

/// How an object is passed to a C function. Matches the C enum of the same name.
pub type MR_C_PassBy = core::ffi::c_int;
pub const MR_C_PassBy_DefaultConstruct: MR_C_PassBy = 0;
pub const MR_C_PassBy_Copy: MR_C_PassBy = 1;
pub const MR_C_PassBy_Move: MR_C_PassBy = 2;
pub const MR_C_PassBy_MoveAndDestroy: MR_C_PassBy = 3;
pub const MR_C_PassBy_DefaultArgument: MR_C_PassBy = 4;
pub const MR_C_PassBy_NoObject: MR_C_PassBy = 5;

pub type MR_C_ExceptionHandlerFuncPtr = Option<unsafe extern "C" fn(messages: *const *const core::ffi::c_char, type_names: *const *const core::ffi::c_char, userdata: *mut core::ffi::c_void)>;

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_Free(ptr: *mut core::ffi::c_void);
    pub fn MR_C_FreeArray(ptr: *mut core::ffi::c_void);
    pub fn MR_C_SetExceptionHandler(func: MR_C_ExceptionHandlerFuncPtr, userdata: *mut core::ffi::c_void);
}
