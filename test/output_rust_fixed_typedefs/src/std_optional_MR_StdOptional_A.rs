/// Stores either a single `MR::StdOptional::A` or nothing.
///
/// Generated from class `std::optional<MR::StdOptional::A>`. Heap-allocated instances are held in `Owned<std_optional_MR_StdOptional_A>`.
#[repr(transparent)]
pub struct std_optional_MR_StdOptional_A(crate::ffi::MR_C_std_optional_MR_StdOptional_A);

unsafe impl crate::CppClass for std_optional_MR_StdOptional_A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_optional_MR_StdOptional_A_Destroy(ptr as *const crate::ffi::MR_C_std_optional_MR_StdOptional_A)}
}

impl std_optional_MR_StdOptional_A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_A)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_optional_MR_StdOptional_A) -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother(other as *const crate::mr::cs::std_optional_MR_StdOptional_A as *const crate::ffi::MR_C_std_optional_MR_StdOptional_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_A)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_A_ConstructFrom()`.
    pub fn construct_from(other: &crate::mr::std_optional::A) -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_A_ConstructFrom(other as *const crate::mr::std_optional::A as *const crate::ffi::MR_StdOptional_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_A)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_A_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_optional_MR_StdOptional_A)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_A, other as *const crate::mr::cs::std_optional_MR_StdOptional_A as *const crate::ffi::MR_C_std_optional_MR_StdOptional_A)};
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_A_AssignFrom()`.
    pub fn assign_from(&mut self, other: &crate::mr::std_optional::A)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_A_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_A, other as *const crate::mr::std_optional::A as *const crate::ffi::MR_StdOptional_A)};
        __ret
    }

    /// Returns true if this instance stores an object, as opposed to being empty.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_A_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_A_has_value(self as *const Self as *const crate::ffi::MR_C_std_optional_MR_StdOptional_A)};
        __ret
    }

    /// The stored element or null if none, read-only.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_A_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a crate::mr::std_optional::A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_A_value(self as *const Self as *const crate::ffi::MR_C_std_optional_MR_StdOptional_A)};
        unsafe {(__ret as *const crate::mr::std_optional::A).as_ref()}
    }

    /// The stored element or null if none, mutable.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_A_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::std_optional::A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_A_value_mut(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_A)};
        unsafe {(__ret as *mut crate::mr::std_optional::A).as_mut()}
    }

}

impl crate::Owned<std_optional_MR_StdOptional_A>
{
    /// Converts to a Rust `Option`, taking the value out.
    pub fn into_option(mut self) -> Option<crate::Owned<crate::mr::std_optional::A>>
    {
        self.value_mut().map(|x| unsafe {crate::Owned::from_raw(crate::ffi::MR_StdOptional_A_ConstructFromAnother(x as *mut crate::mr::std_optional::A as *mut crate::ffi::MR_StdOptional_A) as *mut crate::mr::std_optional::A)})
    }
}

unsafe impl crate::CppCopy for std_optional_MR_StdOptional_A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

