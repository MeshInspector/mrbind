/// Enums.
///
/// Generated from enum `MR::TestSimpleTypes::ClassTemplate<unsigned long>::Enum`. The constants are associated constants of this type.
pub use crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_Enum as ClassTemplate_unsigned_long_Enum;

/// Generated from enum `MR::TestSimpleTypes::E`. The constants are associated constants of this type.
pub use crate::ffi::MR_TestSimpleTypes_E as E;

/// This enum has a custom underlying type.
///
/// Generated from enum `MR::TestSimpleTypes::E2`. The constants are associated constants of this type.
pub use crate::ffi::MR_TestSimpleTypes_E2 as E2;

/// This enum has no constants.
///
/// Generated from enum `MR::TestSimpleTypes::E3`. The constants are associated constants of this type.
pub use crate::ffi::MR_TestSimpleTypes_E3 as E3;

/// This has multiple words in the underlying type. This has caused a bug at one point...
///
/// Generated from enum `MR::TestSimpleTypes::E4`. The constants are associated constants of this type.
pub use crate::ffi::MR_TestSimpleTypes_E4 as E4;

/// This will use a custom typedef for the underlying type, if that's enabled!
///
/// Generated from enum `MR::TestSimpleTypes::E5`. The constants are associated constants of this type.
pub use crate::ffi::MR_TestSimpleTypes_E5 as E5;

/// Class templates.
/// Generated from class `MR::TestSimpleTypes::ClassTemplate<unsigned long>`.
///
/// Generated from class `MR::TestSimpleTypes::ClassTemplate<unsigned long>`. Heap-allocated instances are held in `Owned<ClassTemplate_unsigned_long>`.
#[repr(transparent)]
pub struct ClassTemplate_unsigned_long(crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long);

unsafe impl crate::CppClass for ClassTemplate_unsigned_long
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_Destroy(ptr as *const crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long)}
}

impl ClassTemplate_unsigned_long
{
    /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
    ///
    /// Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::test_simple_types::ClassTemplate_unsigned_long) -> crate::Owned<crate::mr::test_simple_types::ClassTemplate_unsigned_long>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_ConstructFromAnother(_other as *const crate::mr::test_simple_types::ClassTemplate_unsigned_long as *const crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::test_simple_types::ClassTemplate_unsigned_long)}
    }

    /// Constructors.
    /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
    ///
    /// Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_unsigned_long()`.
    /// The reference to the parameter `_1` might be preserved in the constructed object.
    pub fn construct_unsigned_long(_1: core::ffi::c_ulong) -> crate::Owned<crate::mr::test_simple_types::ClassTemplate_unsigned_long>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_unsigned_long(_1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::test_simple_types::ClassTemplate_unsigned_long)}
    }

    /// Constructors.
    /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
    ///
    /// Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_int()`.
    pub fn construct_int(_1: core::ffi::c_int) -> crate::Owned<crate::mr::test_simple_types::ClassTemplate_unsigned_long>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_int(_1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::test_simple_types::ClassTemplate_unsigned_long)}
    }

    /// Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::operator=`.
    ///
    /// Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::test_simple_types::ClassTemplate_unsigned_long) -> &mut crate::mr::test_simple_types::ClassTemplate_unsigned_long
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long, _other as *const crate::mr::test_simple_types::ClassTemplate_unsigned_long as *const crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::test_simple_types::ClassTemplate_unsigned_long)}
    }

    /// Methods.
    /// Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::foo<unsigned long>`.
    ///
    /// Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_unsigned_long()`.
    pub fn foo_unsigned_long(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_unsigned_long(self as *mut Self as *mut crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long)};
        crate::__check_exception();
        __ret
    }

    /// Methods.
    /// Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::foo<int>`.
    ///
    /// Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_int()`.
    pub fn foo_int(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_int(self as *mut Self as *mut crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long)};
        crate::__check_exception();
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::TestSimpleTypes::ClassTemplate<unsigned long>` named `var<unsigned long>`.
    ///
    /// Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Get_var_unsigned_long()`.
    pub fn var() -> *const core::ffi::c_ulong
    {
        let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_Get_var_unsigned_long()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::TestSimpleTypes::ClassTemplate<unsigned long>` named `var<unsigned long>`.
    ///
    /// Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_GetMutable_var_unsigned_long()`.
    pub fn var_mut() -> *mut core::ffi::c_ulong
    {
        let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_GetMutable_var_unsigned_long()};
        __ret
    }

    /// Modifies a member variable of class `MR::TestSimpleTypes::ClassTemplate<unsigned long>` named `var<unsigned long>`.
    ///
    /// Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Set_var_unsigned_long()`.
    /// The reference to the parameter `value` might be preserved in this object in element `var<unsigned long>`.
    pub fn set_var(value: core::ffi::c_ulong)
    {
        let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_ClassTemplate_unsigned_long_Set_var_unsigned_long(value)};
        __ret
    }

}

unsafe impl crate::CppCopy for ClassTemplate_unsigned_long
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::TestSimpleTypes::GetInt`.
///
/// Calls `MR_TestSimpleTypes_GetInt()`.
pub fn get_int() -> core::ffi::c_int
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetInt()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetInt`.
///
/// Calls `MR_TestSimpleTypes_SetInt()`.
pub fn set_int(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetInt(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetIntDef`.
///
/// Calls `MR_TestSimpleTypes_SetIntDef()`.
pub fn set_int_def(_1: Option<core::ffi::c_int>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetIntDef(_1.as_ref().map_or(core::ptr::null(), |r| r as *const core::ffi::c_int as *const core::ffi::c_int))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetIntPtr`.
///
/// Calls `MR_TestSimpleTypes_GetIntPtr()`.
pub fn get_int_ptr() -> *mut core::ffi::c_int
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetIntPtr()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetIntPtr`.
///
/// Calls `MR_TestSimpleTypes_SetIntPtr()`.
pub fn set_int_ptr(_1: Option<&mut core::ffi::c_int>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetIntPtr(_1.map_or(core::ptr::null_mut(), |r| r as *mut core::ffi::c_int as *mut core::ffi::c_int))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetIntPtrDef`.
///
/// Calls `MR_TestSimpleTypes_SetIntPtrDef()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_int_ptr_def(_1: *const *mut core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetIntPtrDef(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetIntPtrDefNull`.
///
/// Calls `MR_TestSimpleTypes_SetIntPtrDefNull()`.
pub fn set_int_ptr_def_null(_1: Option<&mut core::ffi::c_int>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetIntPtrDefNull(_1.map_or(core::ptr::null_mut(), |r| r as *mut core::ffi::c_int as *mut core::ffi::c_int))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetIntRef`.
///
/// Calls `MR_TestSimpleTypes_GetIntRef()`.
pub fn get_int_ref() -> *mut core::ffi::c_int
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetIntRef()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetIntRef`.
///
/// Calls `MR_TestSimpleTypes_SetIntRef()`.
pub fn set_int_ref(_1: &mut core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetIntRef(_1 as *mut core::ffi::c_int as *mut core::ffi::c_int)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetIntRefDef`.
///
/// Calls `MR_TestSimpleTypes_SetIntRefDef()`.
pub fn set_int_ref_def(_1: Option<&mut core::ffi::c_int>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetIntRefDef(_1.map_or(core::ptr::null_mut(), |r| r as *mut core::ffi::c_int as *mut core::ffi::c_int))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetVoidPtr`.
///
/// Calls `MR_TestSimpleTypes_GetVoidPtr()`.
pub fn get_void_ptr() -> *mut core::ffi::c_void
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetVoidPtr()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetVoidPtr`.
///
/// Calls `MR_TestSimpleTypes_SetVoidPtr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_void_ptr(_1: *mut core::ffi::c_void)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetVoidPtr(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetVoidPtrDef`.
///
/// Calls `MR_TestSimpleTypes_SetVoidPtrDef()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_void_ptr_def(_1: *const *mut core::ffi::c_void)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetVoidPtrDef(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetVoidPtrDefNull`.
///
/// Calls `MR_TestSimpleTypes_SetVoidPtrDefNull()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_void_ptr_def_null(_1: *mut core::ffi::c_void)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetVoidPtrDefNull(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetConstVoidPtr`.
///
/// Calls `MR_TestSimpleTypes_GetConstVoidPtr()`.
pub fn get_const_void_ptr() -> *const core::ffi::c_void
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetConstVoidPtr()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetConstVoidPtr`.
///
/// Calls `MR_TestSimpleTypes_SetConstVoidPtr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_const_void_ptr(_1: *const core::ffi::c_void)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetConstVoidPtr(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDef`.
///
/// Calls `MR_TestSimpleTypes_SetConstVoidPtrDef()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_const_void_ptr_def(_1: *const *const core::ffi::c_void)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetConstVoidPtrDef(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDefNull`.
///
/// Calls `MR_TestSimpleTypes_SetConstVoidPtrDefNull()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_const_void_ptr_def_null(_1: *const core::ffi::c_void)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetConstVoidPtrDefNull(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetVoidPtrPtr`.
///
/// Calls `MR_TestSimpleTypes_GetVoidPtrPtr()`. Some types are raw C types, see the C bindings for the details.
pub fn get_void_ptr_ptr() -> *mut *mut core::ffi::c_void
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetVoidPtrPtr()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtr`.
///
/// Calls `MR_TestSimpleTypes_SetVoidPtrPtr()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_void_ptr_ptr(_1: *mut *mut core::ffi::c_void)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetVoidPtrPtr(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDef`.
///
/// Calls `MR_TestSimpleTypes_SetVoidPtrPtrDef()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_void_ptr_ptr_def(_1: *const *mut *mut core::ffi::c_void)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetVoidPtrPtrDef(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDefNull`.
///
/// Calls `MR_TestSimpleTypes_SetVoidPtrPtrDefNull()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_void_ptr_ptr_def_null(_1: *mut *mut core::ffi::c_void)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetVoidPtrPtrDefNull(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetEnum`.
///
/// Calls `MR_TestSimpleTypes_GetEnum()`.
pub fn get_enum() -> core::ffi::c_int
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetEnum()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnum`.
///
/// Calls `MR_TestSimpleTypes_SetEnum()`.
pub fn set_enum(_1: crate::ffi::MR_TestSimpleTypes_E)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnum(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnumDef`.
///
/// Calls `MR_TestSimpleTypes_SetEnumDef()`.
pub fn set_enum_def(_1: Option<crate::ffi::MR_TestSimpleTypes_E>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnumDef(_1.as_ref().map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_TestSimpleTypes_E as *const crate::ffi::MR_TestSimpleTypes_E))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetEnumPtr`.
///
/// Calls `MR_TestSimpleTypes_GetEnumPtr()`.
pub fn get_enum_ptr() -> *mut crate::ffi::MR_TestSimpleTypes_E
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetEnumPtr()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnumPtr`.
///
/// Calls `MR_TestSimpleTypes_SetEnumPtr()`.
pub fn set_enum_ptr(_1: Option<&mut crate::ffi::MR_TestSimpleTypes_E>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnumPtr(_1.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_TestSimpleTypes_E as *mut crate::ffi::MR_TestSimpleTypes_E))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnumPtrDef`.
///
/// Calls `MR_TestSimpleTypes_SetEnumPtrDef()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_enum_ptr_def(_1: *const *mut crate::ffi::MR_TestSimpleTypes_E)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnumPtrDef(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnumPtrDefNull`.
///
/// Calls `MR_TestSimpleTypes_SetEnumPtrDefNull()`.
pub fn set_enum_ptr_def_null(_1: Option<&mut crate::ffi::MR_TestSimpleTypes_E>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnumPtrDefNull(_1.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_TestSimpleTypes_E as *mut crate::ffi::MR_TestSimpleTypes_E))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetEnumRef`.
///
/// Calls `MR_TestSimpleTypes_GetEnumRef()`.
pub fn get_enum_ref() -> *mut crate::ffi::MR_TestSimpleTypes_E
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetEnumRef()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnumRef`.
///
/// Calls `MR_TestSimpleTypes_SetEnumRef()`.
pub fn set_enum_ref(_1: &mut crate::ffi::MR_TestSimpleTypes_E)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnumRef(_1 as *mut crate::ffi::MR_TestSimpleTypes_E as *mut crate::ffi::MR_TestSimpleTypes_E)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnumRefDef`.
///
/// Calls `MR_TestSimpleTypes_SetEnumRefDef()`.
pub fn set_enum_ref_def(_1: Option<&mut crate::ffi::MR_TestSimpleTypes_E>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnumRefDef(_1.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_TestSimpleTypes_E as *mut crate::ffi::MR_TestSimpleTypes_E))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetEnum2`.
///
/// Calls `MR_TestSimpleTypes_GetEnum2()`.
pub fn get_enum2() -> core::ffi::c_int
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetEnum2()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnum2`.
///
/// Calls `MR_TestSimpleTypes_SetEnum2()`.
pub fn set_enum2(_1: crate::ffi::MR_TestSimpleTypes_E2)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnum2(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnum2Def`.
///
/// Calls `MR_TestSimpleTypes_SetEnum2Def()`.
pub fn set_enum2_def(_1: Option<crate::ffi::MR_TestSimpleTypes_E2>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnum2Def(_1.as_ref().map_or(core::ptr::null(), |r| r as *const crate::ffi::MR_TestSimpleTypes_E2 as *const crate::ffi::MR_TestSimpleTypes_E2))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetEnum2Ptr`.
///
/// Calls `MR_TestSimpleTypes_GetEnum2Ptr()`.
pub fn get_enum2_ptr() -> *mut crate::ffi::MR_TestSimpleTypes_E2
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetEnum2Ptr()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnum2Ptr`.
///
/// Calls `MR_TestSimpleTypes_SetEnum2Ptr()`.
pub fn set_enum2_ptr(_1: Option<&mut crate::ffi::MR_TestSimpleTypes_E2>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnum2Ptr(_1.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_TestSimpleTypes_E2 as *mut crate::ffi::MR_TestSimpleTypes_E2))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnum2PtrDef`.
///
/// Calls `MR_TestSimpleTypes_SetEnum2PtrDef()`. Some types are raw C types, see the C bindings for the details.
pub unsafe fn set_enum2_ptr_def(_1: *const *mut crate::ffi::MR_TestSimpleTypes_E2)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnum2PtrDef(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnum2PtrDefNull`.
///
/// Calls `MR_TestSimpleTypes_SetEnum2PtrDefNull()`.
pub fn set_enum2_ptr_def_null(_1: Option<&mut crate::ffi::MR_TestSimpleTypes_E2>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnum2PtrDefNull(_1.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_TestSimpleTypes_E2 as *mut crate::ffi::MR_TestSimpleTypes_E2))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::GetEnum2Ref`.
///
/// Calls `MR_TestSimpleTypes_GetEnum2Ref()`.
pub fn get_enum2_ref() -> *mut crate::ffi::MR_TestSimpleTypes_E2
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_GetEnum2Ref()};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnum2Ref`.
///
/// Calls `MR_TestSimpleTypes_SetEnum2Ref()`.
pub fn set_enum2_ref(_1: &mut crate::ffi::MR_TestSimpleTypes_E2)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnum2Ref(_1 as *mut crate::ffi::MR_TestSimpleTypes_E2 as *mut crate::ffi::MR_TestSimpleTypes_E2)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::SetEnum2RefDef`.
///
/// Calls `MR_TestSimpleTypes_SetEnum2RefDef()`.
pub fn set_enum2_ref_def(_1: Option<&mut crate::ffi::MR_TestSimpleTypes_E2>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_SetEnum2RefDef(_1.map_or(core::ptr::null_mut(), |r| r as *mut crate::ffi::MR_TestSimpleTypes_E2 as *mut crate::ffi::MR_TestSimpleTypes_E2))};
    crate::__check_exception();
    __ret
}

/// Test all kinds of `char`.
/// Generated from function `MR::TestSimpleTypes::CheckCharMaybeUnsigned`.
///
/// Calls `MR_TestSimpleTypes_CheckCharMaybeUnsigned()`.
pub fn check_char_maybe_unsigned(_1: Option<&mut core::ffi::c_char>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_CheckCharMaybeUnsigned(_1.map_or(core::ptr::null_mut(), |r| r as *mut core::ffi::c_char as *mut core::ffi::c_char))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::CheckChar`.
///
/// Calls `MR_TestSimpleTypes_CheckChar_unsigned_char_ptr()`.
pub fn check_char_unsigned_char_ptr(_1: Option<&mut core::ffi::c_uchar>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_CheckChar_unsigned_char_ptr(_1.map_or(core::ptr::null_mut(), |r| r as *mut core::ffi::c_uchar as *mut core::ffi::c_uchar))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::CheckChar`.
///
/// Calls `MR_TestSimpleTypes_CheckChar_signed_char_ptr()`.
pub fn check_char_signed_char_ptr(_1: Option<&mut core::ffi::c_schar>)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_CheckChar_signed_char_ptr(_1.map_or(core::ptr::null_mut(), |r| r as *mut core::ffi::c_schar as *mut core::ffi::c_schar))};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::LongLong`.
///
/// Calls `MR_TestSimpleTypes_LongLong()`.
pub fn long_long(x: core::ffi::c_longlong) -> core::ffi::c_longlong
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_LongLong(x)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::blah`.
///
/// Calls `MR_TestSimpleTypes_blah_unsigned_long()`.
pub fn blah_unsigned_long(x: core::ffi::c_ulong) -> core::ffi::c_ulong
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_blah_unsigned_long(x)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::TestSimpleTypes::blah`.
///
/// Calls `MR_TestSimpleTypes_blah_long()`.
pub fn blah_long(x: core::ffi::c_long) -> core::ffi::c_long
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_blah_long(x)};
    crate::__check_exception();
    __ret
}

/// Function templates.
/// Generated from function `MR::TestSimpleTypes::FuncTemplate<unsigned long>`.
///
/// Calls `MR_TestSimpleTypes_FuncTemplate_unsigned_long()`.
pub fn func_template_unsigned_long(_1: core::ffi::c_ulong) -> core::ffi::c_ulong
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_FuncTemplate_unsigned_long(_1)};
    crate::__check_exception();
    __ret
}

/// Function templates.
/// Generated from function `MR::TestSimpleTypes::FuncTemplate<int>`.
///
/// Calls `MR_TestSimpleTypes_FuncTemplate_int()`.
pub fn func_template_int(_1: core::ffi::c_int) -> core::ffi::c_int
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_TestSimpleTypes_FuncTemplate_int(_1)};
    crate::__check_exception();
    __ret
}

