/// Stores either a single `int` or nothing.
///
/// Generated from class `std::optional<int>`. Heap-allocated instances are held in `Owned<std_optional_int>`.
#[repr(transparent)]
pub struct std_optional_int(crate::ffi::MR_C_std_optional_int);

unsafe impl crate::CppClass for std_optional_int
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_optional_int_Destroy(ptr as *const crate::ffi::MR_C_std_optional_int)}
}

impl std_optional_int
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_optional_int_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_optional_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_int_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_int)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_optional_int_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_optional_int) -> crate::Owned<crate::mr::cs::std_optional_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_int_ConstructFromAnother(other as *const crate::mr::cs::std_optional_int as *const crate::ffi::MR_C_std_optional_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_int)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_optional_int_ConstructFrom()`.
    pub fn construct_from(other: &core::ffi::c_int) -> crate::Owned<crate::mr::cs::std_optional_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_int_ConstructFrom(other as *const core::ffi::c_int as *const core::ffi::c_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_int)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_optional_int_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_optional_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_int_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_optional_int, other as *const crate::mr::cs::std_optional_int as *const crate::ffi::MR_C_std_optional_int)};
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_optional_int_AssignFrom()`.
    pub fn assign_from(&mut self, other: &core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_int_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_optional_int, other as *const core::ffi::c_int as *const core::ffi::c_int)};
        __ret
    }

    /// Returns true if this instance stores an object, as opposed to being empty.
    ///
    /// Calls `MR_C_std_optional_int_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_int_has_value(self as *const Self as *const crate::ffi::MR_C_std_optional_int)};
        __ret
    }

    /// The stored element or null if none, read-only.
    ///
    /// Calls `MR_C_std_optional_int_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_int_value(self as *const Self as *const crate::ffi::MR_C_std_optional_int)};
        unsafe {(__ret as *const core::ffi::c_int).as_ref()}
    }

    /// The stored element or null if none, mutable.
    ///
    /// Calls `MR_C_std_optional_int_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_int_value_mut(self as *mut Self as *mut crate::ffi::MR_C_std_optional_int)};
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

}

impl crate::Owned<std_optional_int>
{
    /// Converts to a Rust `Option`, taking the value out.
    pub fn into_option(mut self) -> Option<core::ffi::c_int>
    {
        self.value_mut().map(|x| *x)
    }
}

unsafe impl crate::CppCopy for std_optional_int
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

