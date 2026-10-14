/// Stores either a `MR::CSharp::E1` that represents success or a `float` that represents an error.
///
/// Generated from class `std::expected<MR::CSharp::E1, float>`. Heap-allocated instances are held in `Owned<std_expected_MR_CSharp_E1_float>`.
#[repr(transparent)]
pub struct std_expected_MR_CSharp_E1_float(crate::ffi::MR_C_std_expected_MR_CSharp_E1_float);

unsafe impl crate::CppClass for std_expected_MR_CSharp_E1_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_expected_MR_CSharp_E1_float_Destroy(ptr as *const crate::ffi::MR_C_std_expected_MR_CSharp_E1_float)}
}

impl std_expected_MR_CSharp_E1_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_expected_MR_CSharp_E1_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_expected_MR_CSharp_E1_float>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_MR_CSharp_E1_float_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_expected_MR_CSharp_E1_float)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_expected_MR_CSharp_E1_float_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_expected_MR_CSharp_E1_float) -> crate::Owned<crate::mr::cs::std_expected_MR_CSharp_E1_float>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_MR_CSharp_E1_float_ConstructFromAnother(other as *const crate::mr::cs::std_expected_MR_CSharp_E1_float as *const crate::ffi::MR_C_std_expected_MR_CSharp_E1_float)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_expected_MR_CSharp_E1_float)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_expected_MR_CSharp_E1_float_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_expected_MR_CSharp_E1_float)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_MR_CSharp_E1_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_expected_MR_CSharp_E1_float, other as *const crate::mr::cs::std_expected_MR_CSharp_E1_float as *const crate::ffi::MR_C_std_expected_MR_CSharp_E1_float)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if this instance represents success, or false if it represents an error.
    ///
    /// Calls `MR_C_std_expected_MR_CSharp_E1_float_success()`.
    pub fn success(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_MR_CSharp_E1_float_success(self as *const Self as *const crate::ffi::MR_C_std_expected_MR_CSharp_E1_float)};
        crate::__check_exception();
        __ret
    }

    /// If this instance represents success, returns the stored `MR::CSharp::E1`. Otherwise null.
    ///
    /// Calls `MR_C_std_expected_MR_CSharp_E1_float_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a crate::ffi::MR_CSharp_E1>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_MR_CSharp_E1_float_value(self as *const Self as *const crate::ffi::MR_C_std_expected_MR_CSharp_E1_float)};
        crate::__check_exception();
        unsafe {(__ret as *const crate::ffi::MR_CSharp_E1).as_ref()}
    }

    /// If this instance represents an error, returns the stored `float`. Otherwise null.
    ///
    /// Calls `MR_C_std_expected_MR_CSharp_E1_float_error()`.
    /// The reference to this object might be preserved as the return value.
    pub fn error<'a>(&'a self) -> Option<&'a f32>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_MR_CSharp_E1_float_error(self as *const Self as *const crate::ffi::MR_C_std_expected_MR_CSharp_E1_float)};
        crate::__check_exception();
        unsafe {(__ret as *const f32).as_ref()}
    }

    /// If this instance represents success, returns the stored `MR::CSharp::E1`. Otherwise null. This version returns a mutable pointer.
    ///
    /// Calls `MR_C_std_expected_MR_CSharp_E1_float_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut crate::ffi::MR_CSharp_E1>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_MR_CSharp_E1_float_value_mut(self as *mut Self as *mut crate::ffi::MR_C_std_expected_MR_CSharp_E1_float)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::ffi::MR_CSharp_E1).as_mut()}
    }

    /// If this instance represents an error, returns the stored `float`. Otherwise null. This version returns a mutable pointer.
    ///
    /// Calls `MR_C_std_expected_MR_CSharp_E1_float_error_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn error_mut<'a>(&'a mut self) -> Option<&'a mut f32>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_MR_CSharp_E1_float_error_mut(self as *mut Self as *mut crate::ffi::MR_C_std_expected_MR_CSharp_E1_float)};
        crate::__check_exception();
        unsafe {(__ret as *mut f32).as_mut()}
    }

}

unsafe impl crate::CppCopy for std_expected_MR_CSharp_E1_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

