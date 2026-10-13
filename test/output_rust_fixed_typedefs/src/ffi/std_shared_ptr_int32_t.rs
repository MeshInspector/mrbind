/// Generated from class `std::shared_ptr<int32_t>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_shared_ptr_int32_t
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_shared_ptr_int32_t_DefaultConstruct() -> *mut crate::ffi::MR_C_std_shared_ptr_int32_t;
    pub fn MR_C_std_shared_ptr_int32_t_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_shared_ptr_int32_t) -> *mut crate::ffi::MR_C_std_shared_ptr_int32_t;
    pub fn MR_C_std_shared_ptr_int32_t_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_shared_ptr_int32_t, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_shared_ptr_int32_t);
    pub fn MR_C_std_shared_ptr_int32_t_get(_this: *const crate::ffi::MR_C_std_shared_ptr_int32_t) -> *mut i32;
    pub fn MR_C_std_shared_ptr_int32_t_has_value(_this: *const crate::ffi::MR_C_std_shared_ptr_int32_t) -> bool;
    pub fn MR_C_std_shared_ptr_int32_t_use_count(_this: *const crate::ffi::MR_C_std_shared_ptr_int32_t) -> core::ffi::c_int;
    pub fn MR_C_std_shared_ptr_int32_t_reset(_this: *mut crate::ffi::MR_C_std_shared_ptr_int32_t);
    pub fn MR_C_std_shared_ptr_int32_t_ConstructFromValue(value: i32) -> *mut crate::ffi::MR_C_std_shared_ptr_int32_t;
    pub fn MR_C_std_shared_ptr_int32_t_Construct(ptr: *mut i32) -> *mut crate::ffi::MR_C_std_shared_ptr_int32_t;
    pub fn MR_C_std_shared_ptr_int32_t_Assign(_this: *mut crate::ffi::MR_C_std_shared_ptr_int32_t, ptr: *mut i32);
    pub fn MR_C_std_shared_ptr_int32_t_ConstructNonOwning(ptr: *mut i32) -> *mut crate::ffi::MR_C_std_shared_ptr_int32_t;
    pub fn MR_C_std_shared_ptr_int32_t_AssignNonOwning(_this: *mut crate::ffi::MR_C_std_shared_ptr_int32_t, ptr: *mut i32);
    pub fn MR_C_std_shared_ptr_int32_t_ConstructAliasing(ownership_pass_by: crate::ffi::MR_C_PassBy, ownership: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *mut i32) -> *mut crate::ffi::MR_C_std_shared_ptr_int32_t;
    pub fn MR_C_std_shared_ptr_int32_t_AssignAliasing(_this: *mut crate::ffi::MR_C_std_shared_ptr_int32_t, ownership_pass_by: crate::ffi::MR_C_PassBy, ownership: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *mut i32);
    pub fn MR_C_std_shared_ptr_int32_t_ConvertTo_MR_C_std_shared_ptr_void(_this: *const crate::ffi::MR_C_std_shared_ptr_int32_t) -> *mut crate::ffi::MR_C_std_shared_ptr_void;
    pub fn MR_C_std_shared_ptr_int32_t_AssignTo_MR_C_std_shared_ptr_void(_this: *const crate::ffi::MR_C_std_shared_ptr_int32_t, _target: *mut crate::ffi::MR_C_std_shared_ptr_void);
    pub fn MR_C_std_shared_ptr_int32_t_Destroy(_this: *const MR_C_std_shared_ptr_int32_t);
}
