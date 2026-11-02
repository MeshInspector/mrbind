/// Generated from C++ container `std::vector<MR::InstantiateOnly::A>`.
///
/// Generated from class `std::vector<MR::InstantiateOnly::A>`. Heap-allocated instances are held in `Owned<std_vector_MR_InstantiateOnly_A>`.
#[repr(transparent)]
pub struct std_vector_MR_InstantiateOnly_A(crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A);

unsafe impl crate::CppClass for std_vector_MR_InstantiateOnly_A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)}
}

impl std_vector_MR_InstantiateOnly_A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_InstantiateOnly_A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_InstantiateOnly_A)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_InstantiateOnly_A) -> crate::Owned<crate::mr::cs::std_vector_MR_InstantiateOnly_A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_InstantiateOnly_A as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_InstantiateOnly_A)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_InstantiateOnly_A)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_InstantiateOnly_A as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_size(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)};
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_resize(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A, new_size)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)};
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A, new_capacity)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::mr::instantiate_only::A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_at(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A, i)};
        unsafe {&*(__ret as *const crate::mr::instantiate_only::A)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::mr::instantiate_only::A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A, i)};
        unsafe {&mut *(__ret as *mut crate::mr::instantiate_only::A)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a crate::mr::instantiate_only::A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_front(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)};
        unsafe {(__ret as *const crate::mr::instantiate_only::A).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::instantiate_only::A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)};
        unsafe {(__ret as *mut crate::mr::instantiate_only::A).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a crate::mr::instantiate_only::A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_back(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)};
        unsafe {(__ret as *const crate::mr::instantiate_only::A).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::instantiate_only::A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)};
        unsafe {(__ret as *mut crate::mr::instantiate_only::A).as_mut()}
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: &crate::mr::instantiate_only::A)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A, new_elem as *const crate::mr::instantiate_only::A as *const crate::ffi::MR_InstantiateOnly_A)};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: &crate::mr::instantiate_only::A)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A, position, new_elem as *const crate::mr::instantiate_only::A as *const crate::ffi::MR_InstantiateOnly_A)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_InstantiateOnly_A_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_InstantiateOnly_A, position)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_InstantiateOnly_A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

