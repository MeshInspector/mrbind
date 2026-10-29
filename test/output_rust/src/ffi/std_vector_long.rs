/// Generated from class `std::vector<long>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_long
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_vector_long_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_long;
    pub fn MR_C_std_vector_long_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_long) -> *mut crate::ffi::MR_C_std_vector_long;
    pub fn MR_C_std_vector_long_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_long, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_long);
    pub fn MR_C_std_vector_long_ConstructFromRange(ptr: *const core::ffi::c_long, size: usize) -> *mut crate::ffi::MR_C_std_vector_long;
    pub fn MR_C_std_vector_long_AssignFromRange(_this: *mut crate::ffi::MR_C_std_vector_long, ptr: *const core::ffi::c_long, size: usize);
    pub fn MR_C_std_vector_long_size(_this: *const crate::ffi::MR_C_std_vector_long) -> usize;
    pub fn MR_C_std_vector_long_empty(_this: *const crate::ffi::MR_C_std_vector_long) -> bool;
    pub fn MR_C_std_vector_long_resize(_this: *mut crate::ffi::MR_C_std_vector_long, new_size: usize);
    pub fn MR_C_std_vector_long_resize_with_default_value(_this: *mut crate::ffi::MR_C_std_vector_long, new_size: usize, value: core::ffi::c_long);
    pub fn MR_C_std_vector_long_clear(_this: *mut crate::ffi::MR_C_std_vector_long);
    pub fn MR_C_std_vector_long_capacity(_this: *const crate::ffi::MR_C_std_vector_long) -> usize;
    pub fn MR_C_std_vector_long_reserve(_this: *mut crate::ffi::MR_C_std_vector_long, new_capacity: usize);
    pub fn MR_C_std_vector_long_shrink_to_fit(_this: *mut crate::ffi::MR_C_std_vector_long);
    pub fn MR_C_std_vector_long_at(_this: *const crate::ffi::MR_C_std_vector_long, i: usize) -> *const core::ffi::c_long;
    pub fn MR_C_std_vector_long_at_mut(_this: *mut crate::ffi::MR_C_std_vector_long, i: usize) -> *mut core::ffi::c_long;
    pub fn MR_C_std_vector_long_front(_this: *const crate::ffi::MR_C_std_vector_long) -> *const core::ffi::c_long;
    pub fn MR_C_std_vector_long_front_mut(_this: *mut crate::ffi::MR_C_std_vector_long) -> *mut core::ffi::c_long;
    pub fn MR_C_std_vector_long_back(_this: *const crate::ffi::MR_C_std_vector_long) -> *const core::ffi::c_long;
    pub fn MR_C_std_vector_long_back_mut(_this: *mut crate::ffi::MR_C_std_vector_long) -> *mut core::ffi::c_long;
    pub fn MR_C_std_vector_long_data(_this: *const crate::ffi::MR_C_std_vector_long) -> *const core::ffi::c_long;
    pub fn MR_C_std_vector_long_data_mut(_this: *mut crate::ffi::MR_C_std_vector_long) -> *mut core::ffi::c_long;
    pub fn MR_C_std_vector_long_push_back(_this: *mut crate::ffi::MR_C_std_vector_long, new_elem: core::ffi::c_long);
    pub fn MR_C_std_vector_long_pop_back(_this: *mut crate::ffi::MR_C_std_vector_long);
    pub fn MR_C_std_vector_long_insert(_this: *mut crate::ffi::MR_C_std_vector_long, position: usize, new_elem: core::ffi::c_long);
    pub fn MR_C_std_vector_long_erase(_this: *mut crate::ffi::MR_C_std_vector_long, position: usize);
    pub fn MR_C_std_vector_long_begin(_this: *const crate::ffi::MR_C_std_vector_long) -> *const core::ffi::c_long;
    pub fn MR_C_std_vector_long_begin_mut(_this: *mut crate::ffi::MR_C_std_vector_long) -> *mut core::ffi::c_long;
    pub fn MR_C_std_vector_long_end(_this: *const crate::ffi::MR_C_std_vector_long) -> *const core::ffi::c_long;
    pub fn MR_C_std_vector_long_end_mut(_this: *mut crate::ffi::MR_C_std_vector_long) -> *mut core::ffi::c_long;
    pub fn MR_C_std_vector_long_Destroy(_this: *const MR_C_std_vector_long);
}
