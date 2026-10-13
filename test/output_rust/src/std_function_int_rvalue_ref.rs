/// Stores a functor of type: `int &&(void)`. Possibly stateful.
///
/// Generated from class `std::function<int &&(void)>`. Heap-allocated instances are held in `Owned<std_function_int_rvalue_ref>`.
#[repr(transparent)]
pub struct std_function_int_rvalue_ref(crate::ffi::MR_C_std_function_int_rvalue_ref);

unsafe impl crate::CppClass for std_function_int_rvalue_ref
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_function_int_rvalue_ref_Destroy(ptr as *const crate::ffi::MR_C_std_function_int_rvalue_ref)}
}

impl std_function_int_rvalue_ref
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_function_int_rvalue_ref_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_function_int_rvalue_ref>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_int_rvalue_ref_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_int_rvalue_ref)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_function_int_rvalue_ref_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_function_int_rvalue_ref) -> crate::Owned<crate::mr::cs::std_function_int_rvalue_ref>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_int_rvalue_ref_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_int_rvalue_ref as *mut crate::ffi::MR_C_std_function_int_rvalue_ref)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_int_rvalue_ref)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_function_int_rvalue_ref_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_function_int_rvalue_ref)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_int_rvalue_ref_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_function_int_rvalue_ref, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_int_rvalue_ref as *mut crate::ffi::MR_C_std_function_int_rvalue_ref)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if this instance stores a callable, as opposed to being null.
    ///
    /// Calls `MR_C_std_function_int_rvalue_ref_has_value()`.
    pub fn has_value(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_int_rvalue_ref_has_value(self as *const Self as *const crate::ffi::MR_C_std_function_int_rvalue_ref)};
        crate::__check_exception();
        __ret
    }

    /// Destroys the stored callable, making this instance null.
    ///
    /// Calls `MR_C_std_function_int_rvalue_ref_reset()`.
    pub fn reset(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_int_rvalue_ref_reset(self as *mut Self as *mut crate::ffi::MR_C_std_function_int_rvalue_ref)};
        crate::__check_exception();
        __ret
    }

    /// Calls the stored callable.
    ///
    /// Calls `MR_C_std_function_int_rvalue_ref_call()`.
    pub fn call(&self) -> &mut core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_int_rvalue_ref_call(self as *const Self as *const crate::ffi::MR_C_std_function_int_rvalue_ref)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

}

unsafe impl crate::CppCopy for std_function_int_rvalue_ref
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

