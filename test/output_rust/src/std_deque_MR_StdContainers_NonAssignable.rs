/// Generated from C++ container `std::deque<MR::StdContainers::NonAssignable>`.
///
/// Generated from class `std::deque<MR::StdContainers::NonAssignable>`. Heap-allocated instances are held in `Owned<std_deque_MR_StdContainers_NonAssignable>`.
#[repr(transparent)]
pub struct std_deque_MR_StdContainers_NonAssignable(crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable);

unsafe impl crate::CppClass for std_deque_MR_StdContainers_NonAssignable
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy(ptr as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)}
}

impl std_deque_MR_StdContainers_NonAssignable
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable) -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_size()`.
    pub fn size(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_size(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_empty()`.
    pub fn empty(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_empty(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_resize(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, new_size)};
        crate::__check_exception();
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_clear()`.
    pub fn clear(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_clear(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::mr::std_containers::NonAssignable
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_at(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, i)};
        crate::__check_exception();
        unsafe {&*(__ret as *const crate::mr::std_containers::NonAssignable)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::mr::std_containers::NonAssignable
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, i)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::std_containers::NonAssignable)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a crate::mr::std_containers::NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_front(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {(__ret as *const crate::mr::std_containers::NonAssignable).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::std_containers::NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::mr::std_containers::NonAssignable).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a crate::mr::std_containers::NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_back(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {(__ret as *const crate::mr::std_containers::NonAssignable).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::std_containers::NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::mr::std_containers::NonAssignable).as_mut()}
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: &crate::mr::std_containers::NonAssignable)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, crate::ffi::MR_C_PassBy_Copy, new_elem as *const crate::mr::std_containers::NonAssignable as *mut crate::ffi::MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back()`.
    pub fn pop_back(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// Inserts a new element at the beginning.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_push_front()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_front(&mut self, new_elem: &crate::mr::std_containers::NonAssignable)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_push_front(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, crate::ffi::MR_C_PassBy_Copy, new_elem as *const crate::mr::std_containers::NonAssignable as *mut crate::ffi::MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// Removes one element from the beginning.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front()`.
    pub fn pop_front(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_begin()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_begin(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator)}
    }

    /// Tests whether a const iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin()`.
    pub fn is_begin(&self, iter: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, mutable.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_begin_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator)}
    }

    /// Tests whether a mutable iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin_mut()`.
    pub fn is_begin_mut(&self, iter: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin_mut(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_end()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_end(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator)}
    }

    /// Tests whether a const iterator is the end iterator.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_end()`.
    pub fn is_end(&self, iter: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_is_end(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, mutable.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_end_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator)}
    }

    /// Tests whether a mutable iterator is the end iterator.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_end_mut()`.
    pub fn is_end_mut(&self, iter: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_is_end_mut(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Convert a const iterator to an index.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_to_index()`.
    pub fn to_index(&self, iter: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator) -> isize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_to_index(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Convert a mutable iterator to an index.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_to_index_mut()`.
    pub fn to_index_mut(&self, iter: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator) -> isize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_to_index_mut(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable, iter as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_deque_MR_StdContainers_NonAssignable
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Read-only iterator for `MR_C_std_deque_MR_StdContainers_NonAssignable`.
///
/// Generated from class `std::deque<MR::StdContainers::NonAssignable>::const_iterator`. Heap-allocated instances are held in `Owned<std_deque_MR_StdContainers_NonAssignable_const_iterator>`.
#[repr(transparent)]
pub struct std_deque_MR_StdContainers_NonAssignable_const_iterator(crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator);

unsafe impl crate::CppClass for std_deque_MR_StdContainers_NonAssignable_const_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)}
}

impl std_deque_MR_StdContainers_NonAssignable_const_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator) -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator, other as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Makes a const iterator from a mutable one.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_from_mutable()`.
    pub fn from_mutable(iter: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator) -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_from_mutable(iter as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator)}
    }

    /// Dereferences a const iterator.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a crate::mr::std_containers::NonAssignable
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)};
        crate::__check_exception();
        unsafe {&*(__ret as *const crate::mr::std_containers::NonAssignable)}
    }

    /// Increments a const iterator.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_incr()`.
    pub fn incr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Decrements a const iterator.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_decr()`.
    pub fn decr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_add_assign()`.
    pub fn add_assign(&mut self, delta: isize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator_add_assign(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator, delta)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_deque_MR_StdContainers_NonAssignable_const_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Mutable iterator for `MR_C_std_deque_MR_StdContainers_NonAssignable`.
///
/// Generated from class `std::deque<MR::StdContainers::NonAssignable>::iterator`. Heap-allocated instances are held in `Owned<std_deque_MR_StdContainers_NonAssignable_iterator>`.
#[repr(transparent)]
pub struct std_deque_MR_StdContainers_NonAssignable_iterator(crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator);

unsafe impl crate::CppClass for std_deque_MR_StdContainers_NonAssignable_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)}
}

impl std_deque_MR_StdContainers_NonAssignable_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator) -> crate::Owned<crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator, other as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Dereferences a mutable iterator.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a mut crate::mr::std_containers::NonAssignable
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::std_containers::NonAssignable)}
    }

    /// Increments a mutable iterator.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_incr()`.
    pub fn incr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Decrements a mutable iterator.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_decr()`.
    pub fn decr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
    ///
    /// Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_add_assign()`.
    pub fn add_assign(&mut self, delta: isize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator_add_assign(self as *mut Self as *mut crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator, delta)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_deque_MR_StdContainers_NonAssignable_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Computes the signed difference between two const iterators. Completes in constant time.
///
/// Calls `MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator()`.
pub fn op_sub_mr_c_std_deque_mr_std_containers_non_assignable_const_iterator(a: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator, b: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator) -> isize
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(a as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator, b as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)};
    crate::__check_exception();
    __ret
}

/// Compares two const iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator()`.
pub fn op_equal_mr_c_std_deque_mr_std_containers_non_assignable_const_iterator(a: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator, b: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator) -> bool
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator(a as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator, b as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_const_iterator)};
    crate::__check_exception();
    __ret
}

/// Computes the signed difference between two mutable iterators. Completes in constant time.
///
/// Calls `MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator()`.
pub fn op_sub_mr_c_std_deque_mr_std_containers_non_assignable_iterator(a: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator, b: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator) -> isize
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(a as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator, b as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
    crate::__check_exception();
    __ret
}

/// Compares two mutable iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator()`.
pub fn op_equal_mr_c_std_deque_mr_std_containers_non_assignable_iterator(a: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator, b: &crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator) -> bool
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_deque_MR_StdContainers_NonAssignable_iterator(a as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator, b as *const crate::mr::cs::std_deque_MR_StdContainers_NonAssignable_iterator as *const crate::ffi::MR_C_std_deque_MR_StdContainers_NonAssignable_iterator)};
    crate::__check_exception();
    __ret
}

