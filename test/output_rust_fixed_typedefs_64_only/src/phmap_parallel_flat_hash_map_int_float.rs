/// Generated from C++ container `phmap::parallel_flat_hash_map<int, float>`.
///
/// Generated from class `phmap::parallel_flat_hash_map<int, float>`. Heap-allocated instances are held in `Owned<phmap_parallel_flat_hash_map_int_float>`.
#[repr(transparent)]
pub struct phmap_parallel_flat_hash_map_int_float(crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float);

unsafe impl crate::CppClass for phmap_parallel_flat_hash_map_int_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_Destroy(ptr as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float)}
}

impl phmap_parallel_flat_hash_map_int_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::phmap::phmap_parallel_flat_hash_map_int_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_parallel_flat_hash_map_int_float)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::phmap::phmap_parallel_flat_hash_map_int_float) -> crate::Owned<crate::phmap::phmap_parallel_flat_hash_map_int_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::phmap::phmap_parallel_flat_hash_map_int_float as *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_parallel_flat_hash_map_int_float)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::phmap::phmap_parallel_flat_hash_map_int_float)
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, crate::ffi::MR_C_PassBy_Copy, other as *const crate::phmap::phmap_parallel_flat_hash_map_int_float as *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_size(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_empty(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_clear(self as *mut Self as *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float)};
        __ret
    }

    /// Returns the element with the specific key. If it doesn't exist, creates it first. Acts like map's `operator[]` in C++.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_find_or_construct_elem()`.
    /// The reference to this object might be preserved as the return value.
    pub fn find_or_construct_elem<'a>(&'a mut self, key: &core::ffi::c_int) -> &'a mut f32
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_find_or_construct_elem(self as *mut Self as *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, key as *const core::ffi::c_int as *const core::ffi::c_int)};
        unsafe {&mut *(__ret as *mut f32)}
    }

    /// Checks if the contain contains this key.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_contains()`.
    pub fn contains(&self, key: &core::ffi::c_int) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_contains(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, key as *const core::ffi::c_int as *const core::ffi::c_int)};
        __ret
    }

    /// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_find()`.
    /// The reference to this object might be preserved as the return value.
    pub fn find(&self, key: &core::ffi::c_int) -> crate::Owned<crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_find(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, key as *const core::ffi::c_int as *const core::ffi::c_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator)}
    }

    /// Finds the element by key and returns its mapped value, read-only, or null if no such key.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_find_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn find_value<'a>(&'a self, key: &core::ffi::c_int) -> Option<&'a f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_find_value(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, key as *const core::ffi::c_int as *const core::ffi::c_int)};
        unsafe {(__ret as *const f32).as_ref()}
    }

    /// Finds the element by key and returns its mapped value, mutable, or null if no such key.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_find_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn find_value_mut<'a>(&'a mut self, key: &core::ffi::c_int) -> Option<&'a mut f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_find_value_mut(self as *mut Self as *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, key as *const core::ffi::c_int as *const core::ffi::c_int)};
        unsafe {(__ret as *mut f32).as_mut()}
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_begin()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> crate::Owned<crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_begin(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator)}
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_end()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> crate::Owned<crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_end(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator)}
    }

    /// Tests whether a const iterator is the end iterator.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_is_end()`.
    pub fn is_end(&self, iter: &crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_is_end(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float, iter as *const crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator)};
        __ret
    }

}

unsafe impl crate::CppCopy for phmap_parallel_flat_hash_map_int_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Read-only iterator for `MR_C_phmap_parallel_flat_hash_map_int_float`.
///
/// Generated from class `phmap::parallel_flat_hash_map<int, float>::const_iterator`. Heap-allocated instances are held in `Owned<phmap_parallel_flat_hash_map_int_float_const_iterator>`.
#[repr(transparent)]
pub struct phmap_parallel_flat_hash_map_int_float_const_iterator(crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator);

unsafe impl crate::CppClass for phmap_parallel_flat_hash_map_int_float_const_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_Destroy(ptr as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator)}
}

impl phmap_parallel_flat_hash_map_int_float_const_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator) -> crate::Owned<crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator>
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_ConstructFromAnother(other as *const crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator)
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator, other as *const crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator)};
        __ret
    }

    /// Dereferences a const iterator.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_deref()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref<'a>(&'a self) -> &'a crate::mr::cs::std_pair_const_int_float
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_deref(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator)};
        unsafe {&*(__ret as *const crate::mr::cs::std_pair_const_int_float)}
    }

    /// Dereferences a const iterator, returning the key.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_deref_key()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref_key<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_deref_key(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Dereferences a const iterator, returning the mapped value.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_deref_value()`.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref_value<'a>(&'a self) -> &'a f32
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_deref_value(self as *const Self as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator)};
        unsafe {&*(__ret as *const f32)}
    }

    /// Increments a const iterator.
    ///
    /// Calls `MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_incr()`.
    pub fn incr(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator)};
        __ret
    }

}

unsafe impl crate::CppCopy for phmap_parallel_flat_hash_map_int_float_const_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Compares two const iterators for equality.
///
/// Calls `MR_C_equal_MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator()`.
pub fn op_equal_mr_c_phmap_parallel_flat_hash_map_int_float_const_iterator(a: &crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator, b: &crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator(a as *const crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator, b as *const crate::phmap::phmap_parallel_flat_hash_map_int_float_const_iterator as *const crate::ffi::MR_C_phmap_parallel_flat_hash_map_int_float_const_iterator)};
    __ret
}

