/// Generated from C++ container `std::vector<std::expected<int, std::string>>`.
///
/// Generated from class `std::vector<std::expected<int, std::string>>`. Heap-allocated instances are held in `Owned<std_vector_std_expected_int_std_string>`.
#[repr(transparent)]
pub struct std_vector_std_expected_int_std_string(crate::ffi::MR_C_std_vector_std_expected_int_std_string);

unsafe impl crate::CppClass for std_vector_std_expected_int_std_string
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_vector_std_expected_int_std_string_Destroy(ptr as *const crate::ffi::MR_C_std_vector_std_expected_int_std_string)}
}

impl std_vector_std_expected_int_std_string
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_vector_std_expected_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_std_expected_int_std_string)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_std_expected_int_std_string) -> crate::Owned<crate::mr::cs::std_vector_std_expected_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_std_expected_int_std_string as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_std_expected_int_std_string)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_std_expected_int_std_string)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_std_expected_int_std_string as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_size(self as *const Self as *const crate::ffi::MR_C_std_vector_std_expected_int_std_string)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_std_expected_int_std_string)};
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_resize(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string, new_size)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string)};
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string, new_capacity)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_at()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at<'a>(&'a self, i: usize) -> &'a crate::mr::cs::std_expected_int_std_string
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_at(self as *const Self as *const crate::ffi::MR_C_std_vector_std_expected_int_std_string, i)};
        unsafe {&*(__ret as *const crate::mr::cs::std_expected_int_std_string)}
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_at_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut<'a>(&'a mut self, i: usize) -> &'a mut crate::mr::cs::std_expected_int_std_string
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string, i)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_expected_int_std_string)}
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_front()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front<'a>(&'a self) -> Option<&'a crate::mr::cs::std_expected_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_front(self as *const Self as *const crate::ffi::MR_C_std_vector_std_expected_int_std_string)};
        unsafe {(__ret as *const crate::mr::cs::std_expected_int_std_string).as_ref()}
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_front_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::cs::std_expected_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string)};
        unsafe {(__ret as *mut crate::mr::cs::std_expected_int_std_string).as_mut()}
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_back()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back<'a>(&'a self) -> Option<&'a crate::mr::cs::std_expected_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_back(self as *const Self as *const crate::ffi::MR_C_std_vector_std_expected_int_std_string)};
        unsafe {(__ret as *const crate::mr::cs::std_expected_int_std_string).as_ref()}
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_back_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::cs::std_expected_int_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string)};
        unsafe {(__ret as *mut crate::mr::cs::std_expected_int_std_string).as_mut()}
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: &crate::mr::cs::std_expected_int_std_string)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string, crate::ffi::MR_C_PassBy_Copy, new_elem as *const crate::mr::cs::std_expected_int_std_string as *mut crate::ffi::MR_C_std_expected_int_std_string)};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: &crate::mr::cs::std_expected_int_std_string)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string, position, crate::ffi::MR_C_PassBy_Copy, new_elem as *const crate::mr::cs::std_expected_int_std_string as *mut crate::ffi::MR_C_std_expected_int_std_string)};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_std_expected_int_std_string_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_std_expected_int_std_string_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_std_expected_int_std_string, position)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_std_expected_int_std_string
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

