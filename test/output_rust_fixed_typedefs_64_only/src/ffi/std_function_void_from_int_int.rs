/// Generated from class `std::function<void(int, int)>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_function_void_from_int_int
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_function_void_from_int_int_DefaultConstruct() -> *mut crate::ffi::MR_C_std_function_void_from_int_int;
    pub fn MR_C_std_function_void_from_int_int_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_void_from_int_int) -> *mut crate::ffi::MR_C_std_function_void_from_int_int;
    pub fn MR_C_std_function_void_from_int_int_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_function_void_from_int_int, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_void_from_int_int);
    pub fn MR_C_std_function_void_from_int_int_has_value(_this: *const crate::ffi::MR_C_std_function_void_from_int_int) -> bool;
    pub fn MR_C_std_function_void_from_int_int_reset(_this: *mut crate::ffi::MR_C_std_function_void_from_int_int);
    pub fn MR_C_std_function_void_from_int_int_call(_this: *const crate::ffi::MR_C_std_function_void_from_int_int, _1: core::ffi::c_int, _2: core::ffi::c_int);
    pub fn MR_C_std_function_void_from_int_int_Destroy(_this: *const MR_C_std_function_void_from_int_int);
    pub fn MR_C_std_function_void_from_int_int_ConstructStateless(func: Option<unsafe extern "C" fn(core::ffi::c_int, core::ffi::c_int)>) -> *mut crate::ffi::MR_C_std_function_void_from_int_int;
    pub fn MR_C_std_function_void_from_int_int_Assign(_this: *mut crate::ffi::MR_C_std_function_void_from_int_int, func: Option<unsafe extern "C" fn(core::ffi::c_int, core::ffi::c_int)>);
    pub fn MR_C_std_function_void_from_int_int_ConstructEx(func: Option<unsafe extern "C" fn(core::ffi::c_int, core::ffi::c_int, *mut core::ffi::c_void, *mut *mut core::ffi::c_void)>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>) -> *mut crate::ffi::MR_C_std_function_void_from_int_int;
    pub fn MR_C_std_function_void_from_int_int_AssignEx(_this: *mut crate::ffi::MR_C_std_function_void_from_int_int, func: Option<unsafe extern "C" fn(core::ffi::c_int, core::ffi::c_int, *mut core::ffi::c_void, *mut *mut core::ffi::c_void)>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>);
}
