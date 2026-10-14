/// Generated from class `std::function<int32_t(std::string)>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_function_int32_t_from_std_string
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_function_int32_t_from_std_string_DefaultConstruct() -> *mut crate::ffi::MR_C_std_function_int32_t_from_std_string;
    pub fn MR_C_std_function_int32_t_from_std_string_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_int32_t_from_std_string) -> *mut crate::ffi::MR_C_std_function_int32_t_from_std_string;
    pub fn MR_C_std_function_int32_t_from_std_string_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_function_int32_t_from_std_string, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_int32_t_from_std_string);
    pub fn MR_C_std_function_int32_t_from_std_string_has_value(_this: *const crate::ffi::MR_C_std_function_int32_t_from_std_string) -> bool;
    pub fn MR_C_std_function_int32_t_from_std_string_reset(_this: *mut crate::ffi::MR_C_std_function_int32_t_from_std_string);
    pub fn MR_C_std_function_int32_t_from_std_string_call(_this: *const crate::ffi::MR_C_std_function_int32_t_from_std_string, _1: *const core::ffi::c_char, _1_end: *const core::ffi::c_char) -> i32;
    pub fn MR_C_std_function_int32_t_from_std_string_Destroy(_this: *const MR_C_std_function_int32_t_from_std_string);
    pub fn MR_C_std_function_int32_t_from_std_string_ConstructStateless(func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_std_string) -> i32>) -> *mut crate::ffi::MR_C_std_function_int32_t_from_std_string;
    pub fn MR_C_std_function_int32_t_from_std_string_Assign(_this: *mut crate::ffi::MR_C_std_function_int32_t_from_std_string, func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_std_string) -> i32>);
    pub fn MR_C_std_function_int32_t_from_std_string_ConstructEx(func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_std_string, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> i32>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>) -> *mut crate::ffi::MR_C_std_function_int32_t_from_std_string;
    pub fn MR_C_std_function_int32_t_from_std_string_AssignEx(_this: *mut crate::ffi::MR_C_std_function_int32_t_from_std_string, func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_std_string, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> i32>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>);
}
