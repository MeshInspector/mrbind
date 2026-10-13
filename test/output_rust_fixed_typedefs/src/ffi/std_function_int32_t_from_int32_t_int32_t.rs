/// Generated from class `std::function<int32_t(int32_t, int32_t)>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_function_int32_t_from_int32_t_int32_t
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_DefaultConstruct() -> *mut crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t;
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t) -> *mut crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t;
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t);
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_has_value(_this: *const crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t) -> bool;
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_reset(_this: *mut crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t);
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_call(_this: *const crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t, _1: i32, _2: i32) -> i32;
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_Destroy(_this: *const MR_C_std_function_int32_t_from_int32_t_int32_t);
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_ConstructStateless(func: Option<unsafe extern "C" fn(i32, i32) -> i32>) -> *mut crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t;
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_Assign(_this: *mut crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t, func: Option<unsafe extern "C" fn(i32, i32) -> i32>);
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_ConstructEx(func: Option<unsafe extern "C" fn(i32, i32, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> i32>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>) -> *mut crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t;
    pub fn MR_C_std_function_int32_t_from_int32_t_int32_t_AssignEx(_this: *mut crate::ffi::MR_C_std_function_int32_t_from_int32_t_int32_t, func: Option<unsafe extern "C" fn(i32, i32, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> i32>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>);
}
