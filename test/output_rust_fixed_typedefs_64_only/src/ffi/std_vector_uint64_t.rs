/// Generated from class `std::vector<MR_C_uint64_t>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_uint64_t
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_vector_uint64_t_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_uint64_t;
    pub fn MR_C_std_vector_uint64_t_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_uint64_t) -> *mut crate::ffi::MR_C_std_vector_uint64_t;
    pub fn MR_C_std_vector_uint64_t_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_uint64_t, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_uint64_t);
    pub fn MR_C_std_vector_uint64_t_size(_this: *const crate::ffi::MR_C_std_vector_uint64_t) -> usize;
    pub fn MR_C_std_vector_uint64_t_empty(_this: *const crate::ffi::MR_C_std_vector_uint64_t) -> bool;
    pub fn MR_C_std_vector_uint64_t_resize(_this: *mut crate::ffi::MR_C_std_vector_uint64_t, new_size: usize);
    pub fn MR_C_std_vector_uint64_t_clear(_this: *mut crate::ffi::MR_C_std_vector_uint64_t);
    pub fn MR_C_std_vector_uint64_t_reserve(_this: *mut crate::ffi::MR_C_std_vector_uint64_t, new_capacity: usize);
    pub fn MR_C_std_vector_uint64_t_at(_this: *const crate::ffi::MR_C_std_vector_uint64_t, i: usize) -> *const u64;
    pub fn MR_C_std_vector_uint64_t_at_mut(_this: *mut crate::ffi::MR_C_std_vector_uint64_t, i: usize) -> *mut u64;
    pub fn MR_C_std_vector_uint64_t_front(_this: *const crate::ffi::MR_C_std_vector_uint64_t) -> *const u64;
    pub fn MR_C_std_vector_uint64_t_front_mut(_this: *mut crate::ffi::MR_C_std_vector_uint64_t) -> *mut u64;
    pub fn MR_C_std_vector_uint64_t_back(_this: *const crate::ffi::MR_C_std_vector_uint64_t) -> *const u64;
    pub fn MR_C_std_vector_uint64_t_back_mut(_this: *mut crate::ffi::MR_C_std_vector_uint64_t) -> *mut u64;
    pub fn MR_C_std_vector_uint64_t_data(_this: *const crate::ffi::MR_C_std_vector_uint64_t) -> *const u64;
    pub fn MR_C_std_vector_uint64_t_data_mut(_this: *mut crate::ffi::MR_C_std_vector_uint64_t) -> *mut u64;
    pub fn MR_C_std_vector_uint64_t_push_back(_this: *mut crate::ffi::MR_C_std_vector_uint64_t, new_elem: u64);
    pub fn MR_C_std_vector_uint64_t_pop_back(_this: *mut crate::ffi::MR_C_std_vector_uint64_t);
    pub fn MR_C_std_vector_uint64_t_insert(_this: *mut crate::ffi::MR_C_std_vector_uint64_t, position: usize, new_elem: u64);
    pub fn MR_C_std_vector_uint64_t_erase(_this: *mut crate::ffi::MR_C_std_vector_uint64_t, position: usize);
    pub fn MR_C_std_vector_uint64_t_Destroy(_this: *const MR_C_std_vector_uint64_t);
}
