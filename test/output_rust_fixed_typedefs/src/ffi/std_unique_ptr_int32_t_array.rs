/// Generated from class `std::unique_ptr<int32_t[]>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_unique_ptr_int32_t_array
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_unique_ptr_int32_t_array_DefaultConstruct() -> *mut crate::ffi::MR_C_std_unique_ptr_int32_t_array;
    pub fn MR_C_std_unique_ptr_int32_t_array_ConstructFromAnother(other: *const crate::ffi::MR_C_std_unique_ptr_int32_t_array) -> *mut crate::ffi::MR_C_std_unique_ptr_int32_t_array;
    pub fn MR_C_std_unique_ptr_int32_t_array_ConstructFrom(other: *mut i32) -> *mut crate::ffi::MR_C_std_unique_ptr_int32_t_array;
    pub fn MR_C_std_unique_ptr_int32_t_array_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_unique_ptr_int32_t_array, other: *const crate::ffi::MR_C_std_unique_ptr_int32_t_array);
    pub fn MR_C_std_unique_ptr_int32_t_array_AssignFrom(_this: *mut crate::ffi::MR_C_std_unique_ptr_int32_t_array, other: *mut i32);
    pub fn MR_C_std_unique_ptr_int32_t_array_get(_this: *const crate::ffi::MR_C_std_unique_ptr_int32_t_array) -> *mut i32;
    pub fn MR_C_std_unique_ptr_int32_t_array_at(_this: *const crate::ffi::MR_C_std_unique_ptr_int32_t_array, i: usize) -> *mut i32;
    pub fn MR_C_std_unique_ptr_int32_t_array_release(_this: *mut crate::ffi::MR_C_std_unique_ptr_int32_t_array) -> *mut i32;
    pub fn MR_C_std_unique_ptr_int32_t_array_Destroy(_this: *const MR_C_std_unique_ptr_int32_t_array);
}
