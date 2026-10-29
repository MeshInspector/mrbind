/// Generated from C++ container `std::vector<MR::SeparateA>`.
///
/// Generated from class `std::vector<MR::SeparateA>`. Heap-allocated instances are held in `Owned<std_vector_MR_SeparateA>`.
#[repr(transparent)]
pub struct std_vector_MR_SeparateA(crate::ffi::MR_C_std_vector_MR_SeparateA);

unsafe impl crate::CppClass for std_vector_MR_SeparateA
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_SeparateA_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_SeparateA)}
}

impl std_vector_MR_SeparateA
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_SeparateA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_SeparateA)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_SeparateA) -> crate::Owned<crate::mr::cs::std_vector_MR_SeparateA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_SeparateA as *mut crate::ffi::MR_C_std_vector_MR_SeparateA)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_SeparateA)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_SeparateA)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_SeparateA, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_SeparateA as *mut crate::ffi::MR_C_std_vector_MR_SeparateA)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_size(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_SeparateA)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_SeparateA)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_SeparateA)};
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_SeparateA, new_capacity)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::mr::SeparateA
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_at(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_SeparateA, i)};
        unsafe {&*(__ret as *const crate::mr::SeparateA)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::mr::SeparateA
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_SeparateA, i)};
        unsafe {&mut *(__ret as *mut crate::mr::SeparateA)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a crate::mr::SeparateA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_front(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_SeparateA)};
        unsafe {(__ret as *const crate::mr::SeparateA).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::SeparateA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_SeparateA)};
        unsafe {(__ret as *mut crate::mr::SeparateA).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a crate::mr::SeparateA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_back(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_SeparateA)};
        unsafe {(__ret as *const crate::mr::SeparateA).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::SeparateA>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_SeparateA)};
        unsafe {(__ret as *mut crate::mr::SeparateA).as_mut()}
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: &crate::mr::SeparateA)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_SeparateA, crate::ffi::MR_C_PassBy_Copy, new_elem as *const crate::mr::SeparateA as *mut crate::ffi::MR_SeparateA)};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_SeparateA)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: &crate::mr::SeparateA)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_SeparateA, position, crate::ffi::MR_C_PassBy_Copy, new_elem as *const crate::mr::SeparateA as *mut crate::ffi::MR_SeparateA)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_SeparateA_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_SeparateA_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_SeparateA, position)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_SeparateA
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

