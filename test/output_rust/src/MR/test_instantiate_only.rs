/// Generated from class `MR::InstantiateOnly::A`.
///
/// Generated from class `MR::InstantiateOnly::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_InstantiateOnly_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_InstantiateOnly_A_Destroy(ptr as *const crate::ffi::MR_InstantiateOnly_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_InstantiateOnly_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::instantiate_only::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_InstantiateOnly_A_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::instantiate_only::A)}
    }

    /// Generated from constructor `MR::InstantiateOnly::A::A`.
    ///
    /// Calls `MR_InstantiateOnly_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::instantiate_only::A) -> crate::Owned<crate::mr::instantiate_only::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_InstantiateOnly_A_ConstructFromAnother(_other as *const crate::mr::instantiate_only::A as *const crate::ffi::MR_InstantiateOnly_A)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::instantiate_only::A)}
    }

    /// Generated from method `MR::InstantiateOnly::A::operator=`.
    ///
    /// Calls `MR_InstantiateOnly_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::instantiate_only::A) -> &mut crate::mr::instantiate_only::A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_InstantiateOnly_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_InstantiateOnly_A, _other as *const crate::mr::instantiate_only::A as *const crate::ffi::MR_InstantiateOnly_A)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::instantiate_only::A)}
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

