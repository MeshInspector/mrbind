/// Generated from class `std::function<MR::CSharp::E1(MR::CSharp::E1)>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_DefaultConstruct() -> *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1;
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1) -> *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1;
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1);
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_has_value(_this: *const crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1) -> bool;
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_reset(_this: *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1);
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_call(_this: *const crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1, _1: crate::ffi::MR_CSharp_E1) -> crate::ffi::MR_CSharp_E1;
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_Destroy(_this: *const MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1);
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructStateless(func: Option<unsafe extern "C" fn(crate::ffi::MR_CSharp_E1) -> crate::ffi::MR_CSharp_E1>) -> *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1;
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_Assign(_this: *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1, func: Option<unsafe extern "C" fn(crate::ffi::MR_CSharp_E1) -> crate::ffi::MR_CSharp_E1>);
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructEx(func: Option<unsafe extern "C" fn(crate::ffi::MR_CSharp_E1, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> crate::ffi::MR_CSharp_E1>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>) -> *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1;
    pub fn MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_AssignEx(_this: *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1, func: Option<unsafe extern "C" fn(crate::ffi::MR_CSharp_E1, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> crate::ffi::MR_CSharp_E1>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>);
}
