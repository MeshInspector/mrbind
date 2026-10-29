/// Generated from class `std::list<int>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_list_int
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::list<int>::const_iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_list_int_const_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_equal_MR_C_std_list_int_const_iterator(a: *const crate::ffi::MR_C_std_list_int_const_iterator, b: *const crate::ffi::MR_C_std_list_int_const_iterator) -> bool;
    pub fn MR_C_std_list_int_DefaultConstruct() -> *mut crate::ffi::MR_C_std_list_int;
    pub fn MR_C_std_list_int_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_list_int) -> *mut crate::ffi::MR_C_std_list_int;
    pub fn MR_C_std_list_int_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_list_int, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_list_int);
    pub fn MR_C_std_list_int_size(_this: *const crate::ffi::MR_C_std_list_int) -> usize;
    pub fn MR_C_std_list_int_empty(_this: *const crate::ffi::MR_C_std_list_int) -> bool;
    pub fn MR_C_std_list_int_resize(_this: *mut crate::ffi::MR_C_std_list_int, new_size: usize);
    pub fn MR_C_std_list_int_clear(_this: *mut crate::ffi::MR_C_std_list_int);
    pub fn MR_C_std_list_int_front(_this: *const crate::ffi::MR_C_std_list_int) -> *const core::ffi::c_int;
    pub fn MR_C_std_list_int_front_mut(_this: *mut crate::ffi::MR_C_std_list_int) -> *mut core::ffi::c_int;
    pub fn MR_C_std_list_int_back(_this: *const crate::ffi::MR_C_std_list_int) -> *const core::ffi::c_int;
    pub fn MR_C_std_list_int_back_mut(_this: *mut crate::ffi::MR_C_std_list_int) -> *mut core::ffi::c_int;
    pub fn MR_C_std_list_int_push_back(_this: *mut crate::ffi::MR_C_std_list_int, new_elem: core::ffi::c_int);
    pub fn MR_C_std_list_int_pop_back(_this: *mut crate::ffi::MR_C_std_list_int);
    pub fn MR_C_std_list_int_push_front(_this: *mut crate::ffi::MR_C_std_list_int, new_elem: core::ffi::c_int);
    pub fn MR_C_std_list_int_pop_front(_this: *mut crate::ffi::MR_C_std_list_int);
    pub fn MR_C_std_list_int_begin(_this: *const crate::ffi::MR_C_std_list_int) -> *mut crate::ffi::MR_C_std_list_int_const_iterator;
    pub fn MR_C_std_list_int_end(_this: *const crate::ffi::MR_C_std_list_int) -> *mut crate::ffi::MR_C_std_list_int_const_iterator;
    pub fn MR_C_std_list_int_is_end(_this: *const crate::ffi::MR_C_std_list_int, iter: *const crate::ffi::MR_C_std_list_int_const_iterator) -> bool;
    pub fn MR_C_std_list_int_Destroy(_this: *const MR_C_std_list_int);
    pub fn MR_C_std_list_int_const_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_list_int_const_iterator;
    pub fn MR_C_std_list_int_const_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_list_int_const_iterator) -> *mut crate::ffi::MR_C_std_list_int_const_iterator;
    pub fn MR_C_std_list_int_const_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_list_int_const_iterator, other: *const crate::ffi::MR_C_std_list_int_const_iterator);
    pub fn MR_C_std_list_int_const_iterator_deref(_this: *const crate::ffi::MR_C_std_list_int_const_iterator) -> *const core::ffi::c_int;
    pub fn MR_C_std_list_int_const_iterator_incr(_this: *mut crate::ffi::MR_C_std_list_int_const_iterator);
    pub fn MR_C_std_list_int_const_iterator_Destroy(_this: *const MR_C_std_list_int_const_iterator);
}
