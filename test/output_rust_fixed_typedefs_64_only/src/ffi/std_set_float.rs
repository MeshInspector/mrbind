/// Generated from class `std::set<float>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_set_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `std::set<float>::const_iterator`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_set_float_const_iterator
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_equal_MR_C_std_set_float_const_iterator(a: *const crate::ffi::MR_C_std_set_float_const_iterator, b: *const crate::ffi::MR_C_std_set_float_const_iterator) -> bool;
    pub fn MR_C_std_set_float_DefaultConstruct() -> *mut crate::ffi::MR_C_std_set_float;
    pub fn MR_C_std_set_float_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_set_float) -> *mut crate::ffi::MR_C_std_set_float;
    pub fn MR_C_std_set_float_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_set_float, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_set_float);
    pub fn MR_C_std_set_float_size(_this: *const crate::ffi::MR_C_std_set_float) -> usize;
    pub fn MR_C_std_set_float_empty(_this: *const crate::ffi::MR_C_std_set_float) -> bool;
    pub fn MR_C_std_set_float_clear(_this: *mut crate::ffi::MR_C_std_set_float);
    pub fn MR_C_std_set_float_contains(_this: *const crate::ffi::MR_C_std_set_float, key: *const f32) -> bool;
    pub fn MR_C_std_set_float_find(_this: *const crate::ffi::MR_C_std_set_float, key: *const f32) -> *mut crate::ffi::MR_C_std_set_float_const_iterator;
    pub fn MR_C_std_set_float_insert(_this: *mut crate::ffi::MR_C_std_set_float, new_elem: f32);
    pub fn MR_C_std_set_float_begin(_this: *const crate::ffi::MR_C_std_set_float) -> *mut crate::ffi::MR_C_std_set_float_const_iterator;
    pub fn MR_C_std_set_float_end(_this: *const crate::ffi::MR_C_std_set_float) -> *mut crate::ffi::MR_C_std_set_float_const_iterator;
    pub fn MR_C_std_set_float_is_end(_this: *const crate::ffi::MR_C_std_set_float, iter: *const crate::ffi::MR_C_std_set_float_const_iterator) -> bool;
    pub fn MR_C_std_set_float_Destroy(_this: *const MR_C_std_set_float);
    pub fn MR_C_std_set_float_const_iterator_DefaultConstruct() -> *mut crate::ffi::MR_C_std_set_float_const_iterator;
    pub fn MR_C_std_set_float_const_iterator_ConstructFromAnother(other: *const crate::ffi::MR_C_std_set_float_const_iterator) -> *mut crate::ffi::MR_C_std_set_float_const_iterator;
    pub fn MR_C_std_set_float_const_iterator_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_set_float_const_iterator, other: *const crate::ffi::MR_C_std_set_float_const_iterator);
    pub fn MR_C_std_set_float_const_iterator_deref(_this: *const crate::ffi::MR_C_std_set_float_const_iterator) -> *const f32;
    pub fn MR_C_std_set_float_const_iterator_incr(_this: *mut crate::ffi::MR_C_std_set_float_const_iterator);
    pub fn MR_C_std_set_float_const_iterator_Destroy(_this: *const MR_C_std_set_float_const_iterator);
}
