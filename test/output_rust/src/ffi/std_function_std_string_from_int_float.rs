/// Generated from class `std::function<std::string(int, float)>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_function_std_string_from_int_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_function_std_string_from_int_float_DefaultConstruct() -> *mut crate::ffi::MR_C_std_function_std_string_from_int_float;
    pub fn MR_C_std_function_std_string_from_int_float_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_std_string_from_int_float) -> *mut crate::ffi::MR_C_std_function_std_string_from_int_float;
    pub fn MR_C_std_function_std_string_from_int_float_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_function_std_string_from_int_float, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_std_string_from_int_float);
    pub fn MR_C_std_function_std_string_from_int_float_has_value(_this: *const crate::ffi::MR_C_std_function_std_string_from_int_float) -> bool;
    pub fn MR_C_std_function_std_string_from_int_float_reset(_this: *mut crate::ffi::MR_C_std_function_std_string_from_int_float);
    pub fn MR_C_std_function_std_string_from_int_float_call(_this: *const crate::ffi::MR_C_std_function_std_string_from_int_float, _1: core::ffi::c_int, _2: f32) -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_C_std_function_std_string_from_int_float_Destroy(_this: *const MR_C_std_function_std_string_from_int_float);
    pub fn MR_C_std_function_std_string_from_int_float_ConstructStateless(func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_PassBy, core::ffi::c_int, f32) -> *mut crate::ffi::MR_C_std_string>) -> *mut crate::ffi::MR_C_std_function_std_string_from_int_float;
    pub fn MR_C_std_function_std_string_from_int_float_Assign(_this: *mut crate::ffi::MR_C_std_function_std_string_from_int_float, func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_PassBy, core::ffi::c_int, f32) -> *mut crate::ffi::MR_C_std_string>);
    pub fn MR_C_std_function_std_string_from_int_float_ConstructEx(func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_PassBy, core::ffi::c_int, f32, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> *mut crate::ffi::MR_C_std_string>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>) -> *mut crate::ffi::MR_C_std_function_std_string_from_int_float;
    pub fn MR_C_std_function_std_string_from_int_float_AssignEx(_this: *mut crate::ffi::MR_C_std_function_std_string_from_int_float, func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_PassBy, core::ffi::c_int, f32, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> *mut crate::ffi::MR_C_std_string>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>);
}
