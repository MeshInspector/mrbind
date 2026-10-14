/// Generated from class `std::vector<unsigned long>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_unsigned_long
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::vector<unsigned long>::const_iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_unsigned_long_const_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::vector<unsigned long>::iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_vector_unsigned_long_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_sub_MR_C_std_vector_unsigned_long_const_iterator(a: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator, b: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator) -> isize;
    pub fn MR_C_equal_MR_C_std_vector_unsigned_long_const_iterator(a: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator, b: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator) -> bool;
    pub fn MR_C_sub_MR_C_std_vector_unsigned_long_iterator(a: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator, b: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator) -> isize;
    pub fn MR_C_equal_MR_C_std_vector_unsigned_long_iterator(a: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator, b: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator) -> bool;
    pub fn MR_C_std_vector_unsigned_long_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_unsigned_long;
    pub fn MR_C_std_vector_unsigned_long_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_unsigned_long) -> *mut crate::ffi::MR_C_std_vector_unsigned_long;
    pub fn MR_C_std_vector_unsigned_long_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_vector_unsigned_long);
    pub fn MR_C_std_vector_unsigned_long_ConstructFromRange(ptr: *const core::ffi::c_ulong, size: usize) -> *mut crate::ffi::MR_C_std_vector_unsigned_long;
    pub fn MR_C_std_vector_unsigned_long_AssignFromRange(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, ptr: *const core::ffi::c_ulong, size: usize);
    pub fn MR_C_std_vector_unsigned_long_size(_this: *const crate::ffi::MR_C_std_vector_unsigned_long) -> usize;
    pub fn MR_C_std_vector_unsigned_long_empty(_this: *const crate::ffi::MR_C_std_vector_unsigned_long) -> bool;
    pub fn MR_C_std_vector_unsigned_long_resize(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, new_size: usize);
    pub fn MR_C_std_vector_unsigned_long_resize_with_default_value(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, new_size: usize, value: core::ffi::c_ulong);
    pub fn MR_C_std_vector_unsigned_long_clear(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long);
    pub fn MR_C_std_vector_unsigned_long_capacity(_this: *const crate::ffi::MR_C_std_vector_unsigned_long) -> usize;
    pub fn MR_C_std_vector_unsigned_long_reserve(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, new_capacity: usize);
    pub fn MR_C_std_vector_unsigned_long_shrink_to_fit(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long);
    pub fn MR_C_std_vector_unsigned_long_at(_this: *const crate::ffi::MR_C_std_vector_unsigned_long, i: usize) -> *const core::ffi::c_ulong;
    pub fn MR_C_std_vector_unsigned_long_at_mut(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, i: usize) -> *mut core::ffi::c_ulong;
    pub fn MR_C_std_vector_unsigned_long_front(_this: *const crate::ffi::MR_C_std_vector_unsigned_long) -> *const core::ffi::c_ulong;
    pub fn MR_C_std_vector_unsigned_long_front_mut(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long) -> *mut core::ffi::c_ulong;
    pub fn MR_C_std_vector_unsigned_long_back(_this: *const crate::ffi::MR_C_std_vector_unsigned_long) -> *const core::ffi::c_ulong;
    pub fn MR_C_std_vector_unsigned_long_back_mut(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long) -> *mut core::ffi::c_ulong;
    pub fn MR_C_std_vector_unsigned_long_data(_this: *const crate::ffi::MR_C_std_vector_unsigned_long) -> *const core::ffi::c_ulong;
    pub fn MR_C_std_vector_unsigned_long_data_mut(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long) -> *mut core::ffi::c_ulong;
    pub fn MR_C_std_vector_unsigned_long_push_back(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, new_elem: core::ffi::c_ulong);
    pub fn MR_C_std_vector_unsigned_long_pop_back(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long);
    pub fn MR_C_std_vector_unsigned_long_insert(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, position: usize, new_elem: core::ffi::c_ulong);
    pub fn MR_C_std_vector_unsigned_long_erase(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, position: usize);
    pub fn MR_C_std_vector_unsigned_long_insert_at_mutable_iter(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, position: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator, new_elem: core::ffi::c_ulong);
    pub fn MR_C_std_vector_unsigned_long_erase_at_mutable_iter(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, position: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator);
    pub fn MR_C_std_vector_unsigned_long_insert_at_iter(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, position: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator, new_elem: core::ffi::c_ulong);
    pub fn MR_C_std_vector_unsigned_long_erase_at_iter(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long, position: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator);
    pub fn MR_C_std_vector_unsigned_long_begin(_this: *const crate::ffi::MR_C_std_vector_unsigned_long) -> *mut crate::ffi::MR_C_std_vector_unsigned_long_const_iterator;
    pub fn MR_C_std_vector_unsigned_long_is_begin(_this: *const crate::ffi::MR_C_std_vector_unsigned_long, iter: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator) -> bool;
    pub fn MR_C_std_vector_unsigned_long_begin_mut(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long) -> *mut crate::ffi::MR_C_std_vector_unsigned_long_iterator;
    pub fn MR_C_std_vector_unsigned_long_is_begin_mut(_this: *const crate::ffi::MR_C_std_vector_unsigned_long, iter: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator) -> bool;
    pub fn MR_C_std_vector_unsigned_long_end(_this: *const crate::ffi::MR_C_std_vector_unsigned_long) -> *mut crate::ffi::MR_C_std_vector_unsigned_long_const_iterator;
    pub fn MR_C_std_vector_unsigned_long_is_end(_this: *const crate::ffi::MR_C_std_vector_unsigned_long, iter: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator) -> bool;
    pub fn MR_C_std_vector_unsigned_long_end_mut(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long) -> *mut crate::ffi::MR_C_std_vector_unsigned_long_iterator;
    pub fn MR_C_std_vector_unsigned_long_is_end_mut(_this: *const crate::ffi::MR_C_std_vector_unsigned_long, iter: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator) -> bool;
    pub fn MR_C_std_vector_unsigned_long_to_index(_this: *const crate::ffi::MR_C_std_vector_unsigned_long, iter: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator) -> isize;
    pub fn MR_C_std_vector_unsigned_long_to_index_mut(_this: *const crate::ffi::MR_C_std_vector_unsigned_long, iter: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator) -> isize;
    pub fn MR_C_std_vector_unsigned_long_Destroy(_this: *const MR_C_std_vector_unsigned_long);
    pub fn MR_C_std_vector_unsigned_long_const_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_unsigned_long_const_iterator;
    pub fn MR_C_std_vector_unsigned_long_const_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator) -> *mut crate::ffi::MR_C_std_vector_unsigned_long_const_iterator;
    pub fn MR_C_std_vector_unsigned_long_const_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long_const_iterator, other: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator);
    pub fn MR_C_std_vector_unsigned_long_const_iterator_from_mutable(iter: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator) -> *mut crate::ffi::MR_C_std_vector_unsigned_long_const_iterator;
    pub fn MR_C_std_vector_unsigned_long_const_iterator_deref(_this: *const crate::ffi::MR_C_std_vector_unsigned_long_const_iterator) -> *const core::ffi::c_ulong;
    pub fn MR_C_std_vector_unsigned_long_const_iterator_incr(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long_const_iterator);
    pub fn MR_C_std_vector_unsigned_long_const_iterator_decr(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long_const_iterator);
    pub fn MR_C_std_vector_unsigned_long_const_iterator_add_assign(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long_const_iterator, delta: isize);
    pub fn MR_C_std_vector_unsigned_long_const_iterator_Destroy(_this: *const MR_C_std_vector_unsigned_long_const_iterator);
    pub fn MR_C_std_vector_unsigned_long_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_vector_unsigned_long_iterator;
    pub fn MR_C_std_vector_unsigned_long_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator) -> *mut crate::ffi::MR_C_std_vector_unsigned_long_iterator;
    pub fn MR_C_std_vector_unsigned_long_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long_iterator, other: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator);
    pub fn MR_C_std_vector_unsigned_long_iterator_deref(_this: *const crate::ffi::MR_C_std_vector_unsigned_long_iterator) -> *mut core::ffi::c_ulong;
    pub fn MR_C_std_vector_unsigned_long_iterator_incr(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long_iterator);
    pub fn MR_C_std_vector_unsigned_long_iterator_decr(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long_iterator);
    pub fn MR_C_std_vector_unsigned_long_iterator_add_assign(_this: *mut crate::ffi::MR_C_std_vector_unsigned_long_iterator, delta: isize);
    pub fn MR_C_std_vector_unsigned_long_iterator_Destroy(_this: *const MR_C_std_vector_unsigned_long_iterator);
}
