/// Stores a filesystem path.
///
/// Generated from class `std::filesystem::path`. Heap-allocated instances are held in `Owned<std_filesystem_path>`.
#[repr(transparent)]
pub struct std_filesystem_path(crate::ffi::MR_C_std_filesystem_path);

unsafe impl crate::CppClass for std_filesystem_path
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_filesystem_path_Destroy(ptr as *const crate::ffi::MR_C_std_filesystem_path)}
}

impl std_filesystem_path
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_filesystem_path_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_filesystem_path>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_filesystem_path_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_filesystem_path)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_filesystem_path_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_filesystem_path) -> crate::Owned<crate::mr::cs::std_filesystem_path>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_filesystem_path_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_filesystem_path as *mut crate::ffi::MR_C_std_filesystem_path)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_filesystem_path)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_filesystem_path_ConstructFrom()`.
    pub fn construct_from(other: &str) -> crate::Owned<crate::mr::cs::std_filesystem_path>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_filesystem_path_ConstructFrom(other.as_ptr() as *const core::ffi::c_char, other.as_ptr().wrapping_add(other.len()) as *const core::ffi::c_char)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_filesystem_path)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_filesystem_path_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_filesystem_path)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_filesystem_path_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_filesystem_path, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_filesystem_path as *mut crate::ffi::MR_C_std_filesystem_path)};
        crate::__check_exception();
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_filesystem_path_AssignFrom()`.
    pub fn assign_from(&mut self, other: &str)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_filesystem_path_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_filesystem_path, other.as_ptr() as *const core::ffi::c_char, other.as_ptr().wrapping_add(other.len()) as *const core::ffi::c_char)};
        crate::__check_exception();
        __ret
    }

    /// Get the contents as a UTF8-encoded string.
    ///
    /// Calls `MR_C_std_filesystem_path_string()`.
    pub fn string(&self) -> crate::Owned<crate::mr::cs::std_string>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_filesystem_path_string(self as *const Self as *const crate::ffi::MR_C_std_filesystem_path)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_string)}
    }

}

unsafe impl crate::CppCopy for std_filesystem_path
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

