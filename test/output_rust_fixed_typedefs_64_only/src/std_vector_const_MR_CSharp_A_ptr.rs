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
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_const_MR_CSharp_A_ptr)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_vector_const_MR_CSharp_A_ptr) -> crate::Owned<crate::mr::cs::std_vector_const_MR_CSharp_A_ptr>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_const_MR_CSharp_A_ptr as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_const_MR_CSharp_A_ptr)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_vector_const_MR_CSharp_A_ptr)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_vector_const_MR_CSharp_A_ptr as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        __ret
    }

    /// The number of elements.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_size()`.
    pub fn size(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_size(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        __ret
    }

    /// Returns true if the size is zero.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_empty()`.
    pub fn empty(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_empty(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        __ret
    }

    /// Resizes the container. The new elements if any are zeroed.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_resize()`.
    pub fn resize(&mut self, new_size: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_resize(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, new_size)};
        __ret
    }

    /// Removes all elements from the container.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_clear()`.
    pub fn clear(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_clear(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        __ret
    }

    /// Reserves memory for a certain number of elements. Never shrinks the memory.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_reserve()`.
    pub fn reserve(&mut self, new_capacity: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_reserve(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, new_capacity)};
        __ret
    }

    /// The element at a specific index, read-only.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_at()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn at(&self, i: usize) -> *const *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_at(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, i)};
        __ret
    }

    /// The element at a specific index, mutable.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_at_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn at_mut(&mut self, i: usize) -> *mut *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_at_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, i)};
        __ret
    }

    /// The first element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_front()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn front(&self) -> *const *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_front(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        __ret
    }

    /// The first element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_front_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn front_mut(&mut self) -> *mut *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_front_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        __ret
    }

    /// The last element or null if empty, read-only.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_back()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn back(&self) -> *const *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_back(self as *const Self as *const crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        __ret
    }

    /// The last element or null if empty, mutable.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_back_mut()`. Some types are raw C types, see the C bindings for the details.
    /// The reference to this object might be preserved as the return value.
    pub fn back_mut(&mut self) -> *mut *const crate::ffi::MR_CSharp_A
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_back_mut(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        __ret
    }

    /// Inserts a new element at the end.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_push_back()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn push_back(&mut self, new_elem: Option<&crate::mr::c_sharp::A>)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_push_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, new_elem.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A))};
        __ret
    }

    /// Removes one element from the end.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_pop_back()`.
    pub fn pop_back(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_pop_back(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr)};
        __ret
    }

    /// Inserts a new element right before the specified position.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_insert()`.
    /// The reference to the parameter `new_elem` might be preserved in this object.
    pub fn insert(&mut self, position: usize, new_elem: Option<&crate::mr::c_sharp::A>)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_insert(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, position, new_elem.map_or(core::ptr::null(), |r| r as *const crate::mr::c_sharp::A as *const crate::ffi::MR_CSharp_A))};
        __ret
    }

    /// Erases the element at the specified position.
    ///
    /// Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_erase()`.
    pub fn erase(&mut self, position: usize)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr_erase(self as *mut Self as *mut crate::ffi::MR_C_std_vector_const_MR_CSharp_A_ptr, position)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_vector_const_MR_CSharp_A_ptr
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

