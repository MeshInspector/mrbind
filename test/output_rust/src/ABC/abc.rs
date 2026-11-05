/// A sub-library that nothing else uses. `make_csharp.sh` skips it in one of the C# variants (`--skip-split-lib`).
/// Generated from class `MR::SeparateABC`.
///
/// Generated from class `MR::SeparateABC`. Heap-allocated instances are held in `Owned<SeparateABC>`.
#[repr(transparent)]
pub struct SeparateABC(crate::ffi::MR_SeparateABC);

unsafe impl crate::CppClass for SeparateABC
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_SeparateABC_Destroy(ptr as *const crate::ffi::MR_SeparateABC)}
}

impl SeparateABC
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_SeparateABC_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::SeparateABC>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_SeparateABC_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::SeparateABC)}
    }

    /// Generated from constructor `MR::SeparateABC::SeparateABC`.
    ///
    /// Calls `MR_SeparateABC_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::SeparateABC) -> crate::Owned<crate::mr::SeparateABC>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_SeparateABC_ConstructFromAnother(_other as *const crate::mr::SeparateABC as *const crate::ffi::MR_SeparateABC)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::SeparateABC)}
    }

    /// Generated from method `MR::SeparateABC::operator=`.
    ///
    /// Calls `MR_SeparateABC_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::SeparateABC) -> &mut crate::mr::SeparateABC
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_SeparateABC_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_SeparateABC, _other as *const crate::mr::SeparateABC as *const crate::ffi::MR_SeparateABC)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::SeparateABC)}
    }

}

unsafe impl crate::CppCopy for SeparateABC
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::GetSeparateVecABC`.
///
/// Calls `MR_GetSeparateVecABC()`.
pub fn get_separate_vec_abc() -> crate::Owned<crate::mr::cs::std_vector_MR_SeparateABC>
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_GetSeparateVecABC()};
    crate::__check_exception();
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_MR_SeparateABC)}
}

