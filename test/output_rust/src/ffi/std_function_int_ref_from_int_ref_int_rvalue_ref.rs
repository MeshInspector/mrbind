/// Generated from class `std::function<int &(int &, int &&)>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_DefaultConstruct() -> *mut crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref;
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref) -> *mut crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref;
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref);
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_has_value(_this: *const crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref) -> bool;
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_reset(_this: *mut crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref);
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_call(_this: *const crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref, _1: *mut core::ffi::c_int, _2: *mut core::ffi::c_int) -> *mut core::ffi::c_int;
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_Destroy(_this: *const MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref);
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_ConstructStateless(func: Option<unsafe extern "C" fn(*mut core::ffi::c_int, *mut core::ffi::c_int) -> *mut core::ffi::c_int>) -> *mut crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref;
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_Assign(_this: *mut crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref, func: Option<unsafe extern "C" fn(*mut core::ffi::c_int, *mut core::ffi::c_int) -> *mut core::ffi::c_int>);
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_ConstructEx(func: Option<unsafe extern "C" fn(*mut core::ffi::c_int, *mut core::ffi::c_int, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> *mut core::ffi::c_int>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>) -> *mut crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref;
    pub fn MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref_AssignEx(_this: *mut crate::ffi::MR_C_std_function_int_ref_from_int_ref_int_rvalue_ref, func: Option<unsafe extern "C" fn(*mut core::ffi::c_int, *mut core::ffi::c_int, *mut core::ffi::c_void, *mut *mut core::ffi::c_void) -> *mut core::ffi::c_int>, userdata: *mut core::ffi::c_void, postcall_callback: Option<unsafe extern "C" fn(*mut core::ffi::c_void, *mut core::ffi::c_void)>, userdata_callback: Option<unsafe extern "C" fn(*mut *mut core::ffi::c_void, *mut core::ffi::c_void)>);
}
