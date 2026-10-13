/// Now with a class:
/// Generated from class `MR::StdUniquePtr::A`.
///
/// Generated from class `MR::StdUniquePtr::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_StdUniquePtr_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_StdUniquePtr_A_Destroy(ptr as *const crate::ffi::MR_StdUniquePtr_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_StdUniquePtr_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::std_unique_ptr::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_StdUniquePtr_A_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_unique_ptr::A)}
    }

    /// Generated from constructor `MR::StdUniquePtr::A::A`.
    ///
    /// Calls `MR_StdUniquePtr_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::std_unique_ptr::A) -> crate::Owned<crate::mr::std_unique_ptr::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_StdUniquePtr_A_ConstructFromAnother(_other as *const crate::mr::std_unique_ptr::A as *const crate::ffi::MR_StdUniquePtr_A)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_unique_ptr::A)}
    }

    /// Generated from method `MR::StdUniquePtr::A::operator=`.
    ///
    /// Calls `MR_StdUniquePtr_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::std_unique_ptr::A) -> &mut crate::mr::std_unique_ptr::A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_StdUniquePtr_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_StdUniquePtr_A, _other as *const crate::mr::std_unique_ptr::A as *const crate::ffi::MR_StdUniquePtr_A)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::std_unique_ptr::A)}
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::StdUniquePtr::GetInt`.
///
/// Calls `MR_StdUniquePtr_GetInt()`.
pub fn get_int() -> *mut core::ffi::c_int
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_GetInt()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetInt`.
///
/// Calls `MR_StdUniquePtr_SetInt()`.
pub fn set_int(_1: &mut core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetInt(_1 as *mut core::ffi::c_int as *mut core::ffi::c_int)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetIntConstRef`.
///
/// Calls `MR_StdUniquePtr_SetIntConstRef()`.
pub fn set_int_const_ref(_1: &crate::mr::cs::std_unique_ptr_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetIntConstRef(_1 as *const crate::mr::cs::std_unique_ptr_int as *const crate::ffi::MR_C_std_unique_ptr_int)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetIntDefTrivial`.
///
/// Calls `MR_StdUniquePtr_SetIntDefTrivial()`.
pub fn set_int_def_trivial(_1: &mut core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetIntDefTrivial(_1 as *mut core::ffi::c_int as *mut core::ffi::c_int)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetIntDef`.
///
/// Calls `MR_StdUniquePtr_SetIntDef()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_int_def(_1: *const *mut core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetIntDef(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetIntLvalueRef`.
///
/// Calls `MR_StdUniquePtr_SetIntLvalueRef()`.
pub fn set_int_lvalue_ref(_1: crate::Owned<crate::mr::cs::std_unique_ptr_int>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetIntLvalueRef(_1.into_raw() as *mut crate::ffi::MR_C_std_unique_ptr_int)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetIntLvalueConstRef`.
///
/// Calls `MR_StdUniquePtr_SetIntLvalueConstRef()`.
pub fn set_int_lvalue_const_ref(_1: &crate::mr::cs::std_unique_ptr_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetIntLvalueConstRef(_1 as *const crate::mr::cs::std_unique_ptr_int as *const crate::ffi::MR_C_std_unique_ptr_int)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetIntRvalueRef`.
///
/// Calls `MR_StdUniquePtr_SetIntRvalueRef()`.
pub fn set_int_rvalue_ref(_1: &mut core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetIntRvalueRef(_1 as *mut core::ffi::c_int as *mut core::ffi::c_int)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetIntRvalueConstRef`.
///
/// Calls `MR_StdUniquePtr_SetIntRvalueConstRef()`.
pub fn set_int_rvalue_const_ref(_1: &mut core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetIntRvalueConstRef(_1 as *mut core::ffi::c_int as *mut core::ffi::c_int)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::GetIntArr`.
///
/// Calls `MR_StdUniquePtr_GetIntArr()`.
pub fn get_int_arr() -> *mut core::ffi::c_int
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_GetIntArr()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetIntArr`.
///
/// Calls `MR_StdUniquePtr_SetIntArr()`.
pub fn set_int_arr(_1: &mut core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetIntArr(_1 as *mut core::ffi::c_int as *mut core::ffi::c_int)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetIntArrDefTrivial`.
///
/// Calls `MR_StdUniquePtr_SetIntArrDefTrivial()`.
pub fn set_int_arr_def_trivial(_1: &mut core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetIntArrDefTrivial(_1 as *mut core::ffi::c_int as *mut core::ffi::c_int)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetIntArrDef`.
///
/// Calls `MR_StdUniquePtr_SetIntArrDef()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_int_arr_def(_1: *const *mut core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetIntArrDef(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::GetClass`.
///
/// Calls `MR_StdUniquePtr_GetClass()`.
pub fn get_class() -> crate::Owned<crate::mr::std_unique_ptr::A>
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_GetClass()};
    crate::__check_exception();
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_unique_ptr::A)}
}

/// Generated from function `MR::StdUniquePtr::SetClass`.
///
/// Calls `MR_StdUniquePtr_SetClass()`.
pub fn set_class(_1: crate::Owned<crate::mr::std_unique_ptr::A>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClass(_1.into_raw() as *mut crate::ffi::MR_StdUniquePtr_A)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetClassConstRef`.
///
/// Calls `MR_StdUniquePtr_SetClassConstRef()`.
pub fn set_class_const_ref(_1: &crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClassConstRef(_1 as *const crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetClassDefTrivial`.
///
/// Calls `MR_StdUniquePtr_SetClassDefTrivial()`.
pub fn set_class_def_trivial(_1: crate::Owned<crate::mr::std_unique_ptr::A>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClassDefTrivial(_1.into_raw() as *mut crate::ffi::MR_StdUniquePtr_A)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetClassDef`.
///
/// Calls `MR_StdUniquePtr_SetClassDef()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_class_def(_1: *const *mut crate::ffi::MR_StdUniquePtr_A)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClassDef(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetClassLvalueRef`.
///
/// Calls `MR_StdUniquePtr_SetClassLvalueRef()`.
pub fn set_class_lvalue_ref(_1: crate::Owned<crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClassLvalueRef(_1.into_raw() as *mut crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetClassLvalueConstRef`.
///
/// Calls `MR_StdUniquePtr_SetClassLvalueConstRef()`.
pub fn set_class_lvalue_const_ref(_1: &crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClassLvalueConstRef(_1 as *const crate::mr::cs::std_unique_ptr_MR_StdUniquePtr_A as *const crate::ffi::MR_C_std_unique_ptr_MR_StdUniquePtr_A)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetClassRvalueRef`.
///
/// Calls `MR_StdUniquePtr_SetClassRvalueRef()`.
pub fn set_class_rvalue_ref(_1: crate::Owned<crate::mr::std_unique_ptr::A>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClassRvalueRef(_1.into_raw() as *mut crate::ffi::MR_StdUniquePtr_A)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetClassRvalueConstRef`.
///
/// Calls `MR_StdUniquePtr_SetClassRvalueConstRef()`.
pub fn set_class_rvalue_const_ref(_1: crate::Owned<crate::mr::std_unique_ptr::A>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClassRvalueConstRef(_1.into_raw() as *mut crate::ffi::MR_StdUniquePtr_A)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::GetClassArr`.
///
/// Calls `MR_StdUniquePtr_GetClassArr()`.
pub fn get_class_arr() -> crate::Owned<crate::mr::std_unique_ptr::A>
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_GetClassArr()};
    crate::__check_exception();
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_unique_ptr::A)}
}

/// Generated from function `MR::StdUniquePtr::SetClassArr`.
///
/// Calls `MR_StdUniquePtr_SetClassArr()`.
pub fn set_class_arr(_1: crate::Owned<crate::mr::std_unique_ptr::A>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClassArr(_1.into_raw() as *mut crate::ffi::MR_StdUniquePtr_A)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetClassArrDefTrivial`.
///
/// Calls `MR_StdUniquePtr_SetClassArrDefTrivial()`.
pub fn set_class_arr_def_trivial(_1: crate::Owned<crate::mr::std_unique_ptr::A>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClassArrDefTrivial(_1.into_raw() as *mut crate::ffi::MR_StdUniquePtr_A)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetClassArrDef`.
///
/// Calls `MR_StdUniquePtr_SetClassArrDef()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_class_arr_def(_1: *const *mut crate::ffi::MR_StdUniquePtr_A)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetClassArrDef(_1)};
    crate::__check_exception();
    __ret
}

/// Try const element types:
/// Generated from function `MR::StdUniquePtr::GetConstInt`.
///
/// Calls `MR_StdUniquePtr_GetConstInt()`.
pub fn get_const_int() -> *const core::ffi::c_int
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_GetConstInt()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::GetConstIntArr`.
///
/// Calls `MR_StdUniquePtr_GetConstIntArr()`.
pub fn get_const_int_arr() -> *const core::ffi::c_int
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_GetConstIntArr()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::GetConstClass`.
///
/// Calls `MR_StdUniquePtr_GetConstClass()`.
pub fn get_const_class() -> *const crate::ffi::MR_StdUniquePtr_A
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_GetConstClass()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::GetConstClassArr`.
///
/// Calls `MR_StdUniquePtr_GetConstClassArr()`.
pub fn get_const_class_arr() -> *const crate::ffi::MR_StdUniquePtr_A
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_GetConstClassArr()};
    crate::__check_exception();
    __ret
}

/// Here `std::unique_ptr<float>` never gets emitted as an actual type (since we don't have non-null default arguments), so its header should not be emitted.
/// Generated from function `MR::StdUniquePtr::GetFloat`.
///
/// Calls `MR_StdUniquePtr_GetFloat()`.
pub fn get_float() -> *mut f32
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_GetFloat()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetFloat`.
///
/// Calls `MR_StdUniquePtr_SetFloat()`.
pub fn set_float(_1: &mut f32)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetFloat(_1 as *mut f32 as *mut f32)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::StdUniquePtr::SetFloatDefTrivial`.
///
/// Calls `MR_StdUniquePtr_SetFloatDefTrivial()`.
pub fn set_float_def_trivial(_1: &mut f32)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_StdUniquePtr_SetFloatDefTrivial(_1 as *mut f32 as *mut f32)};
    crate::__check_exception();
    __ret
}

