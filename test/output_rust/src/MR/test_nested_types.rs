/// Generated from enum `MR::NestedTypes::A::E`. The constants are associated constants of this type.
pub use crate::ffi::MR_NestedTypes_A_E as A_E;

/// Generated from class `MR::NestedTypes::A`.
///
/// Generated from class `MR::NestedTypes::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_NestedTypes_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_NestedTypes_A_Destroy(ptr as *const crate::ffi::MR_NestedTypes_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_NestedTypes_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::nested_types::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::nested_types::A)}
    }

    /// Constructs `MR::NestedTypes::A` elementwise.
    ///
    /// Calls `MR_NestedTypes_A_ConstructFrom()`.
    /// The reference to the parameter `b` might be preserved in the constructed object.
    /// The reference to the parameter `e` might be preserved in the constructed object.
    pub fn construct_from(b: &crate::mr::nested_types::A_B, e: crate::ffi::MR_NestedTypes_A_E) -> crate::Owned<crate::mr::nested_types::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_ConstructFrom(b as *const crate::mr::nested_types::A_B as *const crate::ffi::MR_NestedTypes_A_B, e)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::nested_types::A)}
    }

    /// Generated from constructor `MR::NestedTypes::A::A`.
    ///
    /// Calls `MR_NestedTypes_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::nested_types::A) -> crate::Owned<crate::mr::nested_types::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_ConstructFromAnother(_other as *const crate::mr::nested_types::A as *const crate::ffi::MR_NestedTypes_A)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::nested_types::A)}
    }

    /// Generated from method `MR::NestedTypes::A::operator=`.
    ///
    /// Calls `MR_NestedTypes_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::nested_types::A) -> &mut crate::mr::nested_types::A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_NestedTypes_A, _other as *const crate::mr::nested_types::A as *const crate::ffi::MR_NestedTypes_A)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::nested_types::A)}
    }

    /// Returns a pointer to a member variable of class `MR::NestedTypes::A` named `b`.
    ///
    /// Calls `MR_NestedTypes_A_Get_b()`.
    /// The reference to this object might be preserved as the return value.
    pub fn b<'a>(&'a self) -> &'a crate::mr::nested_types::A_B
    {
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_Get_b(self as *const Self as *const crate::ffi::MR_NestedTypes_A)};
        unsafe {&*(__ret as *const crate::mr::nested_types::A_B)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::NestedTypes::A` named `b`.
    ///
    /// Calls `MR_NestedTypes_A_GetMutable_b()`.
    /// The reference to this object might be preserved as the return value.
    pub fn b_mut<'a>(&'a mut self) -> &'a mut crate::mr::nested_types::A_B
    {
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_GetMutable_b(self as *mut Self as *mut crate::ffi::MR_NestedTypes_A)};
        unsafe {&mut *(__ret as *mut crate::mr::nested_types::A_B)}
    }

    /// Modifies a member variable of class `MR::NestedTypes::A` named `b`.
    ///
    /// Calls `MR_NestedTypes_A_Set_b()`.
    /// The reference to the parameter `value` might be preserved in this object in element `b`.
    pub fn set_b(&mut self, value: &crate::mr::nested_types::A_B)
    {
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_Set_b(self as *mut Self as *mut crate::ffi::MR_NestedTypes_A, value as *const crate::mr::nested_types::A_B as *const crate::ffi::MR_NestedTypes_A_B)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::NestedTypes::A` named `e`.
    ///
    /// Calls `MR_NestedTypes_A_Get_e()`.
    /// The reference to this object might be preserved as the return value.
    pub fn e<'a>(&'a self) -> &'a crate::ffi::MR_NestedTypes_A_E
    {
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_Get_e(self as *const Self as *const crate::ffi::MR_NestedTypes_A)};
        unsafe {&*(__ret as *const crate::ffi::MR_NestedTypes_A_E)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::NestedTypes::A` named `e`.
    ///
    /// Calls `MR_NestedTypes_A_GetMutable_e()`.
    /// The reference to this object might be preserved as the return value.
    pub fn e_mut<'a>(&'a mut self) -> &'a mut crate::ffi::MR_NestedTypes_A_E
    {
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_GetMutable_e(self as *mut Self as *mut crate::ffi::MR_NestedTypes_A)};
        unsafe {&mut *(__ret as *mut crate::ffi::MR_NestedTypes_A_E)}
    }

    /// Modifies a member variable of class `MR::NestedTypes::A` named `e`.
    ///
    /// Calls `MR_NestedTypes_A_Set_e()`.
    /// The reference to the parameter `value` might be preserved in this object in element `e`.
    pub fn set_e(&mut self, value: crate::ffi::MR_NestedTypes_A_E)
    {
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_Set_e(self as *mut Self as *mut crate::ffi::MR_NestedTypes_A, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::NestedTypes::A::B`.
///
/// Generated from class `MR::NestedTypes::A::B`. Heap-allocated instances are held in `Owned<A_B>`.
#[repr(transparent)]
pub struct A_B(crate::ffi::MR_NestedTypes_A_B);

unsafe impl crate::CppClass for A_B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_NestedTypes_A_B_Destroy(ptr as *const crate::ffi::MR_NestedTypes_A_B)}
}

impl A_B
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_NestedTypes_A_B_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::nested_types::A_B>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_B_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::nested_types::A_B)}
    }

    /// Generated from constructor `MR::NestedTypes::A::B::B`.
    ///
    /// Calls `MR_NestedTypes_A_B_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::nested_types::A_B) -> crate::Owned<crate::mr::nested_types::A_B>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_B_ConstructFromAnother(_other as *const crate::mr::nested_types::A_B as *const crate::ffi::MR_NestedTypes_A_B)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::nested_types::A_B)}
    }

    /// Generated from method `MR::NestedTypes::A::B::operator=`.
    ///
    /// Calls `MR_NestedTypes_A_B_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::nested_types::A_B) -> &mut crate::mr::nested_types::A_B
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_NestedTypes_A_B_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_NestedTypes_A_B, _other as *const crate::mr::nested_types::A_B as *const crate::ffi::MR_NestedTypes_A_B)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::nested_types::A_B)}
    }

}

unsafe impl crate::CppCopy for A_B
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

