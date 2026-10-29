/// Generated from class `std::vector<int32_t>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_int32_t
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_vector_int32_t_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_int32_t;
    pub fn MR_C_std_vector_int32_t_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_int32_t) -> *mut crate::ffi::MR_C_std_vector_int32_t;
    pub fn MR_C_std_vector_int32_t_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_int32_t, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_int32_t);
    pub fn MR_C_std_vector_int32_t_ConstructFromRange(ptr: *const i32, size: usize) -> *mut crate::ffi::MR_C_std_vector_int32_t;
    pub fn MR_C_std_vector_int32_t_AssignFromRange(_this: *mut crate::ffi::MR_C_std_vector_int32_t, ptr: *const i32, size: usize);
    pub fn MR_C_std_vector_int32_t_size(_this: *const crate::ffi::MR_C_std_vector_int32_t) -> usize;
    pub fn MR_C_std_vector_int32_t_empty(_this: *const crate::ffi::MR_C_std_vector_int32_t) -> bool;
    pub fn MR_C_std_vector_int32_t_resize(_this: *mut crate::ffi::MR_C_std_vector_int32_t, new_size: usize);
    pub fn MR_C_std_vector_int32_t_resize_with_default_value(_this: *mut crate::ffi::MR_C_std_vector_int32_t, new_size: usize, value: i32);
    pub fn MR_C_std_vector_int32_t_clear(_this: *mut crate::ffi::MR_C_std_vector_int32_t);
    pub fn MR_C_std_vector_int32_t_capacity(_this: *const crate::ffi::MR_C_std_vector_int32_t) -> usize;
    pub fn MR_C_std_vector_int32_t_reserve(_this: *mut crate::ffi::MR_C_std_vector_int32_t, new_capacity: usize);
    pub fn MR_C_std_vector_int32_t_shrink_to_fit(_this: *mut crate::ffi::MR_C_std_vector_int32_t);
    pub fn MR_C_std_vector_int32_t_at(_this: *const crate::ffi::MR_C_std_vector_int32_t, i: usize) -> *const i32;
    pub fn MR_C_std_vector_int32_t_at_mut(_this: *mut crate::ffi::MR_C_std_vector_int32_t, i: usize) -> *mut i32;
    pub fn MR_C_std_vector_int32_t_front(_this: *const crate::ffi::MR_C_std_vector_int32_t) -> *const i32;
    pub fn MR_C_std_vector_int32_t_front_mut(_this: *mut crate::ffi::MR_C_std_vector_int32_t) -> *mut i32;
    pub fn MR_C_std_vector_int32_t_back(_this: *const crate::ffi::MR_C_std_vector_int32_t) -> *const i32;
    pub fn MR_C_std_vector_int32_t_back_mut(_this: *mut crate::ffi::MR_C_std_vector_int32_t) -> *mut i32;
    pub fn MR_C_std_vector_int32_t_data(_this: *const crate::ffi::MR_C_std_vector_int32_t) -> *const i32;
    pub fn MR_C_std_vector_int32_t_data_mut(_this: *mut crate::ffi::MR_C_std_vector_int32_t) -> *mut i32;
    pub fn MR_C_std_vector_int32_t_push_back(_this: *mut crate::ffi::MR_C_std_vector_int32_t, new_elem: i32);
    pub fn MR_C_std_vector_int32_t_pop_back(_this: *mut crate::ffi::MR_C_std_vector_int32_t);
    pub fn MR_C_std_vector_int32_t_insert(_this: *mut crate::ffi::MR_C_std_vector_int32_t, position: usize, new_elem: i32);
    pub fn MR_C_std_vector_int32_t_erase(_this: *mut crate::ffi::MR_C_std_vector_int32_t, position: usize);
    pub fn MR_C_std_vector_int32_t_begin(_this: *const crate::ffi::MR_C_std_vector_int32_t) -> *const i32;
    pub fn MR_C_std_vector_int32_t_begin_mut(_this: *mut crate::ffi::MR_C_std_vector_int32_t) -> *mut i32;
    pub fn MR_C_std_vector_int32_t_end(_this: *const crate::ffi::MR_C_std_vector_int32_t) -> *const i32;
    pub fn MR_C_std_vector_int32_t_end_mut(_this: *mut crate::ffi::MR_C_std_vector_int32_t) -> *mut i32;
    pub fn MR_C_std_vector_int32_t_Destroy(_this: *const MR_C_std_vector_int32_t);
}
