/// Generated from class `MR::TestSizeT::A<unsigned long>`.
///
/// Generated from class `MR::TestSizeT::A<unsigned long>`. Heap-allocated instances are held in `Owned<A_unsigned_long>`.
#[repr(transparent)]
pub struct A_unsigned_long(crate::ffi::MR_TestSizeT_A_unsigned_long);

unsafe impl crate::CppClass for A_unsigned_long
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_TestSizeT_A_unsigned_long_Destroy(ptr as *const crate::ffi::MR_TestSizeT_A_unsigned_long)}
}

impl A_unsigned_long
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_TestSizeT_A_unsigned_long_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::test_size_t::A_unsigned_long>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TestSizeT_A_unsigned_long_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::test_size_t::A_unsigned_long)}
    }

    /// Generated from constructor `MR::TestSizeT::A<unsigned long>::A`.
    ///
    /// Calls `MR_TestSizeT_A_unsigned_long_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::test_size_t::A_unsigned_long) -> crate::Owned<crate::mr::test_size_t::A_unsigned_long>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TestSizeT_A_unsigned_long_ConstructFromAnother(_other as *const crate::mr::test_size_t::A_unsigned_long as *const crate::ffi::MR_TestSizeT_A_unsigned_long)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::test_size_t::A_unsigned_long)}
    }

    /// Generated from method `MR::TestSizeT::A<unsigned long>::operator=`.
    ///
    /// Calls `MR_TestSizeT_A_unsigned_long_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::test_size_t::A_unsigned_long) -> &mut crate::mr::test_size_t::A_unsigned_long
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TestSizeT_A_unsigned_long_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_TestSizeT_A_unsigned_long, _other as *const crate::mr::test_size_t::A_unsigned_long as *const crate::ffi::MR_TestSizeT_A_unsigned_long)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::test_size_t::A_unsigned_long)}
    }

    /// Generated from method `MR::TestSizeT::A<unsigned long>::foo`.
    ///
    /// Calls `MR_TestSizeT_A_unsigned_long_foo()`.
    pub fn foo(&mut self) -> core::ffi::c_ulong
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TestSizeT_A_unsigned_long_foo(self as *mut Self as *mut crate::ffi::MR_TestSizeT_A_unsigned_long)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for A_unsigned_long
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::TestSizeT::foo`.
///
/// Calls `MR_TestSizeT_foo_unsigned_long()`.
pub fn foo_unsigned_long(_1: core::ffi::c_ulong) -> core::ffi::c_ulong
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSizeT_foo_unsigned_long(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSizeT::foo`.
///
/// Calls `MR_TestSizeT_foo_unsigned_long_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn foo_unsigned_long_ptr(_1: *mut *mut core::ffi::c_ulong) -> *mut *mut core::ffi::c_ulong
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSizeT_foo_unsigned_long_ptr(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSizeT::foo`.
///
/// Calls `MR_TestSizeT_foo_std_vector_unsigned_long()`.
pub fn foo_std_vector_unsigned_long(_1: &crate::mr::cs::std_vector_unsigned_long) -> crate::Owned<crate::mr::cs::std_vector_unsigned_long>
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSizeT_foo_std_vector_unsigned_long(crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::cs::std_vector_unsigned_long as *mut crate::ffi::MR_C_std_vector_unsigned_long)};
    crate::__check_exception();
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_unsigned_long)}
}

/// Generated from function `MR::TestSizeT::foo`.
///
/// Calls `MR_TestSizeT_foo_long()`.
pub fn foo_long(_1: core::ffi::c_long) -> core::ffi::c_long
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSizeT_foo_long(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSizeT::foo`.
///
/// Calls `MR_TestSizeT_foo_long_ptr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn foo_long_ptr(_1: *mut *mut core::ffi::c_long) -> *mut *mut core::ffi::c_long
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSizeT_foo_long_ptr(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSizeT::foo`.
///
/// Calls `MR_TestSizeT_foo_std_vector_long()`.
pub fn foo_std_vector_long(_1: &crate::mr::cs::std_vector_long) -> crate::Owned<crate::mr::cs::std_vector_long>
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSizeT_foo_std_vector_long(crate::ffi::MR_C_PassBy_Copy, _1 as *const crate::mr::cs::std_vector_long as *mut crate::ffi::MR_C_std_vector_long)};
    crate::__check_exception();
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_long)}
}

