/// Generated from class `std::vector<MR::A>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_MR_A
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_vector_MR_A_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_MR_A;
    pub fn MR_C_std_vector_MR_A_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_A) -> *mut crate::ffi::MR_C_std_vector_MR_A;
    pub fn MR_C_std_vector_MR_A_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_MR_A, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_A);
    pub fn MR_C_std_vector_MR_A_size(_this: *const crate::ffi::MR_C_std_vector_MR_A) -> usize;
    pub fn MR_C_std_vector_MR_A_empty(_this: *const crate::ffi::MR_C_std_vector_MR_A) -> bool;
    pub fn MR_C_std_vector_MR_A_resize(_this: *mut crate::ffi::MR_C_std_vector_MR_A, new_size: usize);
    pub fn MR_C_std_vector_MR_A_resize_with_default_value(_this: *mut crate::ffi::MR_C_std_vector_MR_A, new_size: usize, value: *const crate::ffi::MR_A);
    pub fn MR_C_std_vector_MR_A_clear(_this: *mut crate::ffi::MR_C_std_vector_MR_A);
    pub fn MR_C_std_vector_MR_A_capacity(_this: *const crate::ffi::MR_C_std_vector_MR_A) -> usize;
    pub fn MR_C_std_vector_MR_A_reserve(_this: *mut crate::ffi::MR_C_std_vector_MR_A, new_capacity: usize);
    pub fn MR_C_std_vector_MR_A_shrink_to_fit(_this: *mut crate::ffi::MR_C_std_vector_MR_A);
    pub fn MR_C_std_vector_MR_A_at(_this: *const crate::ffi::MR_C_std_vector_MR_A, i: usize) -> *const crate::ffi::MR_A;
    pub fn MR_C_std_vector_MR_A_at_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_A, i: usize) -> *mut crate::ffi::MR_A;
    pub fn MR_C_std_vector_MR_A_front(_this: *const crate::ffi::MR_C_std_vector_MR_A) -> *const crate::ffi::MR_A;
    pub fn MR_C_std_vector_MR_A_front_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_A) -> *mut crate::ffi::MR_A;
    pub fn MR_C_std_vector_MR_A_back(_this: *const crate::ffi::MR_C_std_vector_MR_A) -> *const crate::ffi::MR_A;
    pub fn MR_C_std_vector_MR_A_back_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_A) -> *mut crate::ffi::MR_A;
    pub fn MR_C_std_vector_MR_A_push_back(_this: *mut crate::ffi::MR_C_std_vector_MR_A, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_A);
    pub fn MR_C_std_vector_MR_A_pop_back(_this: *mut crate::ffi::MR_C_std_vector_MR_A);
    pub fn MR_C_std_vector_MR_A_insert(_this: *mut crate::ffi::MR_C_std_vector_MR_A, position: usize, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_A);
    pub fn MR_C_std_vector_MR_A_erase(_this: *mut crate::ffi::MR_C_std_vector_MR_A, position: usize);
    pub fn MR_C_std_vector_MR_A_begin(_this: *const crate::ffi::MR_C_std_vector_MR_A) -> *const crate::ffi::MR_A;
    pub fn MR_C_std_vector_MR_A_begin_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_A) -> *mut crate::ffi::MR_A;
    pub fn MR_C_std_vector_MR_A_end(_this: *const crate::ffi::MR_C_std_vector_MR_A) -> *const crate::ffi::MR_A;
    pub fn MR_C_std_vector_MR_A_end_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_A) -> *mut crate::ffi::MR_A;
    pub fn MR_C_std_vector_MR_A_Destroy(_this: *const MR_C_std_vector_MR_A);
}
