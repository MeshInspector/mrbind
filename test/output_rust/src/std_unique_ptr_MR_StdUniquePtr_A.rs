/// Wraps a pointer to a single heap-allocated `MR::StdUniquePtr::A`.
///
/// Generated from class `std::unique_ptr<MR::StdUniquePtr::A>`. Heap-allocated instances are held in `Owned<std_unique_ptr_MR_StdUniquePtr_A>`.
#[repr(transparent)]
pub struct std_unique_ptr_MR_StdUniquePtr_A(crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A);

unsafe impl crate::CppClass for std_unique_ptr_MR_StdUniquePtr_A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy(ptr as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A)}
}

impl std_unique_ptr_MR_StdUniquePtr_A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A) -> crate::Owned<crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother(other as *const crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A)}
    }

    /// Constructs a new instance.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom()`.
    pub fn construct_from(other: crate::Owned<crate::mr::std_unique_ptr::A>) -> crate::Owned<crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom(other.into_raw() as *mut crate::ffi::MR_StdUniquePtr_A)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A, other as *const crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A)};
        crate::__check_exception();
        __ret
    }

    /// Assigns the contents.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFrom()`.
    pub fn assign_from(&mut self, other: crate::Owned<crate::mr::std_unique_ptr::A>)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFrom(self as *mut Self as *mut crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A, other.into_raw() as *mut crate::ffi::MR_StdUniquePtr_A)};
        crate::__check_exception();
        __ret
    }

    /// Returns the stored pointer, possibly null.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_get()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get<'a>(&'a self) -> Option<&'a mut crate::mr::std_unique_ptr::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_get(self as *const Self as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::mr::std_unique_ptr::A).as_mut()}
    }

    /// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
    /// The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_Destroy()`.
    ///
    /// Calls `MR_C_std_unique_ptr_MR_StdUniquePtr_A_release()`.
    pub fn release(&mut self) -> Option<&mut crate::mr::std_unique_ptr::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A_release(self as *mut Self as *mut crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::mr::std_unique_ptr::A).as_mut()}
    }

}

unsafe impl crate::CppCopy for std_unique_ptr_MR_StdUniquePtr_A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

