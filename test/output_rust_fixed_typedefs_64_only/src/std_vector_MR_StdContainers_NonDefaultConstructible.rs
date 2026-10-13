/// Generated from C++ container `std::vector<MR::StdContainers::NonDefaultConstructible>`.
///
/// Generated from class `std::vector<MR::StdContainers::NonDefaultConstructible>`. Heap-allocated instances are held in `Owned<std_vector_MR_StdContainers_NonDefaultConstructible>`.
#[repr(transparent)]
pub struct std_vector_MR_StdContainers_NonDefaultConstructible(crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible);

unsafe impl crate::CppClass for std_vector_MR_StdContainers_NonDefaultConstructible
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)}
}

impl std_vector_MR_StdContainers_NonDefaultConstructible
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible) -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Resizes the container. The new elements if any are set to the specified value.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value()`.
    pub fn resize_with_default_value(&mut self, new_size: usize, value: &crate::mr::std_containers::NonDefaultConstructible)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, new_size, value as *const crate::mr::std_containers::NonDefaultConstructible as *const crate::ffi::MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// The memory capacity, measued in the number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity()`.
    pub fn capacity(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, new_capacity)};
        __ret
    }

    /// Shrinks the capacity to match the size.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit()`.
    pub fn shrink_to_fit(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::mr::std_containers::NonDefaultConstructible
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, i)};
        unsafe {&*(__ret as *const crate::mr::std_containers::NonDefaultConstructible)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::mr::std_containers::NonDefaultConstructible
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, i)};
        unsafe {&mut *(__ret as *mut crate::mr::std_containers::NonDefaultConstructible)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a crate::mr::std_containers::NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {(__ret as *const crate::mr::std_containers::NonDefaultConstructible).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::std_containers::NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {(__ret as *mut crate::mr::std_containers::NonDefaultConstructible).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a crate::mr::std_containers::NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {(__ret as *const crate::mr::std_containers::NonDefaultConstructible).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::std_containers::NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {(__ret as *mut crate::mr::std_containers::NonDefaultConstructible).as_mut()}
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: &crate::mr::std_containers::NonDefaultConstructible)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, new_elem as *const crate::mr::std_containers::NonDefaultConstructible as *const crate::ffi::MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: &crate::mr::std_containers::NonDefaultConstructible)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, position, new_elem as *const crate::mr::std_containers::NonDefaultConstructible as *const crate::ffi::MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, position)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_mutable_iter()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert_at_mutable_iter(&mut self, position: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator, new_elem: &crate::mr::std_containers::NonDefaultConstructible)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_mutable_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, position as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator, new_elem as *const crate::mr::std_containers::NonDefaultConstructible as *const crate::ffi::MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_mutable_iter()`.
    pub fn erase_at_mutable_iter(&mut self, position: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_mutable_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, position as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
        __ret
    }

    /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_iter()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert_at_iter(&mut self, position: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator, new_elem: &crate::mr::std_containers::NonDefaultConstructible)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, position as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator, new_elem as *const crate::mr::std_containers::NonDefaultConstructible as *const crate::ffi::MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_iter()`.
    pub fn erase_at_iter(&mut self, position: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, position as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
        __ret
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)}
    }

    /// Tests whether a const iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin()`.
    pub fn is_begin(&self, iter: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, iter as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
        __ret
    }

    /// The begin iterator, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator)}
    }

    /// Tests whether a mutable iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin_mut()`.
    pub fn is_begin_mut(&self, iter: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin_mut(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, iter as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
        __ret
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)}
    }

    /// Tests whether a const iterator is the end iterator.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end()`.
    pub fn is_end(&self, iter: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, iter as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
        __ret
    }

    /// The end iterator, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator)}
    }

    /// Tests whether a mutable iterator is the end iterator.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end_mut()`.
    pub fn is_end_mut(&self, iter: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end_mut(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, iter as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
        __ret
    }

    /// Convert a const iterator to an index.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index()`.
    pub fn to_index(&self, iter: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator) -> isize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, iter as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
        __ret
    }

    /// Convert a mutable iterator to an index.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index_mut()`.
    pub fn to_index_mut(&self, iter: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator) -> isize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index_mut(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, iter as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_StdContainers_NonDefaultConstructible
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Read-only iterator for `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`.
///
/// Generated from class `std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator`. Heap-allocated instances are held in `Owned<std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator>`.
#[repr(transparent)]
pub struct std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator);

unsafe impl crate::CppClass for std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)}
}

impl std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator) -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator, other as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
        __ret
    }

    /// Makes a const iterator from a mutable one.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable()`.
    pub fn from_mutable(iter: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator) -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable(iter as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)}
    }

    /// Dereferences a const iterator.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a crate::mr::std_containers::NonDefaultConstructible
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
        unsafe {&*(__ret as *const crate::mr::std_containers::NonDefaultConstructible)}
    }

    /// Increments a const iterator.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr()`.
    pub fn incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
        __ret
    }

    /// Decrements a const iterator.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr()`.
    pub fn decr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
        __ret
    }

    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_add_assign()`.
    pub fn add_assign(&mut self, delta: isize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_add_assign(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator, delta)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Mutable iterator for `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`.
///
/// Generated from class `std::vector<MR::StdContainers::NonDefaultConstructible>::iterator`. Heap-allocated instances are held in `Owned<std_vector_MR_StdContainers_NonDefaultConstructible_iterator>`.
#[repr(transparent)]
pub struct std_vector_MR_StdContainers_NonDefaultConstructible_iterator(crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator);

unsafe impl crate::CppClass for std_vector_MR_StdContainers_NonDefaultConstructible_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)}
}

impl std_vector_MR_StdContainers_NonDefaultConstructible_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator) -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator, other as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
        __ret
    }

    /// Dereferences a mutable iterator.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a mut crate::mr::std_containers::NonDefaultConstructible
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
        unsafe {&mut *(__ret as *mut crate::mr::std_containers::NonDefaultConstructible)}
    }

    /// Increments a mutable iterator.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr()`.
    pub fn incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
        __ret
    }

    /// Decrements a mutable iterator.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr()`.
    pub fn decr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
        __ret
    }

    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_add_assign()`.
    pub fn add_assign(&mut self, delta: isize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_add_assign(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator, delta)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_StdContainers_NonDefaultConstructible_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Computes the signed difference between two const iterators. Completes in constant time.
///
/// Calls `MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator()`.
pub fn op_sub_mr_c_std_vector_mr_std_containers_non_default_constructible_const_iterator(a: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator, b: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator) -> isize
{
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(a as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator, b as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
    __ret
}

/// Compares two const iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator()`.
pub fn op_equal_mr_c_std_vector_mr_std_containers_non_default_constructible_const_iterator(a: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator, b: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(a as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator, b as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator)};
    __ret
}

/// Computes the signed difference between two mutable iterators. Completes in constant time.
///
/// Calls `MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator()`.
pub fn op_sub_mr_c_std_vector_mr_std_containers_non_default_constructible_iterator(a: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator, b: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator) -> isize
{
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(a as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator, b as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
    __ret
}

/// Compares two mutable iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator()`.
pub fn op_equal_mr_c_std_vector_mr_std_containers_non_default_constructible_iterator(a: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator, b: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(a as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator, b as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible_iterator as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator)};
    __ret
}

