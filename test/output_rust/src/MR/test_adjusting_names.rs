/// And test that `uint64_t` is correctly adjusted in some other kinds of names.
/// Though here we don't really test that each of them brings its own includes.
/// Generated from class `MR::AdjustingNames::A`.
///
/// Generated from class `MR::AdjustingNames::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_AdjustingNames_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_AdjustingNames_A_Destroy(ptr as *const crate::ffi::MR_AdjustingNames_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_AdjustingNames_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::adjusting_names::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_AdjustingNames_A_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::adjusting_names::A)}
    }

    /// Generated from constructor `MR::AdjustingNames::A::A`.
    ///
    /// Calls `MR_AdjustingNames_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::adjusting_names::A) -> crate::Owned<crate::mr::adjusting_names::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_AdjustingNames_A_ConstructFromAnother(_other as *const crate::mr::adjusting_names::A as *const crate::ffi::MR_AdjustingNames_A)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::adjusting_names::A)}
    }

    /// Generated from conversion operator `MR::AdjustingNames::A::operator unsigned long`.
    ///
    /// Calls `MR_AdjustingNames_A_ConvertTo_unsigned_long()`.
    pub fn convert_to_unsigned_long(&mut self) -> core::ffi::c_ulong
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_AdjustingNames_A_ConvertTo_unsigned_long(self as *mut Self as *mut crate::ffi::MR_AdjustingNames_A)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::AdjustingNames::A::operator=`.
    ///
    /// Calls `MR_AdjustingNames_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::adjusting_names::A) -> &mut crate::mr::adjusting_names::A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_AdjustingNames_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_AdjustingNames_A, _other as *const crate::mr::adjusting_names::A as *const crate::ffi::MR_AdjustingNames_A)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::adjusting_names::A)}
    }

    /// Generated from method `MR::AdjustingNames::A::foo<unsigned long>`.
    ///
    /// Calls `MR_AdjustingNames_A_foo()`.
    pub fn foo(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_AdjustingNames_A_foo(self as *mut Self as *mut crate::ffi::MR_AdjustingNames_A)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::AdjustingNames::A::bar`.
    ///
    /// Calls `MR_AdjustingNames_A_bar()`.
    pub fn bar(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_AdjustingNames_A_bar(self as *mut Self as *mut crate::ffi::MR_AdjustingNames_A)};
        crate::__check_exception();
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::AdjustingNames::A` named `var<unsigned long>`.
    ///
    /// Calls `MR_AdjustingNames_A_Get_var_unsigned_long()`.
    pub fn var() -> *const core::ffi::c_ulong
    {
        let __ret = unsafe {crate::ffi::MR_AdjustingNames_A_Get_var_unsigned_long()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::AdjustingNames::A` named `var<unsigned long>`.
    ///
    /// Calls `MR_AdjustingNames_A_GetMutable_var_unsigned_long()`.
    pub fn var_mut() -> *mut core::ffi::c_ulong
    {
        let __ret = unsafe {crate::ffi::MR_AdjustingNames_A_GetMutable_var_unsigned_long()};
        __ret
    }

    /// Modifies a member variable of class `MR::AdjustingNames::A` named `var<unsigned long>`.
    ///
    /// Calls `MR_AdjustingNames_A_Set_var_unsigned_long()`.
    /// The reference to the parameter `value` might be preserved in this object in element `var<unsigned long>`.
    pub fn set_var(value: core::ffi::c_ulong)
    {
        let __ret = unsafe {crate::ffi::MR_AdjustingNames_A_Set_var_unsigned_long(value)};
        __ret
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// When we're gonna call `foo<MR_C_uint64_t>()` in the source file, we must include the header for our typedef (and for the template arguments in general).
/// And we must make sure that the typedef gets applied to the name correctly.
/// Generated from function `MR::AdjustingNames::foo<unsigned long>`.
///
/// Calls `MR_AdjustingNames_foo()`.
pub fn foo()
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_AdjustingNames_foo()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::AdjustingNames::bar`.
///
/// Calls `MR_AdjustingNames_bar()`.
pub fn bar()
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_AdjustingNames_bar()};
    crate::__check_exception();
    __ret
}

