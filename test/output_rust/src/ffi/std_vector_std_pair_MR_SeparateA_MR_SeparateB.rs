/// Generated from class `std::vector<std::pair<MR::SeparateA, MR::SeparateB>>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_sub_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator(a: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator, b: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator) -> isize;
    pub fn MR_C_equal_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator(a: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator, b: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator) -> bool;
    pub fn MR_C_sub_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator(a: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator, b: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator) -> isize;
    pub fn MR_C_equal_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator(a: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator, b: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator) -> bool;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_size(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> usize;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_empty(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> bool;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_resize_with_default_value(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, new_size: usize, value: *const crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_clear(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_capacity(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> usize;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_reserve(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, new_capacity: usize);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_shrink_to_fit(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, i: usize) -> *const crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at_mut(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, i: usize) -> *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> *const crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front_mut(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> *const crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back_mut(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_push_back(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_pop_back(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, position: usize, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, position: usize);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert_at_mutable_iter(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, position: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase_at_mutable_iter(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, position: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert_at_iter(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, position: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator, new_elem_pass_by: crate::ffi::MR_C_PassBy, new_elem: *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase_at_iter(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, position: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_is_begin(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, iter: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator) -> bool;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin_mut(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_is_begin_mut(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, iter: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator) -> bool;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_is_end(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, iter: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator) -> bool;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end_mut(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_is_end_mut(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, iter: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator) -> bool;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_to_index(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, iter: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator) -> isize;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_to_index_mut(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, iter: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator) -> isize;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_Destroy(_this: *const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator) -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator, other: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_from_mutable(iter: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator) -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_deref(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator) -> *const crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_incr(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_decr(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_add_assign(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator, delta: isize);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_Destroy(_this: *const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator) -> *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator, other: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_deref(_this: *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator) -> *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB;
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_incr(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_decr(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_add_assign(_this: *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator, delta: isize);
    pub fn MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_Destroy(_this: *const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator);
}
