/// Stores two objects: `int` and `int`.
///
/// Generated from class `std::pair<int, std::string>`. Heap-allocated instances are held in `Owned<std_pair_int_std_string>`.
#[repr(transparent)]
pub struct std_pair_int_std_string(crate::ffi::MR_C_std_pair_int_std_string);

unsafe impl crate::CppClass for std_pair_int_std_string
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_pair_int_std_string_Destroy(ptr as *const crate::ffi::MR_C_std_pair_int_std_string)}
}

impl std_pair_int_std_string
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_pair_int_std_string_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_pair_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int_std_string_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_int_std_string)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_pair_int_std_string_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_pair_int_std_string) -> crate::Owned<crate::mr::cs::std_pair_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int_std_string_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_pair_int_std_string as *mut crate::ffi::MR_C_std_pair_int_std_string)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_int_std_string)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_pair_int_std_string_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_pair_int_std_string)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int_std_string_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_pair_int_std_string, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_pair_int_std_string as *mut crate::ffi::MR_C_std_pair_int_std_string)};
        __ret
    }

    /// Constructs the pair elementwise.
    ///
    /// Calls `MR_C_std_pair_int_std_string_Construct()`.
    /// The reference to the parameter `second` might be preserved in the constructed object.
    pub fn construct(first: core::ffi::c_int, second: &str) -> crate::Owned<crate::mr::cs::std_pair_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int_std_string_Construct(first, second.as_ptr() as *const core::ffi::c_char, second.as_ptr().wrapping_add(second.len()) as *const core::ffi::c_char)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_int_std_string)}
    }

    /// The first of the two elements, read-only.
    ///
    /// Calls `MR_C_std_pair_int_std_string_first()`.
    /// The reference to this object might be preserved as the return value.
    pub fn first<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int_std_string_first(self as *const Self as *const crate::ffi::MR_C_std_pair_int_std_string)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// The first of the two elements, mutable.
    ///
    /// Calls `MR_C_std_pair_int_std_string_first_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn first_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int_std_string_first_mut(self as *mut Self as *mut crate::ffi::MR_C_std_pair_int_std_string)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// The second of the two elements, read-only.
    ///
    /// Calls `MR_C_std_pair_int_std_string_second()`.
    /// The reference to this object might be preserved as the return value.
    pub fn second<'a>(&'a self) -> &'a crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int_std_string_second(self as *const Self as *const crate::ffi::MR_C_std_pair_int_std_string)};
        unsafe {&*(__ret as *const crate::mr::cs::std_string)}
    }

    /// The second of the two elements, mutable.
    ///
    /// Calls `MR_C_std_pair_int_std_string_second_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn second_mut<'a>(&'a mut self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int_std_string_second_mut(self as *mut Self as *mut crate::ffi::MR_C_std_pair_int_std_string)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

}

unsafe impl crate::CppCopy for std_pair_int_std_string
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

