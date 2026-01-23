#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef enum MR_TestSimpleTypes_E
{
    MR_TestSimpleTypes_E_e1 = 0,
} MR_TestSimpleTypes_E;

// This enum has a custom underlying type.
typedef short MR_TestSimpleTypes_E2;
enum // MR_TestSimpleTypes_E2
{
    MR_TestSimpleTypes_E2_e1 = 0,
};

// This enum has no constants.
typedef enum MR_TestSimpleTypes_E3
{
    MR_TestSimpleTypes_E3_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_TestSimpleTypes_E3;

// This has multiple words in the underlying type. This has caused a bug at one point...
typedef enum MR_TestSimpleTypes_E4
{
    MR_TestSimpleTypes_E4_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_TestSimpleTypes_E4;

// This will use a custom typedef for the underlying type, if that's enabled!
typedef long MR_TestSimpleTypes_E5;

// Enums.
typedef enum MR_TestSimpleTypes_ClassTemplate_unsigned_long_Enum
{
    MR_TestSimpleTypes_ClassTemplate_unsigned_long_Enum_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_TestSimpleTypes_ClassTemplate_unsigned_long_Enum;

// Class templates.
/// Generated from class `MR::TestSimpleTypes::ClassTemplate<unsigned long>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_TestSimpleTypes_ClassTemplate_unsigned_long MR_TestSimpleTypes_ClassTemplate_unsigned_long;

/// Generated from function `MR::TestSimpleTypes::GetInt`.
MR_C_API int MR_TestSimpleTypes_GetInt(void);

/// Generated from function `MR::TestSimpleTypes::SetInt`.
MR_C_API void MR_TestSimpleTypes_SetInt(int _1);

/// Generated from function `MR::TestSimpleTypes::SetIntDef`.
/// Parameter `_1` has a default argument: `42`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntDef(const int *_1);

/// Generated from function `MR::TestSimpleTypes::GetIntPtr`.
MR_C_API int *MR_TestSimpleTypes_GetIntPtr(void);

/// Generated from function `MR::TestSimpleTypes::SetIntPtr`.
MR_C_API void MR_TestSimpleTypes_SetIntPtr(int *_1);

/// Generated from function `MR::TestSimpleTypes::SetIntPtrDef`.
/// Parameter `_1` has a default argument: `&global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntPtrDef(int *const *_1);

/// Generated from function `MR::TestSimpleTypes::SetIntPtrDefNull`.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetIntPtrDefNull(int *_1);

/// Generated from function `MR::TestSimpleTypes::GetIntRef`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_TestSimpleTypes_GetIntRef(void);

/// Generated from function `MR::TestSimpleTypes::SetIntRef`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_TestSimpleTypes_SetIntRef(int *_1);

/// Generated from function `MR::TestSimpleTypes::SetIntRefDef`.
/// Parameter `_1` is a single object.
/// Parameter `_1` has a default argument: `global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntRefDef(int *_1);

/// Generated from function `MR::TestSimpleTypes::GetVoidPtr`.
MR_C_API void *MR_TestSimpleTypes_GetVoidPtr(void);

/// Generated from function `MR::TestSimpleTypes::SetVoidPtr`.
MR_C_API void MR_TestSimpleTypes_SetVoidPtr(void *_1);

/// Generated from function `MR::TestSimpleTypes::SetVoidPtrDef`.
/// Parameter `_1` has a default argument: `&global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetVoidPtrDef(void *const *_1);

/// Generated from function `MR::TestSimpleTypes::SetVoidPtrDefNull`.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetVoidPtrDefNull(void *_1);

/// Generated from function `MR::TestSimpleTypes::GetConstVoidPtr`.
MR_C_API const void *MR_TestSimpleTypes_GetConstVoidPtr(void);

/// Generated from function `MR::TestSimpleTypes::SetConstVoidPtr`.
MR_C_API void MR_TestSimpleTypes_SetConstVoidPtr(const void *_1);

/// Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDef`.
/// Parameter `_1` has a default argument: `&global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetConstVoidPtrDef(const void *const *_1);

/// Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDefNull`.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetConstVoidPtrDefNull(const void *_1);

/// Generated from function `MR::TestSimpleTypes::GetVoidPtrPtr`.
MR_C_API void **MR_TestSimpleTypes_GetVoidPtrPtr(void);

/// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtr`.
MR_C_API void MR_TestSimpleTypes_SetVoidPtrPtr(void **_1);

/// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDef`.
/// Parameter `_1` has a default argument: `&global_void_ptr`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetVoidPtrPtrDef(void **const *_1);

/// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDefNull`.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetVoidPtrPtrDefNull(void **_1);

/// Generated from function `MR::TestSimpleTypes::GetEnum`.
MR_C_API int MR_TestSimpleTypes_GetEnum(void);

/// Generated from function `MR::TestSimpleTypes::SetEnum`.
MR_C_API void MR_TestSimpleTypes_SetEnum(MR_TestSimpleTypes_E _1);

/// Generated from function `MR::TestSimpleTypes::SetEnumDef`.
/// Parameter `_1` has a default argument: `E::e1`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnumDef(const MR_TestSimpleTypes_E *_1);

/// Generated from function `MR::TestSimpleTypes::GetEnumPtr`.
MR_C_API MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumPtr(void);

/// Generated from function `MR::TestSimpleTypes::SetEnumPtr`.
MR_C_API void MR_TestSimpleTypes_SetEnumPtr(MR_TestSimpleTypes_E *_1);

/// Generated from function `MR::TestSimpleTypes::SetEnumPtrDef`.
/// Parameter `_1` has a default argument: `&global_enum`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnumPtrDef(MR_TestSimpleTypes_E *const *_1);

/// Generated from function `MR::TestSimpleTypes::SetEnumPtrDefNull`.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetEnumPtrDefNull(MR_TestSimpleTypes_E *_1);

/// Generated from function `MR::TestSimpleTypes::GetEnumRef`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumRef(void);

/// Generated from function `MR::TestSimpleTypes::SetEnumRef`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_TestSimpleTypes_SetEnumRef(MR_TestSimpleTypes_E *_1);

/// Generated from function `MR::TestSimpleTypes::SetEnumRefDef`.
/// Parameter `_1` is a single object.
/// Parameter `_1` has a default argument: `global_enum`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnumRefDef(MR_TestSimpleTypes_E *_1);

/// Generated from function `MR::TestSimpleTypes::GetEnum2`.
MR_C_API int MR_TestSimpleTypes_GetEnum2(void);

/// Generated from function `MR::TestSimpleTypes::SetEnum2`.
MR_C_API void MR_TestSimpleTypes_SetEnum2(MR_TestSimpleTypes_E2 _1);

/// Generated from function `MR::TestSimpleTypes::SetEnum2Def`.
/// Parameter `_1` has a default argument: `E2::e1`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnum2Def(const MR_TestSimpleTypes_E2 *_1);

/// Generated from function `MR::TestSimpleTypes::GetEnum2Ptr`.
MR_C_API MR_TestSimpleTypes_E2 *MR_TestSimpleTypes_GetEnum2Ptr(void);

/// Generated from function `MR::TestSimpleTypes::SetEnum2Ptr`.
MR_C_API void MR_TestSimpleTypes_SetEnum2Ptr(MR_TestSimpleTypes_E2 *_1);

/// Generated from function `MR::TestSimpleTypes::SetEnum2PtrDef`.
/// Parameter `_1` has a default argument: `&global_enum2`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnum2PtrDef(MR_TestSimpleTypes_E2 *const *_1);

/// Generated from function `MR::TestSimpleTypes::SetEnum2PtrDefNull`.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetEnum2PtrDefNull(MR_TestSimpleTypes_E2 *_1);

/// Generated from function `MR::TestSimpleTypes::GetEnum2Ref`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TestSimpleTypes_E2 *MR_TestSimpleTypes_GetEnum2Ref(void);

/// Generated from function `MR::TestSimpleTypes::SetEnum2Ref`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_TestSimpleTypes_SetEnum2Ref(MR_TestSimpleTypes_E2 *_1);

/// Generated from function `MR::TestSimpleTypes::SetEnum2RefDef`.
/// Parameter `_1` is a single object.
/// Parameter `_1` has a default argument: `global_enum2`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnum2RefDef(MR_TestSimpleTypes_E2 *_1);

// Test all kinds of `char`.
/// Generated from function `MR::TestSimpleTypes::CheckCharMaybeUnsigned`.
MR_C_API void MR_TestSimpleTypes_CheckCharMaybeUnsigned(char *_1);

/// Generated from function `MR::TestSimpleTypes::CheckChar`.
MR_C_API void MR_TestSimpleTypes_CheckChar_unsigned_char_ptr(unsigned char *_1);

/// Generated from function `MR::TestSimpleTypes::CheckChar`.
MR_C_API void MR_TestSimpleTypes_CheckChar_signed_char_ptr(signed char *_1);

/// Generated from function `MR::TestSimpleTypes::LongLong`.
MR_C_API long long MR_TestSimpleTypes_LongLong(long long x);

/// Generated from function `MR::TestSimpleTypes::blah`.
MR_C_API unsigned long MR_TestSimpleTypes_blah_unsigned_long(unsigned long x);

/// Generated from function `MR::TestSimpleTypes::blah`.
MR_C_API long MR_TestSimpleTypes_blah_long(long x);

// Function templates.
/// Generated from function `MR::TestSimpleTypes::FuncTemplate<unsigned long>`.
MR_C_API unsigned long MR_TestSimpleTypes_FuncTemplate_unsigned_long(unsigned long _1);

// Function templates.
/// Generated from function `MR::TestSimpleTypes::FuncTemplate<int>`.
MR_C_API int MR_TestSimpleTypes_FuncTemplate_int(int _1);

/// Returns a pointer to a member variable of class `MR::TestSimpleTypes::ClassTemplate<unsigned long>` named `var<unsigned long>`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const unsigned long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_Get_var_unsigned_long(void);

/// Modifies a member variable of class `MR::TestSimpleTypes::ClassTemplate<unsigned long>` named `var<unsigned long>`.
/// The reference to the parameter `value` might be preserved in this object in element `var<unsigned long>`.
/// When this function is called, this object will drop object references it had previously in `var<unsigned long>`.
MR_C_API void MR_TestSimpleTypes_ClassTemplate_unsigned_long_Set_var_unsigned_long(unsigned long value);

/// Returns a mutable pointer to a member variable of class `MR::TestSimpleTypes::ClassTemplate<unsigned long>` named `var<unsigned long>`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API unsigned long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_GetMutable_var_unsigned_long(void);

/// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_ConstructFromAnother(const MR_TestSimpleTypes_ClassTemplate_unsigned_long *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_OffsetPtr(const MR_TestSimpleTypes_ClassTemplate_unsigned_long *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_OffsetMutablePtr(MR_TestSimpleTypes_ClassTemplate_unsigned_long *ptr, ptrdiff_t i);

// Constructors.
/// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
/// The reference to the parameter `_1` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_unsigned_long(unsigned long _1);

// Constructors.
/// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_int(int _1);

/// Destroys a heap-allocated instance of `MR_TestSimpleTypes_ClassTemplate_unsigned_long`. Does nothing if the pointer is null.
MR_C_API void MR_TestSimpleTypes_ClassTemplate_unsigned_long_Destroy(const MR_TestSimpleTypes_ClassTemplate_unsigned_long *_this);

/// Destroys a heap-allocated array of `MR_TestSimpleTypes_ClassTemplate_unsigned_long`. Does nothing if the pointer is null.
MR_C_API void MR_TestSimpleTypes_ClassTemplate_unsigned_long_DestroyArray(const MR_TestSimpleTypes_ClassTemplate_unsigned_long *_this);

/// Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_TestSimpleTypes_ClassTemplate_unsigned_long *MR_TestSimpleTypes_ClassTemplate_unsigned_long_AssignFromAnother(MR_TestSimpleTypes_ClassTemplate_unsigned_long *_this, const MR_TestSimpleTypes_ClassTemplate_unsigned_long *_other);

// Methods.
/// Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::foo<unsigned long>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_unsigned_long(MR_TestSimpleTypes_ClassTemplate_unsigned_long *_this);

// Methods.
/// Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::foo<int>`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_int(MR_TestSimpleTypes_ClassTemplate_unsigned_long *_this);

#ifdef __cplusplus
} // extern "C"
#endif
