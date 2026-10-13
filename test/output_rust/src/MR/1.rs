/// Generated from class `MR::A`.
///
/// Generated from class `MR::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_A_Destroy(ptr as *const crate::ffi::MR_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_A_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::A)}
    }

    /// Generated from constructor `MR::A::A`.
    ///
    /// Calls `MR_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::A) -> crate::Owned<crate::mr::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_A_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::A as *mut crate::ffi::MR_A)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::A)}
    }

    /// Generated from method `MR::A::operator=`.
    ///
    /// Calls `MR_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    /// The reference to this object might be preserved in the return value.
    pub fn assign_from_another<'a>(&'a mut self, _other: &crate::mr::A) -> &'a mut crate::mr::A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_A, crate::ffi::MR_C_PassBy_Copy, _other as *const crate::mr::A as *mut crate::ffi::MR_A)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::A)}
    }

    /// Returns a pointer to a member variable of class `MR::A` named `x`.
    ///
    /// Calls `MR_A_Get_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_A_Get_x(self as *const Self as *const crate::ffi::MR_A)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::A` named `x`.
    ///
    /// Calls `MR_A_GetMutable_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_A_GetMutable_x(self as *mut Self as *mut crate::ffi::MR_A)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Modifies a member variable of class `MR::A` named `x`.
    ///
    /// Calls `MR_A_Set_x()`.
    /// The reference to the parameter `value` might be preserved in this object in element `x`.
    pub fn set_x(&mut self, value: &str)
    {
        let __ret = unsafe {crate::ffi::MR_A_Set_x(self as *mut Self as *mut crate::ffi::MR_A, value.as_ptr() as *const core::ffi::c_char, value.as_ptr().wrapping_add(value.len()) as *const core::ffi::c_char)};
        __ret
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::foo`.
///
/// Calls `MR_foo()`.
pub fn foo() -> crate::Owned<crate::mr::cs::std_vector_MR_A>
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_foo()};
    crate::__check_exception();
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_A)}
}

/// Generated from function `MR::bar`.
///
/// Calls `MR_bar()`.
pub fn bar(_1: &crate::mr::cs::std_vector_MR_A)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_bar(crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::cs::std_vector_MR_A as *mut crate::ffi::MR_C_std_vector_MR_A)};
    crate::__check_exception();
    __ret
}

