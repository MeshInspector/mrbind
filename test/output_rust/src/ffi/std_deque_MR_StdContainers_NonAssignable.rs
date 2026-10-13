/// Generated from class `std::deque<MR::StdContainers::NonAssignable>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_deque_MR_StdContainers_NonAssignable
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::deque<MR::StdContainers::NonAssignable>::const_iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::deque<MR::StdContainers::NonAssignable>::iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_deque_MR_StdContainers_NonAssignable_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(a: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator, b: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator) -> isize;
    pub fn MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(a: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator, b: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator) -> bool;
    pub fn MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(a: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator, b: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator) -> isize;
    pub fn MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(a: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator, b: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator) -> bool;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct() -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_size(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> usize;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_empty(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> bool;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_resize(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, new_size: usize);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_clear(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_at(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, i: usize) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, i: usize) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_front(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_back(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_push_back(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_StdContainers_NonAssignable);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_push_front(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_StdContainers_NonAssignable);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_begin(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator) -> bool;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_begin_mut(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin_mut(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator) -> bool;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_end(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_is_end(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator) -> bool;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_end_mut(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable) -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_is_end_mut(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator) -> bool;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_to_index(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator) -> isize;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_to_index_mut(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator) -> isize;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy(_this: *const MR_C_std_deque_MR_StdContainers_NonAssignable);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator) -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator, other: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_from_mutable(iter: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator) -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_deref(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_incr(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_decr(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_add_assign(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator, delta: isize);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_Destroy(_this: *const MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator) -> *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator, other: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_deref(_this: *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_incr(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_decr(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_add_assign(_this: *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator, delta: isize);
    pub fn MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_Destroy(_this: *const MR_C_std_deque_MR_StdContainers_NonAssignable_iterator);
}
