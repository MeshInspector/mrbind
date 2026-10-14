/// Generated from class `std::pair<int &, float &>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_pair_int_ref_float_ref
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_pair_int_ref_float_ref_Construct(first: *mut core::ffi::c_int, second: *mut f32) -> *mut crate::ffi::MR_C_std_pair_int_ref_float_ref;
    pub fn MR_C_std_pair_int_ref_float_ref_first(_this: *const crate::ffi::MR_C_std_pair_int_ref_float_ref) -> *mut core::ffi::c_int;
    pub fn MR_C_std_pair_int_ref_float_ref_second(_this: *const crate::ffi::MR_C_std_pair_int_ref_float_ref) -> *mut f32;
    pub fn MR_C_std_pair_int_ref_float_ref_Destroy(_this: *const MR_C_std_pair_int_ref_float_ref);
}
