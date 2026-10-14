/// Generated from class `MR::SeparateB`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CommonBaseAB`
///
/// Generated from class `MR::SeparateB`. Heap-allocated instances are held in `Owned<SeparateB>`.
#[repr(transparent)]
pub struct SeparateB(crate::ffi::MR_SeparateB);

unsafe impl crate::CppClass for SeparateB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_SeparateB_Destroy(ptr as *const crate::ffi::MR_SeparateB)}
}

impl SeparateB
{
    /// Generated from constructor `MR::SeparateB::SeparateB`.
    ///
    /// Calls `MR_SeparateB_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::SeparateB) -> crate::Owned<crate::mr::SeparateB>
    {
        let __ret = unsafe {crate::ffi::MR_SeparateB_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::SeparateB as *mut crate::ffi::MR_SeparateB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::SeparateB)}
    }

    /// Generated from method `MR::SeparateB::operator=`.
    ///
    /// Calls `MR_SeparateB_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::SeparateB) -> &mut crate::mr::SeparateB
    {
        let __ret = unsafe {crate::ffi::MR_SeparateB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_SeparateB, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::SeparateB as *mut crate::ffi::MR_SeparateB)};
        unsafe {&mut *(__ret as *mut crate::mr::SeparateB)}
    }

    /// Upcasts to the base class `MR::CommonBaseAB`.
    ///
    /// Calls `MR_SeparateB_UpcastTo_MR_CommonBaseAB()`.
    pub fn upcast_to_common_base_ab(&self) -> &crate::mr::CommonBaseAB
    {
        unsafe {&*(crate::ffi::MR_SeparateB_UpcastTo_MR_CommonBaseAB(self as *const Self as *const crate::ffi::MR_SeparateB) as *const crate::mr::CommonBaseAB)}
    }

    /// Upcasts to the base class `MR::CommonBaseAB`.
    ///
    /// Calls `MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB()`.
    pub fn upcast_to_common_base_ab_mut(&mut self) -> &mut crate::mr::CommonBaseAB
    {
        unsafe {&mut *(crate::ffi::MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB(self as *mut Self as *mut crate::ffi::MR_SeparateB) as *mut crate::mr::CommonBaseAB)}
    }

    /// Static downcast from the base class `MR::CommonBaseAB`.
    ///
    /// Calls `MR_SeparateB_StaticDowncastFrom_MR_CommonBaseAB()`. Undefined behavior if the object isn't actually a `SeparateB`.
    pub unsafe fn static_downcast_from_common_base_ab(object: &crate::mr::CommonBaseAB) -> &Self
    {
        &*(crate::ffi::MR_SeparateB_StaticDowncastFrom_MR_CommonBaseAB(object as *const crate::mr::CommonBaseAB as *const crate::ffi::MR_CommonBaseAB) as *const Self)
    }

    /// Static downcast from the base class `MR::CommonBaseAB`.
    ///
    /// Calls `MR_SeparateB_MutableStaticDowncastFrom_MR_CommonBaseAB()`. Undefined behavior if the object isn't actually a `SeparateB`.
    pub unsafe fn static_downcast_from_common_base_ab_mut(object: &mut crate::mr::CommonBaseAB) -> &mut Self
    {
        &mut *(crate::ffi::MR_SeparateB_MutableStaticDowncastFrom_MR_CommonBaseAB(object as *mut crate::mr::CommonBaseAB as *mut crate::ffi::MR_CommonBaseAB) as *mut Self)
    }

    /// Dynamic downcast from the base class `MR::CommonBaseAB`. Returns `None` if the object isn't actually a `SeparateB`.
    ///
    /// Calls `MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB()`.
    pub fn dynamic_downcast_from_common_base_ab(object: &crate::mr::CommonBaseAB) -> Option<&Self>
    {
        unsafe {(crate::ffi::MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(object as *const crate::mr::CommonBaseAB as *const crate::ffi::MR_CommonBaseAB) as *const Self).as_ref()}
    }

    /// Dynamic downcast from the base class `MR::CommonBaseAB`. Returns `None` if the object isn't actually a `SeparateB`.
    ///
    /// Calls `MR_SeparateB_MutableDynamicDowncastFrom_MR_CommonBaseAB()`.
    pub fn dynamic_downcast_from_common_base_ab_mut(object: &mut crate::mr::CommonBaseAB) -> Option<&mut Self>
    {
        unsafe {(crate::ffi::MR_SeparateB_MutableDynamicDowncastFrom_MR_CommonBaseAB(object as *mut crate::mr::CommonBaseAB as *mut crate::ffi::MR_CommonBaseAB) as *mut Self).as_mut()}
    }

}

impl AsRef<crate::mr::CommonBaseAB> for SeparateB
{
    fn as_ref(&self) -> &crate::mr::CommonBaseAB {self.upcast_to_common_base_ab()}
}

impl AsMut<crate::mr::CommonBaseAB> for SeparateB
{
    fn as_mut(&mut self) -> &mut crate::mr::CommonBaseAB {self.upcast_to_common_base_ab_mut()}
}

unsafe impl crate::CppCopy for SeparateB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::GetSeparateVecB`.
///
/// Calls `MR_GetSeparateVecB()`.
pub fn get_separate_vec_b() -> crate::Owned<crate::mr::cs::std_vector_MR_SeparateB>
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_GetSeparateVecB()};
    crate::__check_exception();
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_SeparateB)}
}

