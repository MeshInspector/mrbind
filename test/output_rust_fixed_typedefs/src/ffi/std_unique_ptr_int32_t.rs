/// Generated from class `std::unique_ptr<int32_t>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_unique_ptr_int32_t
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_unique_ptr_int32_t_DefaultConstruct() -> *mut crate::ffi::MR_C_std_unique_ptr_int32_t;
    pub fn MR_C_std_unique_ptr_int32_t_ConstructFromAnother(other: *const crate::ffi::MR_C_std_unique_ptr_int32_t) -> *mut crate::ffi::MR_C_std_unique_ptr_int32_t;
    pub fn MR_C_std_unique_ptr_int32_t_ConstructFrom(other: *mut i32) -> *mut crate::ffi::MR_C_std_unique_ptr_int32_t;
    pub fn MR_C_std_unique_ptr_int32_t_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_unique_ptr_int32_t, other: *const crate::ffi::MR_C_std_unique_ptr_int32_t);
    pub fn MR_C_std_unique_ptr_int32_t_AssignFrom(_this: *mut crate::ffi::MR_C_std_unique_ptr_int32_t, other: *mut i32);
    pub fn MR_C_std_unique_ptr_int32_t_get(_this: *const crate::ffi::MR_C_std_unique_ptr_int32_t) -> *mut i32;
    pub fn MR_C_std_unique_ptr_int32_t_release(_this: *mut crate::ffi::MR_C_std_unique_ptr_int32_t) -> *mut i32;
    pub fn MR_C_std_unique_ptr_int32_t_Destroy(_this: *const MR_C_std_unique_ptr_int32_t);
}
