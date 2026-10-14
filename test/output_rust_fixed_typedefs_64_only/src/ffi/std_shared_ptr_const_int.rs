/// Generated from class `std::shared_ptr<const int>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_shared_ptr_const_int
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_shared_ptr_const_int_DefaultConstruct() -> *mut crate::ffi::MR_C_std_shared_ptr_const_int;
    pub fn MR_C_std_shared_ptr_const_int_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_shared_ptr_const_int) -> *mut crate::ffi::MR_C_std_shared_ptr_const_int;
    pub fn MR_C_std_shared_ptr_const_int_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_int, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_shared_ptr_const_int);
    pub fn MR_C_std_shared_ptr_const_int_get(_this: *const crate::ffi::MR_C_std_shared_ptr_const_int) -> *const core::ffi::c_int;
    pub fn MR_C_std_shared_ptr_const_int_has_value(_this: *const crate::ffi::MR_C_std_shared_ptr_const_int) -> bool;
    pub fn MR_C_std_shared_ptr_const_int_use_count(_this: *const crate::ffi::MR_C_std_shared_ptr_const_int) -> core::ffi::c_int;
    pub fn MR_C_std_shared_ptr_const_int_reset(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_int);
    pub fn MR_C_std_shared_ptr_const_int_ConstructFromValue(value: core::ffi::c_int) -> *mut crate::ffi::MR_C_std_shared_ptr_const_int;
    pub fn MR_C_std_shared_ptr_const_int_Construct(ptr: *const core::ffi::c_int) -> *mut crate::ffi::MR_C_std_shared_ptr_const_int;
    pub fn MR_C_std_shared_ptr_const_int_Assign(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_int, ptr: *const core::ffi::c_int);
    pub fn MR_C_std_shared_ptr_const_int_ConstructNonOwning(ptr: *const core::ffi::c_int) -> *mut crate::ffi::MR_C_std_shared_ptr_const_int;
    pub fn MR_C_std_shared_ptr_const_int_AssignNonOwning(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_int, ptr: *const core::ffi::c_int);
    pub fn MR_C_std_shared_ptr_const_int_ConstructFromMutable(ptr_pass_by: crate::ffi::MR_C_PassBy, ptr: *mut crate::ffi::MR_C_std_shared_ptr_int) -> *mut crate::ffi::MR_C_std_shared_ptr_const_int;
    pub fn MR_C_std_shared_ptr_const_int_AssignFromMutable(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_int, ptr_pass_by: crate::ffi::MR_C_PassBy, ptr: *mut crate::ffi::MR_C_std_shared_ptr_int);
    pub fn MR_C_std_shared_ptr_const_int_ConstructAliasing(ownership_pass_by: crate::ffi::MR_C_PassBy, ownership: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *const core::ffi::c_int) -> *mut crate::ffi::MR_C_std_shared_ptr_const_int;
    pub fn MR_C_std_shared_ptr_const_int_AssignAliasing(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_int, ownership_pass_by: crate::ffi::MR_C_PassBy, ownership: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *const core::ffi::c_int);
    pub fn MR_C_std_shared_ptr_const_int_ConvertTo_MR_C_std_shared_ptr_const_void(_this: *const crate::ffi::MR_C_std_shared_ptr_const_int) -> *mut crate::ffi::MR_C_std_shared_ptr_const_void;
    pub fn MR_C_std_shared_ptr_const_int_AssignTo_MR_C_std_shared_ptr_const_void(_this: *const crate::ffi::MR_C_std_shared_ptr_const_int, _target: *mut crate::ffi::MR_C_std_shared_ptr_const_void);
    pub fn MR_C_std_shared_ptr_const_int_Destroy(_this: *const MR_C_std_shared_ptr_const_int);
}
