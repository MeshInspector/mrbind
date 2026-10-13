/// Generated from enum `MR::UsingDecls::A::E`. The constants are associated constants of this type.
pub use crate::ffi::MR_UsingDecls_A_E as A_E;

/// Test how `using` declarations import things.
/// Generated from class `MR::UsingDecls::A`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::UsingDecls::B`
///
/// Generated from class `MR::UsingDecls::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_UsingDecls_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_UsingDecls_A_Destroy(ptr as *const crate::ffi::MR_UsingDecls_A)}
}

impl A
{
    /// Generated from constructor `MR::UsingDecls::A::A`.
    ///
    /// Calls `MR_UsingDecls_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::using_decls::A) -> crate::Owned<crate::mr::using_decls::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_ConstructFromAnother(_other as *const crate::mr::using_decls::A as *const crate::ffi::MR_UsingDecls_A)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::using_decls::A)}
    }

    /// Generated from constructor `MR::UsingDecls::A::A`.
    ///
    /// Calls `MR_UsingDecls_A_Construct()`.
    pub fn construct(_1: core::ffi::c_int) -> crate::Owned<crate::mr::using_decls::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_Construct(_1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::using_decls::A)}
    }

    /// Generated from conversion operator `MR::UsingDecls::A::operator int`.
    ///
    /// Calls `MR_UsingDecls_A_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_UsingDecls_A)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::UsingDecls::A::operator=`.
    ///
    /// Calls `MR_UsingDecls_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::using_decls::A) -> &mut crate::mr::using_decls::A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_UsingDecls_A, _other as *const crate::mr::using_decls::A as *const crate::ffi::MR_UsingDecls_A)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::using_decls::A)}
    }

    /// Generated from method `MR::UsingDecls::A::operator=`.
    ///
    /// Calls `MR_UsingDecls_A_assign()`.
    pub fn assign(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_assign(self as *mut Self as *mut crate::ffi::MR_UsingDecls_A, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::UsingDecls::A::Method`.
    ///
    /// Calls `MR_UsingDecls_A_Method()`.
    pub fn method(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_Method(self as *mut Self as *mut crate::ffi::MR_UsingDecls_A)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::UsingDecls::A::StaticFunc`.
    ///
    /// Calls `MR_UsingDecls_A_StaticFunc()`.
    pub fn static_func()
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_StaticFunc()};
        crate::__check_exception();
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::UsingDecls::A` named `StaticVar`.
    ///
    /// Calls `MR_UsingDecls_A_Get_StaticVar()`.
    pub fn static_var() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_Get_StaticVar()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::UsingDecls::A` named `StaticVar`.
    ///
    /// Calls `MR_UsingDecls_A_GetMutable_StaticVar()`.
    pub fn static_var_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_GetMutable_StaticVar()};
        __ret
    }

    /// Modifies a member variable of class `MR::UsingDecls::A` named `StaticVar`.
    ///
    /// Calls `MR_UsingDecls_A_Set_StaticVar()`.
    pub fn set_static_var(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_Set_StaticVar(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::UsingDecls::A` named `Field`.
    ///
    /// Calls `MR_UsingDecls_A_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_Get_Field(self as *const Self as *const crate::ffi::MR_UsingDecls_A)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::UsingDecls::A` named `Field`.
    ///
    /// Calls `MR_UsingDecls_A_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_UsingDecls_A)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::UsingDecls::A` named `Field`.
    ///
    /// Calls `MR_UsingDecls_A_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_A_Set_Field(self as *mut Self as *mut crate::ffi::MR_UsingDecls_A, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::UsingDecls::B`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::UsingDecls::A`
///
/// Generated from class `MR::UsingDecls::B`. Heap-allocated instances are held in `Owned<B>`.
#[repr(transparent)]
pub struct B(crate::ffi::MR_UsingDecls_B);

unsafe impl crate::CppClass for B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_UsingDecls_B_Destroy(ptr as *const crate::ffi::MR_UsingDecls_B)}
}

impl B
{
    /// Generated from constructor `MR::UsingDecls::B::B`.
    ///
    /// Calls `MR_UsingDecls_B_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::using_decls::B) -> crate::Owned<crate::mr::using_decls::B>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_ConstructFromAnother(_other as *const crate::mr::using_decls::B as *const crate::ffi::MR_UsingDecls_B)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::using_decls::B)}
    }

    /// Generated from conversion operator `MR::UsingDecls::B::operator int`.
    ///
    /// Calls `MR_UsingDecls_B_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_UsingDecls_B)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::UsingDecls::B::operator=`.
    ///
    /// Calls `MR_UsingDecls_B_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::using_decls::B) -> &mut crate::mr::using_decls::B
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_UsingDecls_B, _other as *const crate::mr::using_decls::B as *const crate::ffi::MR_UsingDecls_B)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::using_decls::B)}
    }

    /// Generated from method `MR::UsingDecls::B::operator=`.
    ///
    /// Calls `MR_UsingDecls_B_assign()`.
    pub fn assign(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_assign(self as *mut Self as *mut crate::ffi::MR_UsingDecls_B, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::UsingDecls::B::Method`.
    ///
    /// Calls `MR_UsingDecls_B_Method()`.
    pub fn method(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_Method(self as *mut Self as *mut crate::ffi::MR_UsingDecls_B)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::UsingDecls::B::StaticFunc`.
    ///
    /// Calls `MR_UsingDecls_B_StaticFunc()`.
    pub fn static_func()
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_StaticFunc()};
        crate::__check_exception();
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::UsingDecls::B` named `Field`.
    ///
    /// Calls `MR_UsingDecls_B_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_Get_Field(self as *const Self as *const crate::ffi::MR_UsingDecls_B)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::UsingDecls::B` named `Field`.
    ///
    /// Calls `MR_UsingDecls_B_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_UsingDecls_B)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::UsingDecls::B` named `Field`.
    ///
    /// Calls `MR_UsingDecls_B_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_Set_Field(self as *mut Self as *mut crate::ffi::MR_UsingDecls_B, value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::UsingDecls::B` named `StaticVar`.
    ///
    /// Calls `MR_UsingDecls_B_Get_StaticVar()`.
    pub fn static_var() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_Get_StaticVar()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::UsingDecls::B` named `StaticVar`.
    ///
    /// Calls `MR_UsingDecls_B_GetMutable_StaticVar()`.
    pub fn static_var_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_GetMutable_StaticVar()};
        __ret
    }

    /// Modifies a member variable of class `MR::UsingDecls::B` named `StaticVar`.
    ///
    /// Calls `MR_UsingDecls_B_Set_StaticVar()`.
    pub fn set_static_var(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_UsingDecls_B_Set_StaticVar(value)};
        __ret
    }

    /// Upcasts to the base class `MR::UsingDecls::A`.
    ///
    /// Calls `MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::using_decls::A
    {
        unsafe {&*(crate::ffi::MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A(self as *const Self as *const crate::ffi::MR_UsingDecls_B) as *const crate::mr::using_decls::A)}
    }

    /// Upcasts to the base class `MR::UsingDecls::A`.
    ///
    /// Calls `MR_UsingDecls_B_MutableUpcastTo_MR_UsingDecls_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::using_decls::A
    {
        unsafe {&mut *(crate::ffi::MR_UsingDecls_B_MutableUpcastTo_MR_UsingDecls_A(self as *mut Self as *mut crate::ffi::MR_UsingDecls_B) as *mut crate::mr::using_decls::A)}
    }

    /// Static downcast from the base class `MR::UsingDecls::A`.
    ///
    /// Calls `MR_UsingDecls_B_StaticDowncastFrom_MR_UsingDecls_A()`. Undefined behavior if the object isn't actually a `B`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::using_decls::A) -> &Self
    {
        &*(crate::ffi::MR_UsingDecls_B_StaticDowncastFrom_MR_UsingDecls_A(object as *const crate::mr::using_decls::A as *const crate::ffi::MR_UsingDecls_A) as *const Self)
    }

    /// Static downcast from the base class `MR::UsingDecls::A`.
    ///
    /// Calls `MR_UsingDecls_B_MutableStaticDowncastFrom_MR_UsingDecls_A()`. Undefined behavior if the object isn't actually a `B`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::using_decls::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_UsingDecls_B_MutableStaticDowncastFrom_MR_UsingDecls_A(object as *mut crate::mr::using_decls::A as *mut crate::ffi::MR_UsingDecls_A) as *mut Self)
    }

}

impl AsRef<crate::mr::using_decls::A> for B
{
    fn as_ref(&self) -> &crate::mr::using_decls::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::using_decls::A> for B
{
    fn as_mut(&mut self) -> &mut crate::mr::using_decls::A {self.upcast_to_a_mut()}
}

unsafe impl crate::CppCopy for B
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

