/// Generated from class `MR::SeparateA`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CommonBaseAB`
///
/// Generated from class `MR::SeparateA`. Heap-allocated instances are held in `Owned<SeparateA>`.
#[repr(transparent)]
pub struct SeparateA(crate::ffi::MR_SeparateA);

unsafe impl crate::CppClass for SeparateA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_SeparateA_Destroy(ptr as *const crate::ffi::MR_SeparateA)}
}

impl SeparateA
{
    /// Generated from constructor `MR::SeparateA::SeparateA`.
    ///
    /// Calls `MR_SeparateA_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::SeparateA) -> crate::Owned<crate::mr::SeparateA>
    {
        let __ret = unsafe {crate::ffi::MR_SeparateA_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::SeparateA as *mut crate::ffi::MR_SeparateA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::SeparateA)}
    }

    /// Generated from method `MR::SeparateA::operator=`.
    ///
    /// Calls `MR_SeparateA_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::SeparateA) -> &mut crate::mr::SeparateA
    {
        let __ret = unsafe {crate::ffi::MR_SeparateA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_SeparateA, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::SeparateA as *mut crate::ffi::MR_SeparateA)};
        unsafe {&mut *(__ret as *mut crate::mr::SeparateA)}
    }

    /// Upcasts to the base class `MR::CommonBaseAB`.
    ///
    /// Calls `MR_SeparateA_UpcastTo_MR_CommonBaseAB()`.
    pub fn upcast_to_common_base_ab(&self) -> &crate::mr::CommonBaseAB
    {
        unsafe {&*(crate::ffi::MR_SeparateA_UpcastTo_MR_CommonBaseAB(self as *const Self as *const crate::ffi::MR_SeparateA) as *const crate::mr::CommonBaseAB)}
    }

    /// Upcasts to the base class `MR::CommonBaseAB`.
    ///
    /// Calls `MR_SeparateA_MutableUpcastTo_MR_CommonBaseAB()`.
    pub fn upcast_to_common_base_ab_mut(&mut self) -> &mut crate::mr::CommonBaseAB
    {
        unsafe {&mut *(crate::ffi::MR_SeparateA_MutableUpcastTo_MR_CommonBaseAB(self as *mut Self as *mut crate::ffi::MR_SeparateA) as *mut crate::mr::CommonBaseAB)}
    }

    /// Static downcast from the base class `MR::CommonBaseAB`.
    ///
    /// Calls `MR_SeparateA_StaticDowncastFrom_MR_CommonBaseAB()`. Undefined behavior if the object isn't actually a `SeparateA`.
    pub unsafe fn static_downcast_from_common_base_ab(object: &crate::mr::CommonBaseAB) -> &Self
    {
        &*(crate::ffi::MR_SeparateA_StaticDowncastFrom_MR_CommonBaseAB(object as *const crate::mr::CommonBaseAB as *const crate::ffi::MR_CommonBaseAB) as *const Self)
    }

    /// Static downcast from the base class `MR::CommonBaseAB`.
    ///
    /// Calls `MR_SeparateA_MutableStaticDowncastFrom_MR_CommonBaseAB()`. Undefined behavior if the object isn't actually a `SeparateA`.
    pub unsafe fn static_downcast_from_common_base_ab_mut(object: &mut crate::mr::CommonBaseAB) -> &mut Self
    {
        &mut *(crate::ffi::MR_SeparateA_MutableStaticDowncastFrom_MR_CommonBaseAB(object as *mut crate::mr::CommonBaseAB as *mut crate::ffi::MR_CommonBaseAB) as *mut Self)
    }

    /// Dynamic downcast from the base class `MR::CommonBaseAB`. Returns `None` if the object isn't actually a `SeparateA`.
    ///
    /// Calls `MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB()`.
    pub fn dynamic_downcast_from_common_base_ab(object: &crate::mr::CommonBaseAB) -> Option<&Self>
    {
        unsafe {(crate::ffi::MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(object as *const crate::mr::CommonBaseAB as *const crate::ffi::MR_CommonBaseAB) as *const Self).as_ref()}
    }

    /// Dynamic downcast from the base class `MR::CommonBaseAB`. Returns `None` if the object isn't actually a `SeparateA`.
    ///
    /// Calls `MR_SeparateA_MutableDynamicDowncastFrom_MR_CommonBaseAB()`.
    pub fn dynamic_downcast_from_common_base_ab_mut(object: &mut crate::mr::CommonBaseAB) -> Option<&mut Self>
    {
        unsafe {(crate::ffi::MR_SeparateA_MutableDynamicDowncastFrom_MR_CommonBaseAB(object as *mut crate::mr::CommonBaseAB as *mut crate::ffi::MR_CommonBaseAB) as *mut Self).as_mut()}
    }

}

impl AsRef<crate::mr::CommonBaseAB> for SeparateA
{
    fn as_ref(&self) -> &crate::mr::CommonBaseAB {self.upcast_to_common_base_ab()}
}

impl AsMut<crate::mr::CommonBaseAB> for SeparateA
{
    fn as_mut(&mut self) -> &mut crate::mr::CommonBaseAB {self.upcast_to_common_base_ab_mut()}
}

unsafe impl crate::CppCopy for SeparateA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::GetSeparateVecA`.
///
/// Calls `MR_GetSeparateVecA()`.
pub fn get_separate_vec_a() -> crate::Owned<crate::mr::cs::std_vector_MR_SeparateA>
{
    let __ret = unsafe {crate::ffi::MR_GetSeparateVecA()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_SeparateA)}
}

