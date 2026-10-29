/// Generated from class `std::unordered_multiset<MR::StdContainers::NonAssignable>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::unordered_multiset<MR::StdContainers::NonAssignable>::const_iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_equal_MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator(a: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator, b: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator) -> bool;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_DefaultConstruct() -> *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_size(_this: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable) -> usize;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_empty(_this: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable) -> bool;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_clear(_this: *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_count(_this: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable, key: *const crate::ffi::MR_StdContainers_NonAssignable) -> usize;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_find(_this: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable, key: *const crate::ffi::MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_begin(_this: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_end(_this: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_is_end(_this: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable, iter: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator) -> bool;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_Destroy(_this: *const MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator) -> *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator, other: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator);
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator_deref(_this: *const crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator_incr(_this: *mut crate::ffi::MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator);
    pub fn MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator_Destroy(_this: *const MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable_const_iterator);
}
