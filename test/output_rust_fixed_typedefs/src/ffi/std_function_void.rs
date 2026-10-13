/// Generated from class `std::function<void(void)>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_function_void
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_function_void_DefaultConstruct() -> *mut crate::ffi::MR_C_std_function_void;
    pub fn MR_C_std_function_void_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_void) -> *mut crate::ffi::MR_C_std_function_void;
    pub fn MR_C_std_function_void_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_function_void, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_void);
    pub fn MR_C_std_function_void_has_value(_this: *const crate::ffi::MR_C_std_function_void) -> bool;
    pub fn MR_C_std_function_void_reset(_this: *mut crate::ffi::MR_C_std_function_void);
    pub fn MR_C_std_function_void_call(_this: *const crate::ffi::MR_C_std_function_void);
    pub fn MR_C_std_function_void_Destroy(_this: *const MR_C_std_function_void);
    pub fn MR_C_std_function_void_ConstructStateless(func: Option<unsafe extern "C" fn()>) -> *mut crate::ffi::MR_C_std_function_void;
    pub fn MR_C_std_function_void_Assign(_this: *mut crate::ffi::MR_C_std_function_void, func: Option<unsafe extern "C" fn()>);
    pub fn MR_C_std_function_void_ConstructEx(func: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut *mut core::ffi::c_void)>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>) -> *mut crate::ffi::MR_C_std_function_void;
    pub fn MR_C_std_function_void_AssignEx(_this: *mut crate::ffi::MR_C_std_function_void, func: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut *mut core::ffi::c_void)>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>);
}
