/// Generated from C++ container `std::vector<MR_C_int64_t>`.
///
/// Generated from class `std::vector<MR_C_int64_t>`. Heap-allocated instances are held in `Owned<std_vector_int64_t>`.
#[repr(transparent)]
pub struct std_vector_int64_t(crate::ffi::MR_C_std_vector_int64_t);

unsafe impl crate::CppClass for std_vector_int64_t
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_int64_t_Destroy(ptr as *const crate::ffi::MR_C_std_vector_int64_t)}
}

impl std_vector_int64_t
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_int64_t_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_int64_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_int64_t_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_int64_t) -> crate::Owned<crate::mr::cs::std_vector_int64_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_int64_t as *mut crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_int64_t)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_int64_t_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_int64_t)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_int64_t as *mut crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_int64_t_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_size(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_int64_t_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_vector_int64_t_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_resize(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, new_size)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_int64_t_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_int64_t_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, new_capacity)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_int64_t_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a i64
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_at(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t, i)};
        unsafe {&*(__ret as *const i64)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_int64_t_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut i64
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, i)};
        unsafe {&mut *(__ret as *mut i64)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_int64_t_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a i64>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_front(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {(__ret as *const i64).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_int64_t_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut i64>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {(__ret as *mut i64).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_int64_t_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a i64>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_back(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {(__ret as *const i64).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_int64_t_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut i64>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        unsafe {(__ret as *mut i64).as_mut()}
    }

    /// Returns a pointer to the continuous storage that holds all elements, read-only.
    ///
    /// Calls `MR_C_std_vector_int64_t_data()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn data(&self) -> *const i64
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_data(self as *const Self as *const crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Returns a pointer to the continuous storage that holds all elements, mutable.
    ///
    /// Calls `MR_C_std_vector_int64_t_data_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn data_mut(&mut self) -> *mut i64
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_data_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_int64_t_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: i64)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, new_elem)};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_int64_t_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_int64_t_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: i64)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, position, new_elem)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_int64_t_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_int64_t_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_int64_t, position)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_int64_t
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

