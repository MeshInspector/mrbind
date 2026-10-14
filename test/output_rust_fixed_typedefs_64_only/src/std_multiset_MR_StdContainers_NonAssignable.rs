/// Generated from C++ container `std::multiset<MR::StdContainers::NonAssignable>`.
///
/// Generated from class `std::multiset<MR::StdContainers::NonAssignable>`. Heap-allocated instances are held in `Owned<std_multiset_MR_StdContainers_NonAssignable>`.
#[repr(transparent)]
pub struct std_multiset_MR_StdContainers_NonAssignable(crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable);

unsafe impl crate::CppClass for std_multiset_MR_StdContainers_NonAssignable
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_Destroy(ptr as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable)}
}

impl std_multiset_MR_StdContainers_NonAssignable
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable) -> crate::Owned<crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable as *mut crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable as *mut crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_size(self as *const Self as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_empty(self as *const Self as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_clear(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable)};
        __ret
    }

    /// Checks if the contain contains this key.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_count()`.
    pub fn count(&self, key: &crate::mr::std_containers::NonAssignable) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_count(self as *const Self as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable, key as *const crate::mr::std_containers::NonAssignable as *const crate::ffi::MR_StdContainers_NonAssignable)};
        __ret
    }

    /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_find()`.
    /// The reference to this object might be preserved as the return value.
    pub fn find(&self, key: &crate::mr::std_containers::NonAssignable) -> crate::Owned<crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_find(self as *const Self as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable, key as *const crate::mr::std_containers::NonAssignable as *const crate::ffi::MR_StdContainers_NonAssignable)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator)}
    }

    /// Inserts a new element.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, new_elem: &crate::mr::std_containers::NonAssignable)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_insert(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable, crate::ffi::MR_C_PassBy_Copy, new_elem as *const crate::mr::std_containers::NonAssignable as *mut crate::ffi::MR_StdContainers_NonAssignable)};
        __ret
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_begin()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> crate::Owned<crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_begin(self as *const Self as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator)}
    }

    /// Tests whether a const iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_is_begin()`.
    pub fn is_begin(&self, iter: &crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_is_begin(self as *const Self as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable, iter as *const crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator)};
        __ret
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_end()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> crate::Owned<crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_end(self as *const Self as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator)}
    }

    /// Tests whether a const iterator is the end iterator.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_is_end()`.
    pub fn is_end(&self, iter: &crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_is_end(self as *const Self as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable, iter as *const crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_multiset_MR_StdContainers_NonAssignable
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Read-only iterator for `MR_C_std_multiset_MR_StdContainers_NonAssignable`.
///
/// Generated from class `std::multiset<MR::StdContainers::NonAssignable>::const_iterator`. Heap-allocated instances are held in `Owned<std_multiset_MR_StdContainers_NonAssignable_const_iterator>`.
#[repr(transparent)]
pub struct std_multiset_MR_StdContainers_NonAssignable_const_iterator(crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator);

unsafe impl crate::CppClass for std_multiset_MR_StdContainers_NonAssignable_const_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator)}
}

impl std_multiset_MR_StdContainers_NonAssignable_const_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator) -> crate::Owned<crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator, other as *const crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator)};
        __ret
    }

    /// Dereferences a const iterator.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a crate::mr::std_containers::NonAssignable
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator)};
        unsafe {&*(__ret as *const crate::mr::std_containers::NonAssignable)}
    }

    /// Increments a const iterator.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_incr()`.
    pub fn incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator)};
        __ret
    }

    /// Decrements a const iterator.
    ///
    /// Calls `MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_decr()`.
    pub fn decr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_multiset_MR_StdContainers_NonAssignable_const_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Compares two const iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator()`.
pub fn op_equal_mr_c_std_multiset_mr_std_containers_non_assignable_const_iterator(a: &crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator, b: &crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator(a as *const crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator, b as *const crate::mr::cs::std_multiset_MR_StdContainers_NonAssignable_const_iterator as *const crate::ffi::MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator)};
    __ret
}

