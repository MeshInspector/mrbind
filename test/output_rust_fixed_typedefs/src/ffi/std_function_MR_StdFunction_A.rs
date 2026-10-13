/// Generated from class `std::function<MR::StdFunction::A(void)>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_function_MR_StdFunction_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_function_MR_StdFunction_A_DefaultConstruct() -> *mut crate::ffi::MR_C_std_function_MR_StdFunction_A;
    pub fn MR_C_std_function_MR_StdFunction_A_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_MR_StdFunction_A) -> *mut crate::ffi::MR_C_std_function_MR_StdFunction_A;
    pub fn MR_C_std_function_MR_StdFunction_A_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_function_MR_StdFunction_A, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_MR_StdFunction_A);
    pub fn MR_C_std_function_MR_StdFunction_A_has_value(_this: *const crate::ffi::MR_C_std_function_MR_StdFunction_A) -> bool;
    pub fn MR_C_std_function_MR_StdFunction_A_reset(_this: *mut crate::ffi::MR_C_std_function_MR_StdFunction_A);
    pub fn MR_C_std_function_MR_StdFunction_A_call(_this: *const crate::ffi::MR_C_std_function_MR_StdFunction_A) -> *mut crate::ffi::MR_StdFunction_A;
    pub fn MR_C_std_function_MR_StdFunction_A_Destroy(_this: *const MR_C_std_function_MR_StdFunction_A);
    pub fn MR_C_std_function_MR_StdFunction_A_ConstructStateless(func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_PassBy) -> *mut crate::ffi::MR_StdFunction_A>) -> *mut crate::ffi::MR_C_std_function_MR_StdFunction_A;
    pub fn MR_C_std_function_MR_StdFunction_A_Assign(_this: *mut crate::ffi::MR_C_std_function_MR_StdFunction_A, func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_PassBy) -> *mut crate::ffi::MR_StdFunction_A>);
    pub fn MR_C_std_function_MR_StdFunction_A_ConstructEx(func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_PassBy, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> *mut crate::ffi::MR_StdFunction_A>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>) -> *mut crate::ffi::MR_C_std_function_MR_StdFunction_A;
    pub fn MR_C_std_function_MR_StdFunction_A_AssignEx(_this: *mut crate::ffi::MR_C_std_function_MR_StdFunction_A, func: Option<unsafe extern "C" fn(*mut crate::ffi::MR_C_PassBy, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> *mut crate::ffi::MR_StdFunction_A>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>);
}
