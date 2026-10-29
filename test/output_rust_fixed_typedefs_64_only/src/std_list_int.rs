/// Generated from C++ container `std::list<int>`.
///
/// Generated from class `std::list<int>`. Heap-allocated instances are held in `Owned<std_list_int>`.
#[repr(transparent)]
pub struct std_list_int(crate::ffi::MR_C_std_list_int);

unsafe impl crate::CppClass for std_list_int
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_list_int_Destroy(ptr as *const crate::ffi::MR_C_std_list_int)}
}

impl std_list_int
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_list_int_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_list_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_list_int)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_list_int_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_list_int) -> crate::Owned<crate::mr::cs::std_list_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_list_int as *mut crate::ffi::MR_C_std_list_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_list_int)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_list_int_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_list_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_list_int, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_list_int as *mut crate::ffi::MR_C_std_list_int)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_list_int_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_size(self as *const Self as *const crate::ffi::MR_C_std_list_int)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_list_int_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_empty(self as *const Self as *const crate::ffi::MR_C_std_list_int)};
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_list_int_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_resize(self as *mut Self as *mut crate::ffi::MR_C_std_list_int, new_size)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_list_int_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_clear(self as *mut Self as *mut crate::ffi::MR_C_std_list_int)};
        __ret
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_list_int_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_front(self as *const Self as *const crate::ffi::MR_C_std_list_int)};
        unsafe {(__ret as *const core::ffi::c_int).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_list_int_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_list_int)};
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_list_int_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_back(self as *const Self as *const crate::ffi::MR_C_std_list_int)};
        unsafe {(__ret as *const core::ffi::c_int).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_list_int_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_list_int)};
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_list_int_push_back()`.
    pub fn push_back(&mut self, new_elem: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_list_int, new_elem)};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_list_int_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_list_int)};
        __ret
    }

    /// Inserts a new element at the beginning.
    ///
    /// Calls `MR_C_std_list_int_push_front()`.
    pub fn push_front(&mut self, new_elem: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_push_front(self as *mut Self as *mut crate::ffi::MR_C_std_list_int, new_elem)};
        __ret
    }

    /// Removes one element from the beginning.
    ///
    /// Calls `MR_C_std_list_int_pop_front()`.
    pub fn pop_front(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_pop_front(self as *mut Self as *mut crate::ffi::MR_C_std_list_int)};
        __ret
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_std_list_int_begin()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> crate::Owned<crate::mr::cs::std_list_int_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_begin(self as *const Self as *const crate::ffi::MR_C_std_list_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_list_int_const_iterator)}
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_std_list_int_end()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> crate::Owned<crate::mr::cs::std_list_int_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_end(self as *const Self as *const crate::ffi::MR_C_std_list_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_list_int_const_iterator)}
    }

    /// Tests whether a const iterator is the end iterator.
    ///
    /// Calls `MR_C_std_list_int_is_end()`.
    pub fn is_end(&self, iter: &crate::mr::cs::std_list_int_const_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_is_end(self as *const Self as *const crate::ffi::MR_C_std_list_int, iter as *const crate::mr::cs::std_list_int_const_iterator as *const crate::ffi::MR_C_std_list_int_const_iterator)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_list_int
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Read-only iterator for `MR_C_std_list_int`.
///
/// Generated from class `std::list<int>::const_iterator`. Heap-allocated instances are held in `Owned<std_list_int_const_iterator>`.
#[repr(transparent)]
pub struct std_list_int_const_iterator(crate::ffi::MR_C_std_list_int_const_iterator);

unsafe impl crate::CppClass for std_list_int_const_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_list_int_const_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_list_int_const_iterator)}
}

impl std_list_int_const_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_list_int_const_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_list_int_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_const_iterator_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_list_int_const_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_list_int_const_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_list_int_const_iterator) -> crate::Owned<crate::mr::cs::std_list_int_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_const_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_list_int_const_iterator as *const crate::ffi::MR_C_std_list_int_const_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_list_int_const_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_list_int_const_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_list_int_const_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_const_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_list_int_const_iterator, other as *const crate::mr::cs::std_list_int_const_iterator as *const crate::ffi::MR_C_std_list_int_const_iterator)};
        __ret
    }

    /// Dereferences a const iterator.
    ///
    /// Calls `MR_C_std_list_int_const_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_const_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_list_int_const_iterator)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Increments a const iterator.
    ///
    /// Calls `MR_C_std_list_int_const_iterator_incr()`.
    pub fn incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_list_int_const_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_list_int_const_iterator)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_list_int_const_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Compares two const iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_list_int_const_iterator()`.
pub fn op_equal_mr_c_std_list_int_const_iterator(a: &crate::mr::cs::std_list_int_const_iterator, b: &crate::mr::cs::std_list_int_const_iterator) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_list_int_const_iterator(a as *const crate::mr::cs::std_list_int_const_iterator as *const crate::ffi::MR_C_std_list_int_const_iterator, b as *const crate::mr::cs::std_list_int_const_iterator as *const crate::ffi::MR_C_std_list_int_const_iterator)};
    __ret
}

