/// Generated from class `std::vector<MR::StdContainers::NonAssignable>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_MR_StdContainers_NonAssignable
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable;
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable;
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_size(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable) -> usize;
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_empty(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable) -> bool;
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_resize(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, new_size: usize);
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_clear(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_reserve(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, new_capacity: usize);
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_at(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, i: usize) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_at_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, i: usize) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_front(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_front_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_back(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_back_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_push_back(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_StdContainers_NonAssignable);
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_pop_back(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_vector_MR_StdContainers_NonAssignable_Destroy(_this: *const MR_C_std_vector_MR_StdContainers_NonAssignable);
}
