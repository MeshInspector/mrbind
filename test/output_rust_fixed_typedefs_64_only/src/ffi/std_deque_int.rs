/// Generated from class `std::deque<int>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_deque_int
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_deque_int_DefaultConstruct() -> *mut crate::ffi::MR_C_std_deque_int;
    pub fn MR_C_std_deque_int_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_deque_int) -> *mut crate::ffi::MR_C_std_deque_int;
    pub fn MR_C_std_deque_int_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_deque_int, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_deque_int);
    pub fn MR_C_std_deque_int_size(_this: *const crate::ffi::MR_C_std_deque_int) -> usize;
    pub fn MR_C_std_deque_int_empty(_this: *const crate::ffi::MR_C_std_deque_int) -> bool;
    pub fn MR_C_std_deque_int_resize(_this: *mut crate::ffi::MR_C_std_deque_int, new_size: usize);
    pub fn MR_C_std_deque_int_clear(_this: *mut crate::ffi::MR_C_std_deque_int);
    pub fn MR_C_std_deque_int_at(_this: *const crate::ffi::MR_C_std_deque_int, i: usize) -> *const core::ffi::c_int;
    pub fn MR_C_std_deque_int_at_mut(_this: *mut crate::ffi::MR_C_std_deque_int, i: usize) -> *mut core::ffi::c_int;
    pub fn MR_C_std_deque_int_front(_this: *const crate::ffi::MR_C_std_deque_int) -> *const core::ffi::c_int;
    pub fn MR_C_std_deque_int_front_mut(_this: *mut crate::ffi::MR_C_std_deque_int) -> *mut core::ffi::c_int;
    pub fn MR_C_std_deque_int_back(_this: *const crate::ffi::MR_C_std_deque_int) -> *const core::ffi::c_int;
    pub fn MR_C_std_deque_int_back_mut(_this: *mut crate::ffi::MR_C_std_deque_int) -> *mut core::ffi::c_int;
    pub fn MR_C_std_deque_int_push_back(_this: *mut crate::ffi::MR_C_std_deque_int, new_elem: core::ffi::c_int);
    pub fn MR_C_std_deque_int_pop_back(_this: *mut crate::ffi::MR_C_std_deque_int);
    pub fn MR_C_std_deque_int_push_front(_this: *mut crate::ffi::MR_C_std_deque_int, new_elem: core::ffi::c_int);
    pub fn MR_C_std_deque_int_pop_front(_this: *mut crate::ffi::MR_C_std_deque_int);
    pub fn MR_C_std_deque_int_insert(_this: *mut crate::ffi::MR_C_std_deque_int, position: usize, new_elem: core::ffi::c_int);
    pub fn MR_C_std_deque_int_erase(_this: *mut crate::ffi::MR_C_std_deque_int, position: usize);
    pub fn MR_C_std_deque_int_Destroy(_this: *const MR_C_std_deque_int);
}
