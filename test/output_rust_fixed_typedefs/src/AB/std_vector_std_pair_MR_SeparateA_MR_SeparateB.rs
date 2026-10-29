/// Generated from C++ container `std::vector<std::pair<MR::SeparateA, MR::SeparateB>>`.
///
/// Generated from class `std::vector<std::pair<MR::SeparateA, MR::SeparateB>>`. Heap-allocated instances are held in `Owned<std_vector_std_pair_MR_SeparateA_MR_SeparateB>`.
#[repr(transparent)]
pub struct std_vector_std_pair_MR_SeparateA_MR_SeparateB(crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB);

unsafe impl crate::CppClass for std_vector_std_pair_MR_SeparateA_MR_SeparateB
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_Destroy(ptr as *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)}
}

impl std_vector_std_pair_MR_SeparateA_MR_SeparateB
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_std_pair_MR_SeparateA_MR_SeparateB>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_std_pair_MR_SeparateA_MR_SeparateB)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_std_pair_MR_SeparateA_MR_SeparateB) -> crate::Owned<crate::mr::cs::std_vector_std_pair_MR_SeparateA_MR_SeparateB>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_std_pair_MR_SeparateA_MR_SeparateB as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_std_pair_MR_SeparateA_MR_SeparateB)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_std_pair_MR_SeparateA_MR_SeparateB)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_std_pair_MR_SeparateA_MR_SeparateB as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_size(self as *const Self as *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// Resizes the container. The new elements if any are set to the specified value.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_resize_with_default_value()`.
    pub fn resize_with_default_value(&mut self, new_size: usize, value: &crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_resize_with_default_value(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, new_size, value as *const crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB as *const crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// The memory capacity, measued in the number of elements.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_capacity()`.
    pub fn capacity(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_capacity(self as *const Self as *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, new_capacity)};
        __ret
    }

    /// Shrinks the capacity to match the size.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_shrink_to_fit()`.
    pub fn shrink_to_fit(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_shrink_to_fit(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at(self as *const Self as *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, i)};
        unsafe {&*(__ret as *const crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, i)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front(self as *const Self as *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        unsafe {(__ret as *const crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        unsafe {(__ret as *mut crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back(self as *const Self as *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        unsafe {(__ret as *const crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        unsafe {(__ret as *mut crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB).as_mut()}
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: &crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, crate::ffi::MR_C_PassBy_Copy, new_elem as *const crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB as *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: &crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, position, crate::ffi::MR_C_PassBy_Copy, new_elem as *const crate::mr::cs::std_pair_MR_SeparateA_MR_SeparateB as *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB, position)};
        __ret
    }

    /// The begin iterator, const. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> *const crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// The begin iterator, mutable. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// The end iterator, const. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> *const crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end(self as *const Self as *const crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

    /// The end iterator, mutable. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> *mut crate::ffi::MR_C_std_pair_MR_SeparateA_MR_SeparateB
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_std_pair_MR_SeparateA_MR_SeparateB
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

