/// Wraps a pointer to a single heap-allocated `int`.
///
/// Generated from class `std::unique_ptr<int>`. Heap-allocated instances are held in `Owned<std_unique_ptr_int>`.
#[repr(transparent)]
pub struct std_unique_ptr_int(crate::ffi::MR_C_std_unique_ptr_int);

unsafe impl crate::CppClass for std_unique_ptr_int
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_unique_ptr_int_Destroy(ptr as *const crate::ffi::MR_C_std_unique_ptr_int)}
}

impl std_unique_ptr_int
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_unique_ptr_int_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_unique_ptr_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_int_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_int)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_unique_ptr_int_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_unique_ptr_int) -> crate::Owned<crate::mr::cs::std_unique_ptr_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_int_ConstructFromAnother(other as *const crate::mr::cs::std_unique_ptr_int as *const crate::ffi::MR_C_std_unique_ptr_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_int)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_unique_ptr_int_ConstructFrom()`.
    pub fn construct_from(other: &mut core::ffi::c_int) -> crate::Owned<crate::mr::cs::std_unique_ptr_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_int_ConstructFrom(other as *mut core::ffi::c_int as *mut core::ffi::c_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_int)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_unique_ptr_int_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_unique_ptr_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_int_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_unique_ptr_int, other as *const crate::mr::cs::std_unique_ptr_int as *const crate::ffi::MR_C_std_unique_ptr_int)};
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_unique_ptr_int_AssignFrom()`.
    pub fn assign_from(&mut self, other: &mut core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_int_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_unique_ptr_int, other as *mut core::ffi::c_int as *mut core::ffi::c_int)};
        __ret
    }

    /// Returns the stored pointer, possibly null.
    ///
    /// Calls `MR_C_std_unique_ptr_int_get()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get<'a>(&'a self) -> Option<&'a mut core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_int_get(self as *const Self as *const crate::ffi::MR_C_std_unique_ptr_int)};
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

    /// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
    /// The returned pointer is owning! It must be deallocated using `MR_C_Free()`.
    ///
    /// Calls `MR_C_std_unique_ptr_int_release()`.
    pub fn release(&mut self) -> Option<&mut core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_int_release(self as *mut Self as *mut crate::ffi::MR_C_std_unique_ptr_int)};
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

}

unsafe impl crate::CppCopy for std_unique_ptr_int
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

