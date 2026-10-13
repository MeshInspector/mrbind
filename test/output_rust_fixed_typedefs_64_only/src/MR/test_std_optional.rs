/// Generated from enum `MR::StdOptional::E`. The constants are associated constants of this type.
pub use crate::ffi::MR_StdOptional_E as E;

/// Generated from class `MR::StdOptional::A`.
///
/// Generated from class `MR::StdOptional::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_StdOptional_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_StdOptional_A_Destroy(ptr as *const crate::ffi::MR_StdOptional_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_StdOptional_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::std_optional::A>
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_optional::A)}
    }

    /// Constructs `MR::StdOptional::A` elementwise.
    ///
    /// Calls `MR_StdOptional_A_ConstructFrom()`.
    pub fn construct_from(x: core::ffi::c_int) -> crate::Owned<crate::mr::std_optional::A>
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_A_ConstructFrom(x)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_optional::A)}
    }

    /// Generated from constructor `MR::StdOptional::A::A`.
    ///
    /// Calls `MR_StdOptional_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::std_optional::A) -> crate::Owned<crate::mr::std_optional::A>
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_A_ConstructFromAnother(_other as *const crate::mr::std_optional::A as *const crate::ffi::MR_StdOptional_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_optional::A)}
    }

    /// Generated from method `MR::StdOptional::A::operator=`.
    ///
    /// Calls `MR_StdOptional_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::std_optional::A) -> &mut crate::mr::std_optional::A
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_StdOptional_A, _other as *const crate::mr::std_optional::A as *const crate::ffi::MR_StdOptional_A)};
        unsafe {&mut *(__ret as *mut crate::mr::std_optional::A)}
    }

    /// Returns a pointer to a member variable of class `MR::StdOptional::A` named `x`.
    ///
    /// Calls `MR_StdOptional_A_Get_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_A_Get_x(self as *const Self as *const crate::ffi::MR_StdOptional_A)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::StdOptional::A` named `x`.
    ///
    /// Calls `MR_StdOptional_A_GetMutable_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_A_GetMutable_x(self as *mut Self as *mut crate::ffi::MR_StdOptional_A)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::StdOptional::A` named `x`.
    ///
    /// Calls `MR_StdOptional_A_Set_x()`.
    pub fn set_x(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_A_Set_x(self as *mut Self as *mut crate::ffi::MR_StdOptional_A, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::StdOptional::B`.
///
/// Generated from class `MR::StdOptional::B`. Heap-allocated instances are held in `Owned<B>`.
#[repr(transparent)]
pub struct B(crate::ffi::MR_StdOptional_B);

unsafe impl crate::CppClass for B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_StdOptional_B_Destroy(ptr as *const crate::ffi::MR_StdOptional_B)}
}

impl B
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_StdOptional_B_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::std_optional::B>
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_B_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_optional::B)}
    }

    /// Constructs `MR::StdOptional::B` elementwise.
    ///
    /// Calls `MR_StdOptional_B_ConstructFrom()`.
    /// The reference to the parameter `s` might be preserved in the constructed object.
    pub fn construct_from(s: &str) -> crate::Owned<crate::mr::std_optional::B>
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_B_ConstructFrom(s.as_ptr() as *const core::ffi::c_char, s.as_ptr().wrapping_add(s.len()) as *const core::ffi::c_char)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_optional::B)}
    }

    /// Generated from constructor `MR::StdOptional::B::B`.
    ///
    /// Calls `MR_StdOptional_B_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::std_optional::B) -> crate::Owned<crate::mr::std_optional::B>
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_B_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::std_optional::B as *mut crate::ffi::MR_StdOptional_B)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_optional::B)}
    }

    /// Generated from method `MR::StdOptional::B::operator=`.
    ///
    /// Calls `MR_StdOptional_B_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::std_optional::B) -> &mut crate::mr::std_optional::B
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_B_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_StdOptional_B, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::std_optional::B as *mut crate::ffi::MR_StdOptional_B)};
        unsafe {&mut *(__ret as *mut crate::mr::std_optional::B)}
    }

    /// Returns a pointer to a member variable of class `MR::StdOptional::B` named `s`.
    ///
    /// Calls `MR_StdOptional_B_Get_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_B_Get_s(self as *const Self as *const crate::ffi::MR_StdOptional_B)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::StdOptional::B` named `s`.
    ///
    /// Calls `MR_StdOptional_B_GetMutable_s()`.
    /// The reference to this object might be preserved as the return value.
    pub fn s_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_B_GetMutable_s(self as *mut Self as *mut crate::ffi::MR_StdOptional_B)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Modifies a member variable of class `MR::StdOptional::B` named `s`.
    ///
    /// Calls `MR_StdOptional_B_Set_s()`.
    /// The reference to the parameter `value` might be preserved in this object in element `s`.
    pub fn set_s(&mut self, value: &str)
    {
        let __ret = unsafe {crate::ffi::MR_StdOptional_B_Set_s(self as *mut Self as *mut crate::ffi::MR_StdOptional_B, value.as_ptr() as *const core::ffi::c_char, value.as_ptr().wrapping_add(value.len()) as *const core::ffi::c_char)};
        __ret
    }

}

unsafe impl crate::CppCopy for B
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::StdOptional::GetInt`.
///
/// Calls `MR_StdOptional_GetInt()`.
pub fn get_int() -> crate::Owned<crate::mr::cs::std_optional_int>
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_GetInt()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_int)}
}

/// Generated from function `MR::StdOptional::SetInt`.
///
/// Calls `MR_StdOptional_SetInt()`.
pub fn set_int(_1: &core::ffi::c_int)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetInt(_1 as *const core::ffi::c_int as *const core::ffi::c_int)};
    __ret
}

/// Generated from function `MR::StdOptional::SetIntConstRef`.
///
/// Calls `MR_StdOptional_SetIntConstRef()`.
pub fn set_int_const_ref(_1: &core::ffi::c_int)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetIntConstRef(_1 as *const core::ffi::c_int as *const core::ffi::c_int)};
    __ret
}

/// Generated from function `MR::StdOptional::SetIntDefTrivial`.
///
/// Calls `MR_StdOptional_SetIntDefTrivial()`.
pub fn set_int_def_trivial(_1: &core::ffi::c_int)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetIntDefTrivial(_1 as *const core::ffi::c_int as *const core::ffi::c_int)};
    __ret
}

/// Generated from function `MR::StdOptional::SetIntDef`.
///
/// Calls `MR_StdOptional_SetIntDef()`.
pub fn set_int_def(_1: Option<&crate::mr::cs::std_optional_int>)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetIntDef(_1.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_int as *const crate::ffi::MR_C_std_optional_int))};
    __ret
}

/// Generated from function `MR::StdOptional::GetEnum`.
///
/// Calls `MR_StdOptional_GetEnum()`.
pub fn get_enum() -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_E>
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_GetEnum()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_E)}
}

/// Generated from function `MR::StdOptional::SetEnum`.
///
/// Calls `MR_StdOptional_SetEnum()`.
pub fn set_enum(_1: &crate::ffi::MR_StdOptional_E)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetEnum(_1 as *const crate::ffi::MR_StdOptional_E as *const crate::ffi::MR_StdOptional_E)};
    __ret
}

/// Generated from function `MR::StdOptional::SetEnumConstRef`.
///
/// Calls `MR_StdOptional_SetEnumConstRef()`.
pub fn set_enum_const_ref(_1: &crate::ffi::MR_StdOptional_E)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetEnumConstRef(_1 as *const crate::ffi::MR_StdOptional_E as *const crate::ffi::MR_StdOptional_E)};
    __ret
}

/// Generated from function `MR::StdOptional::SetEnumDefTrivial`.
///
/// Calls `MR_StdOptional_SetEnumDefTrivial()`.
pub fn set_enum_def_trivial(_1: &crate::ffi::MR_StdOptional_E)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetEnumDefTrivial(_1 as *const crate::ffi::MR_StdOptional_E as *const crate::ffi::MR_StdOptional_E)};
    __ret
}

/// Generated from function `MR::StdOptional::SetEnumDef`.
///
/// Calls `MR_StdOptional_SetEnumDef()`.
pub fn set_enum_def(_1: Option<&crate::mr::cs::std_optional_MR_StdOptional_E>)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetEnumDef(_1.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_StdOptional_E as *const crate::ffi::MR_C_std_optional_MR_StdOptional_E))};
    __ret
}

/// Generated from function `MR::StdOptional::GetClass`.
///
/// Calls `MR_StdOptional_GetClass()`.
pub fn get_class() -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_A>
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_GetClass()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_A)}
}

/// Generated from function `MR::StdOptional::SetClass`.
///
/// Calls `MR_StdOptional_SetClass()`.
pub fn set_class(_1: &crate::mr::std_optional::A)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetClass(_1 as *const crate::mr::std_optional::A as *const crate::ffi::MR_StdOptional_A)};
    __ret
}

/// Generated from function `MR::StdOptional::SetClassConstRef`.
///
/// Calls `MR_StdOptional_SetClassConstRef()`.
pub fn set_class_const_ref(_1: &crate::mr::std_optional::A)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetClassConstRef(_1 as *const crate::mr::std_optional::A as *const crate::ffi::MR_StdOptional_A)};
    __ret
}

/// Generated from function `MR::StdOptional::SetClassDefTrivial`.
///
/// Calls `MR_StdOptional_SetClassDefTrivial()`.
pub fn set_class_def_trivial(_1: &crate::mr::std_optional::A)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetClassDefTrivial(_1 as *const crate::mr::std_optional::A as *const crate::ffi::MR_StdOptional_A)};
    __ret
}

/// Generated from function `MR::StdOptional::SetClassDef`.
///
/// Calls `MR_StdOptional_SetClassDef()`.
pub fn set_class_def(_1: Option<&crate::mr::cs::std_optional_MR_StdOptional_A>)
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetClassDef(_1.map_or(core::ptr::null(), |r| r as *const crate::mr::cs::std_optional_MR_StdOptional_A as *const crate::ffi::MR_C_std_optional_MR_StdOptional_A))};
    __ret
}

/// Generated from function `MR::StdOptional::GetClass2`.
///
/// Calls `MR_StdOptional_GetClass2()`.
pub fn get_class2() -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_B>
{
    let __ret = unsafe {crate::ffi::MR_StdOptional_GetClass2()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_B)}
}

/// Generated from function `MR::StdOptional::SetClass2`.
///
/// Calls `MR_StdOptional_SetClass2()`.
pub fn set_class2(_1: Option<&crate::mr::std_optional::B>)
{
    let (__pb__1, __ptr__1) = match _1 {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::std_optional::B as *mut crate::ffi::MR_StdOptional_B), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetClass2(__pb__1, __ptr__1)};
    __ret
}

/// Generated from function `MR::StdOptional::SetClass2ConstRef`.
///
/// Calls `MR_StdOptional_SetClass2ConstRef()`.
pub fn set_class2_const_ref(_1: Option<&crate::mr::std_optional::B>)
{
    let (__pb__1, __ptr__1) = match _1 {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::std_optional::B as *mut crate::ffi::MR_StdOptional_B), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetClass2ConstRef(__pb__1, __ptr__1)};
    __ret
}

/// Generated from function `MR::StdOptional::SetClass2DefTrivial`.
///
/// Calls `MR_StdOptional_SetClass2DefTrivial()`.
pub fn set_class2_def_trivial(_1: Option<&crate::mr::std_optional::B>)
{
    let (__pb__1, __ptr__1) = match _1 {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::std_optional::B as *mut crate::ffi::MR_StdOptional_B), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetClass2DefTrivial(__pb__1, __ptr__1)};
    __ret
}

/// Generated from function `MR::StdOptional::SetClass2Def`.
///
/// Calls `MR_StdOptional_SetClass2Def()`.
pub fn set_class2_def(_1: Option<&crate::mr::std_optional::B>)
{
    let (__pb__1, __ptr__1) = match _1 {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::std_optional::B as *mut crate::ffi::MR_StdOptional_B), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
    let __ret = unsafe {crate::ffi::MR_StdOptional_SetClass2Def(__pb__1, __ptr__1)};
    __ret
}

