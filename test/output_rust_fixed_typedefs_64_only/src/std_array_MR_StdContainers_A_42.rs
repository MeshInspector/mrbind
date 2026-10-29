/// A fixed-size array of `MR::StdContainers::A` of size 42.
///
/// Generated from class `std::array<MR::StdContainers::A, 42>`. Heap-allocated instances are held in `Owned<std_array_MR_StdContainers_A_42>`.
#[repr(transparent)]
pub struct std_array_MR_StdContainers_A_42(crate::ffi::MR_C_std_array_MR_StdContainers_A_42);

unsafe impl crate::CppClass for std_array_MR_StdContainers_A_42
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_array_MR_StdContainers_A_42_Destroy(ptr as *const crate::ffi::MR_C_std_array_MR_StdContainers_A_42)}
}

impl std_array_MR_StdContainers_A_42
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_array_MR_StdContainers_A_42>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_A_42_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_array_MR_StdContainers_A_42)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_array_MR_StdContainers_A_42) -> crate::Owned<crate::mr::cs::std_array_MR_StdContainers_A_42>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_A_42_ConstructFromAnother(other as *const crate::mr::cs::std_array_MR_StdContainers_A_42 as *const crate::ffi::MR_C_std_array_MR_StdContainers_A_42)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_array_MR_StdContainers_A_42)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_A_42_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_array_MR_StdContainers_A_42)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_A_42_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_array_MR_StdContainers_A_42, other as *const crate::mr::cs::std_array_MR_StdContainers_A_42 as *const crate::ffi::MR_C_std_array_MR_StdContainers_A_42)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_A_42_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::mr::std_containers::A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_A_42_at(self as *const Self as *const crate::ffi::MR_C_std_array_MR_StdContainers_A_42, i)};
        unsafe {&*(__ret as *const crate::mr::std_containers::A)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_A_42_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::mr::std_containers::A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_A_42_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_array_MR_StdContainers_A_42, i)};
        unsafe {&mut *(__ret as *mut crate::mr::std_containers::A)}
    }

    /// Returns a pointer to the continuous storage that holds all elements, read-only.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_A_42_data()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn data(&self) -> *const crate::ffi::MR_StdContainers_A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_A_42_data(self as *const Self as *const crate::ffi::MR_C_std_array_MR_StdContainers_A_42)};
        __ret
    }

    /// Returns a pointer to the continuous storage that holds all elements, mutable.
    ///
    /// Calls `MR_C_std_array_MR_StdContainers_A_42_data_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn data_mut(&mut self) -> *mut crate::ffi::MR_StdContainers_A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_array_MR_StdContainers_A_42_data_mut(self as *mut Self as *mut crate::ffi::MR_C_std_array_MR_StdContainers_A_42)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_array_MR_StdContainers_A_42
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

