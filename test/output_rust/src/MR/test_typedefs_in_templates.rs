/// This tests a specific Clang bug/quirk.
/// Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
/// Generated from class `MR::TypedefsInTemplates::A<int>`.
///
/// Generated from class `MR::TypedefsInTemplates::A<int>`. Heap-allocated instances are held in `Owned<A_int>`.
#[repr(transparent)]
pub struct A_int(crate::ffi::MR_TypedefsInTemplates_A_int);

unsafe impl crate::CppClass for A_int
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_TypedefsInTemplates_A_int_Destroy(ptr as *const crate::ffi::MR_TypedefsInTemplates_A_int)}
}

impl A_int
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_TypedefsInTemplates_A_int_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::typedefs_in_templates::A_int>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_A_int_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::typedefs_in_templates::A_int)}
    }

    /// Generated from constructor `MR::TypedefsInTemplates::A<int>::A`.
    ///
    /// Calls `MR_TypedefsInTemplates_A_int_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::typedefs_in_templates::A_int) -> crate::Owned<crate::mr::typedefs_in_templates::A_int>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_A_int_ConstructFromAnother(_other as *const crate::mr::typedefs_in_templates::A_int as *const crate::ffi::MR_TypedefsInTemplates_A_int)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::typedefs_in_templates::A_int)}
    }

    /// Generated from method `MR::TypedefsInTemplates::A<int>::operator=`.
    ///
    /// Calls `MR_TypedefsInTemplates_A_int_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::typedefs_in_templates::A_int) -> &mut crate::mr::typedefs_in_templates::A_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_A_int_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_TypedefsInTemplates_A_int, _other as *const crate::mr::typedefs_in_templates::A_int as *const crate::ffi::MR_TypedefsInTemplates_A_int)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::typedefs_in_templates::A_int)}
    }

    /// Generated from method `MR::TypedefsInTemplates::A<int>::foo`.
    ///
    /// Calls `MR_TypedefsInTemplates_A_int_foo()`.
    pub fn foo(&mut self) -> core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_A_int_foo(self as *mut Self as *mut crate::ffi::MR_TypedefsInTemplates_A_int)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for A_int
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::TypedefsInTemplates::B<int>`.
///
/// Generated from class `MR::TypedefsInTemplates::B<int>`. Heap-allocated instances are held in `Owned<B_int>`.
#[repr(transparent)]
pub struct B_int(crate::ffi::MR_TypedefsInTemplates_B_int);

unsafe impl crate::CppClass for B_int
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_TypedefsInTemplates_B_int_Destroy(ptr as *const crate::ffi::MR_TypedefsInTemplates_B_int)}
}

impl B_int
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_TypedefsInTemplates_B_int_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::typedefs_in_templates::B_int>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_B_int_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::typedefs_in_templates::B_int)}
    }

    /// Generated from constructor `MR::TypedefsInTemplates::B<int>::B`.
    ///
    /// Calls `MR_TypedefsInTemplates_B_int_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::typedefs_in_templates::B_int) -> crate::Owned<crate::mr::typedefs_in_templates::B_int>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_B_int_ConstructFromAnother(_other as *const crate::mr::typedefs_in_templates::B_int as *const crate::ffi::MR_TypedefsInTemplates_B_int)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::typedefs_in_templates::B_int)}
    }

    /// Generated from method `MR::TypedefsInTemplates::B<int>::operator=`.
    ///
    /// Calls `MR_TypedefsInTemplates_B_int_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::typedefs_in_templates::B_int) -> &mut crate::mr::typedefs_in_templates::B_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_B_int_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_TypedefsInTemplates_B_int, _other as *const crate::mr::typedefs_in_templates::B_int as *const crate::ffi::MR_TypedefsInTemplates_B_int)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::typedefs_in_templates::B_int)}
    }

}

unsafe impl crate::CppCopy for B_int
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::TypedefsInTemplates::B<int>::BB<float>`.
///
/// Generated from class `MR::TypedefsInTemplates::B<int>::BB<float>`. Heap-allocated instances are held in `Owned<B_int_BB_float>`.
#[repr(transparent)]
pub struct B_int_BB_float(crate::ffi::MR_TypedefsInTemplates_B_int_BB_float);

unsafe impl crate::CppClass for B_int_BB_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_TypedefsInTemplates_B_int_BB_float_Destroy(ptr as *const crate::ffi::MR_TypedefsInTemplates_B_int_BB_float)}
}

impl B_int_BB_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::typedefs_in_templates::B_int_BB_float>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::typedefs_in_templates::B_int_BB_float)}
    }

    /// Generated from constructor `MR::TypedefsInTemplates::B<int>::BB<float>::BB`.
    ///
    /// Calls `MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::typedefs_in_templates::B_int_BB_float) -> crate::Owned<crate::mr::typedefs_in_templates::B_int_BB_float>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(_other as *const crate::mr::typedefs_in_templates::B_int_BB_float as *const crate::ffi::MR_TypedefsInTemplates_B_int_BB_float)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::typedefs_in_templates::B_int_BB_float)}
    }

    /// Generated from method `MR::TypedefsInTemplates::B<int>::BB<float>::operator=`.
    ///
    /// Calls `MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::typedefs_in_templates::B_int_BB_float) -> &mut crate::mr::typedefs_in_templates::B_int_BB_float
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_TypedefsInTemplates_B_int_BB_float, _other as *const crate::mr::typedefs_in_templates::B_int_BB_float as *const crate::ffi::MR_TypedefsInTemplates_B_int_BB_float)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::typedefs_in_templates::B_int_BB_float)}
    }

    /// Generated from method `MR::TypedefsInTemplates::B<int>::BB<float>::foo`.
    ///
    /// Calls `MR_TypedefsInTemplates_B_int_BB_float_foo()`.
    pub fn foo(&mut self) -> core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_B_int_BB_float_foo(self as *mut Self as *mut crate::ffi::MR_TypedefsInTemplates_B_int_BB_float)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::TypedefsInTemplates::B<int>::BB<float>::foo2`.
    ///
    /// Calls `MR_TypedefsInTemplates_B_int_BB_float_foo2()`.
    pub fn foo2(&mut self) -> core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_B_int_BB_float_foo2(self as *mut Self as *mut crate::ffi::MR_TypedefsInTemplates_B_int_BB_float)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for B_int_BB_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::TypedefsInTemplates::bar`.
///
/// Calls `MR_TypedefsInTemplates_bar()`.
pub fn bar(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TypedefsInTemplates_bar(_1)};
    crate::__check_exception();
    __ret
}

