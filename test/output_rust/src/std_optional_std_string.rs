/// Stores either a single `std::string` or nothing.
///
/// Generated from class `std::optional<std::string>`. Heap-allocated instances are held in `Owned<std_optional_std_string>`.
#[repr(transparent)]
pub struct std_optional_std_string(crate::ffi::MR_C_std_optional_std_string);

unsafe impl crate::CppClass for std_optional_std_string
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_optional_std_string_Destroy(ptr as *const crate::ffi::MR_C_std_optional_std_string)}
}

impl std_optional_std_string
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_optional_std_string_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_optional_std_string>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_std_string_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_std_string)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_optional_std_string_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: Option<&crate::mr::cs::std_optional_std_string>) -> crate::Owned<crate::mr::cs::std_optional_std_string>
    {
        let (__pb_other, __ptr_other) = match other {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_optional_std_string as *mut crate::ffi::MR_C_std_optional_std_string), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_std_string_ConstructFromAnother(__pb_other, __ptr_other)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_std_string)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_optional_std_string_ConstructFrom()`. Some types are raw C types, see the C bindings for the details.
    pub unsafe fn construct_from(other: *const core::ffi::c_char, other_end: *const core::ffi::c_char) -> crate::Owned<crate::mr::cs::std_optional_std_string>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_std_string_ConstructFrom(other, other_end)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_std_string)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_optional_std_string_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: Option<&crate::mr::cs::std_optional_std_string>)
    {
        let (__pb_other, __ptr_other) = match other {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_optional_std_string as *mut crate::ffi::MR_C_std_optional_std_string), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_std_string_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_optional_std_string, __pb_other, __ptr_other)};
        crate::__check_exception();
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_optional_std_string_AssignFrom()`. Some types are raw C types, see the C bindings for the details.
    pub unsafe fn assign_from(&mut self, other: *const core::ffi::c_char, other_end: *const core::ffi::c_char)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_std_string_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_optional_std_string, other, other_end)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if this instance stores an object, as opposed to being empty.
    ///
    /// Calls `MR_C_std_optional_std_string_has_value()`.
    pub fn has_value(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_std_string_has_value(self as *const Self as *const crate::ffi::MR_C_std_optional_std_string)};
        crate::__check_exception();
        __ret
    }

    /// The stored element or null if none, read-only.
    ///
    /// Calls `MR_C_std_optional_std_string_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a crate::mr::cs::std_string>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_std_string_value(self as *const Self as *const crate::ffi::MR_C_std_optional_std_string)};
        crate::__check_exception();
        unsafe {(__ret as *const crate::mr::cs::std_string).as_ref()}
    }

    /// The stored element or null if none, mutable.
    ///
    /// Calls `MR_C_std_optional_std_string_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::cs::std_string>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_std_string_value_mut(self as *mut Self as *mut crate::ffi::MR_C_std_optional_std_string)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::mr::cs::std_string).as_mut()}
    }

}

impl crate::Owned<std_optional_std_string>
{
    /// Converts to a Rust `Option`, taking the value out.
    pub fn into_option(mut self) -> Option<String>
    {
        self.value_mut().map(|x| x.to_string())
    }
}

