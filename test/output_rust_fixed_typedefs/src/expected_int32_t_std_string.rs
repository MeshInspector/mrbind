/// Stores either a `int32_t` that represents success or a `std::string` that represents an error.
///
/// Generated from class `expected<int32_t, std::string>`. Heap-allocated instances are held in `Owned<expected_int32_t_std_string>`.
#[repr(transparent)]
pub struct expected_int32_t_std_string(crate::ffi::MR_C_expected_int32_t_std_string);

unsafe impl crate::CppClass for expected_int32_t_std_string
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_expected_int32_t_std_string_Destroy(ptr as *const crate::ffi::MR_C_expected_int32_t_std_string)}
}

impl expected_int32_t_std_string
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_expected_int32_t_std_string_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::expected_int32_t_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_int32_t_std_string_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_int32_t_std_string)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_expected_int32_t_std_string_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::expected_int32_t_std_string) -> crate::Owned<crate::mr::cs::expected_int32_t_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_int32_t_std_string_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::expected_int32_t_std_string as *mut crate::ffi::MR_C_expected_int32_t_std_string)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_int32_t_std_string)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_expected_int32_t_std_string_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::expected_int32_t_std_string)
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_int32_t_std_string_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_expected_int32_t_std_string, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::expected_int32_t_std_string as *mut crate::ffi::MR_C_expected_int32_t_std_string)};
        __ret
    }

    /// Returns true if this instance represents success, or false if it represents an error.
    ///
    /// Calls `MR_C_expected_int32_t_std_string_success()`.
    pub fn success(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_int32_t_std_string_success(self as *const Self as *const crate::ffi::MR_C_expected_int32_t_std_string)};
        __ret
    }

    /// If this instance represents success, returns the stored `int32_t`. Otherwise null.
    ///
    /// Calls `MR_C_expected_int32_t_std_string_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a i32>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_int32_t_std_string_value(self as *const Self as *const crate::ffi::MR_C_expected_int32_t_std_string)};
        unsafe {(__ret as *const i32).as_ref()}
    }

    /// If this instance represents an error, returns the stored `std::string`. Otherwise null.
    ///
    /// Calls `MR_C_expected_int32_t_std_string_error()`.
    /// The reference to this object might be preserved as the return value.
    pub fn error<'a>(&'a self) -> Option<&'a crate::mr::cs::std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_int32_t_std_string_error(self as *const Self as *const crate::ffi::MR_C_expected_int32_t_std_string)};
        unsafe {(__ret as *const crate::mr::cs::std_string).as_ref()}
    }

    /// If this instance represents success, returns the stored `int32_t`. Otherwise null. This version returns a mutable pointer.
    ///
    /// Calls `MR_C_expected_int32_t_std_string_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut i32>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_int32_t_std_string_value_mut(self as *mut Self as *mut crate::ffi::MR_C_expected_int32_t_std_string)};
        unsafe {(__ret as *mut i32).as_mut()}
    }

    /// If this instance represents an error, returns the stored `std::string`. Otherwise null. This version returns a mutable pointer.
    ///
    /// Calls `MR_C_expected_int32_t_std_string_error_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn error_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::cs::std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_int32_t_std_string_error_mut(self as *mut Self as *mut crate::ffi::MR_C_expected_int32_t_std_string)};
        unsafe {(__ret as *mut crate::mr::cs::std_string).as_mut()}
    }

    /// The value as `Ok`, or the error as `Err`.
    pub fn as_result<'a>(&'a self) -> Result<&'a i32, &'a crate::mr::cs::std_string>
    {
        let __this = self as *const Self as *const crate::ffi::MR_C_expected_int32_t_std_string;
        unsafe {match (crate::ffi::MR_C_expected_int32_t_std_string_value(__this) as *const i32).as_ref() {Some(x) => Ok(x), None => Err(&*(crate::ffi::MR_C_expected_int32_t_std_string_error(__this) as *const crate::mr::cs::std_string))}}
    }

    /// The value as `Ok`, or the error as `Err`, as mutable references.
    pub fn as_result_mut<'a>(&'a mut self) -> Result<&'a mut i32, &'a mut crate::mr::cs::std_string>
    {
        let __this = self as *mut Self as *mut crate::ffi::MR_C_expected_int32_t_std_string;
        unsafe {match (crate::ffi::MR_C_expected_int32_t_std_string_value_mut(__this) as *mut i32).as_mut() {Some(x) => Ok(x), None => Err(&mut *(crate::ffi::MR_C_expected_int32_t_std_string_error_mut(__this) as *mut crate::mr::cs::std_string))}}
    }

}

impl crate::Owned<expected_int32_t_std_string>
{
    /// Converts to a Rust `Result`, taking the value or the error out, so `?` works on the return values: `let mesh = mesh_load(...).into_result()?;`.
    pub fn into_result(mut self) -> Result<i32, String>
    {
        match self.as_result_mut() {Ok(x) => Ok(*x), Err(x) => Err(x.to_string())}
    }
}

unsafe impl crate::CppCopy for expected_int32_t_std_string
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

