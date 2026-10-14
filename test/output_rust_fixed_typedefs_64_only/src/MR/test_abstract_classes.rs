/// Generated from class `MR::AbstractClasses::A`.
///
/// Generated from class `MR::AbstractClasses::A`. Can't be created from Rust, only references to it are used.
#[repr(transparent)]
pub struct A(crate::ffi::MR_AbstractClasses_A);

impl A
{
    /// Generated from method `MR::AbstractClasses::A::foo`.
    ///
    /// Calls `MR_AbstractClasses_A_foo()`.
    pub fn foo(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_AbstractClasses_A_foo(self as *mut Self as *mut crate::ffi::MR_AbstractClasses_A)};
        __ret
    }

}

/// Generated from class `MR::AbstractClasses::B`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::AbstractClasses::C`
///
/// Generated from class `MR::AbstractClasses::B`. Heap-allocated instances are held in `Owned<B>`.
#[repr(transparent)]
pub struct B(crate::ffi::MR_AbstractClasses_B);

unsafe impl crate::CppClass for B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_AbstractClasses_B_Destroy(ptr as *const crate::ffi::MR_AbstractClasses_B)}
}

impl B
{
    /// Generated from method `MR::AbstractClasses::B::foo`.
    ///
    /// Calls `MR_AbstractClasses_B_foo()`.
    pub fn foo(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_AbstractClasses_B_foo(self as *mut Self as *mut crate::ffi::MR_AbstractClasses_B)};
        __ret
    }

}

/// Generated from class `MR::AbstractClasses::C`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::AbstractClasses::B`
///
/// Generated from class `MR::AbstractClasses::C`. Heap-allocated instances are held in `Owned<C>`.
#[repr(transparent)]
pub struct C(crate::ffi::MR_AbstractClasses_C);

unsafe impl crate::CppClass for C
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_AbstractClasses_C_Destroy(ptr as *const crate::ffi::MR_AbstractClasses_C)}
}

impl C
{
    /// Generated from method `MR::AbstractClasses::C::foo`.
    ///
    /// Calls `MR_AbstractClasses_C_foo()`.
    pub fn foo(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_AbstractClasses_C_foo(self as *mut Self as *mut crate::ffi::MR_AbstractClasses_C)};
        __ret
    }

    /// Upcasts to the base class `MR::AbstractClasses::B`.
    ///
    /// Calls `MR_AbstractClasses_C_UpcastTo_MR_AbstractClasses_B()`.
    pub fn upcast_to_b(&self) -> &crate::mr::abstract_classes::B
    {
        unsafe {&*(crate::ffi::MR_AbstractClasses_C_UpcastTo_MR_AbstractClasses_B(self as *const Self as *const crate::ffi::MR_AbstractClasses_C) as *const crate::mr::abstract_classes::B)}
    }

    /// Upcasts to the base class `MR::AbstractClasses::B`.
    ///
    /// Calls `MR_AbstractClasses_C_MutableUpcastTo_MR_AbstractClasses_B()`.
    pub fn upcast_to_b_mut(&mut self) -> &mut crate::mr::abstract_classes::B
    {
        unsafe {&mut *(crate::ffi::MR_AbstractClasses_C_MutableUpcastTo_MR_AbstractClasses_B(self as *mut Self as *mut crate::ffi::MR_AbstractClasses_C) as *mut crate::mr::abstract_classes::B)}
    }

    /// Static downcast from the base class `MR::AbstractClasses::B`.
    ///
    /// Calls `MR_AbstractClasses_C_StaticDowncastFrom_MR_AbstractClasses_B()`. Undefined behavior if the object isn't actually a `C`.
    pub unsafe fn static_downcast_from_b(object: &crate::mr::abstract_classes::B) -> &Self
    {
        &*(crate::ffi::MR_AbstractClasses_C_StaticDowncastFrom_MR_AbstractClasses_B(object as *const crate::mr::abstract_classes::B as *const crate::ffi::MR_AbstractClasses_B) as *const Self)
    }

    /// Static downcast from the base class `MR::AbstractClasses::B`.
    ///
    /// Calls `MR_AbstractClasses_C_MutableStaticDowncastFrom_MR_AbstractClasses_B()`. Undefined behavior if the object isn't actually a `C`.
    pub unsafe fn static_downcast_from_b_mut(object: &mut crate::mr::abstract_classes::B) -> &mut Self
    {
        &mut *(crate::ffi::MR_AbstractClasses_C_MutableStaticDowncastFrom_MR_AbstractClasses_B(object as *mut crate::mr::abstract_classes::B as *mut crate::ffi::MR_AbstractClasses_B) as *mut Self)
    }

    /// Dynamic downcast from the base class `MR::AbstractClasses::B`. Returns `None` if the object isn't actually a `C`.
    ///
    /// Calls `MR_AbstractClasses_C_DynamicDowncastFrom_MR_AbstractClasses_B()`.
    pub fn dynamic_downcast_from_b(object: &crate::mr::abstract_classes::B) -> Option<&Self>
    {
        unsafe {(crate::ffi::MR_AbstractClasses_C_DynamicDowncastFrom_MR_AbstractClasses_B(object as *const crate::mr::abstract_classes::B as *const crate::ffi::MR_AbstractClasses_B) as *const Self).as_ref()}
    }

    /// Dynamic downcast from the base class `MR::AbstractClasses::B`. Returns `None` if the object isn't actually a `C`.
    ///
    /// Calls `MR_AbstractClasses_C_MutableDynamicDowncastFrom_MR_AbstractClasses_B()`.
    pub fn dynamic_downcast_from_b_mut(object: &mut crate::mr::abstract_classes::B) -> Option<&mut Self>
    {
        unsafe {(crate::ffi::MR_AbstractClasses_C_MutableDynamicDowncastFrom_MR_AbstractClasses_B(object as *mut crate::mr::abstract_classes::B as *mut crate::ffi::MR_AbstractClasses_B) as *mut Self).as_mut()}
    }

}

impl AsRef<crate::mr::abstract_classes::B> for C
{
    fn as_ref(&self) -> &crate::mr::abstract_classes::B {self.upcast_to_b()}
}

impl AsMut<crate::mr::abstract_classes::B> for C
{
    fn as_mut(&mut self) -> &mut crate::mr::abstract_classes::B {self.upcast_to_b_mut()}
}

