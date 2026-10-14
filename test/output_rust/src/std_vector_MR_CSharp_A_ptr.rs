/// Generated from C++ container `std::vector<MR::CSharp::A *>`.
///
/// Generated from class `std::vector<MR::CSharp::A *>`. Heap-allocated instances are held in `Owned<std_vector_MR_CSharp_A_ptr>`.
#[repr(transparent)]
pub struct std_vector_MR_CSharp_A_ptr(crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr);

unsafe impl crate::CppClass for std_vector_MR_CSharp_A_ptr
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)}
}

impl std_vector_MR_CSharp_A_ptr
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_CSharp_A_ptr) -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_CSharp_A_ptr)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_size()`.
    pub fn size(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_size(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_empty()`.
    pub fn empty(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_resize(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, new_size)};
        crate::__check_exception();
        __ret
    }

    /// Resizes the container. The new elements if any are set to the specified value.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_resize_with_default_value()`.
    pub fn resize_with_default_value(&mut self, new_size: usize, value: Option<&mut crate::mr::c_sharp::A>)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_resize_with_default_value(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, new_size, value.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A))};
        crate::__check_exception();
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_clear()`.
    pub fn clear(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The memory capacity, measued in the number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_capacity()`.
    pub fn capacity(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_capacity(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, new_capacity)};
        crate::__check_exception();
        __ret
    }

    /// Shrinks the capacity to match the size.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_shrink_to_fit()`.
    pub fn shrink_to_fit(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_shrink_to_fit(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_at()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn at(&self, i: usize) -> *const *mut crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_at(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, i)};
        crate::__check_exception();
        __ret
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_at_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut(&mut self, i: usize) -> *mut *mut crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, i)};
        crate::__check_exception();
        __ret
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_front()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn front(&self) -> *const *mut crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_front(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_front_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut(&mut self) -> *mut *mut crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_back()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn back(&self) -> *const *mut crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_back(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_back_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut(&mut self) -> *mut *mut crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: Option<&mut crate::mr::c_sharp::A>)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, new_elem.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A))};
        crate::__check_exception();
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_pop_back()`.
    pub fn pop_back(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: Option<&mut crate::mr::c_sharp::A>)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position, new_elem.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A))};
        crate::__check_exception();
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position)};
        crate::__check_exception();
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_insert_at_mutable_iter()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert_at_mutable_iter(&mut self, position: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator, new_elem: Option<&mut crate::mr::c_sharp::A>)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_insert_at_mutable_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator, new_elem.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A))};
        crate::__check_exception();
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_erase_at_mutable_iter()`.
    pub fn erase_at_mutable_iter(&mut self, position: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_erase_at_mutable_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_insert_at_iter()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert_at_iter(&mut self, position: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator, new_elem: Option<&mut crate::mr::c_sharp::A>)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_insert_at_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator, new_elem.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::A as *mut crate::ffi::MR_CSharp_A))};
        crate::__check_exception();
        __ret
    }

    /// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_erase_at_iter()`.
    pub fn erase_at_iter(&mut self, position: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_erase_at_iter(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, position as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, const.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_begin()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator)}
    }

    /// Tests whether a const iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_is_begin()`.
    pub fn is_begin(&self, iter: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_is_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_begin_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator)}
    }

    /// Tests whether a mutable iterator is the begin iterator.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_is_begin_mut()`.
    pub fn is_begin_mut(&self, iter: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_is_begin_mut(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, const.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_end()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_end(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator)}
    }

    /// Tests whether a const iterator is the end iterator.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_is_end()`.
    pub fn is_end(&self, iter: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_is_end(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_end_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator)}
    }

    /// Tests whether a mutable iterator is the end iterator.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_is_end_mut()`.
    pub fn is_end_mut(&self, iter: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_is_end_mut(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Convert a const iterator to an index.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_to_index()`.
    pub fn to_index(&self, iter: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator) -> isize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_to_index(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Convert a mutable iterator to an index.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_to_index_mut()`.
    pub fn to_index_mut(&self, iter: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator) -> isize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_to_index_mut(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr, iter as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_CSharp_A_ptr
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Read-only iterator for `MR_C_std_vector_MR_CSharp_A_ptr`.
///
/// Generated from class `std::vector<MR::CSharp::A *>::const_iterator`. Heap-allocated instances are held in `Owned<std_vector_MR_CSharp_A_ptr_const_iterator>`.
#[repr(transparent)]
pub struct std_vector_MR_CSharp_A_ptr_const_iterator(crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator);

unsafe impl crate::CppClass for std_vector_MR_CSharp_A_ptr_const_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)}
}

impl std_vector_MR_CSharp_A_ptr_const_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator) -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator, other as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Makes a const iterator from a mutable one.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_from_mutable()`.
    pub fn from_mutable(iter: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator) -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_from_mutable(iter as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator)}
    }

    /// Dereferences a const iterator.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_deref()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref(&self) -> *const *mut crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Increments a const iterator.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_incr()`.
    pub fn incr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Decrements a const iterator.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_decr()`.
    pub fn decr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Increments or decrements a const iterator by the specific amount. Completes in constant time.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_add_assign()`.
    pub fn add_assign(&mut self, delta: isize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator_add_assign(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator, delta)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_CSharp_A_ptr_const_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Mutable iterator for `MR_C_std_vector_MR_CSharp_A_ptr`.
///
/// Generated from class `std::vector<MR::CSharp::A *>::iterator`. Heap-allocated instances are held in `Owned<std_vector_MR_CSharp_A_ptr_iterator>`.
#[repr(transparent)]
pub struct std_vector_MR_CSharp_A_ptr_iterator(crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator);

unsafe impl crate::CppClass for std_vector_MR_CSharp_A_ptr_iterator
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)}
}

impl std_vector_MR_CSharp_A_ptr_iterator
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_iterator_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_iterator_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator) -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator_ConstructFromAnother(other as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_iterator_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator, other as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Dereferences a mutable iterator.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_iterator_deref()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to things referred to by this object (if any) might be preserved as the return value.
    pub fn deref(&self) -> *mut *mut crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator_deref(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Increments a mutable iterator.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_iterator_incr()`.
    pub fn incr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator_incr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Decrements a mutable iterator.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_iterator_decr()`.
    pub fn decr(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator_decr(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
        crate::__check_exception();
        __ret
    }

    /// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_A_ptr_iterator_add_assign()`.
    pub fn add_assign(&mut self, delta: isize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator_add_assign(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator, delta)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_CSharp_A_ptr_iterator
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Computes the signed difference between two const iterators. Completes in constant time.
///
/// Calls `MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator()`.
pub fn op_sub_mr_c_std_vector_mr_c_sharp_a_ptr_const_iterator(a: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator, b: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator) -> isize
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator(a as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator, b as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
    crate::__check_exception();
    __ret
}

/// Compares two const iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator()`.
pub fn op_equal_mr_c_std_vector_mr_c_sharp_a_ptr_const_iterator(a: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator, b: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator) -> bool
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_vector_MR_CSharp_A_ptr_const_iterator(a as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator, b as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_const_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_const_iterator)};
    crate::__check_exception();
    __ret
}

/// Computes the signed difference between two mutable iterators. Completes in constant time.
///
/// Calls `MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_iterator()`.
pub fn op_sub_mr_c_std_vector_mr_c_sharp_a_ptr_iterator(a: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator, b: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator) -> isize
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_C_std_vector_MR_CSharp_A_ptr_iterator(a as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator, b as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
    crate::__check_exception();
    __ret
}

/// Compares two mutable iterators for equality.
///
/// Calls `MR_C_equal_MR_C_std_vector_MR_CSharp_A_ptr_iterator()`.
pub fn op_equal_mr_c_std_vector_mr_c_sharp_a_ptr_iterator(a: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator, b: &crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator) -> bool
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_C_std_vector_MR_CSharp_A_ptr_iterator(a as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator, b as *const crate::mr::cs::std_vector_MR_CSharp_A_ptr_iterator as *const crate::ffi::MR_C_std_vector_MR_CSharp_A_ptr_iterator)};
    crate::__check_exception();
    __ret
}

