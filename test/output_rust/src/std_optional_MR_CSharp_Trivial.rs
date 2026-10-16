/// Stores either a single `MR::CSharp::Trivial` or nothing.
///
/// Generated from class `std::optional<MR::CSharp::Trivial>`. Heap-allocated instances are held in `Owned<std_optional_MR_CSharp_Trivial>`.
#[repr(transparent)]
pub struct std_optional_MR_CSharp_Trivial(crate::ffi::MR_C_std_optional_MR_CSharp_Trivial);

unsafe impl crate::CppClass for std_optional_MR_CSharp_Trivial
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_optional_MR_CSharp_Trivial_Destroy(ptr as *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial)}
}

impl std_optional_MR_CSharp_Trivial
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_optional_MR_CSharp_Trivial>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_CSharp_Trivial)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_optional_MR_CSharp_Trivial) -> crate::Owned<crate::mr::cs::std_optional_MR_CSharp_Trivial>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother(other as *const crate::mr::cs::std_optional_MR_CSharp_Trivial as *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_CSharp_Trivial)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom()`.
    pub fn construct_from(other: &crate::mr::c_sharp::Trivial) -> crate::Owned<crate::mr::cs::std_optional_MR_CSharp_Trivial>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom(other as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_optional_MR_CSharp_Trivial)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_Trivial_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_optional_MR_CSharp_Trivial)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_Trivial_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial, other as *const crate::mr::cs::std_optional_MR_CSharp_Trivial as *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial)};
        crate::__check_exception();
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_Trivial_AssignFrom()`.
    pub fn assign_from(&mut self, other: &crate::mr::c_sharp::Trivial)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_Trivial_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial, other as *const crate::mr::c_sharp::Trivial as *const crate::ffi::MR_CSharp_Trivial)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if this instance stores an object, as opposed to being empty.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_Trivial_has_value()`.
    pub fn has_value(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_Trivial_has_value(self as *const Self as *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial)};
        crate::__check_exception();
        __ret
    }

    /// The stored element or null if none, read-only.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_Trivial_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a crate::mr::c_sharp::Trivial>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_Trivial_value(self as *const Self as *const crate::ffi::MR_C_std_optional_MR_CSharp_Trivial)};
        crate::__check_exception();
        unsafe {(__ret as *const crate::mr::c_sharp::Trivial).as_ref()}
    }

    /// The stored element or null if none, mutable.
    ///
    /// Calls `MR_C_std_optional_MR_CSharp_Trivial_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::c_sharp::Trivial>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_optional_MR_CSharp_Trivial_value_mut(self as *mut Self as *mut crate::ffi::MR_C_std_optional_MR_CSharp_Trivial)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::mr::c_sharp::Trivial).as_mut()}
    }

}

impl crate::Owned<std_optional_MR_CSharp_Trivial>
{
    /// Converts to a Rust `Option`, taking the value out.
    pub fn into_option(mut self) -> Option<crate::Owned<crate::mr::c_sharp::Trivial>>
    {
        self.value_mut().map(|x| unsafe {crate::Owned::from_raw(crate::ffi::MR_CSharp_Trivial_ConstructFromAnother(x as *mut crate::mr::c_sharp::Trivial as *mut crate::ffi::MR_CSharp_Trivial) as *mut crate::mr::c_sharp::Trivial)})
    }
}

unsafe impl crate::CppCopy for std_optional_MR_CSharp_Trivial
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

