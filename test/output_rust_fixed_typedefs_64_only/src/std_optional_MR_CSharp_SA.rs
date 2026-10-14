/// Stores either a single `MR::CSharp::SA` or nothing.
///
/// Generated from class `std::optional<MR::CSharp::SA>`. Heap-allocated instances are held in `Owned<std_optional_MR_CSharp_SA>`.
#[repr(transparent)]
pub struct std_optional_MR_CSharp_SA(crate::ffi::MR_C_std_optional_MR_CSharp_SA);

unsafe impl crate::CppClass for std_optional_MR_CSharp_SA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_optional_MR_CSharp_SA_Destroy(ptr as *const crate::ffi::MR_C_std_optional_MR_CSharp_SA)}
}

impl std_optional_MR_CSharp_SA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_SA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_optional_MR_CSharp_SA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_SA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_CSharp_SA)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_optional_MR_CSharp_SA) -> crate::Owned<crate::mr::cs::std_optional_MR_CSharp_SA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother(other as *const crate::mr::cs::std_optional_MR_CSharp_SA as *const crate::ffi::MR_C_std_optional_MR_CSharp_SA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_CSharp_SA)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_SA_ConstructFrom()`.
    pub fn construct_from(other: &crate::mr::c_sharp::SA) -> crate::Owned<crate::mr::cs::std_optional_MR_CSharp_SA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_SA_ConstructFrom(other as *const crate::mr::c_sharp::SA as *const crate::ffi::MR_CSharp_SA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_CSharp_SA)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_SA_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_optional_MR_CSharp_SA)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_SA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_CSharp_SA, other as *const crate::mr::cs::std_optional_MR_CSharp_SA as *const crate::ffi::MR_C_std_optional_MR_CSharp_SA)};
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_SA_AssignFrom()`.
    pub fn assign_from(&mut self, other: &crate::mr::c_sharp::SA)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_SA_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_CSharp_SA, other as *const crate::mr::c_sharp::SA as *const crate::ffi::MR_CSharp_SA)};
        __ret
    }

    /// Returns true if this instance stores an object, as opposed to being empty.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_SA_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_SA_has_value(self as *const Self as *const crate::ffi::MR_C_std_optional_MR_CSharp_SA)};
        __ret
    }

    /// The stored element or null if none, read-only.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_SA_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a crate::mr::c_sharp::SA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_SA_value(self as *const Self as *const crate::ffi::MR_C_std_optional_MR_CSharp_SA)};
        unsafe {(__ret as *const crate::mr::c_sharp::SA).as_ref()}
    }

    /// The stored element or null if none, mutable.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_SA_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::c_sharp::SA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_SA_value_mut(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_CSharp_SA)};
        unsafe {(__ret as *mut crate::mr::c_sharp::SA).as_mut()}
    }

}

unsafe impl crate::CppCopy for std_optional_MR_CSharp_SA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

