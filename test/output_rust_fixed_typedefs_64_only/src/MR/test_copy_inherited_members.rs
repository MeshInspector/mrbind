/// Generated from class `MR::CopyInheritedMembers::A`.
/// Derived classes:
///   Virtual:
///     `MR::CopyInheritedMembers::G`
///     `MR::CopyInheritedMembers::H`
///     `MR::CopyInheritedMembers::I`
///   Non-virtual along a virtual path:
///     `MR::CopyInheritedMembers::M`
///     `MR::CopyInheritedMembers::N`
///     `MR::CopyInheritedMembers::O`
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::C`
///     `MR::CopyInheritedMembers::E`
///     `MR::CopyInheritedMembers::F`
///     `MR::CopyInheritedMembers::J`
///   Ambiguous:
///     `MR::CopyInheritedMembers::K`
///     `MR::CopyInheritedMembers::L`
///
/// Generated from class `MR::CopyInheritedMembers::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_CopyInheritedMembers_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_A_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::A>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Constructs `MR::CopyInheritedMembers::A` elementwise.
    ///
    /// Calls `MR_CopyInheritedMembers_A_ConstructFrom()`.
    pub fn construct_from(Field: core::ffi::c_int) -> crate::Owned<crate::mr::copy_inherited_members::A>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_ConstructFrom(Field)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::A::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::A) -> crate::Owned<crate::mr::copy_inherited_members::A>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_ConstructFromAnother(_other as *const crate::mr::copy_inherited_members::A as *const crate::ffi::MR_CopyInheritedMembers_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Generated from conversion operator `MR::CopyInheritedMembers::A::operator int`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_A)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::A::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::A) -> &mut crate::mr::copy_inherited_members::A
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_A, _other as *const crate::mr::copy_inherited_members::A as *const crate::ffi::MR_CopyInheritedMembers_A)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Generated from method `MR::CopyInheritedMembers::A::Method`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_Method()`.
    pub fn method(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_Method(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_A)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::A::StaticFunc`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_StaticFunc()`.
    pub fn static_func()
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_StaticFunc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::A` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_Get_StaticField()`.
    pub fn static_field() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_Get_StaticField()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::A` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_GetMutable_StaticField()`.
    pub fn static_field_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_GetMutable_StaticField()};
        __ret
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::A` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_Set_StaticField()`.
    pub fn set_static_field(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_Set_StaticField(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::A` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_Get_Field(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_A)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::A` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_A)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::A` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_A_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_A_Set_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_A, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::B`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::C`
///     `MR::CopyInheritedMembers::D`
///   Indirect: (non-virtual)
///     `MR::CopyInheritedMembers::E`
///     `MR::CopyInheritedMembers::F`
///
/// Generated from class `MR::CopyInheritedMembers::B`. Heap-allocated instances are held in `Owned<B>`.
#[repr(transparent)]
pub struct B(crate::ffi::MR_CopyInheritedMembers_B);

unsafe impl crate::CppClass for B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_B_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_B)}
}

impl B
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_B_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::B>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::B)}
    }

    /// Constructs `MR::CopyInheritedMembers::B` elementwise.
    ///
    /// Calls `MR_CopyInheritedMembers_B_ConstructFrom()`.
    pub fn construct_from(Field: core::ffi::c_int) -> crate::Owned<crate::mr::copy_inherited_members::B>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_ConstructFrom(Field)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::B)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::B::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::B) -> crate::Owned<crate::mr::copy_inherited_members::B>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_ConstructFromAnother(_other as *const crate::mr::copy_inherited_members::B as *const crate::ffi::MR_CopyInheritedMembers_B)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::B)}
    }

    /// Generated from conversion operator `MR::CopyInheritedMembers::B::operator int`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_B)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::B::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::B) -> &mut crate::mr::copy_inherited_members::B
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_B, _other as *const crate::mr::copy_inherited_members::B as *const crate::ffi::MR_CopyInheritedMembers_B)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::B)}
    }

    /// Generated from method `MR::CopyInheritedMembers::B::Method`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_Method()`.
    pub fn method(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_Method(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_B)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::B::StaticFunc`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_StaticFunc()`.
    pub fn static_func()
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_StaticFunc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::B` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_Get_StaticField()`.
    pub fn static_field() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_Get_StaticField()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::B` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_GetMutable_StaticField()`.
    pub fn static_field_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_GetMutable_StaticField()};
        __ret
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::B` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_Set_StaticField()`.
    pub fn set_static_field(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_Set_StaticField(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::B` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_Get_Field(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_B)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::B` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_B)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::B` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_B_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_B_Set_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_B, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for B
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::C`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::A`
///     `MR::CopyInheritedMembers::B`
///
/// Generated from class `MR::CopyInheritedMembers::C`. Heap-allocated instances are held in `Owned<C>`.
#[repr(transparent)]
pub struct C(crate::ffi::MR_CopyInheritedMembers_C);

unsafe impl crate::CppClass for C
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_C_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_C)}
}

impl C
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_C_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::C>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_C_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::C)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::C::C`.
    ///
    /// Calls `MR_CopyInheritedMembers_C_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::C) -> crate::Owned<crate::mr::copy_inherited_members::C>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_C_ConstructFromAnother(_other as *const crate::mr::copy_inherited_members::C as *const crate::ffi::MR_CopyInheritedMembers_C)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::C)}
    }

    /// Generated from method `MR::CopyInheritedMembers::C::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_C_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::C) -> &mut crate::mr::copy_inherited_members::C
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_C_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_C, _other as *const crate::mr::copy_inherited_members::C as *const crate::ffi::MR_CopyInheritedMembers_C)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::C)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::copy_inherited_members::A
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_C) as *const crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_A(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_C) as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_C_StaticDowncastFrom_MR_CopyInheritedMembers_A()`. Undefined behavior if the object isn't actually a `C`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::copy_inherited_members::A) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_C_StaticDowncastFrom_MR_CopyInheritedMembers_A(object as *const crate::mr::copy_inherited_members::A as *const crate::ffi::MR_CopyInheritedMembers_A) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_C_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A()`. Undefined behavior if the object isn't actually a `C`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::copy_inherited_members::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_C_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A(object as *mut crate::mr::copy_inherited_members::A as *mut crate::ffi::MR_CopyInheritedMembers_A) as *mut Self)
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B()`.
    pub fn upcast_to_b(&self) -> &crate::mr::copy_inherited_members::B
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_C) as *const crate::mr::copy_inherited_members::B)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_B()`.
    pub fn upcast_to_b_mut(&mut self) -> &mut crate::mr::copy_inherited_members::B
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_B(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_C) as *mut crate::mr::copy_inherited_members::B)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_C_StaticDowncastFrom_MR_CopyInheritedMembers_B()`. Undefined behavior if the object isn't actually a `C`.
    pub unsafe fn static_downcast_from_b(object: &crate::mr::copy_inherited_members::B) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_C_StaticDowncastFrom_MR_CopyInheritedMembers_B(object as *const crate::mr::copy_inherited_members::B as *const crate::ffi::MR_CopyInheritedMembers_B) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_C_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B()`. Undefined behavior if the object isn't actually a `C`.
    pub unsafe fn static_downcast_from_b_mut(object: &mut crate::mr::copy_inherited_members::B) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_C_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B(object as *mut crate::mr::copy_inherited_members::B as *mut crate::ffi::MR_CopyInheritedMembers_B) as *mut Self)
    }

}

impl AsRef<crate::mr::copy_inherited_members::A> for C
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::copy_inherited_members::A> for C
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A {self.upcast_to_a_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::B> for C
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::B {self.upcast_to_b()}
}

impl AsMut<crate::mr::copy_inherited_members::B> for C
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::B {self.upcast_to_b_mut()}
}

unsafe impl crate::CppCopy for C
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::D`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::B`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::E`
///     `MR::CopyInheritedMembers::F`
///
/// Generated from class `MR::CopyInheritedMembers::D`. Heap-allocated instances are held in `Owned<D>`.
#[repr(transparent)]
pub struct D(crate::ffi::MR_CopyInheritedMembers_D);

unsafe impl crate::CppClass for D
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_D_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_D)}
}

impl D
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_D_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::D>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::D)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::D::D`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::D) -> crate::Owned<crate::mr::copy_inherited_members::D>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_ConstructFromAnother(_other as *const crate::mr::copy_inherited_members::D as *const crate::ffi::MR_CopyInheritedMembers_D)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::D)}
    }

    /// Generated from conversion operator `MR::CopyInheritedMembers::D::operator int`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_D)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::D::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::D) -> &mut crate::mr::copy_inherited_members::D
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_D, _other as *const crate::mr::copy_inherited_members::D as *const crate::ffi::MR_CopyInheritedMembers_D)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::D)}
    }

    /// Generated from method `MR::CopyInheritedMembers::D::Method`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_Method()`.
    pub fn method(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_Method(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_D)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::D::StaticFunc`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_StaticFunc()`.
    pub fn static_func()
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_StaticFunc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::D` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_Get_StaticField()`.
    pub fn static_field() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_Get_StaticField()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::D` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_GetMutable_StaticField()`.
    pub fn static_field_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_GetMutable_StaticField()};
        __ret
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::D` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_Set_StaticField()`.
    pub fn set_static_field(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_Set_StaticField(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::D` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_Get_Field(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_D)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::D` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_D)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::D` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_D_Set_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_D, value)};
        __ret
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B()`.
    pub fn upcast_to_b(&self) -> &crate::mr::copy_inherited_members::B
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_D) as *const crate::mr::copy_inherited_members::B)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_MutableUpcastTo_MR_CopyInheritedMembers_B()`.
    pub fn upcast_to_b_mut(&mut self) -> &mut crate::mr::copy_inherited_members::B
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_D_MutableUpcastTo_MR_CopyInheritedMembers_B(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_D) as *mut crate::mr::copy_inherited_members::B)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_StaticDowncastFrom_MR_CopyInheritedMembers_B()`. Undefined behavior if the object isn't actually a `D`.
    pub unsafe fn static_downcast_from_b(object: &crate::mr::copy_inherited_members::B) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_D_StaticDowncastFrom_MR_CopyInheritedMembers_B(object as *const crate::mr::copy_inherited_members::B as *const crate::ffi::MR_CopyInheritedMembers_B) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_D_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B()`. Undefined behavior if the object isn't actually a `D`.
    pub unsafe fn static_downcast_from_b_mut(object: &mut crate::mr::copy_inherited_members::B) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_D_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B(object as *mut crate::mr::copy_inherited_members::B as *mut crate::ffi::MR_CopyInheritedMembers_B) as *mut Self)
    }

}

impl AsRef<crate::mr::copy_inherited_members::B> for D
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::B {self.upcast_to_b()}
}

impl AsMut<crate::mr::copy_inherited_members::B> for D
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::B {self.upcast_to_b_mut()}
}

unsafe impl crate::CppCopy for D
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::E`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::A`
///     `MR::CopyInheritedMembers::D`
///   Indirect: (non-virtual)
///     `MR::CopyInheritedMembers::B`
///
/// Generated from class `MR::CopyInheritedMembers::E`. Heap-allocated instances are held in `Owned<E>`.
#[repr(transparent)]
pub struct E(crate::ffi::MR_CopyInheritedMembers_E);

unsafe impl crate::CppClass for E
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_E_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_E)}
}

impl E
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_E_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::E>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_E_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::E)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::E::E`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::E) -> crate::Owned<crate::mr::copy_inherited_members::E>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_E_ConstructFromAnother(_other as *const crate::mr::copy_inherited_members::E as *const crate::ffi::MR_CopyInheritedMembers_E)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::E)}
    }

    /// Generated from method `MR::CopyInheritedMembers::E::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::E) -> &mut crate::mr::copy_inherited_members::E
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_E_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_E, _other as *const crate::mr::copy_inherited_members::E as *const crate::ffi::MR_CopyInheritedMembers_E)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::E)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::copy_inherited_members::A
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_E) as *const crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_A(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_E) as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_StaticDowncastFrom_MR_CopyInheritedMembers_A()`. Undefined behavior if the object isn't actually a `E`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::copy_inherited_members::A) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_E_StaticDowncastFrom_MR_CopyInheritedMembers_A(object as *const crate::mr::copy_inherited_members::A as *const crate::ffi::MR_CopyInheritedMembers_A) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A()`. Undefined behavior if the object isn't actually a `E`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::copy_inherited_members::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A(object as *mut crate::mr::copy_inherited_members::A as *mut crate::ffi::MR_CopyInheritedMembers_A) as *mut Self)
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B()`.
    pub fn upcast_to_b(&self) -> &crate::mr::copy_inherited_members::B
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_E) as *const crate::mr::copy_inherited_members::B)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_B()`.
    pub fn upcast_to_b_mut(&mut self) -> &mut crate::mr::copy_inherited_members::B
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_B(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_E) as *mut crate::mr::copy_inherited_members::B)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_StaticDowncastFrom_MR_CopyInheritedMembers_B()`. Undefined behavior if the object isn't actually a `E`.
    pub unsafe fn static_downcast_from_b(object: &crate::mr::copy_inherited_members::B) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_E_StaticDowncastFrom_MR_CopyInheritedMembers_B(object as *const crate::mr::copy_inherited_members::B as *const crate::ffi::MR_CopyInheritedMembers_B) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B()`. Undefined behavior if the object isn't actually a `E`.
    pub unsafe fn static_downcast_from_b_mut(object: &mut crate::mr::copy_inherited_members::B) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B(object as *mut crate::mr::copy_inherited_members::B as *mut crate::ffi::MR_CopyInheritedMembers_B) as *mut Self)
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::D`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D()`.
    pub fn upcast_to_d(&self) -> &crate::mr::copy_inherited_members::D
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_E) as *const crate::mr::copy_inherited_members::D)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::D`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_D()`.
    pub fn upcast_to_d_mut(&mut self) -> &mut crate::mr::copy_inherited_members::D
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_D(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_E) as *mut crate::mr::copy_inherited_members::D)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::D`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_StaticDowncastFrom_MR_CopyInheritedMembers_D()`. Undefined behavior if the object isn't actually a `E`.
    pub unsafe fn static_downcast_from_d(object: &crate::mr::copy_inherited_members::D) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_E_StaticDowncastFrom_MR_CopyInheritedMembers_D(object as *const crate::mr::copy_inherited_members::D as *const crate::ffi::MR_CopyInheritedMembers_D) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::D`.
    ///
    /// Calls `MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_D()`. Undefined behavior if the object isn't actually a `E`.
    pub unsafe fn static_downcast_from_d_mut(object: &mut crate::mr::copy_inherited_members::D) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_D(object as *mut crate::mr::copy_inherited_members::D as *mut crate::ffi::MR_CopyInheritedMembers_D) as *mut Self)
    }

}

impl AsRef<crate::mr::copy_inherited_members::A> for E
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::copy_inherited_members::A> for E
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A {self.upcast_to_a_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::B> for E
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::B {self.upcast_to_b()}
}

impl AsMut<crate::mr::copy_inherited_members::B> for E
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::B {self.upcast_to_b_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::D> for E
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::D {self.upcast_to_d()}
}

impl AsMut<crate::mr::copy_inherited_members::D> for E
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::D {self.upcast_to_d_mut()}
}

unsafe impl crate::CppCopy for E
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::F`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::D`
///     `MR::CopyInheritedMembers::A`
///   Indirect: (non-virtual)
///     `MR::CopyInheritedMembers::B`
///
/// Generated from class `MR::CopyInheritedMembers::F`. Heap-allocated instances are held in `Owned<F>`.
#[repr(transparent)]
pub struct F(crate::ffi::MR_CopyInheritedMembers_F);

unsafe impl crate::CppClass for F
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_F_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_F)}
}

impl F
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_F_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::F>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_F_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::F)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::F::F`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::F) -> crate::Owned<crate::mr::copy_inherited_members::F>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_F_ConstructFromAnother(_other as *const crate::mr::copy_inherited_members::F as *const crate::ffi::MR_CopyInheritedMembers_F)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::F)}
    }

    /// Generated from method `MR::CopyInheritedMembers::F::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::F) -> &mut crate::mr::copy_inherited_members::F
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_F_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_F, _other as *const crate::mr::copy_inherited_members::F as *const crate::ffi::MR_CopyInheritedMembers_F)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::F)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B()`.
    pub fn upcast_to_b(&self) -> &crate::mr::copy_inherited_members::B
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_F) as *const crate::mr::copy_inherited_members::B)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_B()`.
    pub fn upcast_to_b_mut(&mut self) -> &mut crate::mr::copy_inherited_members::B
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_B(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_F) as *mut crate::mr::copy_inherited_members::B)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_StaticDowncastFrom_MR_CopyInheritedMembers_B()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_b(object: &crate::mr::copy_inherited_members::B) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_F_StaticDowncastFrom_MR_CopyInheritedMembers_B(object as *const crate::mr::copy_inherited_members::B as *const crate::ffi::MR_CopyInheritedMembers_B) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::B`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_b_mut(object: &mut crate::mr::copy_inherited_members::B) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B(object as *mut crate::mr::copy_inherited_members::B as *mut crate::ffi::MR_CopyInheritedMembers_B) as *mut Self)
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::D`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D()`.
    pub fn upcast_to_d(&self) -> &crate::mr::copy_inherited_members::D
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_F) as *const crate::mr::copy_inherited_members::D)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::D`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_D()`.
    pub fn upcast_to_d_mut(&mut self) -> &mut crate::mr::copy_inherited_members::D
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_D(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_F) as *mut crate::mr::copy_inherited_members::D)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::D`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_StaticDowncastFrom_MR_CopyInheritedMembers_D()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_d(object: &crate::mr::copy_inherited_members::D) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_F_StaticDowncastFrom_MR_CopyInheritedMembers_D(object as *const crate::mr::copy_inherited_members::D as *const crate::ffi::MR_CopyInheritedMembers_D) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::D`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_D()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_d_mut(object: &mut crate::mr::copy_inherited_members::D) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_D(object as *mut crate::mr::copy_inherited_members::D as *mut crate::ffi::MR_CopyInheritedMembers_D) as *mut Self)
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::copy_inherited_members::A
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_F) as *const crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_A(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_F) as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_StaticDowncastFrom_MR_CopyInheritedMembers_A()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::copy_inherited_members::A) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_F_StaticDowncastFrom_MR_CopyInheritedMembers_A(object as *const crate::mr::copy_inherited_members::A as *const crate::ffi::MR_CopyInheritedMembers_A) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A()`. Undefined behavior if the object isn't actually a `F`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::copy_inherited_members::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A(object as *mut crate::mr::copy_inherited_members::A as *mut crate::ffi::MR_CopyInheritedMembers_A) as *mut Self)
    }

}

impl AsRef<crate::mr::copy_inherited_members::B> for F
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::B {self.upcast_to_b()}
}

impl AsMut<crate::mr::copy_inherited_members::B> for F
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::B {self.upcast_to_b_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::D> for F
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::D {self.upcast_to_d()}
}

impl AsMut<crate::mr::copy_inherited_members::D> for F
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::D {self.upcast_to_d_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::A> for F
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::copy_inherited_members::A> for F
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A {self.upcast_to_a_mut()}
}

unsafe impl crate::CppCopy for F
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::G`.
/// Base classes:
///   Virtual:
///     `MR::CopyInheritedMembers::A`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::H`
///     `MR::CopyInheritedMembers::I`
///     `MR::CopyInheritedMembers::K`
///     `MR::CopyInheritedMembers::L`
///
/// Generated from class `MR::CopyInheritedMembers::G`. Heap-allocated instances are held in `Owned<G>`.
#[repr(transparent)]
pub struct G(crate::ffi::MR_CopyInheritedMembers_G);

unsafe impl crate::CppClass for G
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_G_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_G)}
}

impl G
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_G_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::G>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::G)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::G::G`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::G) -> crate::Owned<crate::mr::copy_inherited_members::G>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::G as *mut crate::ffi::MR_CopyInheritedMembers_G)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::G)}
    }

    /// Generated from conversion operator `MR::CopyInheritedMembers::G::operator int`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_G)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::G::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::G) -> &mut crate::mr::copy_inherited_members::G
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_G, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::G as *mut crate::ffi::MR_CopyInheritedMembers_G)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::G)}
    }

    /// Generated from method `MR::CopyInheritedMembers::G::Method`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_Method()`.
    pub fn method(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_Method(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_G)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::G::StaticFunc`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_StaticFunc()`.
    pub fn static_func()
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_StaticFunc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::G` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_Get_StaticField()`.
    pub fn static_field() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_Get_StaticField()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::G` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_GetMutable_StaticField()`.
    pub fn static_field_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_GetMutable_StaticField()};
        __ret
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::G` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_Set_StaticField()`.
    pub fn set_static_field(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_Set_StaticField(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::G` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_Get_Field(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_G)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::G` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_G)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::G` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_G_Set_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_G, value)};
        __ret
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::copy_inherited_members::A
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_G) as *const crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_G_MutableUpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_G_MutableUpcastTo_MR_CopyInheritedMembers_A(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_G) as *mut crate::mr::copy_inherited_members::A)}
    }

}

impl AsRef<crate::mr::copy_inherited_members::A> for G
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::copy_inherited_members::A> for G
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A {self.upcast_to_a_mut()}
}

unsafe impl crate::CppCopy for G
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::H`.
/// Base classes:
///   Virtual:
///     `MR::CopyInheritedMembers::A`
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::G`
///
/// Generated from class `MR::CopyInheritedMembers::H`. Heap-allocated instances are held in `Owned<H>`.
#[repr(transparent)]
pub struct H(crate::ffi::MR_CopyInheritedMembers_H);

unsafe impl crate::CppClass for H
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_H_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_H)}
}

impl H
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_H_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::H>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::H)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::H::H`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::H) -> crate::Owned<crate::mr::copy_inherited_members::H>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::H as *mut crate::ffi::MR_CopyInheritedMembers_H)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::H)}
    }

    /// Generated from conversion operator `MR::CopyInheritedMembers::H::operator int`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_H)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::H::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::H) -> &mut crate::mr::copy_inherited_members::H
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_H, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::H as *mut crate::ffi::MR_CopyInheritedMembers_H)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::H)}
    }

    /// Generated from method `MR::CopyInheritedMembers::H::Method`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_Method()`.
    pub fn method(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_Method(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_H)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::H::StaticFunc`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_StaticFunc()`.
    pub fn static_func()
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_StaticFunc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::H` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_Get_StaticField()`.
    pub fn static_field() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_Get_StaticField()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::H` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_GetMutable_StaticField()`.
    pub fn static_field_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_GetMutable_StaticField()};
        __ret
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::H` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_Set_StaticField()`.
    pub fn set_static_field(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_Set_StaticField(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::H` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_Get_Field(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_H)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::H` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_H)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::H` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_H_Set_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_H, value)};
        __ret
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::copy_inherited_members::A
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_H) as *const crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_A(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_H) as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::G`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G()`.
    pub fn upcast_to_g(&self) -> &crate::mr::copy_inherited_members::G
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_H) as *const crate::mr::copy_inherited_members::G)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::G`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_G()`.
    pub fn upcast_to_g_mut(&mut self) -> &mut crate::mr::copy_inherited_members::G
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_G(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_H) as *mut crate::mr::copy_inherited_members::G)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::G`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_StaticDowncastFrom_MR_CopyInheritedMembers_G()`. Undefined behavior if the object isn't actually a `H`.
    pub unsafe fn static_downcast_from_g(object: &crate::mr::copy_inherited_members::G) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_H_StaticDowncastFrom_MR_CopyInheritedMembers_G(object as *const crate::mr::copy_inherited_members::G as *const crate::ffi::MR_CopyInheritedMembers_G) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::G`.
    ///
    /// Calls `MR_CopyInheritedMembers_H_MutableStaticDowncastFrom_MR_CopyInheritedMembers_G()`. Undefined behavior if the object isn't actually a `H`.
    pub unsafe fn static_downcast_from_g_mut(object: &mut crate::mr::copy_inherited_members::G) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_H_MutableStaticDowncastFrom_MR_CopyInheritedMembers_G(object as *mut crate::mr::copy_inherited_members::G as *mut crate::ffi::MR_CopyInheritedMembers_G) as *mut Self)
    }

}

impl AsRef<crate::mr::copy_inherited_members::A> for H
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::copy_inherited_members::A> for H
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A {self.upcast_to_a_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::G> for H
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::G {self.upcast_to_g()}
}

impl AsMut<crate::mr::copy_inherited_members::G> for H
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::G {self.upcast_to_g_mut()}
}

unsafe impl crate::CppCopy for H
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::I`.
/// Base classes:
///   Virtual:
///     `MR::CopyInheritedMembers::A`
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::G`
///
/// Generated from class `MR::CopyInheritedMembers::I`. Heap-allocated instances are held in `Owned<I>`.
#[repr(transparent)]
pub struct I(crate::ffi::MR_CopyInheritedMembers_I);

unsafe impl crate::CppClass for I
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_I_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_I)}
}

impl I
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_I_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::I>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::I)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::I::I`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::I) -> crate::Owned<crate::mr::copy_inherited_members::I>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::I as *mut crate::ffi::MR_CopyInheritedMembers_I)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::I)}
    }

    /// Generated from conversion operator `MR::CopyInheritedMembers::I::operator int`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_I)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::I::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::I) -> &mut crate::mr::copy_inherited_members::I
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_I, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::I as *mut crate::ffi::MR_CopyInheritedMembers_I)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::I)}
    }

    /// Generated from method `MR::CopyInheritedMembers::I::Method`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_Method()`.
    pub fn method(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_Method(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_I)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::I::StaticFunc`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_StaticFunc()`.
    pub fn static_func()
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_StaticFunc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::I` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_Get_StaticField()`.
    pub fn static_field() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_Get_StaticField()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::I` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_GetMutable_StaticField()`.
    pub fn static_field_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_GetMutable_StaticField()};
        __ret
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::I` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_Set_StaticField()`.
    pub fn set_static_field(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_Set_StaticField(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::I` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_Get_Field(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_I)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::I` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_I)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::I` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_I_Set_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_I, value)};
        __ret
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::copy_inherited_members::A
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_I) as *const crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_A(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_I) as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::G`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G()`.
    pub fn upcast_to_g(&self) -> &crate::mr::copy_inherited_members::G
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_I) as *const crate::mr::copy_inherited_members::G)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::G`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_G()`.
    pub fn upcast_to_g_mut(&mut self) -> &mut crate::mr::copy_inherited_members::G
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_G(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_I) as *mut crate::mr::copy_inherited_members::G)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::G`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_StaticDowncastFrom_MR_CopyInheritedMembers_G()`. Undefined behavior if the object isn't actually a `I`.
    pub unsafe fn static_downcast_from_g(object: &crate::mr::copy_inherited_members::G) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_I_StaticDowncastFrom_MR_CopyInheritedMembers_G(object as *const crate::mr::copy_inherited_members::G as *const crate::ffi::MR_CopyInheritedMembers_G) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::G`.
    ///
    /// Calls `MR_CopyInheritedMembers_I_MutableStaticDowncastFrom_MR_CopyInheritedMembers_G()`. Undefined behavior if the object isn't actually a `I`.
    pub unsafe fn static_downcast_from_g_mut(object: &mut crate::mr::copy_inherited_members::G) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_I_MutableStaticDowncastFrom_MR_CopyInheritedMembers_G(object as *mut crate::mr::copy_inherited_members::G as *mut crate::ffi::MR_CopyInheritedMembers_G) as *mut Self)
    }

}

impl AsRef<crate::mr::copy_inherited_members::A> for I
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::copy_inherited_members::A> for I
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A {self.upcast_to_a_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::G> for I
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::G {self.upcast_to_g()}
}

impl AsMut<crate::mr::copy_inherited_members::G> for I
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::G {self.upcast_to_g_mut()}
}

unsafe impl crate::CppCopy for I
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::J`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::A`
/// Derived classes:
///   Virtual:
///     `MR::CopyInheritedMembers::M`
///     `MR::CopyInheritedMembers::N`
///     `MR::CopyInheritedMembers::O`
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::K`
///     `MR::CopyInheritedMembers::L`
///
/// Generated from class `MR::CopyInheritedMembers::J`. Heap-allocated instances are held in `Owned<J>`.
#[repr(transparent)]
pub struct J(crate::ffi::MR_CopyInheritedMembers_J);

unsafe impl crate::CppClass for J
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_J_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_J)}
}

impl J
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_J_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::J>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::J)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::J::J`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::J) -> crate::Owned<crate::mr::copy_inherited_members::J>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_ConstructFromAnother(_other as *const crate::mr::copy_inherited_members::J as *const crate::ffi::MR_CopyInheritedMembers_J)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::J)}
    }

    /// Generated from conversion operator `MR::CopyInheritedMembers::J::operator int`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_J)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::J::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::J) -> &mut crate::mr::copy_inherited_members::J
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_J, _other as *const crate::mr::copy_inherited_members::J as *const crate::ffi::MR_CopyInheritedMembers_J)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::J)}
    }

    /// Generated from method `MR::CopyInheritedMembers::J::Method`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_Method()`.
    pub fn method(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_Method(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_J)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::J::StaticFunc`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_StaticFunc()`.
    pub fn static_func()
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_StaticFunc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::J` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_Get_StaticField()`.
    pub fn static_field() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_Get_StaticField()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::J` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_GetMutable_StaticField()`.
    pub fn static_field_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_GetMutable_StaticField()};
        __ret
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::J` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_Set_StaticField()`.
    pub fn set_static_field(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_Set_StaticField(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::J` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_Get_Field(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_J)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::J` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_J)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::J` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_J_Set_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_J, value)};
        __ret
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::copy_inherited_members::A
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_J) as *const crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_MutableUpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_J_MutableUpcastTo_MR_CopyInheritedMembers_A(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_J) as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_StaticDowncastFrom_MR_CopyInheritedMembers_A()`. Undefined behavior if the object isn't actually a `J`.
    pub unsafe fn static_downcast_from_a(object: &crate::mr::copy_inherited_members::A) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_J_StaticDowncastFrom_MR_CopyInheritedMembers_A(object as *const crate::mr::copy_inherited_members::A as *const crate::ffi::MR_CopyInheritedMembers_A) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_J_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A()`. Undefined behavior if the object isn't actually a `J`.
    pub unsafe fn static_downcast_from_a_mut(object: &mut crate::mr::copy_inherited_members::A) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_J_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A(object as *mut crate::mr::copy_inherited_members::A as *mut crate::ffi::MR_CopyInheritedMembers_A) as *mut Self)
    }

}

impl AsRef<crate::mr::copy_inherited_members::A> for J
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::copy_inherited_members::A> for J
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A {self.upcast_to_a_mut()}
}

unsafe impl crate::CppCopy for J
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::K`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::G`
///     `MR::CopyInheritedMembers::J`
///   Ambiguous:
///     `MR::CopyInheritedMembers::A`
///
/// Generated from class `MR::CopyInheritedMembers::K`. Heap-allocated instances are held in `Owned<K>`.
#[repr(transparent)]
pub struct K(crate::ffi::MR_CopyInheritedMembers_K);

unsafe impl crate::CppClass for K
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_K_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_K)}
}

impl K
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_K_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::K>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_K_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::K)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::K::K`.
    ///
    /// Calls `MR_CopyInheritedMembers_K_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::K) -> crate::Owned<crate::mr::copy_inherited_members::K>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_K_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::K as *mut crate::ffi::MR_CopyInheritedMembers_K)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::K)}
    }

    /// Generated from method `MR::CopyInheritedMembers::K::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_K_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::K) -> &mut crate::mr::copy_inherited_members::K
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_K_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_K, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::K as *mut crate::ffi::MR_CopyInheritedMembers_K)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::K)}
    }

}

unsafe impl crate::CppCopy for K
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::L`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::J`
///     `MR::CopyInheritedMembers::G`
///   Ambiguous:
///     `MR::CopyInheritedMembers::A`
///
/// Generated from class `MR::CopyInheritedMembers::L`. Heap-allocated instances are held in `Owned<L>`.
#[repr(transparent)]
pub struct L(crate::ffi::MR_CopyInheritedMembers_L);

unsafe impl crate::CppClass for L
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_L_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_L)}
}

impl L
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_L_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::L>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_L_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::L)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::L::L`.
    ///
    /// Calls `MR_CopyInheritedMembers_L_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::L) -> crate::Owned<crate::mr::copy_inherited_members::L>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_L_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::L as *mut crate::ffi::MR_CopyInheritedMembers_L)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::L)}
    }

    /// Generated from method `MR::CopyInheritedMembers::L::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_L_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::L) -> &mut crate::mr::copy_inherited_members::L
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_L_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_L, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::L as *mut crate::ffi::MR_CopyInheritedMembers_L)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::L)}
    }

}

unsafe impl crate::CppCopy for L
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Now test that a non-virtual base of a virtual base gets treated as a virtual.
/// Generated from class `MR::CopyInheritedMembers::M`.
/// Base classes:
///   Virtual:
///     `MR::CopyInheritedMembers::J`
///   Non-virtual along a virtual path:
///     `MR::CopyInheritedMembers::A`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::N`
///   Indirect: (non-virtual)
///     `MR::CopyInheritedMembers::O`
///
/// Generated from class `MR::CopyInheritedMembers::M`. Heap-allocated instances are held in `Owned<M>`.
#[repr(transparent)]
pub struct M(crate::ffi::MR_CopyInheritedMembers_M);

unsafe impl crate::CppClass for M
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_M_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_M)}
}

impl M
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_M_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::M>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::M)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::M::M`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::M) -> crate::Owned<crate::mr::copy_inherited_members::M>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::M as *mut crate::ffi::MR_CopyInheritedMembers_M)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::M)}
    }

    /// Generated from conversion operator `MR::CopyInheritedMembers::M::operator int`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_M)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::M::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::M) -> &mut crate::mr::copy_inherited_members::M
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_M, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::M as *mut crate::ffi::MR_CopyInheritedMembers_M)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::M)}
    }

    /// Generated from method `MR::CopyInheritedMembers::M::Method`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_Method()`.
    pub fn method(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_Method(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_M)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::M::StaticFunc`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_StaticFunc()`.
    pub fn static_func()
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_StaticFunc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::M` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_Get_StaticField()`.
    pub fn static_field() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_Get_StaticField()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::M` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_GetMutable_StaticField()`.
    pub fn static_field_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_GetMutable_StaticField()};
        __ret
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::M` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_Set_StaticField()`.
    pub fn set_static_field(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_Set_StaticField(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::M` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_Get_Field(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_M)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::M` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_M)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::M` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_M_Set_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_M, value)};
        __ret
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::copy_inherited_members::A
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_A(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_M) as *const crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_MutableUpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_M_MutableUpcastTo_MR_CopyInheritedMembers_A(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_M) as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::J`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_J()`.
    pub fn upcast_to_j(&self) -> &crate::mr::copy_inherited_members::J
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_J(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_M) as *const crate::mr::copy_inherited_members::J)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::J`.
    ///
    /// Calls `MR_CopyInheritedMembers_M_MutableUpcastTo_MR_CopyInheritedMembers_J()`.
    pub fn upcast_to_j_mut(&mut self) -> &mut crate::mr::copy_inherited_members::J
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_M_MutableUpcastTo_MR_CopyInheritedMembers_J(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_M) as *mut crate::mr::copy_inherited_members::J)}
    }

}

impl AsRef<crate::mr::copy_inherited_members::A> for M
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::copy_inherited_members::A> for M
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A {self.upcast_to_a_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::J> for M
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::J {self.upcast_to_j()}
}

impl AsMut<crate::mr::copy_inherited_members::J> for M
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::J {self.upcast_to_j_mut()}
}

unsafe impl crate::CppCopy for M
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::N`.
/// Base classes:
///   Virtual:
///     `MR::CopyInheritedMembers::J`
///   Non-virtual along a virtual path:
///     `MR::CopyInheritedMembers::A`
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::M`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::O`
///
/// Generated from class `MR::CopyInheritedMembers::N`. Heap-allocated instances are held in `Owned<N>`.
#[repr(transparent)]
pub struct N(crate::ffi::MR_CopyInheritedMembers_N);

unsafe impl crate::CppClass for N
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_N_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_N)}
}

impl N
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_N_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::N>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::N)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::N::N`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::N) -> crate::Owned<crate::mr::copy_inherited_members::N>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::N as *mut crate::ffi::MR_CopyInheritedMembers_N)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::N)}
    }

    /// Generated from conversion operator `MR::CopyInheritedMembers::N::operator int`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_N)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::N::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::N) -> &mut crate::mr::copy_inherited_members::N
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_N, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::N as *mut crate::ffi::MR_CopyInheritedMembers_N)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::N)}
    }

    /// Generated from method `MR::CopyInheritedMembers::N::Method`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_Method()`.
    pub fn method(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_Method(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_N)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::N::StaticFunc`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_StaticFunc()`.
    pub fn static_func()
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_StaticFunc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::N` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_Get_StaticField()`.
    pub fn static_field() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_Get_StaticField()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::N` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_GetMutable_StaticField()`.
    pub fn static_field_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_GetMutable_StaticField()};
        __ret
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::N` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_Set_StaticField()`.
    pub fn set_static_field(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_Set_StaticField(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::N` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_Get_Field(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_N)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::N` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_N)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::N` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_N_Set_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_N, value)};
        __ret
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::copy_inherited_members::A
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_A(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_N) as *const crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_A(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_N) as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::J`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_J()`.
    pub fn upcast_to_j(&self) -> &crate::mr::copy_inherited_members::J
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_J(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_N) as *const crate::mr::copy_inherited_members::J)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::J`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_J()`.
    pub fn upcast_to_j_mut(&mut self) -> &mut crate::mr::copy_inherited_members::J
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_J(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_N) as *mut crate::mr::copy_inherited_members::J)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::M`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_M()`.
    pub fn upcast_to_m(&self) -> &crate::mr::copy_inherited_members::M
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_M(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_N) as *const crate::mr::copy_inherited_members::M)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::M`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_M()`.
    pub fn upcast_to_m_mut(&mut self) -> &mut crate::mr::copy_inherited_members::M
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_M(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_N) as *mut crate::mr::copy_inherited_members::M)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::M`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_StaticDowncastFrom_MR_CopyInheritedMembers_M()`. Undefined behavior if the object isn't actually a `N`.
    pub unsafe fn static_downcast_from_m(object: &crate::mr::copy_inherited_members::M) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_N_StaticDowncastFrom_MR_CopyInheritedMembers_M(object as *const crate::mr::copy_inherited_members::M as *const crate::ffi::MR_CopyInheritedMembers_M) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::M`.
    ///
    /// Calls `MR_CopyInheritedMembers_N_MutableStaticDowncastFrom_MR_CopyInheritedMembers_M()`. Undefined behavior if the object isn't actually a `N`.
    pub unsafe fn static_downcast_from_m_mut(object: &mut crate::mr::copy_inherited_members::M) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_N_MutableStaticDowncastFrom_MR_CopyInheritedMembers_M(object as *mut crate::mr::copy_inherited_members::M as *mut crate::ffi::MR_CopyInheritedMembers_M) as *mut Self)
    }

}

impl AsRef<crate::mr::copy_inherited_members::A> for N
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::copy_inherited_members::A> for N
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A {self.upcast_to_a_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::J> for N
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::J {self.upcast_to_j()}
}

impl AsMut<crate::mr::copy_inherited_members::J> for N
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::J {self.upcast_to_j_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::M> for N
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::M {self.upcast_to_m()}
}

impl AsMut<crate::mr::copy_inherited_members::M> for N
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::M {self.upcast_to_m_mut()}
}

unsafe impl crate::CppCopy for N
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CopyInheritedMembers::O`.
/// Base classes:
///   Virtual:
///     `MR::CopyInheritedMembers::J`
///   Non-virtual along a virtual path:
///     `MR::CopyInheritedMembers::A`
///   Direct: (non-virtual)
///     `MR::CopyInheritedMembers::N`
///   Indirect: (non-virtual)
///     `MR::CopyInheritedMembers::M`
///
/// Generated from class `MR::CopyInheritedMembers::O`. Heap-allocated instances are held in `Owned<O>`.
#[repr(transparent)]
pub struct O(crate::ffi::MR_CopyInheritedMembers_O);

unsafe impl crate::CppClass for O
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CopyInheritedMembers_O_Destroy(ptr as *const crate::ffi::MR_CopyInheritedMembers_O)}
}

impl O
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CopyInheritedMembers_O_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::copy_inherited_members::O>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::O)}
    }

    /// Generated from constructor `MR::CopyInheritedMembers::O::O`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::copy_inherited_members::O) -> crate::Owned<crate::mr::copy_inherited_members::O>
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::O as *mut crate::ffi::MR_CopyInheritedMembers_O)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::copy_inherited_members::O)}
    }

    /// Generated from conversion operator `MR::CopyInheritedMembers::O::operator int`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_ConvertTo_int()`.
    pub fn convert_to_int(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_ConvertTo_int(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_O)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::O::operator=`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::copy_inherited_members::O) -> &mut crate::mr::copy_inherited_members::O
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_O, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::copy_inherited_members::O as *mut crate::ffi::MR_CopyInheritedMembers_O)};
        unsafe {&mut *(__ret as *mut crate::mr::copy_inherited_members::O)}
    }

    /// Generated from method `MR::CopyInheritedMembers::O::Method`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_Method()`.
    pub fn method(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_Method(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_O)};
        __ret
    }

    /// Generated from method `MR::CopyInheritedMembers::O::StaticFunc`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_StaticFunc()`.
    pub fn static_func()
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_StaticFunc()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::O` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_Get_StaticField()`.
    pub fn static_field() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_Get_StaticField()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::O` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_GetMutable_StaticField()`.
    pub fn static_field_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_GetMutable_StaticField()};
        __ret
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::O` named `StaticField`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_Set_StaticField()`.
    pub fn set_static_field(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_Set_StaticField(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::O` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_Get_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_Get_Field(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_O)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::O` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_GetMutable_Field()`.
    /// The reference to this object might be preserved as the return value.
    pub fn field_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_GetMutable_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_O)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::CopyInheritedMembers::O` named `Field`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_Set_Field()`.
    pub fn set_field(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_CopyInheritedMembers_O_Set_Field(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_O, value)};
        __ret
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a(&self) -> &crate::mr::copy_inherited_members::A
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_A(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_O) as *const crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::A`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_A()`.
    pub fn upcast_to_a_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_A(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_O) as *mut crate::mr::copy_inherited_members::A)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::J`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_J()`.
    pub fn upcast_to_j(&self) -> &crate::mr::copy_inherited_members::J
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_J(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_O) as *const crate::mr::copy_inherited_members::J)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::J`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_J()`.
    pub fn upcast_to_j_mut(&mut self) -> &mut crate::mr::copy_inherited_members::J
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_J(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_O) as *mut crate::mr::copy_inherited_members::J)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::M`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_M()`.
    pub fn upcast_to_m(&self) -> &crate::mr::copy_inherited_members::M
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_M(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_O) as *const crate::mr::copy_inherited_members::M)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::M`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_M()`.
    pub fn upcast_to_m_mut(&mut self) -> &mut crate::mr::copy_inherited_members::M
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_M(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_O) as *mut crate::mr::copy_inherited_members::M)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::M`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_StaticDowncastFrom_MR_CopyInheritedMembers_M()`. Undefined behavior if the object isn't actually a `O`.
    pub unsafe fn static_downcast_from_m(object: &crate::mr::copy_inherited_members::M) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_O_StaticDowncastFrom_MR_CopyInheritedMembers_M(object as *const crate::mr::copy_inherited_members::M as *const crate::ffi::MR_CopyInheritedMembers_M) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::M`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_MutableStaticDowncastFrom_MR_CopyInheritedMembers_M()`. Undefined behavior if the object isn't actually a `O`.
    pub unsafe fn static_downcast_from_m_mut(object: &mut crate::mr::copy_inherited_members::M) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_O_MutableStaticDowncastFrom_MR_CopyInheritedMembers_M(object as *mut crate::mr::copy_inherited_members::M as *mut crate::ffi::MR_CopyInheritedMembers_M) as *mut Self)
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::N`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_N()`.
    pub fn upcast_to_n(&self) -> &crate::mr::copy_inherited_members::N
    {
        unsafe {&*(crate::ffi::MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_N(self as *const Self as *const crate::ffi::MR_CopyInheritedMembers_O) as *const crate::mr::copy_inherited_members::N)}
    }

    /// Upcasts to the base class `MR::CopyInheritedMembers::N`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_N()`.
    pub fn upcast_to_n_mut(&mut self) -> &mut crate::mr::copy_inherited_members::N
    {
        unsafe {&mut *(crate::ffi::MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_N(self as *mut Self as *mut crate::ffi::MR_CopyInheritedMembers_O) as *mut crate::mr::copy_inherited_members::N)}
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::N`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_StaticDowncastFrom_MR_CopyInheritedMembers_N()`. Undefined behavior if the object isn't actually a `O`.
    pub unsafe fn static_downcast_from_n(object: &crate::mr::copy_inherited_members::N) -> &Self
    {
        &*(crate::ffi::MR_CopyInheritedMembers_O_StaticDowncastFrom_MR_CopyInheritedMembers_N(object as *const crate::mr::copy_inherited_members::N as *const crate::ffi::MR_CopyInheritedMembers_N) as *const Self)
    }

    /// Static downcast from the base class `MR::CopyInheritedMembers::N`.
    ///
    /// Calls `MR_CopyInheritedMembers_O_MutableStaticDowncastFrom_MR_CopyInheritedMembers_N()`. Undefined behavior if the object isn't actually a `O`.
    pub unsafe fn static_downcast_from_n_mut(object: &mut crate::mr::copy_inherited_members::N) -> &mut Self
    {
        &mut *(crate::ffi::MR_CopyInheritedMembers_O_MutableStaticDowncastFrom_MR_CopyInheritedMembers_N(object as *mut crate::mr::copy_inherited_members::N as *mut crate::ffi::MR_CopyInheritedMembers_N) as *mut Self)
    }

}

impl AsRef<crate::mr::copy_inherited_members::A> for O
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::A {self.upcast_to_a()}
}

impl AsMut<crate::mr::copy_inherited_members::A> for O
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::A {self.upcast_to_a_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::J> for O
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::J {self.upcast_to_j()}
}

impl AsMut<crate::mr::copy_inherited_members::J> for O
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::J {self.upcast_to_j_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::M> for O
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::M {self.upcast_to_m()}
}

impl AsMut<crate::mr::copy_inherited_members::M> for O
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::M {self.upcast_to_m_mut()}
}

impl AsRef<crate::mr::copy_inherited_members::N> for O
{
    fn as_ref(&self) -> &crate::mr::copy_inherited_members::N {self.upcast_to_n()}
}

impl AsMut<crate::mr::copy_inherited_members::N> for O
{
    fn as_mut(&mut self) -> &mut crate::mr::copy_inherited_members::N {self.upcast_to_n_mut()}
}

unsafe impl crate::CppCopy for O
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

