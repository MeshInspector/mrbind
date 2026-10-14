/// Stores 2 objects: `int`, `std::string`.
///
/// Generated from class `std::tuple<int, std::string>`. Heap-allocated instances are held in `Owned<std_tuple_int_std_string>`.
#[repr(transparent)]
pub struct std_tuple_int_std_string(crate::ffi::MR_C_std_tuple_int_std_string);

unsafe impl crate::CppClass for std_tuple_int_std_string
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_tuple_int_std_string_Destroy(ptr as *const crate::ffi::MR_C_std_tuple_int_std_string)}
}

impl std_tuple_int_std_string
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_tuple_int_std_string_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_tuple_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_std_string_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int_std_string)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_tuple_int_std_string_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_tuple_int_std_string) -> crate::Owned<crate::mr::cs::std_tuple_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_std_string_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_tuple_int_std_string as *mut crate::ffi::MR_C_std_tuple_int_std_string)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int_std_string)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_tuple_int_std_string_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_tuple_int_std_string)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_std_string_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_tuple_int_std_string, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_tuple_int_std_string as *mut crate::ffi::MR_C_std_tuple_int_std_string)};
        __ret
    }

    /// Constructs the tuple elementwise.
    ///
    /// Calls `MR_C_std_tuple_int_std_string_Construct()`.
    /// The reference to the parameter `_1` might be preserved in the constructed object.
    pub fn construct(_0: core::ffi::c_int, _1: &str) -> crate::Owned<crate::mr::cs::std_tuple_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_std_string_Construct(_0, _1.as_ptr() as *const core::ffi::c_char, _1.as_ptr().wrapping_add(_1.len()) as *const core::ffi::c_char)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int_std_string)}
    }

    /// The element 0, of type `int`, read-only.
    ///
    /// Calls `MR_C_std_tuple_int_std_string_get_int()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_std_string_get_int(self as *const Self as *const crate::ffi::MR_C_std_tuple_int_std_string)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// The element 0, of type `int`, mutable.
    ///
    /// Calls `MR_C_std_tuple_int_std_string_get_int_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_std_string_get_int_mut(self as *mut Self as *mut crate::ffi::MR_C_std_tuple_int_std_string)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// The element 1, of type `std::string`, read-only.
    ///
    /// Calls `MR_C_std_tuple_int_std_string_get_std_string()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_std_string<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_std_string_get_std_string(self as *const Self as *const crate::ffi::MR_C_std_tuple_int_std_string)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// The element 1, of type `std::string`, mutable.
    ///
    /// Calls `MR_C_std_tuple_int_std_string_get_std_string_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_std_string_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_std_string_get_std_string_mut(self as *mut Self as *mut crate::ffi::MR_C_std_tuple_int_std_string)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

}

unsafe impl crate::CppCopy for std_tuple_int_std_string
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

