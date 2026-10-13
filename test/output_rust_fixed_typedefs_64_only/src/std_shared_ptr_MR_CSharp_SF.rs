/// Wraps a pointer to a single shared reference-counted heap-allocated `MR::CSharp::SF`.
///
/// Generated from class `std::shared_ptr<MR::CSharp::SF>`. Heap-allocated instances are held in `Owned<std_shared_ptr_MR_CSharp_SF>`.
#[repr(transparent)]
pub struct std_shared_ptr_MR_CSharp_SF(crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF);

unsafe impl crate::CppClass for std_shared_ptr_MR_CSharp_SF
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_Destroy(ptr as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF)}
}

impl std_shared_ptr_MR_CSharp_SF
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_shared_ptr_MR_CSharp_SF>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SF)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_shared_ptr_MR_CSharp_SF) -> crate::Owned<crate::mr::cs::std_shared_ptr_MR_CSharp_SF>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_shared_ptr_MR_CSharp_SF as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SF)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_shared_ptr_MR_CSharp_SF)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_shared_ptr_MR_CSharp_SF as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF)};
        __ret
    }

    /// Returns the stored pointer, possibly null.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_get()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get<'a>(&'a self) -> Option<&'a mut crate::mr::c_sharp::SF>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_get(self as *const Self as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF)};
        unsafe {(__ret as *mut crate::mr::c_sharp::SF).as_mut()}
    }

    /// Returns true if non-null.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_has_value(self as *const Self as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF)};
        __ret
    }

    /// How many shared pointers share the managed object. Zero if no object is being managed.
    /// This being zero usually conincides with `MR_C_std_shared_ptr_MR_CSharp_SF_get()` returning null, but is ultimately orthogonal.
    /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_use_count()`.
    pub fn use_count(&self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_use_count(self as *const Self as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF)};
        __ret
    }

    /// Resets the pointer to null.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_reset()`.
    pub fn reset(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_reset(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF)};
        __ret
    }

    /// Construct from a value.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_ConstructFromValue()`.
    /// The reference to the parameter `value` might be preserved in the constructed object.
    pub fn construct_from_value(value: &crate::mr::c_sharp::SF) -> crate::Owned<crate::mr::cs::std_shared_ptr_MR_CSharp_SF>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_ConstructFromValue(crate::ffi::MR_C_PassBy_Copy, value as *const crate::mr::c_sharp::SF as *mut crate::ffi::MR_CSharp_SF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SF)}
    }

    /// Create a new instance, taking ownership of an existing pointer.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_Construct()`.
    pub fn construct(ptr: crate::Owned<crate::mr::c_sharp::SF>) -> crate::Owned<crate::mr::cs::std_shared_ptr_MR_CSharp_SF>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_Construct(ptr.into_raw() as *mut crate::ffi::MR_CSharp_SF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SF)}
    }

    /// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_Assign()`.
    pub fn assign(&mut self, ptr: crate::Owned<crate::mr::c_sharp::SF>)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_Assign(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF, ptr.into_raw() as *mut crate::ffi::MR_CSharp_SF)};
        __ret
    }

    /// Create a new instance, storing a non-owning pointer.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_ConstructNonOwning()`.
    /// The reference to the parameter `ptr` might be preserved in the constructed object.
    pub fn construct_non_owning(ptr: Option<&mut crate::mr::c_sharp::SF>) -> crate::Owned<crate::mr::cs::std_shared_ptr_MR_CSharp_SF>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_ConstructNonOwning(ptr.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::SF as *mut crate::ffi::MR_CSharp_SF))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SF)}
    }

    /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_AssignNonOwning()`.
    /// The reference to the parameter `ptr` might be preserved in this object.
    pub fn assign_non_owning(&mut self, ptr: Option<&mut crate::mr::c_sharp::SF>)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_AssignNonOwning(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF, ptr.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::SF as *mut crate::ffi::MR_CSharp_SF))};
        __ret
    }

    /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
    /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_ConstructAliasing()`.
    /// The reference to the parameter `ptr` might be preserved in the constructed object.
    pub fn construct_aliasing(ownership: &crate::mr::cs::std_shared_ptr_const_void, ptr: Option<&mut crate::mr::c_sharp::SF>) -> crate::Owned<crate::mr::cs::std_shared_ptr_MR_CSharp_SF>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_ConstructAliasing(crate::ffi::MR_C_PassBy_Copy, ownership as *const crate::mr::cs::std_shared_ptr_const_void as *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::SF as *mut crate::ffi::MR_CSharp_SF))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_MR_CSharp_SF)}
    }

    /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
    /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_AssignAliasing()`.
    /// The reference to the parameter `ptr` might be preserved in this object.
    pub fn assign_aliasing(&mut self, ownership: &crate::mr::cs::std_shared_ptr_const_void, ptr: Option<&mut crate::mr::c_sharp::SF>)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_AssignAliasing(self as *mut Self as *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF, crate::ffi::MR_C_PassBy_Copy, ownership as *const crate::mr::cs::std_shared_ptr_const_void as *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr.map_or(core::ptr::null_mut(), |r| r as *mut crate::mr::c_sharp::SF as *mut crate::ffi::MR_CSharp_SF))};
        __ret
    }

    /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_ConvertTo_MR_C_std_shared_ptr_void()`.
    pub fn convert_to_mr_c_std_shared_ptr_void(&self) -> crate::Owned<crate::mr::cs::std_shared_ptr_void>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_ConvertTo_MR_C_std_shared_ptr_void(self as *const Self as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_shared_ptr_void)}
    }

    /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
    ///
    /// Calls `MR_C_std_shared_ptr_MR_CSharp_SF_AssignTo_MR_C_std_shared_ptr_void()`.
    pub fn assign_to_mr_c_std_shared_ptr_void(&self, _target: &mut crate::mr::cs::std_shared_ptr_void)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF_AssignTo_MR_C_std_shared_ptr_void(self as *const Self as *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SF, _target as *mut crate::mr::cs::std_shared_ptr_void as *mut crate::ffi::MR_C_std_shared_ptr_void)};
        __ret
    }

}

unsafe impl crate::CppCopy for std_shared_ptr_MR_CSharp_SF
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

