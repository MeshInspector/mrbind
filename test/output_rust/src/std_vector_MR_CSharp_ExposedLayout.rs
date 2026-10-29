/// Generated from C++ container `std::vector<MR::CSharp::ExposedLayout>`.
///
/// Generated from class `std::vector<MR::CSharp::ExposedLayout>`. Heap-allocated instances are held in `Owned<std_vector_MR_CSharp_ExposedLayout>`.
#[repr(transparent)]
pub struct std_vector_MR_CSharp_ExposedLayout(crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout);

unsafe impl crate::CppClass for std_vector_MR_CSharp_ExposedLayout
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)}
}

impl std_vector_MR_CSharp_ExposedLayout
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_ExposedLayout>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_ExposedLayout)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_CSharp_ExposedLayout) -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_ExposedLayout>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_CSharp_ExposedLayout as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_ExposedLayout)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_CSharp_ExposedLayout)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_CSharp_ExposedLayout as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// Construct from a range of elements.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange()`.
    pub fn construct_from_range(ptr: Option<&crate::ffi::MR_CSharp_ExposedLayout>, size: usize) -> crate::Owned<crate::mr::cs::std_vector_MR_CSharp_ExposedLayout>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(ptr.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout), size)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_CSharp_ExposedLayout)}
    }

    /// Assign from a range of elements, overwriting previous contents.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange()`.
    pub fn assign_from_range(&mut self, ptr: Option<&crate::ffi::MR_CSharp_ExposedLayout>, size: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, ptr.map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout), size)};
        crate::__check_exception();
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_size()`.
    pub fn size(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_size(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_empty()`.
    pub fn empty(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_resize(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, new_size)};
        crate::__check_exception();
        __ret
    }

    /// Resizes the container. The new elements if any are set to the specified value.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value()`.
    pub fn resize_with_default_value(&mut self, new_size: usize, value: &crate::ffi::MR_CSharp_ExposedLayout)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, new_size, value as *const crate::ffi::MR_CSharp_ExposedLayout as *const crate::ffi::MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_clear()`.
    pub fn clear(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// The memory capacity, measued in the number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_capacity()`.
    pub fn capacity(&self) -> usize
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_capacity(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, new_capacity)};
        crate::__check_exception();
        __ret
    }

    /// Shrinks the capacity to match the size.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit()`.
    pub fn shrink_to_fit(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::ffi::MR_CSharp_ExposedLayout
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_at(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, i)};
        crate::__check_exception();
        unsafe {&*(__ret as *const crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::ffi::MR_CSharp_ExposedLayout
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, i)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a crate::ffi::MR_CSharp_ExposedLayout>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_front(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        unsafe {(__ret as *const crate::ffi::MR_CSharp_ExposedLayout).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut crate::ffi::MR_CSharp_ExposedLayout>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a crate::ffi::MR_CSharp_ExposedLayout>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_back(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        unsafe {(__ret as *const crate::ffi::MR_CSharp_ExposedLayout).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut crate::ffi::MR_CSharp_ExposedLayout>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        unsafe {(__ret as *mut crate::ffi::MR_CSharp_ExposedLayout).as_mut()}
    }

    /// Returns a pointer to the continuous storage that holds all elements, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_data()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn data(&self) -> *const crate::ffi::MR_CSharp_ExposedLayout
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_data(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// Returns a pointer to the continuous storage that holds all elements, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn data_mut(&mut self) -> *mut crate::ffi::MR_CSharp_ExposedLayout
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: crate::ffi::MR_CSharp_ExposedLayout)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, new_elem)};
        crate::__check_exception();
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back()`.
    pub fn pop_back(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: crate::ffi::MR_CSharp_ExposedLayout)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, position, new_elem)};
        crate::__check_exception();
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout, position)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, const. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_begin()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> *const crate::ffi::MR_CSharp_ExposedLayout
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// The begin iterator, mutable. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> *mut crate::ffi::MR_CSharp_ExposedLayout
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, const. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_end()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> *const crate::ffi::MR_CSharp_ExposedLayout
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_end(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

    /// The end iterator, mutable. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> *mut crate::ffi::MR_CSharp_ExposedLayout
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_CSharp_ExposedLayout)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_CSharp_ExposedLayout
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

