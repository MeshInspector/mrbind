/// Generated from C++ container `std::vector<const MR::CSharp::A *>`.
///
/// Generated from class `std::vector<const MR::CSharp::A *>`. Heap-allocated instances are held in `Owned<std_vector_const_MR_CSharp_A_ptr>`.
#[repr(transparent)]
pub struct std_vector_const_MR_CSharp_A_ptr(crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr);

unsafe impl crate::CppClass for std_vector_const_MR_CSharp_A_ptr
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_Destroy(ptr as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)}
}

impl std_vector_const_MR_CSharp_A_ptr
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_const_MR_CSharp_A_ptr>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_const_MR_CSharp_A_ptr)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_const_MR_CSharp_A_ptr) -> crate::Owned<crate::mr::cs::std_vector_const_MR_CSharp_A_ptr>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_const_MR_CSharp_A_ptr as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_const_MR_CSharp_A_ptr)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_const_MR_CSharp_A_ptr)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_const_MR_CSharp_A_ptr as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_size()`.
    pub fn size(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_size(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_empty()`.
    pub fn empty(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_resize(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, new_size)};
        crate::__check_exception();
        __ret
    }

    /// Resizes the container. The new elements if any are set to the specified value.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_resize_with_default_value()`.
    pub fn resize_with_default_value(&mut self, new_size: usize, value: Option<&crate::mr::c_sharp::A>)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_resize_with_default_value(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, new_size, value.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A))};
        crate::__check_exception();
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_clear()`.
    pub fn clear(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The memory capacity, measued in the number of elements.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_capacity()`.
    pub fn capacity(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_capacity(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, new_capacity)};
        crate::__check_exception();
        __ret
    }

    /// Shrinks the capacity to match the size.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_shrink_to_fit()`.
    pub fn shrink_to_fit(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_shrink_to_fit(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_at()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn at(&self, i: usize) -> *const *const crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_at(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, i)};
        crate::__check_exception();
        __ret
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_at_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut(&mut self, i: usize) -> *mut *const crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, i)};
        crate::__check_exception();
        __ret
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_front()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn front(&self) -> *const *const crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_front(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_front_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut(&mut self) -> *mut *const crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_back()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn back(&self) -> *const *const crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_back(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_back_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut(&mut self) -> *mut *const crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: Option<&crate::mr::c_sharp::A>)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, new_elem.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A))};
        crate::__check_exception();
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_pop_back()`.
    pub fn pop_back(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: Option<&crate::mr::c_sharp::A>)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, position, new_elem.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A))};
        crate::__check_exception();
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, position)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, const. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_begin()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> *const *const crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, mutable. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_begin_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> *mut *const crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, const. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_end()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> *const *const crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_end(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, mutable. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_end_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> *mut *const crate::ffi::MR_CSharp_A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_const_MR_CSharp_A_ptr
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

