/// Generated from class `MR::SignatureFilters::A`.
///
/// Generated from class `MR::SignatureFilters::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_SignatureFilters_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_SignatureFilters_A_Destroy(ptr as *const crate::ffi::MR_SignatureFilters_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_SignatureFilters_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::signature_filters::A>
    {
        let __ret = unsafe {crate::ffi::MR_SignatureFilters_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::signature_filters::A)}
    }

    /// Generated from constructor `MR::SignatureFilters::A::A`.
    ///
    /// Calls `MR_SignatureFilters_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::signature_filters::A) -> crate::Owned<crate::mr::signature_filters::A>
    {
        let __ret = unsafe {crate::ffi::MR_SignatureFilters_A_ConstructFromAnother(_other as *const crate::mr::signature_filters::A as *const crate::ffi::MR_SignatureFilters_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::signature_filters::A)}
    }

    /// Generated from method `MR::SignatureFilters::A::operator=`.
    ///
    /// Calls `MR_SignatureFilters_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::signature_filters::A) -> &mut crate::mr::signature_filters::A
    {
        let __ret = unsafe {crate::ffi::MR_SignatureFilters_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_SignatureFilters_A, _other as *const crate::mr::signature_filters::A as *const crate::ffi::MR_SignatureFilters_A)};
        unsafe {&mut *(__ret as *mut crate::mr::signature_filters::A)}
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::SignatureFilters::Blah`.
///
/// Generated from class `MR::SignatureFilters::Blah`. Heap-allocated instances are held in `Owned<Blah>`.
#[repr(transparent)]
pub struct Blah(crate::ffi::MR_SignatureFilters_Blah);

unsafe impl crate::CppClass for Blah
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_SignatureFilters_Blah_Destroy(ptr as *const crate::ffi::MR_SignatureFilters_Blah)}
}

impl Blah
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_SignatureFilters_Blah_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::signature_filters::Blah>
    {
        let __ret = unsafe {crate::ffi::MR_SignatureFilters_Blah_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::signature_filters::Blah)}
    }

    /// Generated from constructor `MR::SignatureFilters::Blah::Blah`.
    ///
    /// Calls `MR_SignatureFilters_Blah_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::signature_filters::Blah) -> crate::Owned<crate::mr::signature_filters::Blah>
    {
        let __ret = unsafe {crate::ffi::MR_SignatureFilters_Blah_ConstructFromAnother(_other as *const crate::mr::signature_filters::Blah as *const crate::ffi::MR_SignatureFilters_Blah)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::signature_filters::Blah)}
    }

    /// Generated from method `MR::SignatureFilters::Blah::operator=`.
    ///
    /// Calls `MR_SignatureFilters_Blah_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::signature_filters::Blah) -> &mut crate::mr::signature_filters::Blah
    {
        let __ret = unsafe {crate::ffi::MR_SignatureFilters_Blah_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_SignatureFilters_Blah, _other as *const crate::mr::signature_filters::Blah as *const crate::ffi::MR_SignatureFilters_Blah)};
        unsafe {&mut *(__ret as *mut crate::mr::signature_filters::Blah)}
    }

    /// Returns a pointer to a member variable of class `MR::SignatureFilters::Blah` named `a`.
    ///
    /// Calls `MR_SignatureFilters_Blah_Get_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a<'a>(&'a self) -> &'a crate::mr::signature_filters::A
    {
        let __ret = unsafe {crate::ffi::MR_SignatureFilters_Blah_Get_a(self as *const Self as *const crate::ffi::MR_SignatureFilters_Blah)};
        unsafe {&*(__ret as *const crate::mr::signature_filters::A)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::SignatureFilters::Blah` named `a`.
    ///
    /// Calls `MR_SignatureFilters_Blah_GetMutable_a()`.
    /// The reference to this object might be preserved as the return value.
    pub fn a_mut<'a>(&'a mut self) -> &'a mut crate::mr::signature_filters::A
    {
        let __ret = unsafe {crate::ffi::MR_SignatureFilters_Blah_GetMutable_a(self as *mut Self as *mut crate::ffi::MR_SignatureFilters_Blah)};
        unsafe {&mut *(__ret as *mut crate::mr::signature_filters::A)}
    }

    /// Modifies a member variable of class `MR::SignatureFilters::Blah` named `a`.
    ///
    /// Calls `MR_SignatureFilters_Blah_Set_a()`.
    /// The reference to the parameter `value` might be preserved in this object in element `a`.
    pub fn set_a(&mut self, value: &crate::mr::signature_filters::A)
    {
        let __ret = unsafe {crate::ffi::MR_SignatureFilters_Blah_Set_a(self as *mut Self as *mut crate::ffi::MR_SignatureFilters_Blah, value as *const crate::mr::signature_filters::A as *const crate::ffi::MR_SignatureFilters_A)};
        __ret
    }

}

unsafe impl crate::CppCopy for Blah
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::SignatureFilters::foo`.
///
/// Calls `MR_SignatureFilters_foo_1()`.
pub fn foo_1(_1: &crate::mr::signature_filters::A)
{
    let __ret = unsafe {crate::ffi::MR_SignatureFilters_foo_1(_1 as *const crate::mr::signature_filters::A as *const crate::ffi::MR_SignatureFilters_A)};
    __ret
}

/// Generated from function `MR::SignatureFilters::foo`.
///
/// Calls `MR_SignatureFilters_foo_0()`.
pub fn foo_0() -> crate::Owned<crate::mr::signature_filters::A>
{
    let __ret = unsafe {crate::ffi::MR_SignatureFilters_foo_0()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::signature_filters::A)}
}

/// Generated from function `MR::SignatureFilters::foo2`.
///
/// Calls `MR_SignatureFilters_foo2_1()`.
pub fn foo2_1(_1: &mut crate::mr::signature_filters::A)
{
    let __ret = unsafe {crate::ffi::MR_SignatureFilters_foo2_1(_1 as *mut crate::mr::signature_filters::A as *mut crate::ffi::MR_SignatureFilters_A)};
    __ret
}

/// Generated from function `MR::SignatureFilters::foo2`.
///
/// Calls `MR_SignatureFilters_foo2_0()`.
pub fn foo2_0() -> *mut crate::ffi::MR_SignatureFilters_A
{
    let __ret = unsafe {crate::ffi::MR_SignatureFilters_foo2_0()};
    __ret
}

/// Generated from function `MR::SignatureFilters::foo3`.
///
/// Calls `MR_SignatureFilters_foo3_1()`.
pub fn foo3_1(_1: &mut crate::mr::signature_filters::A)
{
    let __ret = unsafe {crate::ffi::MR_SignatureFilters_foo3_1(_1 as *mut crate::mr::signature_filters::A as *mut crate::ffi::MR_SignatureFilters_A)};
    __ret
}

/// Generated from function `MR::SignatureFilters::foo3`.
///
/// Calls `MR_SignatureFilters_foo3_0()`.
pub fn foo3_0() -> *mut crate::ffi::MR_SignatureFilters_A
{
    let __ret = unsafe {crate::ffi::MR_SignatureFilters_foo3_0()};
    __ret
}

/// Generated from function `MR::SignatureFilters::foo4`.
///
/// Calls `MR_SignatureFilters_foo4_1()`.
pub fn foo4_1(_1: &crate::mr::signature_filters::A)
{
    let __ret = unsafe {crate::ffi::MR_SignatureFilters_foo4_1(_1 as *const crate::mr::signature_filters::A as *const crate::ffi::MR_SignatureFilters_A)};
    __ret
}

/// Generated from function `MR::SignatureFilters::foo4`.
///
/// Calls `MR_SignatureFilters_foo4_0()`.
pub fn foo4_0() -> *const crate::ffi::MR_SignatureFilters_A
{
    let __ret = unsafe {crate::ffi::MR_SignatureFilters_foo4_0()};
    __ret
}

/// Generated from function `MR::SignatureFilters::foo5`.
///
/// Calls `MR_SignatureFilters_foo5_1()`.
pub fn foo5_1(_1: &crate::mr::signature_filters::A)
{
    let __ret = unsafe {crate::ffi::MR_SignatureFilters_foo5_1(_1 as *const crate::mr::signature_filters::A as *const crate::ffi::MR_SignatureFilters_A)};
    __ret
}

/// Generated from function `MR::SignatureFilters::foo5`.
///
/// Calls `MR_SignatureFilters_foo5_0()`.
pub fn foo5_0() -> *const crate::ffi::MR_SignatureFilters_A
{
    let __ret = unsafe {crate::ffi::MR_SignatureFilters_foo5_0()};
    __ret
}

