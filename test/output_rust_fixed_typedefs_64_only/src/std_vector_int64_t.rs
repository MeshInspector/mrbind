/// Generated from C++ container `std::vector<MR_C_int64_t>`.
///
/// Generated from class `std::vector<MR_C_int64_t>`. Heap-allocated instances are held in `Owned<std_vector_int64_t>`.
#[repr(transparent)]
pub struct std_vector_int64_t(crate::ffi::MR_C_std_vector_int64_t);

unsafe impl crate::CppClass for std_vector_int64_t
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_int64_t_Destroy(ptr as *const crate::ffi::MR_C_std_vector_int64_t)}
}

impl std_vector_int64_t
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_int64_t_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_int64_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_int64_t_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_int64_t) -> crate::Owned<crate::mr::cs::std_vector_int64_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_int64_t as *mut crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_int64_t_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_int64_t)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_int64_t as *mut crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Construct from a range of elements.
    ///
    /// Calls `MR_C_std_vector_int64_t_ConstructFromRange()`.
    pub fn construct_from_range(ptr: Option<&i64>, size: usize) -> crate::Owned<crate::mr::cs::std_vector_int64_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_ConstructFromRange(ptr.map_or(core::ptr::null(), |r| r as *const i64 as *const i64), size)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t)}
    }

    /// Assign from a range of elements, overwriting previous contents.
    ///
    /// Calls `MR_C_std_vector_int64_t_AssignFromRange()`.
    pub fn assign_from_range(&mut self, ptr: Option<&i64>, size: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_AssignFromRange(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, ptr.map_or(core::ptr::null(), |r| r as *const i64 as *const i64), size)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_int64_t_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_size(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_int64_t_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_vector_int64_t_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_resize(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, new_size)};
        __ret
    }

    /// Resizes the container. The new elements if any are set to the specified value.
    ///
    /// Calls `MR_C_std_vector_int64_t_resize_with_default_value()`.
    pub fn resize_with_default_value(&mut self, new_size: usize, value: i64)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_resize_with_default_value(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, new_size, value)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_int64_t_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// The memory capacity, measued in the number of elements.
    ///
    /// Calls `MR_C_std_vector_int64_t_capacity()`.
    pub fn capacity(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_capacity(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_int64_t_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, new_capacity)};
        __ret
    }

    /// Shrinks the capacity to match the size.
    ///
    /// Calls `MR_C_std_vector_int64_t_shrink_to_fit()`.
    pub fn shrink_to_fit(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_shrink_to_fit(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_int64_t_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a i64
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_at(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t, i)};
        unsafe {&*(__ret as *const i64)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_int64_t_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut i64
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, i)};
        unsafe {&mut *(__ret as *mut i64)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_int64_t_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a i64>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_front(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {(__ret as *const i64).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_int64_t_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut i64>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {(__ret as *mut i64).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_int64_t_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a i64>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_back(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {(__ret as *const i64).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_int64_t_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut i64>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {(__ret as *mut i64).as_mut()}
    }

    /// Returns a pointer to the continuous storage that holds all elements, read-only.
    ///
    /// Calls `MR_C_std_vector_int64_t_data()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn data(&self) -> *const i64
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_data(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Returns a pointer to the continuous storage that holds all elements, mutable.
    ///
    /// Calls `MR_C_std_vector_int64_t_data_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn data_mut(&mut self) -> *mut i64
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_data_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_int64_t_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: i64)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, new_elem)};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_int64_t_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_int64_t_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: i64)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, position, new_elem)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_int64_t_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, position)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_int64_t_insert_at_mutable_iter()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert_at_mutable_iter(&mut self, position: &crate::mr::cs::std_vector_int64_t_iterator, new_elem: i64)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_insert_at_mutable_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, position as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator, new_elem)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_int64_t_erase_at_mutable_iter()`.
    pub fn erase_at_mutable_iter(&mut self, position: &crate::mr::cs::std_vector_int64_t_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_erase_at_mutable_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, position as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator)};
        __ret
    }

    /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
    ///
    /// Calls `MR_C_std_vector_int64_t_insert_at_iter()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert_at_iter(&mut self, position: &crate::mr::cs::std_vector_int64_t_const_iterator, new_elem: i64)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_insert_at_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, position as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator, new_elem)};
        __ret
    }

    /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
    ///
    /// Calls `MR_C_std_vector_int64_t_erase_at_iter()`.
    pub fn erase_at_iter(&mut self, position: &crate::mr::cs::std_vector_int64_t_const_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_erase_at_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, position as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
        __ret
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_std_vector_int64_t_begin()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> crate::Owned<crate::mr::cs::std_vector_int64_t_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t_const_iterator)}
    }

    /// Tests whether a const iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_vector_int64_t_is_begin()`.
    pub fn is_begin(&self, iter: &crate::mr::cs::std_vector_int64_t_const_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_is_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t, iter as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
        __ret
    }

    /// The begin iterator, mutable.
    ///
    /// Calls `MR_C_std_vector_int64_t_begin_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> crate::Owned<crate::mr::cs::std_vector_int64_t_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t_iterator)}
    }

    /// Tests whether a mutable iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_vector_int64_t_is_begin_mut()`.
    pub fn is_begin_mut(&self, iter: &crate::mr::cs::std_vector_int64_t_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_is_begin_mut(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t, iter as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator)};
        __ret
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_std_vector_int64_t_end()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> crate::Owned<crate::mr::cs::std_vector_int64_t_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_end(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t_const_iterator)}
    }

    /// Tests whether a const iterator is the end iterator.
    ///
    /// Calls `MR_C_std_vector_int64_t_is_end()`.
    pub fn is_end(&self, iter: &crate::mr::cs::std_vector_int64_t_const_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_is_end(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t, iter as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
        __ret
    }

    /// The end iterator, mutable.
    ///
    /// Calls `MR_C_std_vector_int64_t_end_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> crate::Owned<crate::mr::cs::std_vector_int64_t_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t_iterator)}
    }

    /// Tests whether a mutable iterator is the end iterator.
    ///
    /// Calls `MR_C_std_vector_int64_t_is_end_mut()`.
    pub fn is_end_mut(&self, iter: &crate::mr::cs::std_vector_int64_t_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_is_end_mut(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t, iter as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator)};
        __ret
    }

    /// Convert a const iterator to an index.
    ///
    /// Calls `MR_C_std_vector_int64_t_to_index()`.
    pub fn to_index(&self, iter: &crate::mr::cs::std_vector_int64_t_const_iterator) -> isize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_to_index(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t, iter as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
        __ret
    }

    /// Convert a mutable iterator to an index.
    ///
    /// Calls `MR_C_std_vector_int64_t_to_index_mut()`.
    pub fn to_index_mut(&self, iter: &crate::mr::cs::std_vector_int64_t_iterator) -> isize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_to_index_mut(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t, iter as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_int64_t
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Read-only iterator for `MR_C_std_vector_int64_t`.
///
/// Generated from class `std::vector<MR_C_int64_t>::const_iterator`. Heap-allocated instances are held in `Owned<std_vector_int64_t_const_iterator>`.
#[repr(transparent)]
pub struct std_vector_int64_t_const_iterator(crate::ffi::MR_C_std_vector_int64_t_const_iterator);

unsafe impl crate::CppClass for std_vector_int64_t_const_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_int64_t_const_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator)}
}

impl std_vector_int64_t_const_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_int64_t_const_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_int64_t_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_const_iterator_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t_const_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_int64_t_const_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_int64_t_const_iterator) -> crate::Owned<crate::mr::cs::std_vector_int64_t_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_const_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t_const_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_int64_t_const_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_int64_t_const_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_const_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t_const_iterator, other as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
        __ret
    }

    /// Makes a const iterator from a mutable one.
    ///
    /// Calls `MR_C_std_vector_int64_t_const_iterator_from_mutable()`.
    pub fn from_mutable(iter: &crate::mr::cs::std_vector_int64_t_iterator) -> crate::Owned<crate::mr::cs::std_vector_int64_t_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_const_iterator_from_mutable(iter as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t_const_iterator)}
    }

    /// Dereferences a const iterator.
    ///
    /// Calls `MR_C_std_vector_int64_t_const_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a i64
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_const_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
        unsafe {&*(__ret as *const i64)}
    }

    /// Increments a const iterator.
    ///
    /// Calls `MR_C_std_vector_int64_t_const_iterator_incr()`.
    pub fn incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_const_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
        __ret
    }

    /// Decrements a const iterator.
    ///
    /// Calls `MR_C_std_vector_int64_t_const_iterator_decr()`.
    pub fn decr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_const_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
        __ret
    }

    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
    ///
    /// Calls `MR_C_std_vector_int64_t_const_iterator_add_assign()`.
    pub fn add_assign(&mut self, delta: isize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_const_iterator_add_assign(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t_const_iterator, delta)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_int64_t_const_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Mutable iterator for `MR_C_std_vector_int64_t`.
///
/// Generated from class `std::vector<MR_C_int64_t>::iterator`. Heap-allocated instances are held in `Owned<std_vector_int64_t_iterator>`.
#[repr(transparent)]
pub struct std_vector_int64_t_iterator(crate::ffi::MR_C_std_vector_int64_t_iterator);

unsafe impl crate::CppClass for std_vector_int64_t_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_int64_t_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_vector_int64_t_iterator)}
}

impl std_vector_int64_t_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_int64_t_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_int64_t_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_iterator_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_int64_t_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_int64_t_iterator) -> crate::Owned<crate::mr::cs::std_vector_int64_t_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_int64_t_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_int64_t_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t_iterator, other as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator)};
        __ret
    }

    /// Dereferences a mutable iterator.
    ///
    /// Calls `MR_C_std_vector_int64_t_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a mut i64
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t_iterator)};
        unsafe {&mut *(__ret as *mut i64)}
    }

    /// Increments a mutable iterator.
    ///
    /// Calls `MR_C_std_vector_int64_t_iterator_incr()`.
    pub fn incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t_iterator)};
        __ret
    }

    /// Decrements a mutable iterator.
    ///
    /// Calls `MR_C_std_vector_int64_t_iterator_decr()`.
    pub fn decr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t_iterator)};
        __ret
    }

    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
    ///
    /// Calls `MR_C_std_vector_int64_t_iterator_add_assign()`.
    pub fn add_assign(&mut self, delta: isize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_iterator_add_assign(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t_iterator, delta)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_int64_t_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Computes the signed difference between two const iterators. Completes in constant time.
///
/// Calls `MR_C_sub_MR_C_std_vector_int64_t_const_iterator()`.
pub fn op_sub_mr_c_std_vector_int64_t_const_iterator(a: &crate::mr::cs::std_vector_int64_t_const_iterator, b: &crate::mr::cs::std_vector_int64_t_const_iterator) -> isize
{
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_C_std_vector_int64_t_const_iterator(a as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator, b as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
    __ret
}

/// Compares two const iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_vector_int64_t_const_iterator()`.
pub fn op_equal_mr_c_std_vector_int64_t_const_iterator(a: &crate::mr::cs::std_vector_int64_t_const_iterator, b: &crate::mr::cs::std_vector_int64_t_const_iterator) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_vector_int64_t_const_iterator(a as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator, b as *const crate::mr::cs::std_vector_int64_t_const_iterator as *const crate::ffi::MR_C_std_vector_int64_t_const_iterator)};
    __ret
}

/// Computes the signed difference between two mutable iterators. Completes in constant time.
///
/// Calls `MR_C_sub_MR_C_std_vector_int64_t_iterator()`.
pub fn op_sub_mr_c_std_vector_int64_t_iterator(a: &crate::mr::cs::std_vector_int64_t_iterator, b: &crate::mr::cs::std_vector_int64_t_iterator) -> isize
{
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_C_std_vector_int64_t_iterator(a as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator, b as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator)};
    __ret
}

/// Compares two mutable iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_vector_int64_t_iterator()`.
pub fn op_equal_mr_c_std_vector_int64_t_iterator(a: &crate::mr::cs::std_vector_int64_t_iterator, b: &crate::mr::cs::std_vector_int64_t_iterator) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_vector_int64_t_iterator(a as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator, b as *const crate::mr::cs::std_vector_int64_t_iterator as *const crate::ffi::MR_C_std_vector_int64_t_iterator)};
    __ret
}

