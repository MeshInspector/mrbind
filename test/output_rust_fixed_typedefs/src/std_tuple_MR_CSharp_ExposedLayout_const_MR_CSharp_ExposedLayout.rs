/// Stores 2 objects: `MR::CSharp::ExposedLayout`, `const MR::CSharp::ExposedLayout`.
///
/// Generated from class `std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout>`. Heap-allocated instances are held in `Owned<std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout>`.
#[repr(transparent)]
pub struct std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout(crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout);

unsafe impl crate::CppClass for std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Destroy(ptr as *const crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout)}
}

impl std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout) -> crate::Owned<crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother(other as *const crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout as *const crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout)}
    }

    /// Constructs the tuple elementwise.
    ///
    /// Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct()`.
    /// The reference to the parameter `_0` might be preserved in the constructed object.
    /// The reference to the parameter `_1` might be preserved in the constructed object.
    pub fn construct(_0: crate::ffi::MR_CSharp_ExposedLayout, _1: crate::ffi::MR_CSharp_ExposedLayout) -> crate::Owned<crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct(_0, _1)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout)}
    }

    /// The element 0, of type `MR::CSharp::ExposedLayout`, read-only.
    ///
    /// Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_mr_c_sharp_exposed_layout<'a>(&'a self) -> &'a crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout(self as *const Self as *const crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout)};
        unsafe {&*(__ret as *const crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// The element 0, of type `MR::CSharp::ExposedLayout`, mutable.
    ///
    /// Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_mr_c_sharp_exposed_layout_mut<'a>(&'a mut self) -> &'a mut crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout_mut(self as *mut Self as *mut crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout)};
        unsafe {&mut *(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// The element 1, of type `const MR::CSharp::ExposedLayout`, read-only.
    ///
    /// Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_const_MR_CSharp_ExposedLayout()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_mr_c_sharp_exposed_layout<'a>(&'a self) -> &'a crate::ffi::MR_CSharp_ExposedLayout
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_const_MR_CSharp_ExposedLayout(self as *const Self as *const crate::ffi::MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout)};
        unsafe {&*(__ret as *const crate::ffi::MR_CSharp_ExposedLayout)}
    }

}

unsafe impl crate::CppCopy for std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

