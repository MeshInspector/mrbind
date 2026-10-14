/// Wraps a pointer to a single shared reference-counted heap-allocated `const int32_t`.
///
/// Generated from class `std::shared_ptr<const int32_t>`. Heap-allocated instances are held in `Owned<std_shared_ptr_const_int32_t>`.
#[repr(transparent)]
pub struct std_shared_ptr_const_int32_t(crate::ffi::MR_C_std_shared_ptr_const_int32_t);

unsafe impl crate::CppClass for std_shared_ptr_const_int32_t
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_shared_ptr_const_int32_t_Destroy(ptr as *const crate::ffi::MR_C_std_shared_ptr_const_int32_t)}
}

impl std_shared_ptr_const_int32_t
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_shared_ptr_const_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_const_int32_t)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_shared_ptr_const_int32_t) -> crate::Owned<crate::mr::cs::std_shared_ptr_const_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_shared_ptr_const_int32_t as *mut crate::ffi::MR_C_std_shared_ptr_const_int32_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_const_int32_t)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_shared_ptr_const_int32_t)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_const_int32_t, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_shared_ptr_const_int32_t as *mut crate::ffi::MR_C_std_shared_ptr_const_int32_t)};
        __ret
    }

    /// Returns the stored pointer, possibly null.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_get()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get<'a>(&'a self) -> Option<&'a i32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_get(self as *const Self as *const crate::ffi::MR_C_std_shared_ptr_const_int32_t)};
        unsafe {(__ret as *const i32).as_ref()}
    }

    /// Returns true if non-null.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_has_value(self as *const Self as *const crate::ffi::MR_C_std_shared_ptr_const_int32_t)};
        __ret
    }

    /// How many shared pointers share the managed object. Zero if no object is being managed.
    /// This being zero usually conincides with `MR_C_std_shared_ptr_const_int32_t_get()` returning null, but is ultimately orthogonal.
    /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_use_count()`.
    pub fn use_count(&self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_use_count(self as *const Self as *const crate::ffi::MR_C_std_shared_ptr_const_int32_t)};
        __ret
    }

    /// Resets the pointer to null.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_reset()`.
    pub fn reset(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_reset(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_const_int32_t)};
        __ret
    }

    /// Construct from a value.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_ConstructFromValue()`.
    /// The reference to the parameter `value` might be preserved in the constructed object.
    pub fn construct_from_value(value: i32) -> crate::Owned<crate::mr::cs::std_shared_ptr_const_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_ConstructFromValue(value)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_const_int32_t)}
    }

    /// Create a new instance, taking ownership of an existing pointer.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_Construct()`.
    pub fn construct(ptr: &i32) -> crate::Owned<crate::mr::cs::std_shared_ptr_const_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_Construct(ptr as *const i32 as *const i32)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_const_int32_t)}
    }

    /// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_Assign()`.
    pub fn assign(&mut self, ptr: &i32)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_Assign(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_const_int32_t, ptr as *const i32 as *const i32)};
        __ret
    }

    /// Create a new instance, storing a non-owning pointer.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_ConstructNonOwning()`.
    /// The reference to the parameter `ptr` might be preserved in the constructed object.
    pub fn construct_non_owning(ptr: Option<&i32>) -> crate::Owned<crate::mr::cs::std_shared_ptr_const_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_ConstructNonOwning(ptr.map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_const_int32_t)}
    }

    /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_AssignNonOwning()`.
    /// The reference to the parameter `ptr` might be preserved in this object.
    pub fn assign_non_owning(&mut self, ptr: Option<&i32>)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_AssignNonOwning(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_const_int32_t, ptr.map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
        __ret
    }

    /// Create a new instance from a non-const pointer to the same type.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_ConstructFromMutable()`.
    pub fn construct_from_mutable(ptr: &crate::mr::cs::std_shared_ptr_int32_t) -> crate::Owned<crate::mr::cs::std_shared_ptr_const_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_ConstructFromMutable(crate::ffi::MR_C_PassBy_Copy, ptr as *const crate::mr::cs::std_shared_ptr_int32_t as *mut crate::ffi::MR_C_std_shared_ptr_int32_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_const_int32_t)}
    }

    /// Overwrite the existing instance with a non-const pointer to the same type.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_AssignFromMutable()`.
    pub fn assign_from_mutable(&mut self, ptr: &crate::mr::cs::std_shared_ptr_int32_t)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_AssignFromMutable(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_const_int32_t, crate::ffi::MR_C_PassBy_Copy, ptr as *const crate::mr::cs::std_shared_ptr_int32_t as *mut crate::ffi::MR_C_std_shared_ptr_int32_t)};
        __ret
    }

    /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
    /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_ConstructAliasing()`.
    /// The reference to the parameter `ptr` might be preserved in the constructed object.
    pub fn construct_aliasing(ownership: &crate::mr::cs::std_shared_ptr_const_void, ptr: Option<&i32>) -> crate::Owned<crate::mr::cs::std_shared_ptr_const_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_ConstructAliasing(crate::ffi::MR_C_PassBy_Copy, ownership as *const crate::mr::cs::std_shared_ptr_const_void as *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr.map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_const_int32_t)}
    }

    /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
    /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_AssignAliasing()`.
    /// The reference to the parameter `ptr` might be preserved in this object.
    pub fn assign_aliasing(&mut self, ownership: &crate::mr::cs::std_shared_ptr_const_void, ptr: Option<&i32>)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_AssignAliasing(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_const_int32_t, crate::ffi::MR_C_PassBy_Copy, ownership as *const crate::mr::cs::std_shared_ptr_const_void as *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr.map_or(core::ptr::null(), |r| r as *const i32 as *const i32))};
        __ret
    }

    /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_ConvertTo_MR_C_std_shared_ptr_const_void()`.
    pub fn convert_to_mr_c_std_shared_ptr_const_void(&self) -> crate::Owned<crate::mr::cs::std_shared_ptr_const_void>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_ConvertTo_MR_C_std_shared_ptr_const_void(self as *const Self as *const crate::ffi::MR_C_std_shared_ptr_const_int32_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_const_void)}
    }

    /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
    ///
    /// Calls `MR_C_std_shared_ptr_const_int32_t_AssignTo_MR_C_std_shared_ptr_const_void()`.
    pub fn assign_to_mr_c_std_shared_ptr_const_void(&self, _target: &mut crate::mr::cs::std_shared_ptr_const_void)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_const_int32_t_AssignTo_MR_C_std_shared_ptr_const_void(self as *const Self as *const crate::ffi::MR_C_std_shared_ptr_const_int32_t, _target as *mut crate::mr::cs::std_shared_ptr_const_void as *mut crate::ffi::MR_C_std_shared_ptr_const_void)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_shared_ptr_const_int32_t
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

