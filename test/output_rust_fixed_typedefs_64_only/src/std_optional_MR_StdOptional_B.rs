/// Stores either a single `MR::StdOptional::B` or nothing.
///
/// Generated from class `std::optional<MR::StdOptional::B>`. Heap-allocated instances are held in `Owned<std_optional_MR_StdOptional_B>`.
#[repr(transparent)]
pub struct std_optional_MR_StdOptional_B(crate::ffi::MR_C_std_optional_MR_StdOptional_B);

unsafe impl crate::CppClass for std_optional_MR_StdOptional_B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_optional_MR_StdOptional_B_Destroy(ptr as *const crate::ffi::MR_C_std_optional_MR_StdOptional_B)}
}

impl std_optional_MR_StdOptional_B
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_B_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_B>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_B_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_B)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: Option<&crate::mr::cs::std_optional_MR_StdOptional_B>) -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_B>
    {
        let (__pb_other, __ptr_other) = match other {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_optional_MR_StdOptional_B as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_B), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother(__pb_other, __ptr_other)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_B)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_B_ConstructFrom()`.
    pub fn construct_from(other: Option<&crate::mr::std_optional::B>) -> crate::Owned<crate::mr::cs::std_optional_MR_StdOptional_B>
    {
        let (__pb_other, __ptr_other) = match other {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::std_optional::B as *mut crate::ffi::MR_StdOptional_B), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_B_ConstructFrom(__pb_other, __ptr_other)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_StdOptional_B)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_B_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: Option<&crate::mr::cs::std_optional_MR_StdOptional_B>)
    {
        let (__pb_other, __ptr_other) = match other {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::cs::std_optional_MR_StdOptional_B as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_B), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_B_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_B, __pb_other, __ptr_other)};
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_B_AssignFrom()`.
    pub fn assign_from(&mut self, other: Option<&crate::mr::std_optional::B>)
    {
        let (__pb_other, __ptr_other) = match other {Some(r) => (crate::ffi::MR_C_PassBy_Copy, r as *const crate::mr::std_optional::B as *mut crate::ffi::MR_StdOptional_B), None => (crate::ffi::MR_C_PassBy_NoObject, core::ptr::null_mut())};
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_B_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_B, __pb_other, __ptr_other)};
        __ret
    }

    /// Returns true if this instance stores an object, as opposed to being empty.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_B_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_B_has_value(self as *const Self as *const crate::ffi::MR_C_std_optional_MR_StdOptional_B)};
        __ret
    }

    /// The stored element or null if none, read-only.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_B_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a crate::mr::std_optional::B>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_B_value(self as *const Self as *const crate::ffi::MR_C_std_optional_MR_StdOptional_B)};
        unsafe {(__ret as *const crate::mr::std_optional::B).as_ref()}
    }

    /// The stored element or null if none, mutable.
    ///
    /// Calls `MR_C_std_optional_MR_StdOptional_B_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::std_optional::B>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_StdOptional_B_value_mut(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_StdOptional_B)};
        unsafe {(__ret as *mut crate::mr::std_optional::B).as_mut()}
    }

}

