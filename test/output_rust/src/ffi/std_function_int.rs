/// Generated from class `std::function<int(void)>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_function_int
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_function_int_DefaultConstruct() -> *mut crate::ffi::MR_C_std_function_int;
    pub fn MR_C_std_function_int_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_int) -> *mut crate::ffi::MR_C_std_function_int;
    pub fn MR_C_std_function_int_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_function_int, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_int);
    pub fn MR_C_std_function_int_has_value(_this: *const crate::ffi::MR_C_std_function_int) -> bool;
    pub fn MR_C_std_function_int_reset(_this: *mut crate::ffi::MR_C_std_function_int);
    pub fn MR_C_std_function_int_call(_this: *const crate::ffi::MR_C_std_function_int) -> core::ffi::c_int;
    pub fn MR_C_std_function_int_Destroy(_this: *const MR_C_std_function_int);
    pub fn MR_C_std_function_int_ConstructStateless(func: Option<unsafe extern "C" fn() -> core::ffi::c_int>) -> *mut crate::ffi::MR_C_std_function_int;
    pub fn MR_C_std_function_int_Assign(_this: *mut crate::ffi::MR_C_std_function_int, func: Option<unsafe extern "C" fn() -> core::ffi::c_int>);
    pub fn MR_C_std_function_int_ConstructEx(func: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> core::ffi::c_int>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>) -> *mut crate::ffi::MR_C_std_function_int;
    pub fn MR_C_std_function_int_AssignEx(_this: *mut crate::ffi::MR_C_std_function_int, func: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> core::ffi::c_int>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>);
}
