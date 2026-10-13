/// Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
///   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
/// Generated from class `MR::OmittingTargsAndQuals::A<float>`.
///
/// Generated from class `MR::OmittingTargsAndQuals::A<float>`. Heap-allocated instances are held in `Owned<A_float>`.
#[repr(transparent)]
pub struct A_float(crate::ffi::MR_OmittingTargsAndQuals_A_float);

unsafe impl crate::CppClass for A_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OmittingTargsAndQuals_A_float_Destroy(ptr as *const crate::ffi::MR_OmittingTargsAndQuals_A_float)}
}

impl A_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_OmittingTargsAndQuals_A_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::omitting_targs_and_quals::A_float>
    {
        let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_A_float_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::omitting_targs_and_quals::A_float)}
    }

    /// Generated from constructor `MR::OmittingTargsAndQuals::A<float>::A`.
    ///
    /// Calls `MR_OmittingTargsAndQuals_A_float_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::omitting_targs_and_quals::A_float) -> crate::Owned<crate::mr::omitting_targs_and_quals::A_float>
    {
        let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_A_float_ConstructFromAnother(_other as *const crate::mr::omitting_targs_and_quals::A_float as *const crate::ffi::MR_OmittingTargsAndQuals_A_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::omitting_targs_and_quals::A_float)}
    }

    /// Generated from method `MR::OmittingTargsAndQuals::A<float>::operator=`.
    ///
    /// Calls `MR_OmittingTargsAndQuals_A_float_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::omitting_targs_and_quals::A_float) -> &mut crate::mr::omitting_targs_and_quals::A_float
    {
        let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_A_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OmittingTargsAndQuals_A_float, _other as *const crate::mr::omitting_targs_and_quals::A_float as *const crate::ffi::MR_OmittingTargsAndQuals_A_float)};
        unsafe {&mut *(__ret as *mut crate::mr::omitting_targs_and_quals::A_float)}
    }

    /// Generated from method `MR::OmittingTargsAndQuals::A<float>::operator+`.
    ///
    /// Calls `MR_C_pos_MR_OmittingTargsAndQuals_A_float()`.
    pub fn op_pos(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_pos_MR_OmittingTargsAndQuals_A_float(self as *mut Self as *mut crate::ffi::MR_OmittingTargsAndQuals_A_float)};
        __ret
    }

}

unsafe impl crate::CppCopy for A_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
///   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
/// Generated from class `MR::OmittingTargsAndQuals::A<int>`.
///
/// Generated from class `MR::OmittingTargsAndQuals::A<int>`. Heap-allocated instances are held in `Owned<A_int>`.
#[repr(transparent)]
pub struct A_int(crate::ffi::MR_OmittingTargsAndQuals_A_int);

unsafe impl crate::CppClass for A_int
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OmittingTargsAndQuals_A_int_Destroy(ptr as *const crate::ffi::MR_OmittingTargsAndQuals_A_int)}
}

impl A_int
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_OmittingTargsAndQuals_A_int_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::omitting_targs_and_quals::A_int>
    {
        let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_A_int_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::omitting_targs_and_quals::A_int)}
    }

    /// Generated from constructor `MR::OmittingTargsAndQuals::A<int>::A`.
    ///
    /// Calls `MR_OmittingTargsAndQuals_A_int_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::omitting_targs_and_quals::A_int) -> crate::Owned<crate::mr::omitting_targs_and_quals::A_int>
    {
        let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_A_int_ConstructFromAnother(_other as *const crate::mr::omitting_targs_and_quals::A_int as *const crate::ffi::MR_OmittingTargsAndQuals_A_int)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::omitting_targs_and_quals::A_int)}
    }

    /// Generated from method `MR::OmittingTargsAndQuals::A<int>::operator=`.
    ///
    /// Calls `MR_OmittingTargsAndQuals_A_int_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::omitting_targs_and_quals::A_int) -> &mut crate::mr::omitting_targs_and_quals::A_int
    {
        let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_A_int_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OmittingTargsAndQuals_A_int, _other as *const crate::mr::omitting_targs_and_quals::A_int as *const crate::ffi::MR_OmittingTargsAndQuals_A_int)};
        unsafe {&mut *(__ret as *mut crate::mr::omitting_targs_and_quals::A_int)}
    }

    /// Generated from method `MR::OmittingTargsAndQuals::A<int>::operator+`.
    ///
    /// Calls `MR_C_pos_MR_OmittingTargsAndQuals_A_int()`.
    pub fn op_pos(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_pos_MR_OmittingTargsAndQuals_A_int(self as *mut Self as *mut crate::ffi::MR_OmittingTargsAndQuals_A_int)};
        __ret
    }

    /// Generated from method `MR::OmittingTargsAndQuals::A<int>::operator-<float>`.
    ///
    /// Calls `MR_C_sub_MR_OmittingTargsAndQuals_A_int_MR_OmittingTargsAndQuals_A_float()`.
    pub fn op_sub_mr_omitting_targs_and_quals_a_float(&mut self, _1: &crate::mr::omitting_targs_and_quals::A_float)
    {
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_OmittingTargsAndQuals_A_int_MR_OmittingTargsAndQuals_A_float(self as *mut Self as *mut crate::ffi::MR_OmittingTargsAndQuals_A_int, _1 as *const crate::mr::omitting_targs_and_quals::A_float as *const crate::ffi::MR_OmittingTargsAndQuals_A_float)};
        __ret
    }

}

unsafe impl crate::CppCopy for A_int
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::OmittingTargsAndQuals::a`.
///
/// Calls `MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int()`.
pub fn a_mr_omitting_targs_and_quals_a_int(_1: &crate::mr::omitting_targs_and_quals::A_int)
{
    let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int(_1 as *const crate::mr::omitting_targs_and_quals::A_int as *const crate::ffi::MR_OmittingTargsAndQuals_A_int)};
    __ret
}

/// Generated from function `MR::OmittingTargsAndQuals::b<float>`.
///
/// Calls `MR_OmittingTargsAndQuals_b()`.
pub fn b(_1: &crate::mr::omitting_targs_and_quals::A_int, _2: &crate::mr::omitting_targs_and_quals::A_float)
{
    let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_b(_1 as *const crate::mr::omitting_targs_and_quals::A_int as *const crate::ffi::MR_OmittingTargsAndQuals_A_int, _2 as *const crate::mr::omitting_targs_and_quals::A_float as *const crate::ffi::MR_OmittingTargsAndQuals_A_float)};
    __ret
}

/// Generated from function `MR::OmittingTargsAndQuals::a`.
///
/// Calls `MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float()`.
pub fn a_mr_omitting_targs_and_quals_a_float(_1: &crate::mr::omitting_targs_and_quals::A_float)
{
    let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(_1 as *const crate::mr::omitting_targs_and_quals::A_float as *const crate::ffi::MR_OmittingTargsAndQuals_A_float)};
    __ret
}

/// Generated from function `MR::OmittingTargsAndQuals::operator*`.
///
/// Calls `MR_C_deref_MR_OmittingTargsAndQuals_A_int()`.
pub fn op_deref_mr_omitting_targs_and_quals_a_int(_1: &crate::mr::omitting_targs_and_quals::A_int)
{
    let __ret = unsafe {crate::ffi::MR_C_deref_MR_OmittingTargsAndQuals_A_int(_1 as *const crate::mr::omitting_targs_and_quals::A_int as *const crate::ffi::MR_OmittingTargsAndQuals_A_int)};
    __ret
}

/// Generated from function `MR::OmittingTargsAndQuals::operator~<int>`.
///
/// Calls `MR_C_compl_MR_OmittingTargsAndQuals_A_int()`.
pub fn op_compl_mr_omitting_targs_and_quals_a_int(_1: &crate::mr::omitting_targs_and_quals::A_int)
{
    let __ret = unsafe {crate::ffi::MR_C_compl_MR_OmittingTargsAndQuals_A_int(_1 as *const crate::mr::omitting_targs_and_quals::A_int as *const crate::ffi::MR_OmittingTargsAndQuals_A_int)};
    __ret
}

/// Generated from function `MR::OmittingTargsAndQuals::c`.
///
/// Calls `MR_OmittingTargsAndQuals_c()`.
pub fn c(_1: &crate::mr::omitting_targs_and_quals::A_int)
{
    let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_c(_1 as *const crate::mr::omitting_targs_and_quals::A_int as *const crate::ffi::MR_OmittingTargsAndQuals_A_int)};
    __ret
}

/// Generated from function `MR::OmittingTargsAndQuals::d<int>`.
///
/// Calls `MR_OmittingTargsAndQuals_d()`.
pub fn d(_1: &crate::mr::omitting_targs_and_quals::A_int)
{
    let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_d(_1 as *const crate::mr::omitting_targs_and_quals::A_int as *const crate::ffi::MR_OmittingTargsAndQuals_A_int)};
    __ret
}

/// Generated from function `MR::OmittingTargsAndQuals::inst`.
///
/// Calls `MR_OmittingTargsAndQuals_inst()`.
pub fn inst()
{
    let __ret = unsafe {crate::ffi::MR_OmittingTargsAndQuals_inst()};
    __ret
}

