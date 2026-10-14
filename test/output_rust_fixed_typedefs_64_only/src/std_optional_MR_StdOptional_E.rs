/// Stores either a single `MR::StdOptional::E` or nothing.
///
/// Generated from class `std::optional<MR::StdOptional::E>`. Heap-allocated instances are held in `Owned<std_optional_MR_StdOptional_E>`.
#[repr(transparent)]
pub struct std_optional_MR_StdOptional_E(crate::ffi::MR_C_std_optional_MR_StdOptional_E);

unsafe impl crate::CppClass for std_optional_MR_StdOptional_E
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_optional_MR_StdOptional_E_Destroy(ptr as *const crate::ffi::MR_C_std_optional_MR_StdOptional_E)}
}

impl std_optional_MR_StdOptional_E
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_E_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_E>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_E_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_E)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_optional_MR_StdOptional_E) -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_E>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(other as *const crate::mr::cs::std_optional_MR_StdOptional_E as *const crate::ffi::MR_C_std_optional_MR_StdOptional_E)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_E)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_E_ConstructFrom()`.
    pub fn construct_from(other: &crate::ffi::MR_StdOptional_E) -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_E>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_E_ConstructFrom(other as *const crate::ffi::MR_StdOptional_E as *const crate::ffi::MR_StdOptional_E)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_E)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_E_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_optional_MR_StdOptional_E)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_E_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_E, other as *const crate::mr::cs::std_optional_MR_StdOptional_E as *const crate::ffi::MR_C_std_optional_MR_StdOptional_E)};
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_E_AssignFrom()`.
    pub fn assign_from(&mut self, other: &crate::ffi::MR_StdOptional_E)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_E_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_E, other as *const crate::ffi::MR_StdOptional_E as *const crate::ffi::MR_StdOptional_E)};
        __ret
    }

    /// Returns true if this instance stores an object, as opposed to being empty.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_E_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_E_has_value(self as *const Self as *const crate::ffi::MR_C_std_optional_MR_StdOptional_E)};
        __ret
    }

    /// The stored element or null if none, read-only.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_E_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a crate::ffi::MR_StdOptional_E>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_E_value(self as *const Self as *const crate::ffi::MR_C_std_optional_MR_StdOptional_E)};
        unsafe {(__ret as *const crate::ffi::MR_StdOptional_E).as_ref()}
    }

    /// The stored element or null if none, mutable.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_E_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut crate::ffi::MR_StdOptional_E>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_E_value_mut(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_E)};
        unsafe {(__ret as *mut crate::ffi::MR_StdOptional_E).as_mut()}
    }

}

unsafe impl crate::CppCopy for std_optional_MR_StdOptional_E
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

