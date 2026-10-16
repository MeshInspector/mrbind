/// Stores either a `int` that represents success or a `std::string` that represents an error.
///
/// Generated from class `std::expected<int, std::string>`. Heap-allocated instances are held in `Owned<std_expected_int_std_string>`.
#[repr(transparent)]
pub struct std_expected_int_std_string(crate::ffi::MR_C_std_expected_int_std_string);

unsafe impl crate::CppClass for std_expected_int_std_string
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_expected_int_std_string_Destroy(ptr as *const crate::ffi::MR_C_std_expected_int_std_string)}
}

impl std_expected_int_std_string
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_expected_int_std_string_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_expected_int_std_string>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_int_std_string_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_expected_int_std_string)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_expected_int_std_string_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_expected_int_std_string) -> crate::Owned<crate::mr::cs::std_expected_int_std_string>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_int_std_string_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_expected_int_std_string as *mut crate::ffi::MR_C_std_expected_int_std_string)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_expected_int_std_string)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_expected_int_std_string_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_expected_int_std_string)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_int_std_string_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_expected_int_std_string, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_expected_int_std_string as *mut crate::ffi::MR_C_std_expected_int_std_string)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if this instance represents success, or false if it represents an error.
    ///
    /// Calls `MR_C_std_expected_int_std_string_success()`.
    pub fn success(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_int_std_string_success(self as *const Self as *const crate::ffi::MR_C_std_expected_int_std_string)};
        crate::__check_exception();
        __ret
    }

    /// If this instance represents success, returns the stored `int`. Otherwise null.
    ///
    /// Calls `MR_C_std_expected_int_std_string_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a core::ffi::c_int>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_int_std_string_value(self as *const Self as *const crate::ffi::MR_C_std_expected_int_std_string)};
        crate::__check_exception();
        unsafe {(__ret as *const core::ffi::c_int).as_ref()}
    }

    /// If this instance represents an error, returns the stored `std::string`. Otherwise null.
    ///
    /// Calls `MR_C_std_expected_int_std_string_error()`.
    /// The reference to this object might be preserved as the return value.
    pub fn error<'a>(&'a self) -> Option<&'a crate::mr::cs::std_string>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_int_std_string_error(self as *const Self as *const crate::ffi::MR_C_std_expected_int_std_string)};
        crate::__check_exception();
        unsafe {(__ret as *const crate::mr::cs::std_string).as_ref()}
    }

    /// If this instance represents success, returns the stored `int`. Otherwise null. This version returns a mutable pointer.
    ///
    /// Calls `MR_C_std_expected_int_std_string_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut core::ffi::c_int>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_int_std_string_value_mut(self as *mut Self as *mut crate::ffi::MR_C_std_expected_int_std_string)};
        crate::__check_exception();
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

    /// If this instance represents an error, returns the stored `std::string`. Otherwise null. This version returns a mutable pointer.
    ///
    /// Calls `MR_C_std_expected_int_std_string_error_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn error_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::cs::std_string>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_expected_int_std_string_error_mut(self as *mut Self as *mut crate::ffi::MR_C_std_expected_int_std_string)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::mr::cs::std_string).as_mut()}
    }

    /// The value as `Ok`, or the error as `Err`.
    pub fn as_result<'a>(&'a self) -> Result<&'a core::ffi::c_int, &'a crate::mr::cs::std_string>
    {
        let __this = self as *const Self as *const crate::ffi::MR_C_std_expected_int_std_string;
        unsafe {match (crate::ffi::MR_C_std_expected_int_std_string_value(__this) as *const core::ffi::c_int).as_ref() {Some(x) => Ok(x), None => Err(&*(crate::ffi::MR_C_std_expected_int_std_string_error(__this) as *const crate::mr::cs::std_string))}}
    }

    /// The value as `Ok`, or the error as `Err`, as mutable references.
    pub fn as_result_mut<'a>(&'a mut self) -> Result<&'a mut core::ffi::c_int, &'a mut crate::mr::cs::std_string>
    {
        let __this = self as *mut Self as *mut crate::ffi::MR_C_std_expected_int_std_string;
        unsafe {match (crate::ffi::MR_C_std_expected_int_std_string_value_mut(__this) as *mut core::ffi::c_int).as_mut() {Some(x) => Ok(x), None => Err(&mut *(crate::ffi::MR_C_std_expected_int_std_string_error_mut(__this) as *mut crate::mr::cs::std_string))}}
    }

}

impl crate::Owned<std_expected_int_std_string>
{
    /// Converts to a Rust `Result`, taking the value or the error out, so `?` works on the return values: `let mesh = mesh_load(...).into_result()?;`.
    pub fn into_result(mut self) -> Result<core::ffi::c_int, String>
    {
        match self.as_result_mut() {Ok(x) => Ok(*x), Err(x) => Err(x.to_string())}
    }
}

unsafe impl crate::CppCopy for std_expected_int_std_string
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

