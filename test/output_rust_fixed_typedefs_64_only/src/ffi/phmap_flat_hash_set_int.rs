/// Generated from class `phmap::flat_hash_set<int>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_phmap_flat_hash_set_int
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `phmap::flat_hash_set<int>::const_iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_phmap_flat_hash_set_int_const_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_equal_MR_C_phmap_flat_hash_set_int_const_iterator(a: *const crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator, b: *const crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator) -> bool;
    pub fn MR_C_phmap_flat_hash_set_int_DefaultConstruct() -> *mut crate::ffi::MR_C_phmap_flat_hash_set_int;
    pub fn MR_C_phmap_flat_hash_set_int_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_phmap_flat_hash_set_int) -> *mut crate::ffi::MR_C_phmap_flat_hash_set_int;
    pub fn MR_C_phmap_flat_hash_set_int_AssignFromAnother(_this: *mut crate::ffi::MR_C_phmap_flat_hash_set_int, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_phmap_flat_hash_set_int);
    pub fn MR_C_phmap_flat_hash_set_int_size(_this: *const crate::ffi::MR_C_phmap_flat_hash_set_int) -> usize;
    pub fn MR_C_phmap_flat_hash_set_int_empty(_this: *const crate::ffi::MR_C_phmap_flat_hash_set_int) -> bool;
    pub fn MR_C_phmap_flat_hash_set_int_clear(_this: *mut crate::ffi::MR_C_phmap_flat_hash_set_int);
    pub fn MR_C_phmap_flat_hash_set_int_contains(_this: *const crate::ffi::MR_C_phmap_flat_hash_set_int, key: *const core::ffi::c_int) -> bool;
    pub fn MR_C_phmap_flat_hash_set_int_find(_this: *const crate::ffi::MR_C_phmap_flat_hash_set_int, key: *const core::ffi::c_int) -> *mut crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator;
    pub fn MR_C_phmap_flat_hash_set_int_insert(_this: *mut crate::ffi::MR_C_phmap_flat_hash_set_int, new_elem: core::ffi::c_int);
    pub fn MR_C_phmap_flat_hash_set_int_begin(_this: *const crate::ffi::MR_C_phmap_flat_hash_set_int) -> *mut crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator;
    pub fn MR_C_phmap_flat_hash_set_int_end(_this: *const crate::ffi::MR_C_phmap_flat_hash_set_int) -> *mut crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator;
    pub fn MR_C_phmap_flat_hash_set_int_is_end(_this: *const crate::ffi::MR_C_phmap_flat_hash_set_int, iter: *const crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator) -> bool;
    pub fn MR_C_phmap_flat_hash_set_int_Destroy(_this: *const MR_C_phmap_flat_hash_set_int);
    pub fn MR_C_phmap_flat_hash_set_int_const_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator;
    pub fn MR_C_phmap_flat_hash_set_int_const_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator) -> *mut crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator;
    pub fn MR_C_phmap_flat_hash_set_int_const_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator, other: *const crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator);
    pub fn MR_C_phmap_flat_hash_set_int_const_iterator_deref(_this: *const crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator) -> *const core::ffi::c_int;
    pub fn MR_C_phmap_flat_hash_set_int_const_iterator_incr(_this: *mut crate::ffi::MR_C_phmap_flat_hash_set_int_const_iterator);
    pub fn MR_C_phmap_flat_hash_set_int_const_iterator_Destroy(_this: *const MR_C_phmap_flat_hash_set_int_const_iterator);
}
