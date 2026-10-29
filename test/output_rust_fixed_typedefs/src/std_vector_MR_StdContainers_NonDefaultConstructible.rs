/// Generated from C++ container `std::vector<MR::StdContainers::NonDefaultConstructible>`.
///
/// Generated from class `std::vector<MR::StdContainers::NonDefaultConstructible>`. Heap-allocated instances are held in `Owned<std_vector_MR_StdContainers_NonDefaultConstructible>`.
#[repr(transparent)]
pub struct std_vector_MR_StdContainers_NonDefaultConstructible(crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible);

unsafe impl crate::CppClass for std_vector_MR_StdContainers_NonDefaultConstructible
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(ptr as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)}
}

impl std_vector_MR_StdContainers_NonDefaultConstructible
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible) -> crate::Owned<crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_MR_StdContainers_NonDefaultConstructible as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Resizes the container. The new elements if any are set to the specified value.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value()`.
    pub fn resize_with_default_value(&mut self, new_size: usize, value: &crate::mr::std_containers::NonDefaultConstructible)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, new_size, value as *const crate::mr::std_containers::NonDefaultConstructible as *const crate::ffi::MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// The memory capacity, measued in the number of elements.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity()`.
    pub fn capacity(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, new_capacity)};
        __ret
    }

    /// Shrinks the capacity to match the size.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit()`.
    pub fn shrink_to_fit(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::mr::std_containers::NonDefaultConstructible
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, i)};
        unsafe {&*(__ret as *const crate::mr::std_containers::NonDefaultConstructible)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::mr::std_containers::NonDefaultConstructible
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, i)};
        unsafe {&mut *(__ret as *mut crate::mr::std_containers::NonDefaultConstructible)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a crate::mr::std_containers::NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {(__ret as *const crate::mr::std_containers::NonDefaultConstructible).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::std_containers::NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {(__ret as *mut crate::mr::std_containers::NonDefaultConstructible).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a crate::mr::std_containers::NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {(__ret as *const crate::mr::std_containers::NonDefaultConstructible).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::std_containers::NonDefaultConstructible>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        unsafe {(__ret as *mut crate::mr::std_containers::NonDefaultConstructible).as_mut()}
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: &crate::mr::std_containers::NonDefaultConstructible)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, new_elem as *const crate::mr::std_containers::NonDefaultConstructible as *const crate::ffi::MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: &crate::mr::std_containers::NonDefaultConstructible)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, position, new_elem as *const crate::mr::std_containers::NonDefaultConstructible as *const crate::ffi::MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible, position)};
        __ret
    }

    /// The begin iterator, const. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin(&self) -> *const crate::ffi::MR_StdContainers_NonDefaultConstructible
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// The begin iterator, mutable. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn begin_mut(&mut self) -> *mut crate::ffi::MR_StdContainers_NonDefaultConstructible
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// The end iterator, const. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end(&self) -> *const crate::ffi::MR_StdContainers_NonDefaultConstructible
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end(self as *const Self as *const crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

    /// The end iterator, mutable. Iterators of this container are plain pointers.
    ///
    /// Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn end_mut(&mut self) -> *mut crate::ffi::MR_StdContainers_NonDefaultConstructible
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_MR_StdContainers_NonDefaultConstructible)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_MR_StdContainers_NonDefaultConstructible
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

