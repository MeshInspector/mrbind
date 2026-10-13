/// Generated from class `std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct(_0: *mut crate::ffi::MR_CSharp_ExposedLayout, _1: *const crate::ffi::MR_CSharp_ExposedLayout) -> *mut crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref;
    pub fn MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_MR_CSharp_ExposedLayout_ref(_this: *const crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref) -> *mut crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_const_MR_CSharp_ExposedLayout_ref(_this: *const crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref) -> *const crate::ffi::MR_CSharp_ExposedLayout;
    pub fn MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Destroy(_this: *const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref);
}
