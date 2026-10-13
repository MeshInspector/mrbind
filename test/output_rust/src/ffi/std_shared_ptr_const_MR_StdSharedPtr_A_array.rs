/// Generated from class `std::shared_ptr<const MR::StdSharedPtr::A[]>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_DefaultConstruct() -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array) -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array);
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_get(_this: *const crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array) -> *const crate::ffi::MR_StdSharedPtr_A;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_has_value(_this: *const crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array) -> bool;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_at(_this: *const crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array, i: isize) -> *const crate::ffi::MR_StdSharedPtr_A;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_use_count(_this: *const crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array) -> core::ffi::c_int;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_reset(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array);
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructFromSize(size: usize) -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Construct(ptr: *const crate::ffi::MR_StdSharedPtr_A) -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Assign(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array, ptr: *const crate::ffi::MR_StdSharedPtr_A);
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructNonOwning(ptr: *const crate::ffi::MR_StdSharedPtr_A) -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignNonOwning(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array, ptr: *const crate::ffi::MR_StdSharedPtr_A);
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructFromMutable(ptr_pass_by: crate::ffi::MR_C_PassBy, ptr: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A_array) -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignFromMutable(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array, ptr_pass_by: crate::ffi::MR_C_PassBy, ptr: *mut crate::ffi::MR_C_std_shared_ptr_MR_StdSharedPtr_A_array);
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConstructAliasing(ownership_pass_by: crate::ffi::MR_C_PassBy, ownership: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *const crate::ffi::MR_StdSharedPtr_A) -> *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignAliasing(_this: *mut crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array, ownership_pass_by: crate::ffi::MR_C_PassBy, ownership: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *const crate::ffi::MR_StdSharedPtr_A);
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_ConvertTo_MR_C_std_shared_ptr_const_void(_this: *const crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array) -> *mut crate::ffi::MR_C_std_shared_ptr_const_void;
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_AssignTo_MR_C_std_shared_ptr_const_void(_this: *const crate::ffi::MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array, _target: *mut crate::ffi::MR_C_std_shared_ptr_const_void);
    pub fn MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_Destroy(_this: *const MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array);
}
