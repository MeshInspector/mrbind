/// Generated from C++ container `phmap::btree_set<int>`.
///
/// Generated from class `phmap::btree_set<int>`. Heap-allocated instances are held in `Owned<phmap_btree_set_int>`.
#[repr(transparent)]
pub struct phmap_btree_set_int(crate::ffi::MR_C_phmap_btree_set_int);

unsafe impl crate::CppClass for phmap_btree_set_int
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_phmap_btree_set_int_Destroy(ptr as *const crate::ffi::MR_C_phmap_btree_set_int)}
}

impl phmap_btree_set_int
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_phmap_btree_set_int_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::phmap::phmap_btree_set_int>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_btree_set_int)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_phmap_btree_set_int_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::phmap::phmap_btree_set_int) -> crate::Owned<crate::phmap::phmap_btree_set_int>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::phmap::phmap_btree_set_int as *mut crate::ffi::MR_C_phmap_btree_set_int)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_btree_set_int)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_phmap_btree_set_int_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::phmap::phmap_btree_set_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_phmap_btree_set_int, crate::ffi::MR_C_PassBy_Copy, other as *const crate::phmap::phmap_btree_set_int as *mut crate::ffi::MR_C_phmap_btree_set_int)};
        crate::__check_exception();
        __ret
    }

    /// Construct from a range of elements.
    ///
    /// Calls `MR_C_phmap_btree_set_int_ConstructFromRange()`.
    pub fn construct_from_range(ptr: Option<&core::ffi::c_int>, size: usize) -> crate::Owned<crate::phmap::phmap_btree_set_int>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_ConstructFromRange(ptr.map_or(core::ptr::null(), |r| r as *const core::ffi::c_int as *const core::ffi::c_int), size)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_btree_set_int)}
    }

    /// Assign from a range of elements, overwriting previous contents.
    ///
    /// Calls `MR_C_phmap_btree_set_int_AssignFromRange()`.
    pub fn assign_from_range(&mut self, ptr: Option<&core::ffi::c_int>, size: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_AssignFromRange(self as *mut Self as *mut crate::ffi::MR_C_phmap_btree_set_int, ptr.map_or(core::ptr::null(), |r| r as *const core::ffi::c_int as *const core::ffi::c_int), size)};
        crate::__check_exception();
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_phmap_btree_set_int_size()`.
    pub fn size(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_size(self as *const Self as *const crate::ffi::MR_C_phmap_btree_set_int)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_phmap_btree_set_int_empty()`.
    pub fn empty(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_empty(self as *const Self as *const crate::ffi::MR_C_phmap_btree_set_int)};
        crate::__check_exception();
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_phmap_btree_set_int_clear()`.
    pub fn clear(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_clear(self as *mut Self as *mut crate::ffi::MR_C_phmap_btree_set_int)};
        crate::__check_exception();
        __ret
    }

    /// Checks if the contain contains this key.
    ///
    /// Calls `MR_C_phmap_btree_set_int_contains()`.
    pub fn contains(&self, key: &core::ffi::c_int) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_contains(self as *const Self as *const crate::ffi::MR_C_phmap_btree_set_int, key as *const core::ffi::c_int as *const core::ffi::c_int)};
        crate::__check_exception();
        __ret
    }

    /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
    ///
    /// Calls `MR_C_phmap_btree_set_int_find()`.
    /// The reference to this object might be preserved as the return value.
    pub fn find(&self, key: &core::ffi::c_int) -> crate::Owned<crate::phmap::phmap_btree_set_int_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_find(self as *const Self as *const crate::ffi::MR_C_phmap_btree_set_int, key as *const core::ffi::c_int as *const core::ffi::c_int)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_btree_set_int_const_iterator)}
    }

    /// Inserts a new element.
    ///
    /// Calls `MR_C_phmap_btree_set_int_insert()`.
    pub fn insert(&mut self, new_elem: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_insert(self as *mut Self as *mut crate::ffi::MR_C_phmap_btree_set_int, new_elem)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_phmap_btree_set_int_begin()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> crate::Owned<crate::phmap::phmap_btree_set_int_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_begin(self as *const Self as *const crate::ffi::MR_C_phmap_btree_set_int)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_btree_set_int_const_iterator)}
    }

    /// Tests whether a const iterator is the begin iterator.
    ///
    /// Calls `MR_C_phmap_btree_set_int_is_begin()`.
    pub fn is_begin(&self, iter: &crate::phmap::phmap_btree_set_int_const_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_is_begin(self as *const Self as *const crate::ffi::MR_C_phmap_btree_set_int, iter as *const crate::phmap::phmap_btree_set_int_const_iterator as *const crate::ffi::MR_C_phmap_btree_set_int_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_phmap_btree_set_int_end()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> crate::Owned<crate::phmap::phmap_btree_set_int_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_end(self as *const Self as *const crate::ffi::MR_C_phmap_btree_set_int)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_btree_set_int_const_iterator)}
    }

    /// Tests whether a const iterator is the end iterator.
    ///
    /// Calls `MR_C_phmap_btree_set_int_is_end()`.
    pub fn is_end(&self, iter: &crate::phmap::phmap_btree_set_int_const_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_is_end(self as *const Self as *const crate::ffi::MR_C_phmap_btree_set_int, iter as *const crate::phmap::phmap_btree_set_int_const_iterator as *const crate::ffi::MR_C_phmap_btree_set_int_const_iterator)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for phmap_btree_set_int
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Read-only iterator for `MR_C_phmap_btree_set_int`.
///
/// Generated from class `phmap::btree_set<int>::const_iterator`. Heap-allocated instances are held in `Owned<phmap_btree_set_int_const_iterator>`.
#[repr(transparent)]
pub struct phmap_btree_set_int_const_iterator(crate::ffi::MR_C_phmap_btree_set_int_const_iterator);

unsafe impl crate::CppClass for phmap_btree_set_int_const_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_phmap_btree_set_int_const_iterator_Destroy(ptr as *const crate::ffi::MR_C_phmap_btree_set_int_const_iterator)}
}

impl phmap_btree_set_int_const_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_phmap_btree_set_int_const_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::phmap::phmap_btree_set_int_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_const_iterator_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_btree_set_int_const_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_phmap_btree_set_int_const_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::phmap::phmap_btree_set_int_const_iterator) -> crate::Owned<crate::phmap::phmap_btree_set_int_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_const_iterator_ConstructFromAnother(other as *const crate::phmap::phmap_btree_set_int_const_iterator as *const crate::ffi::MR_C_phmap_btree_set_int_const_iterator)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_btree_set_int_const_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_phmap_btree_set_int_const_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::phmap::phmap_btree_set_int_const_iterator)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_const_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_phmap_btree_set_int_const_iterator, other as *const crate::phmap::phmap_btree_set_int_const_iterator as *const crate::ffi::MR_C_phmap_btree_set_int_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Dereferences a const iterator.
    ///
    /// Calls `MR_C_phmap_btree_set_int_const_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_const_iterator_deref(self as *const Self as *const crate::ffi::MR_C_phmap_btree_set_int_const_iterator)};
        crate::__check_exception();
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Increments a const iterator.
    ///
    /// Calls `MR_C_phmap_btree_set_int_const_iterator_incr()`.
    pub fn incr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_const_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_phmap_btree_set_int_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Decrements a const iterator.
    ///
    /// Calls `MR_C_phmap_btree_set_int_const_iterator_decr()`.
    pub fn decr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_phmap_btree_set_int_const_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_phmap_btree_set_int_const_iterator)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for phmap_btree_set_int_const_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Compares two const iterators for equality.
///
/// Calls `MR_C_equal_MR_C_phmap_btree_set_int_const_iterator()`.
pub fn op_equal_mr_c_phmap_btree_set_int_const_iterator(a: &crate::phmap::phmap_btree_set_int_const_iterator, b: &crate::phmap::phmap_btree_set_int_const_iterator) -> bool
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_phmap_btree_set_int_const_iterator(a as *const crate::phmap::phmap_btree_set_int_const_iterator as *const crate::ffi::MR_C_phmap_btree_set_int_const_iterator, b as *const crate::phmap::phmap_btree_set_int_const_iterator as *const crate::ffi::MR_C_phmap_btree_set_int_const_iterator)};
    crate::__check_exception();
    __ret
}

