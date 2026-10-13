/// Generated from class `MR::CustomPrefNames::Af`.
///
/// Generated from class `MR::CustomPrefNames::Af`. Heap-allocated instances are held in `Owned<Af>`.
#[repr(transparent)]
pub struct Af(crate::ffi::MR_CustomPrefNames_Af);

unsafe impl crate::CppClass for Af
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CustomPrefNames_Af_Destroy(ptr as *const crate::ffi::MR_CustomPrefNames_Af)}
}

impl Af
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CustomPrefNames_Af_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::custom_pref_names::Af>
    {
        let __ret = unsafe {crate::ffi::MR_CustomPrefNames_Af_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::custom_pref_names::Af)}
    }

    /// Generated from constructor `MR::CustomPrefNames::Af::Af`.
    ///
    /// Calls `MR_CustomPrefNames_Af_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::custom_pref_names::Af) -> crate::Owned<crate::mr::custom_pref_names::Af>
    {
        let __ret = unsafe {crate::ffi::MR_CustomPrefNames_Af_ConstructFromAnother(_other as *const crate::mr::custom_pref_names::Af as *const crate::ffi::MR_CustomPrefNames_Af)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::custom_pref_names::Af)}
    }

    /// Generated from method `MR::CustomPrefNames::Af::operator=`.
    ///
    /// Calls `MR_CustomPrefNames_Af_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::custom_pref_names::Af) -> &mut crate::mr::custom_pref_names::Af
    {
        let __ret = unsafe {crate::ffi::MR_CustomPrefNames_Af_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CustomPrefNames_Af, _other as *const crate::mr::custom_pref_names::Af as *const crate::ffi::MR_CustomPrefNames_Af)};
        unsafe {&mut *(__ret as *mut crate::mr::custom_pref_names::Af)}
    }

}

unsafe impl crate::CppCopy for Af
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::CustomPrefNames::Ai`.
///
/// Generated from class `MR::CustomPrefNames::Ai`. Heap-allocated instances are held in `Owned<Ai>`.
#[repr(transparent)]
pub struct Ai(crate::ffi::MR_CustomPrefNames_Ai);

unsafe impl crate::CppClass for Ai
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_CustomPrefNames_Ai_Destroy(ptr as *const crate::ffi::MR_CustomPrefNames_Ai)}
}

impl Ai
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_CustomPrefNames_Ai_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::custom_pref_names::Ai>
    {
        let __ret = unsafe {crate::ffi::MR_CustomPrefNames_Ai_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::custom_pref_names::Ai)}
    }

    /// Generated from constructor `MR::CustomPrefNames::Ai::Ai`.
    ///
    /// Calls `MR_CustomPrefNames_Ai_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::custom_pref_names::Ai) -> crate::Owned<crate::mr::custom_pref_names::Ai>
    {
        let __ret = unsafe {crate::ffi::MR_CustomPrefNames_Ai_ConstructFromAnother(_other as *const crate::mr::custom_pref_names::Ai as *const crate::ffi::MR_CustomPrefNames_Ai)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::custom_pref_names::Ai)}
    }

    /// Generated from method `MR::CustomPrefNames::Ai::operator=`.
    ///
    /// Calls `MR_CustomPrefNames_Ai_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::custom_pref_names::Ai) -> &mut crate::mr::custom_pref_names::Ai
    {
        let __ret = unsafe {crate::ffi::MR_CustomPrefNames_Ai_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_CustomPrefNames_Ai, _other as *const crate::mr::custom_pref_names::Ai as *const crate::ffi::MR_CustomPrefNames_Ai)};
        unsafe {&mut *(__ret as *mut crate::mr::custom_pref_names::Ai)}
    }

}

unsafe impl crate::CppCopy for Ai
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::CustomPrefNames::blah`.
///
/// Calls `MR_CustomPrefNames_blah()`.
pub fn blah()
{
    let __ret = unsafe {crate::ffi::MR_CustomPrefNames_blah()};
    __ret
}

