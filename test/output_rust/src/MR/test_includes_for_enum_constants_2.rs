/// Generated from class `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>`.
///
/// Generated from class `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>`. Heap-allocated instances are held in `Owned<A_MR_IncludesForEnumConstants_E_e1>`.
#[repr(transparent)]
pub struct A_MR_IncludesForEnumConstants_E_e1(crate::ffi::MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1);

unsafe impl crate::CppClass for A_MR_IncludesForEnumConstants_E_e1
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy(ptr as *const crate::ffi::MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1)}
}

impl A_MR_IncludesForEnumConstants_E_e1
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::includes_for_enum_constants::A_MR_IncludesForEnumConstants_E_e1>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::includes_for_enum_constants::A_MR_IncludesForEnumConstants_E_e1)}
    }

    /// Generated from constructor `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::A`.
    ///
    /// Calls `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::includes_for_enum_constants::A_MR_IncludesForEnumConstants_E_e1) -> crate::Owned<crate::mr::includes_for_enum_constants::A_MR_IncludesForEnumConstants_E_e1>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother(_other as *const crate::mr::includes_for_enum_constants::A_MR_IncludesForEnumConstants_E_e1 as *const crate::ffi::MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::includes_for_enum_constants::A_MR_IncludesForEnumConstants_E_e1)}
    }

    /// Generated from method `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::operator=`.
    ///
    /// Calls `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::includes_for_enum_constants::A_MR_IncludesForEnumConstants_E_e1) -> &mut crate::mr::includes_for_enum_constants::A_MR_IncludesForEnumConstants_E_e1
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1, _other as *const crate::mr::includes_for_enum_constants::A_MR_IncludesForEnumConstants_E_e1 as *const crate::ffi::MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::includes_for_enum_constants::A_MR_IncludesForEnumConstants_E_e1)}
    }

}

unsafe impl crate::CppCopy for A_MR_IncludesForEnumConstants_E_e1
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

