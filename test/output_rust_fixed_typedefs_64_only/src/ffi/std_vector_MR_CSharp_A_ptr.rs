/// Generated from class `std::vector<MR::CSharp::A *>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_MR_CSharp_A_ptr
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::vector<MR::CSharp::A *>::const_iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_MR_CSharp_A_ptr_const_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::vector<MR::CSharp::A *>::iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_MR_CSharp_A_ptr_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator(a: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator, b: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator) -> isize;
    pub fn MR_C_equal_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator(a: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator, b: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator) -> bool;
    pub fn MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_iterator(a: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator, b: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator) -> isize;
    pub fn MR_C_equal_MR_C_std_vector_MR_CSharp_A_ptr_iterator(a: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator, b: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator) -> bool;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_size(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> usize;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_empty(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> bool;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_resize(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, new_size: usize);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_resize_with_default_value(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, new_size: usize, value: *mut crate::ffi::MR_CSharp_A);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_clear(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_capacity(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> usize;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_reserve(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, new_capacity: usize);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_shrink_to_fit(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr);
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
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_insert_at_mutable_iter(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator, new_elem: *mut crate::ffi::MR_CSharp_A);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_erase_at_mutable_iter(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_insert_at_iter(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator, new_elem: *mut crate::ffi::MR_CSharp_A);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_erase_at_iter(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_begin(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_is_begin(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator) -> bool;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_begin_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_is_begin_mut(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator) -> bool;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_end(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_is_end(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator) -> bool;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_end_mut(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_is_end_mut(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator) -> bool;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_to_index(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator) -> isize;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_to_index_mut(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator) -> isize;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_Destroy(_this: *const MR_C_std_vector_MR_CSharp_A_ptr);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator, other: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_from_mutable(iter: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_deref(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator) -> *const *mut crate::ffi::MR_CSharp_A;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_incr(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_decr(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_add_assign(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator, delta: isize);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_Destroy(_this: *const MR_C_std_vector_MR_CSharp_A_ptr_const_iterator);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator) -> *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator, other: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_iterator_deref(_this: *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator) -> *mut *mut crate::ffi::MR_CSharp_A;
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_iterator_incr(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_iterator_decr(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_iterator_add_assign(_this: *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator, delta: isize);
    pub fn MR_C_std_vector_MR_CSharp_A_ptr_iterator_Destroy(_this: *const MR_C_std_vector_MR_CSharp_A_ptr_iterator);
}
