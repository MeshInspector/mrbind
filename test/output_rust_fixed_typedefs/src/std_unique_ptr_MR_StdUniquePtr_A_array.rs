/// Wraps a pointer to a heap-allocated array of type `MR::StdUniquePtr::A`, of an unspecified size.
/// Doesn't store the size, it has to be obtained separately.
///
/// Generated from class `std::unique_ptr<MR::StdUniquePtr::A[]>`. Heap-allocated instances are held in `Owned<std_unique_ptr_MR_StdUniquePtr_A_array>`.
#[repr(transparent)]
pub struct std_unique_ptr_MR_StdUniquePtr_A_array(crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array);

unsafe impl crate::CppClass for std_unique_ptr_MR_StdUniquePtr_A_array
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy(ptr as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array)}
}

impl std_unique_ptr_MR_StdUniquePtr_A_array
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A_array>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A_array)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A_array) -> crate::Owned<crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A_array>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother(other as *const crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A_array as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A_array)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom()`.
    pub fn construct_from(other: crate::Owned<crate::mr::std_unique_ptr::A>) -> crate::Owned<crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A_array>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom(other.into_raw() as *mut crate::ffi::MR_StdUniquePtr_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A_array)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A_array)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array, other as *const crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A_array as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array)};
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom()`.
    pub fn assign_from(&mut self, other: crate::Owned<crate::mr::std_unique_ptr::A>)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array, other.into_raw() as *mut crate::ffi::MR_StdUniquePtr_A)};
        __ret
    }

    /// Returns the stored pointer, possibly null.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_get()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get<'a>(&'a self) -> Option<&'a mut crate::mr::std_unique_ptr::A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_get(self as *const Self as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array)};
        unsafe {(__ret as *mut crate::mr::std_unique_ptr::A).as_mut()}
    }

    /// Returns an element from the stored array. The stored pointer must not be null.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a mut crate::mr::std_unique_ptr::A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_at(self as *const Self as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array, i)};
        unsafe {&mut *(__ret as *mut crate::mr::std_unique_ptr::A)}
    }

    /// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
    /// The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_DestroyArray()`.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_release()`.
    pub fn release(&mut self) -> Option<&mut crate::mr::std_unique_ptr::A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_release(self as *mut Self as *mut crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_array)};
        unsafe {(__ret as *mut crate::mr::std_unique_ptr::A).as_mut()}
    }

}

unsafe impl crate::CppCopy for std_unique_ptr_MR_StdUniquePtr_A_array
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

