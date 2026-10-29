/// Generated from class `std::vector<MR::SeparateA>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_MR_SeparateA
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh_AB", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh_AB"))]
unsafe extern "C"
{
    pub fn MR_C_std_vector_MR_SeparateA_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_MR_SeparateA;
    pub fn MR_C_std_vector_MR_SeparateA_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_SeparateA) -> *mut crate::ffi::MR_C_std_vector_MR_SeparateA;
    pub fn MR_C_std_vector_MR_SeparateA_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateA, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_SeparateA);
    pub fn MR_C_std_vector_MR_SeparateA_size(_this: *const crate::ffi::MR_C_std_vector_MR_SeparateA) -> usize;
    pub fn MR_C_std_vector_MR_SeparateA_empty(_this: *const crate::ffi::MR_C_std_vector_MR_SeparateA) -> bool;
    pub fn MR_C_std_vector_MR_SeparateA_clear(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateA);
    pub fn MR_C_std_vector_MR_SeparateA_reserve(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateA, new_capacity: usize);
    pub fn MR_C_std_vector_MR_SeparateA_at(_this: *const crate::ffi::MR_C_std_vector_MR_SeparateA, i: usize) -> *const crate::ffi::MR_SeparateA;
    pub fn MR_C_std_vector_MR_SeparateA_at_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateA, i: usize) -> *mut crate::ffi::MR_SeparateA;
    pub fn MR_C_std_vector_MR_SeparateA_front(_this: *const crate::ffi::MR_C_std_vector_MR_SeparateA) -> *const crate::ffi::MR_SeparateA;
    pub fn MR_C_std_vector_MR_SeparateA_front_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateA) -> *mut crate::ffi::MR_SeparateA;
    pub fn MR_C_std_vector_MR_SeparateA_back(_this: *const crate::ffi::MR_C_std_vector_MR_SeparateA) -> *const crate::ffi::MR_SeparateA;
    pub fn MR_C_std_vector_MR_SeparateA_back_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateA) -> *mut crate::ffi::MR_SeparateA;
    pub fn MR_C_std_vector_MR_SeparateA_push_back(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateA, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_SeparateA);
    pub fn MR_C_std_vector_MR_SeparateA_pop_back(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateA);
    pub fn MR_C_std_vector_MR_SeparateA_insert(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateA, position: usize, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_SeparateA);
    pub fn MR_C_std_vector_MR_SeparateA_erase(_this: *mut crate::ffi::MR_C_std_vector_MR_SeparateA, position: usize);
    pub fn MR_C_std_vector_MR_SeparateA_Destroy(_this: *const MR_C_std_vector_MR_SeparateA);
}
