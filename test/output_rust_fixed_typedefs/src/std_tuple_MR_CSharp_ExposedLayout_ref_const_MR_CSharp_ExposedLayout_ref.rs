/// Stores 2 objects: `MR::CSharp::ExposedLayout &`, `const MR::CSharp::ExposedLayout &`.
///
/// Generated from class `std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &>`. Heap-allocated instances are held in `Owned<std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref>`.
#[repr(transparent)]
pub struct std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref(crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref);

unsafe impl crate::CppClass for std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Destroy(ptr as *const crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref)}
}

impl std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref
{
    /// Constructs the tuple elementwise.
    ///
    /// Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct()`.
    /// The reference to the parameter `_0` might be preserved in the constructed object.
    /// The reference to the parameter `_1` might be preserved in the constructed object.
    pub fn construct(_0: &mut crate::ffi::MR_CSharp_ExposedLayout, _1: &crate::ffi::MR_CSharp_ExposedLayout) -> crate::Owned<crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct(_0 as *mut crate::ffi::MR_CSharp_ExposedLayout as *mut crate::ffi::MR_CSharp_ExposedLayout, _1 as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref)}
    }

    /// The element 0, of type `MR::CSharp::ExposedLayout &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_MR_CSharp_ExposedLayout_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_mr_c_sharp_exposed_layout_ref<'a>(&'a self) -> &'a mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_MR_CSharp_ExposedLayout_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref)};
        unsafe {&mut *(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// The element 1, of type `const MR::CSharp::ExposedLayout &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_const_MR_CSharp_ExposedLayout_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_mr_c_sharp_exposed_layout_ref<'a>(&'a self) -> &'a crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_const_MR_CSharp_ExposedLayout_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref)};
        unsafe {&*(__ret as *const crate::ffi::MR_CSharp_ExposedLayout)}
    }

}

