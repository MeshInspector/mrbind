/// Generated from class `MR::NestedTemplateInst::A<int32_t>`.
///
/// Generated from class `MR::NestedTemplateInst::A<int32_t>`. Heap-allocated instances are held in `Owned<A_int32_t>`.
#[repr(transparent)]
pub struct A_int32_t(crate::ffi::MR_NestedTemplateInst_A_int32_t);

unsafe impl crate::CppClass for A_int32_t
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_NestedTemplateInst_A_int32_t_Destroy(ptr as *const crate::ffi::MR_NestedTemplateInst_A_int32_t)}
}

impl A_int32_t
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_NestedTemplateInst_A_int32_t_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::nested_template_inst::A_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_NestedTemplateInst_A_int32_t_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::nested_template_inst::A_int32_t)}
    }

    /// Generated from constructor `MR::NestedTemplateInst::A<int32_t>::A`.
    ///
    /// Calls `MR_NestedTemplateInst_A_int32_t_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::nested_template_inst::A_int32_t) -> crate::Owned<crate::mr::nested_template_inst::A_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_NestedTemplateInst_A_int32_t_ConstructFromAnother(_other as *const crate::mr::nested_template_inst::A_int32_t as *const crate::ffi::MR_NestedTemplateInst_A_int32_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::nested_template_inst::A_int32_t)}
    }

    /// Generated from method `MR::NestedTemplateInst::A<int32_t>::operator=`.
    ///
    /// Calls `MR_NestedTemplateInst_A_int32_t_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::nested_template_inst::A_int32_t) -> &mut crate::mr::nested_template_inst::A_int32_t
    {
        let __ret = unsafe {crate::ffi::MR_NestedTemplateInst_A_int32_t_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_NestedTemplateInst_A_int32_t, _other as *const crate::mr::nested_template_inst::A_int32_t as *const crate::ffi::MR_NestedTemplateInst_A_int32_t)};
        unsafe {&mut *(__ret as *mut crate::mr::nested_template_inst::A_int32_t)}
    }

}

unsafe impl crate::CppCopy for A_int32_t
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// This struct needs special care to be instantiated, even with the typedef below. Hmm.
/// Generated from class `MR::NestedTemplateInst::A<int32_t>::AA<float>`.
///
/// Generated from class `MR::NestedTemplateInst::A<int32_t>::AA<float>`. Heap-allocated instances are held in `Owned<A_int32_t_AA_float>`.
#[repr(transparent)]
pub struct A_int32_t_AA_float(crate::ffi::MR_NestedTemplateInst_A_int32_t_AA_float);

unsafe impl crate::CppClass for A_int32_t_AA_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_NestedTemplateInst_A_int32_t_AA_float_Destroy(ptr as *const crate::ffi::MR_NestedTemplateInst_A_int32_t_AA_float)}
}

impl A_int32_t_AA_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_NestedTemplateInst_A_int32_t_AA_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::nested_template_inst::A_int32_t_AA_float>
    {
        let __ret = unsafe {crate::ffi::MR_NestedTemplateInst_A_int32_t_AA_float_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::nested_template_inst::A_int32_t_AA_float)}
    }

    /// Generated from constructor `MR::NestedTemplateInst::A<int32_t>::AA<float>::AA`.
    ///
    /// Calls `MR_NestedTemplateInst_A_int32_t_AA_float_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::nested_template_inst::A_int32_t_AA_float) -> crate::Owned<crate::mr::nested_template_inst::A_int32_t_AA_float>
    {
        let __ret = unsafe {crate::ffi::MR_NestedTemplateInst_A_int32_t_AA_float_ConstructFromAnother(_other as *const crate::mr::nested_template_inst::A_int32_t_AA_float as *const crate::ffi::MR_NestedTemplateInst_A_int32_t_AA_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::nested_template_inst::A_int32_t_AA_float)}
    }

    /// Generated from method `MR::NestedTemplateInst::A<int32_t>::AA<float>::operator=`.
    ///
    /// Calls `MR_NestedTemplateInst_A_int32_t_AA_float_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::nested_template_inst::A_int32_t_AA_float) -> &mut crate::mr::nested_template_inst::A_int32_t_AA_float
    {
        let __ret = unsafe {crate::ffi::MR_NestedTemplateInst_A_int32_t_AA_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_NestedTemplateInst_A_int32_t_AA_float, _other as *const crate::mr::nested_template_inst::A_int32_t_AA_float as *const crate::ffi::MR_NestedTemplateInst_A_int32_t_AA_float)};
        unsafe {&mut *(__ret as *mut crate::mr::nested_template_inst::A_int32_t_AA_float)}
    }

}

unsafe impl crate::CppCopy for A_int32_t_AA_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

