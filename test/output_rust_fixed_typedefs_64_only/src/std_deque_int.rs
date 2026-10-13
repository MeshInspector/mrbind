/// Generated from C++ container `std::deque<int>`.
///
/// Generated from class `std::deque<int>`. Heap-allocated instances are held in `Owned<std_deque_int>`.
#[repr(transparent)]
pub struct std_deque_int(crate::ffi::MR_C_std_deque_int);

unsafe impl crate::CppClass for std_deque_int
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_deque_int_Destroy(ptr as *const crate::ffi::MR_C_std_deque_int)}
}

impl std_deque_int
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_deque_int_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_deque_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_deque_int_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_deque_int) -> crate::Owned<crate::mr::cs::std_deque_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_deque_int as *mut crate::ffi::MR_C_std_deque_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_deque_int_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_deque_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_deque_int as *mut crate::ffi::MR_C_std_deque_int)};
        __ret
    }

    /// Construct from a range of elements.
    ///
    /// Calls `MR_C_std_deque_int_ConstructFromRange()`.
    pub fn construct_from_range(ptr: Option<&core::ffi::c_int>, size: usize) -> crate::Owned<crate::mr::cs::std_deque_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_ConstructFromRange(ptr.map_or(core::ptr::null(), |r| r as *const core::ffi::c_int as *const core::ffi::c_int), size)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int)}
    }

    /// Assign from a range of elements, overwriting previous contents.
    ///
    /// Calls `MR_C_std_deque_int_AssignFromRange()`.
    pub fn assign_from_range(&mut self, ptr: Option<&core::ffi::c_int>, size: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_AssignFromRange(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, ptr.map_or(core::ptr::null(), |r| r as *const core::ffi::c_int as *const core::ffi::c_int), size)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_deque_int_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_size(self as *const Self as *const crate::ffi::MR_C_std_deque_int)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_deque_int_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_empty(self as *const Self as *const crate::ffi::MR_C_std_deque_int)};
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_deque_int_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_resize(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, new_size)};
        __ret
    }

    /// Resizes the container. The new elements if any are set to the specified value.
    ///
    /// Calls `MR_C_std_deque_int_resize_with_default_value()`.
    pub fn resize_with_default_value(&mut self, new_size: usize, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_resize_with_default_value(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, new_size, value)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_deque_int_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_clear(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_deque_int_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_at(self as *const Self as *const crate::ffi::MR_C_std_deque_int, i)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_deque_int_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, i)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_deque_int_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_front(self as *const Self as *const crate::ffi::MR_C_std_deque_int)};
        unsafe {(__ret as *const core::ffi::c_int).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_deque_int_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int)};
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_deque_int_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_back(self as *const Self as *const crate::ffi::MR_C_std_deque_int)};
        unsafe {(__ret as *const core::ffi::c_int).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_deque_int_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int)};
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_deque_int_push_back()`.
    pub fn push_back(&mut self, new_elem: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, new_elem)};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_deque_int_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int)};
        __ret
    }

    /// Inserts a new element at the beginning.
    ///
    /// Calls `MR_C_std_deque_int_push_front()`.
    pub fn push_front(&mut self, new_elem: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_push_front(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, new_elem)};
        __ret
    }

    /// Removes one element from the beginning.
    ///
    /// Calls `MR_C_std_deque_int_pop_front()`.
    pub fn pop_front(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_pop_front(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_deque_int_insert()`.
    pub fn insert(&mut self, position: usize, new_elem: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_insert(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, position, new_elem)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_deque_int_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_erase(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, position)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_deque_int_insert_at_mutable_iter()`.
    pub fn insert_at_mutable_iter(&mut self, position: &crate::mr::cs::std_deque_int_iterator, new_elem: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_insert_at_mutable_iter(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, position as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator, new_elem)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_deque_int_erase_at_mutable_iter()`.
    pub fn erase_at_mutable_iter(&mut self, position: &crate::mr::cs::std_deque_int_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_erase_at_mutable_iter(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, position as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator)};
        __ret
    }

    /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
    ///
    /// Calls `MR_C_std_deque_int_insert_at_iter()`.
    pub fn insert_at_iter(&mut self, position: &crate::mr::cs::std_deque_int_const_iterator, new_elem: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_insert_at_iter(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, position as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator, new_elem)};
        __ret
    }

    /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
    ///
    /// Calls `MR_C_std_deque_int_erase_at_iter()`.
    pub fn erase_at_iter(&mut self, position: &crate::mr::cs::std_deque_int_const_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_erase_at_iter(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int, position as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator)};
        __ret
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_std_deque_int_begin()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> crate::Owned<crate::mr::cs::std_deque_int_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_begin(self as *const Self as *const crate::ffi::MR_C_std_deque_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int_const_iterator)}
    }

    /// Tests whether a const iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_deque_int_is_begin()`.
    pub fn is_begin(&self, iter: &crate::mr::cs::std_deque_int_const_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_is_begin(self as *const Self as *const crate::ffi::MR_C_std_deque_int, iter as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator)};
        __ret
    }

    /// The begin iterator, mutable.
    ///
    /// Calls `MR_C_std_deque_int_begin_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> crate::Owned<crate::mr::cs::std_deque_int_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int_iterator)}
    }

    /// Tests whether a mutable iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_deque_int_is_begin_mut()`.
    pub fn is_begin_mut(&self, iter: &crate::mr::cs::std_deque_int_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_is_begin_mut(self as *const Self as *const crate::ffi::MR_C_std_deque_int, iter as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator)};
        __ret
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_std_deque_int_end()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> crate::Owned<crate::mr::cs::std_deque_int_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_end(self as *const Self as *const crate::ffi::MR_C_std_deque_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int_const_iterator)}
    }

    /// Tests whether a const iterator is the end iterator.
    ///
    /// Calls `MR_C_std_deque_int_is_end()`.
    pub fn is_end(&self, iter: &crate::mr::cs::std_deque_int_const_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_is_end(self as *const Self as *const crate::ffi::MR_C_std_deque_int, iter as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator)};
        __ret
    }

    /// The end iterator, mutable.
    ///
    /// Calls `MR_C_std_deque_int_end_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> crate::Owned<crate::mr::cs::std_deque_int_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int_iterator)}
    }

    /// Tests whether a mutable iterator is the end iterator.
    ///
    /// Calls `MR_C_std_deque_int_is_end_mut()`.
    pub fn is_end_mut(&self, iter: &crate::mr::cs::std_deque_int_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_is_end_mut(self as *const Self as *const crate::ffi::MR_C_std_deque_int, iter as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator)};
        __ret
    }

    /// Convert a const iterator to an index.
    ///
    /// Calls `MR_C_std_deque_int_to_index()`.
    pub fn to_index(&self, iter: &crate::mr::cs::std_deque_int_const_iterator) -> isize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_to_index(self as *const Self as *const crate::ffi::MR_C_std_deque_int, iter as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator)};
        __ret
    }

    /// Convert a mutable iterator to an index.
    ///
    /// Calls `MR_C_std_deque_int_to_index_mut()`.
    pub fn to_index_mut(&self, iter: &crate::mr::cs::std_deque_int_iterator) -> isize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_to_index_mut(self as *const Self as *const crate::ffi::MR_C_std_deque_int, iter as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_deque_int
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Read-only iterator for `MR_C_std_deque_int`.
///
/// Generated from class `std::deque<int>::const_iterator`. Heap-allocated instances are held in `Owned<std_deque_int_const_iterator>`.
#[repr(transparent)]
pub struct std_deque_int_const_iterator(crate::ffi::MR_C_std_deque_int_const_iterator);

unsafe impl crate::CppClass for std_deque_int_const_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_deque_int_const_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_deque_int_const_iterator)}
}

impl std_deque_int_const_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_deque_int_const_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_deque_int_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_const_iterator_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int_const_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_deque_int_const_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_deque_int_const_iterator) -> crate::Owned<crate::mr::cs::std_deque_int_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_const_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int_const_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_deque_int_const_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_deque_int_const_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_const_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int_const_iterator, other as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator)};
        __ret
    }

    /// Makes a const iterator from a mutable one.
    ///
    /// Calls `MR_C_std_deque_int_const_iterator_from_mutable()`.
    pub fn from_mutable(iter: &crate::mr::cs::std_deque_int_iterator) -> crate::Owned<crate::mr::cs::std_deque_int_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_const_iterator_from_mutable(iter as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int_const_iterator)}
    }

    /// Dereferences a const iterator.
    ///
    /// Calls `MR_C_std_deque_int_const_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_const_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_deque_int_const_iterator)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Increments a const iterator.
    ///
    /// Calls `MR_C_std_deque_int_const_iterator_incr()`.
    pub fn incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_const_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int_const_iterator)};
        __ret
    }

    /// Decrements a const iterator.
    ///
    /// Calls `MR_C_std_deque_int_const_iterator_decr()`.
    pub fn decr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_const_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int_const_iterator)};
        __ret
    }

    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
    ///
    /// Calls `MR_C_std_deque_int_const_iterator_add_assign()`.
    pub fn add_assign(&mut self, delta: isize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_const_iterator_add_assign(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int_const_iterator, delta)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_deque_int_const_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Mutable iterator for `MR_C_std_deque_int`.
///
/// Generated from class `std::deque<int>::iterator`. Heap-allocated instances are held in `Owned<std_deque_int_iterator>`.
#[repr(transparent)]
pub struct std_deque_int_iterator(crate::ffi::MR_C_std_deque_int_iterator);

unsafe impl crate::CppClass for std_deque_int_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_deque_int_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_deque_int_iterator)}
}

impl std_deque_int_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_deque_int_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_deque_int_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_iterator_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_deque_int_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_deque_int_iterator) -> crate::Owned<crate::mr::cs::std_deque_int_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_int_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_deque_int_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_deque_int_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int_iterator, other as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator)};
        __ret
    }

    /// Dereferences a mutable iterator.
    ///
    /// Calls `MR_C_std_deque_int_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_deque_int_iterator)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Increments a mutable iterator.
    ///
    /// Calls `MR_C_std_deque_int_iterator_incr()`.
    pub fn incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int_iterator)};
        __ret
    }

    /// Decrements a mutable iterator.
    ///
    /// Calls `MR_C_std_deque_int_iterator_decr()`.
    pub fn decr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int_iterator)};
        __ret
    }

    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
    ///
    /// Calls `MR_C_std_deque_int_iterator_add_assign()`.
    pub fn add_assign(&mut self, delta: isize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_deque_int_iterator_add_assign(self as *mut Self as *mut crate::ffi::MR_C_std_deque_int_iterator, delta)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_deque_int_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Computes the signed difference between two const iterators. Completes in constant time.
///
/// Calls `MR_C_sub_MR_C_std_deque_int_const_iterator()`.
pub fn op_sub_mr_c_std_deque_int_const_iterator(a: &crate::mr::cs::std_deque_int_const_iterator, b: &crate::mr::cs::std_deque_int_const_iterator) -> isize
{
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_C_std_deque_int_const_iterator(a as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator, b as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator)};
    __ret
}

/// Compares two const iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_deque_int_const_iterator()`.
pub fn op_equal_mr_c_std_deque_int_const_iterator(a: &crate::mr::cs::std_deque_int_const_iterator, b: &crate::mr::cs::std_deque_int_const_iterator) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_deque_int_const_iterator(a as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator, b as *const crate::mr::cs::std_deque_int_const_iterator as *const crate::ffi::MR_C_std_deque_int_const_iterator)};
    __ret
}

/// Computes the signed difference between two mutable iterators. Completes in constant time.
///
/// Calls `MR_C_sub_MR_C_std_deque_int_iterator()`.
pub fn op_sub_mr_c_std_deque_int_iterator(a: &crate::mr::cs::std_deque_int_iterator, b: &crate::mr::cs::std_deque_int_iterator) -> isize
{
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_C_std_deque_int_iterator(a as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator, b as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator)};
    __ret
}

/// Compares two mutable iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_deque_int_iterator()`.
pub fn op_equal_mr_c_std_deque_int_iterator(a: &crate::mr::cs::std_deque_int_iterator, b: &crate::mr::cs::std_deque_int_iterator) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_deque_int_iterator(a as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator, b as *const crate::mr::cs::std_deque_int_iterator as *const crate::ffi::MR_C_std_deque_int_iterator)};
    __ret
}

