/// Generated from C++ container `std::vector<MR::StdContainers::NonAssignable>`.
///
/// Generated from class `std::vector<MR::StdContainers::NonAssignable>`. Heap-allocated instances are held in `Owned<std_vector_MR_StdContainers_NonAssignable>`.
#[repr(transparent)]
pub struct std_vector_MR_StdContainers_NonAssignable(crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable);

unsafe impl crate::CppClass for std_vector_MR_StdContainers_NonAssignable
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)}
}

impl std_vector_MR_StdContainers_NonAssignable
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonAssignable)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_StdContainers_NonAssignable) -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_StdContainers_NonAssignable as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonAssignable)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_StdContainers_NonAssignable)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_StdContainers_NonAssignable as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_size()`.
    pub fn size(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_size(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_empty()`.
    pub fn empty(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_resize(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, new_size)};
        crate::__check_exception();
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_clear()`.
    pub fn clear(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// The memory capacity, measued in the number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_capacity()`.
    pub fn capacity(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_capacity(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, new_capacity)};
        crate::__check_exception();
        __ret
    }

    /// Shrinks the capacity to match the size.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_shrink_to_fit()`.
    pub fn shrink_to_fit(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_shrink_to_fit(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::mr::std_containers::NonAssignable
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_at(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, i)};
        crate::__check_exception();
        unsafe {&*(__ret as *const crate::mr::std_containers::NonAssignable)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::mr::std_containers::NonAssignable
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, i)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::std_containers::NonAssignable)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a crate::mr::std_containers::NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_front(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {(__ret as *const crate::mr::std_containers::NonAssignable).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::std_containers::NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::mr::std_containers::NonAssignable).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a crate::mr::std_containers::NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_back(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {(__ret as *const crate::mr::std_containers::NonAssignable).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::std_containers::NonAssignable>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::mr::std_containers::NonAssignable).as_mut()}
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: &crate::mr::std_containers::NonAssignable)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable, crate::ffi::MR_C_PassBy_Copy, new_elem as *const crate::mr::std_containers::NonAssignable as *mut crate::ffi::MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_pop_back()`.
    pub fn pop_back(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, const. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_begin()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> *const crate::ffi::MR_StdContainers_NonAssignable
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, mutable. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_begin_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> *mut crate::ffi::MR_StdContainers_NonAssignable
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, const. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_end()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> *const crate::ffi::MR_StdContainers_NonAssignable
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_end(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, mutable. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonAssignable_end_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> *mut crate::ffi::MR_StdContainers_NonAssignable
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonAssignable)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_StdContainers_NonAssignable
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

