/// A fixed-size array of `MR::StdContainers::NonAssignable` of size 42.
///
/// Generated from class `std::array<MR::StdContainers::NonAssignable, 42>`. Heap-allocated instances are held in `Owned<std_array_MR_StdContainers_NonAssignable_42>`.
#[repr(transparent)]
pub struct std_array_MR_StdContainers_NonAssignable_42(crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42);

unsafe impl crate::CppClass for std_array_MR_StdContainers_NonAssignable_42
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42_Destroy(ptr as *const crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42)}
}

impl std_array_MR_StdContainers_NonAssignable_42
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_array_MR_StdContainers_NonAssignable_42>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_array_MR_StdContainers_NonAssignable_42)}
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::mr::std_containers::NonAssignable
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42_at(self as *const Self as *const crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42, i)};
        unsafe {&*(__ret as *const crate::mr::std_containers::NonAssignable)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::mr::std_containers::NonAssignable
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42, i)};
        unsafe {&mut *(__ret as *mut crate::mr::std_containers::NonAssignable)}
    }

    /// Returns a pointer to the continuous storage that holds all elements, read-only.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_data()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn data(&self) -> *const crate::ffi::MR_StdContainers_NonAssignable
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42_data(self as *const Self as *const crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42)};
        __ret
    }

    /// Returns a pointer to the continuous storage that holds all elements, mutable.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_data_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn data_mut(&mut self) -> *mut crate::ffi::MR_StdContainers_NonAssignable
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42_data_mut(self as *mut Self as *mut crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42)};
        __ret
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_begin()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> *const crate::ffi::MR_StdContainers_NonAssignable
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42_begin(self as *const Self as *const crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42)};
        __ret
    }

    /// The begin iterator, mutable.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_begin_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> *mut crate::ffi::MR_StdContainers_NonAssignable
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42)};
        __ret
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_end()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> *const crate::ffi::MR_StdContainers_NonAssignable
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42_end(self as *const Self as *const crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42)};
        __ret
    }

    /// The end iterator, mutable.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_NonAssignable_42_end_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> *mut crate::ffi::MR_StdContainers_NonAssignable
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_array_MR_StdContainers_NonAssignable_42)};
        __ret
    }

}

