/// Generated from class `std::shared_ptr<const void>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_shared_ptr_const_void
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_shared_ptr_const_void_DefaultConstruct() -> *mut crate::ffi::MR_C_std_shared_ptr_const_void;
    pub fn MR_C_std_shared_ptr_const_void_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_shared_ptr_const_void) -> *mut crate::ffi::MR_C_std_shared_ptr_const_void;
    pub fn MR_C_std_shared_ptr_const_void_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_void, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_shared_ptr_const_void);
    pub fn MR_C_std_shared_ptr_const_void_get(_this: *const crate::ffi::MR_C_std_shared_ptr_const_void) -> *const core::ffi::c_void;
    pub fn MR_C_std_shared_ptr_const_void_has_value(_this: *const crate::ffi::MR_C_std_shared_ptr_const_void) -> bool;
    pub fn MR_C_std_shared_ptr_const_void_use_count(_this: *const crate::ffi::MR_C_std_shared_ptr_const_void) -> core::ffi::c_int;
    pub fn MR_C_std_shared_ptr_const_void_reset(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_void);
    pub fn MR_C_std_shared_ptr_const_void_ConstructNonOwning(ptr: *const core::ffi::c_void) -> *mut crate::ffi::MR_C_std_shared_ptr_const_void;
    pub fn MR_C_std_shared_ptr_const_void_AssignNonOwning(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *const core::ffi::c_void);
    pub fn MR_C_std_shared_ptr_const_void_ConstructFromMutable(ptr_pass_by: crate::ffi::MR_C_PassBy, ptr: *mut crate::ffi::MR_C_std_shared_ptr_void) -> *mut crate::ffi::MR_C_std_shared_ptr_const_void;
    pub fn MR_C_std_shared_ptr_const_void_AssignFromMutable(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr_pass_by: crate::ffi::MR_C_PassBy, ptr: *mut crate::ffi::MR_C_std_shared_ptr_void);
    pub fn MR_C_std_shared_ptr_const_void_ConstructAliasing(ownership_pass_by: crate::ffi::MR_C_PassBy, ownership: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *const core::ffi::c_void) -> *mut crate::ffi::MR_C_std_shared_ptr_const_void;
    pub fn MR_C_std_shared_ptr_const_void_AssignAliasing(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ownership_pass_by: crate::ffi::MR_C_PassBy, ownership: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *const core::ffi::c_void);
    pub fn MR_C_std_shared_ptr_const_void_Destroy(_this: *const MR_C_std_shared_ptr_const_void);
}
