/// Generated from class `std::vector<MR::StdContainers::NonDefaultConstructible>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_MR_StdContainers_NonDefaultConstructible
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible);
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> usize;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> bool;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, new_size: usize, value: *const crate::ffi::MR_StdContainers_NonDefaultConstructible);
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible);
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> usize;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, new_capacity: usize);
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible);
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, i: usize) -> *const crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, i: usize) -> *mut crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> *const crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> *mut crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> *const crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> *mut crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, new_elem: *const crate::ffi::MR_StdContainers_NonDefaultConstructible);
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible);
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, position: usize, new_elem: *const crate::ffi::MR_StdContainers_NonDefaultConstructible);
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, position: usize);
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> *const crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> *mut crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end(_this: *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> *const crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible) -> *mut crate::ffi::MR_StdContainers_NonDefaultConstructible;
    pub fn MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(_this: *const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible);
}
