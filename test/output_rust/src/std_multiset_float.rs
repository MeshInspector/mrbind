/// Generated from C++ container `std::multiset<float>`.
///
/// Generated from class `std::multiset<float>`. Heap-allocated instances are held in `Owned<std_multiset_float>`.
#[repr(transparent)]
pub struct std_multiset_float(crate::ffi::MR_C_std_multiset_float);

unsafe impl crate::CppClass for std_multiset_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_multiset_float_Destroy(ptr as *const crate::ffi::MR_C_std_multiset_float)}
}

impl std_multiset_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_multiset_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_multiset_float>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_float)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_multiset_float_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_multiset_float) -> crate::Owned<crate::mr::cs::std_multiset_float>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_multiset_float as *mut crate::ffi::MR_C_std_multiset_float)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_float)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_multiset_float_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_multiset_float)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_float, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_multiset_float as *mut crate::ffi::MR_C_std_multiset_float)};
        crate::__check_exception();
        __ret
    }

    /// Construct from a range of elements.
    ///
    /// Calls `MR_C_std_multiset_float_ConstructFromRange()`.
    pub fn construct_from_range(ptr: Option<&f32>, size: usize) -> crate::Owned<crate::mr::cs::std_multiset_float>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_ConstructFromRange(ptr.map_or(core::ptr::null(), |r| r as *const f32 as *const f32), size)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_float)}
    }

    /// Assign from a range of elements, overwriting previous contents.
    ///
    /// Calls `MR_C_std_multiset_float_AssignFromRange()`.
    pub fn assign_from_range(&mut self, ptr: Option<&f32>, size: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_AssignFromRange(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_float, ptr.map_or(core::ptr::null(), |r| r as *const f32 as *const f32), size)};
        crate::__check_exception();
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_multiset_float_size()`.
    pub fn size(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_size(self as *const Self as *const crate::ffi::MR_C_std_multiset_float)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_multiset_float_empty()`.
    pub fn empty(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_empty(self as *const Self as *const crate::ffi::MR_C_std_multiset_float)};
        crate::__check_exception();
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_multiset_float_clear()`.
    pub fn clear(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_clear(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_float)};
        crate::__check_exception();
        __ret
    }

    /// Checks if the contain contains this key.
    ///
    /// Calls `MR_C_std_multiset_float_count()`.
    pub fn count(&self, key: &f32) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_count(self as *const Self as *const crate::ffi::MR_C_std_multiset_float, key as *const f32 as *const f32)};
        crate::__check_exception();
        __ret
    }

    /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
    ///
    /// Calls `MR_C_std_multiset_float_find()`.
    /// The reference to this object might be preserved as the return value.
    pub fn find(&self, key: &f32) -> crate::Owned<crate::mr::cs::std_multiset_float_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_find(self as *const Self as *const crate::ffi::MR_C_std_multiset_float, key as *const f32 as *const f32)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_float_const_iterator)}
    }

    /// Inserts a new element.
    ///
    /// Calls `MR_C_std_multiset_float_insert()`.
    pub fn insert(&mut self, new_elem: f32)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_insert(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_float, new_elem)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_std_multiset_float_begin()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> crate::Owned<crate::mr::cs::std_multiset_float_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_begin(self as *const Self as *const crate::ffi::MR_C_std_multiset_float)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_float_const_iterator)}
    }

    /// Tests whether a const iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_multiset_float_is_begin()`.
    pub fn is_begin(&self, iter: &crate::mr::cs::std_multiset_float_const_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_is_begin(self as *const Self as *const crate::ffi::MR_C_std_multiset_float, iter as *const crate::mr::cs::std_multiset_float_const_iterator as *const crate::ffi::MR_C_std_multiset_float_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_std_multiset_float_end()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> crate::Owned<crate::mr::cs::std_multiset_float_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_end(self as *const Self as *const crate::ffi::MR_C_std_multiset_float)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_float_const_iterator)}
    }

    /// Tests whether a const iterator is the end iterator.
    ///
    /// Calls `MR_C_std_multiset_float_is_end()`.
    pub fn is_end(&self, iter: &crate::mr::cs::std_multiset_float_const_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_is_end(self as *const Self as *const crate::ffi::MR_C_std_multiset_float, iter as *const crate::mr::cs::std_multiset_float_const_iterator as *const crate::ffi::MR_C_std_multiset_float_const_iterator)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_multiset_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Read-only iterator for `MR_C_std_multiset_float`.
///
/// Generated from class `std::multiset<float>::const_iterator`. Heap-allocated instances are held in `Owned<std_multiset_float_const_iterator>`.
#[repr(transparent)]
pub struct std_multiset_float_const_iterator(crate::ffi::MR_C_std_multiset_float_const_iterator);

unsafe impl crate::CppClass for std_multiset_float_const_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_multiset_float_const_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_multiset_float_const_iterator)}
}

impl std_multiset_float_const_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_multiset_float_const_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_multiset_float_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_const_iterator_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_float_const_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_multiset_float_const_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_multiset_float_const_iterator) -> crate::Owned<crate::mr::cs::std_multiset_float_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_const_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_multiset_float_const_iterator as *const crate::ffi::MR_C_std_multiset_float_const_iterator)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_multiset_float_const_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_multiset_float_const_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_multiset_float_const_iterator)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_const_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_float_const_iterator, other as *const crate::mr::cs::std_multiset_float_const_iterator as *const crate::ffi::MR_C_std_multiset_float_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Dereferences a const iterator.
    ///
    /// Calls `MR_C_std_multiset_float_const_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a f32
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_const_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_multiset_float_const_iterator)};
        crate::__check_exception();
        unsafe {&*(__ret as *const f32)}
    }

    /// Increments a const iterator.
    ///
    /// Calls `MR_C_std_multiset_float_const_iterator_incr()`.
    pub fn incr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_const_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_float_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Decrements a const iterator.
    ///
    /// Calls `MR_C_std_multiset_float_const_iterator_decr()`.
    pub fn decr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_multiset_float_const_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_multiset_float_const_iterator)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_multiset_float_const_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Compares two const iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_multiset_float_const_iterator()`.
pub fn op_equal_mr_c_std_multiset_float_const_iterator(a: &crate::mr::cs::std_multiset_float_const_iterator, b: &crate::mr::cs::std_multiset_float_const_iterator) -> bool
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_multiset_float_const_iterator(a as *const crate::mr::cs::std_multiset_float_const_iterator as *const crate::ffi::MR_C_std_multiset_float_const_iterator, b as *const crate::mr::cs::std_multiset_float_const_iterator as *const crate::ffi::MR_C_std_multiset_float_const_iterator)};
    crate::__check_exception();
    __ret
}

