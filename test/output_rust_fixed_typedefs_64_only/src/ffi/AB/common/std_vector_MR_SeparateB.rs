/// Generated from class `std::vector<MR::SeparateB>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_MR_SeparateB
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh_AB", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh_AB"))]
unsafe extern "C"
{
    pub fn MR_C_std_vector_MR_SeparateB_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_MR_SeparateB;
    pub fn MR_C_std_vector_MR_SeparateB_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_SeparateB) -> *mut crate::ffi::MR_C_std_vector_MR_SeparateB;
    pub fn MR_C_std_vector_MR_SeparateB_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateB, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_SeparateB);
    pub fn MR_C_std_vector_MR_SeparateB_size(_this: *const crate::ffi::MR_C_std_vector_MR_SeparateB) -> usize;
    pub fn MR_C_std_vector_MR_SeparateB_empty(_this: *const crate::ffi::MR_C_std_vector_MR_SeparateB) -> bool;
    pub fn MR_C_std_vector_MR_SeparateB_clear(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateB);
    pub fn MR_C_std_vector_MR_SeparateB_reserve(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateB, new_capacity: usize);
    pub fn MR_C_std_vector_MR_SeparateB_at(_this: *const crate::ffi::MR_C_std_vector_MR_SeparateB, i: usize) -> *const crate::ffi::MR_SeparateB;
    pub fn MR_C_std_vector_MR_SeparateB_at_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateB, i: usize) -> *mut crate::ffi::MR_SeparateB;
    pub fn MR_C_std_vector_MR_SeparateB_front(_this: *const crate::ffi::MR_C_std_vector_MR_SeparateB) -> *const crate::ffi::MR_SeparateB;
    pub fn MR_C_std_vector_MR_SeparateB_front_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateB) -> *mut crate::ffi::MR_SeparateB;
    pub fn MR_C_std_vector_MR_SeparateB_back(_this: *const crate::ffi::MR_C_std_vector_MR_SeparateB) -> *const crate::ffi::MR_SeparateB;
    pub fn MR_C_std_vector_MR_SeparateB_back_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateB) -> *mut crate::ffi::MR_SeparateB;
    pub fn MR_C_std_vector_MR_SeparateB_push_back(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateB, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_SeparateB);
    pub fn MR_C_std_vector_MR_SeparateB_pop_back(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateB);
    pub fn MR_C_std_vector_MR_SeparateB_insert(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateB, position: usize, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_SeparateB);
    pub fn MR_C_std_vector_MR_SeparateB_erase(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateB, position: usize);
    pub fn MR_C_std_vector_MR_SeparateB_Destroy(_this: *const MR_C_std_vector_MR_SeparateB);
}
