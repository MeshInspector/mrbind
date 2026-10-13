/// Generated from class `std::function<MR::StdFunction::E(int32_t, MR::StdFunction::E)>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstruct() -> *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E;
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E) -> *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E;
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E);
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_has_value(_this: *const crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E) -> bool;
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_reset(_this: *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E);
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_call(_this: *const crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E, _1: i32, _2: crate::ffi::MR_StdFunction_E) -> crate::ffi::MR_StdFunction_E;
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_Destroy(_this: *const MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E);
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructStateless(func: Option<unsafe extern "C" fn(i32, crate::ffi::MR_StdFunction_E) -> crate::ffi::MR_StdFunction_E>) -> *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E;
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_Assign(_this: *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E, func: Option<unsafe extern "C" fn(i32, crate::ffi::MR_StdFunction_E) -> crate::ffi::MR_StdFunction_E>);
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructEx(func: Option<unsafe extern "C" fn(i32, crate::ffi::MR_StdFunction_E, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> crate::ffi::MR_StdFunction_E>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>) -> *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E;
    pub fn MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignEx(_this: *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E, func: Option<unsafe extern "C" fn(i32, crate::ffi::MR_StdFunction_E, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> crate::ffi::MR_StdFunction_E>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>);
}
