/// Generated from class `std::array<MR::StdContainers::NonAssignable, 42>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_array_MR_StdContainers_NonAssignable_42
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct() -> *mut crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42;
    pub fn MR_C_std_array_MR_StdContainers_NonAssignable_42_at(_this: *const crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42, i: usize) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_array_MR_StdContainers_NonAssignable_42_at_mut(_this: *mut crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42, i: usize) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_array_MR_StdContainers_NonAssignable_42_data(_this: *const crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_array_MR_StdContainers_NonAssignable_42_data_mut(_this: *mut crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_array_MR_StdContainers_NonAssignable_42_begin(_this: *const crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_array_MR_StdContainers_NonAssignable_42_begin_mut(_this: *mut crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_array_MR_StdContainers_NonAssignable_42_end(_this: *const crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42) -> *const crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_array_MR_StdContainers_NonAssignable_42_end_mut(_this: *mut crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42) -> *mut crate::ffi::MR_StdContainers_NonAssignable;
    pub fn MR_C_std_array_MR_StdContainers_NonAssignable_42_Destroy(_this: *const MR_C_std_array_MR_StdContainers_NonAssignable_42);
}
