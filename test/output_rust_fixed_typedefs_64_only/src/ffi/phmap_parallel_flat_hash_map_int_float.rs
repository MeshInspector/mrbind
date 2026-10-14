/// Generated from class `phmap::parallel_flat_hash_map<int, float>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_phmap_parallel_flat_hash_map_int_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `phmap::parallel_flat_hash_map<int, float>::const_iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `phmap::parallel_flat_hash_map<int, float>::iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_phmap_parallel_flat_hash_map_int_float_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_equal_MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator(a: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator, b: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator) -> bool;
    pub fn MR_C_equal_MR_C_phmap_parallel_flat_hash_map_int_float_iterator(a: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator, b: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator) -> bool;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_DefaultConstruct() -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float) -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_AssignFromAnother(_this: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float);
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_size(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float) -> usize;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_empty(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float) -> bool;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_clear(_this: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float);
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_find_or_construct_elem(_this: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, key: *const core::ffi::c_int) -> *mut f32;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_contains(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, key: *const core::ffi::c_int) -> bool;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_find(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, key: *const core::ffi::c_int) -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_find_mut(_this: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, key: *const core::ffi::c_int) -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_begin(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float) -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_is_begin(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, iter: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator) -> bool;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_begin_mut(_this: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float) -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_is_begin_mut(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, iter: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator) -> bool;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_end(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float) -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_is_end(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, iter: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator) -> bool;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_end_mut(_this: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float) -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_is_end_mut(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, iter: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator) -> bool;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_Destroy(_this: *const MR_C_phmap_parallel_flat_hash_map_int_float);
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator) -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator, other: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator);
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_from_mutable(iter: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator) -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_deref(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator) -> *const crate::ffi::MR_C_std_pair_const_int_float;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_deref_key(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator) -> *const core::ffi::c_int;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_deref_value(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator) -> *const f32;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_incr(_this: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator);
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_Destroy(_this: *const MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator);
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator) -> *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator, other: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator);
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_iterator_deref(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator) -> *mut crate::ffi::MR_C_std_pair_const_int_float;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_iterator_deref_key(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator) -> *const core::ffi::c_int;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_iterator_deref_value(_this: *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator) -> *mut f32;
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_iterator_incr(_this: *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_iterator);
    pub fn MR_C_phmap_parallel_flat_hash_map_int_float_iterator_Destroy(_this: *const MR_C_phmap_parallel_flat_hash_map_int_float_iterator);
}
