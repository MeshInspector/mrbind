/// Generated from class `std::vector<MR::CSharp::ExposedLayout>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_MR_CSharp_ExposedLayout
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(ptr: *const crate::ffi::MR_CSharp_ExposedLayout, size: usize) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, ptr: *const crate::ffi::MR_CSharp_ExposedLayout, size: usize);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_size(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> usize;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_empty(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> bool;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_resize(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, new_size: usize);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, new_size: usize, value: *const crate::ffi::MR_CSharp_ExposedLayout);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_clear(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_capacity(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> usize;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_reserve(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, new_capacity: usize);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_at(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, i: usize) -> *const crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, i: usize) -> *mut crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_front(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *const crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *mut crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_back(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *const crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *mut crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_data(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *const crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *mut crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_push_back(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, new_elem: crate::ffi::MR_CSharp_ExposedLayout);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_insert(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, position: usize, new_elem: crate::ffi::MR_CSharp_ExposedLayout);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_erase(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, position: usize);
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_begin(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *const crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *mut crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_end(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *const crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout) -> *mut crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(_this: *const MR_C_std_vector_MR_CSharp_ExposedLayout);
}
