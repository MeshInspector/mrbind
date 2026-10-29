/// Generated from class `std::vector<MR::CSharp::A *>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_MR_CSharp_A_ptr
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_size(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> usize;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_empty(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> bool;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_resize(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, new_size: usize);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_clear(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_reserve(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, new_capacity: usize);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_at(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, i: usize) -> *const *mut crate::ffi::MR_CSharp_A;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_at_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, i: usize) -> *mut *mut crate::ffi::MR_CSharp_A;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_front(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> *const *mut crate::ffi::MR_CSharp_A;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_front_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> *mut *mut crate::ffi::MR_CSharp_A;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_back(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> *const *mut crate::ffi::MR_CSharp_A;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_back_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> *mut *mut crate::ffi::MR_CSharp_A;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_push_back(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, new_elem: *mut crate::ffi::MR_CSharp_A);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_pop_back(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_insert(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position: usize, new_elem: *mut crate::ffi::MR_CSharp_A);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_erase(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position: usize);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_Destroy(_this: *const MR_C_std_vector_MR_CSharp_A_ptr);
}
