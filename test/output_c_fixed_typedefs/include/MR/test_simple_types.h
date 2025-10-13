#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_SIMPLE_TYPES_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_SIMPLE_TYPES_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef int32_t MR_TestSimpleTypes_E;
enum // MR_TestSimpleTypes_E
{
    MR_TestSimpleTypes_E_e1 = 0,
};

// This enum has a custom underlying type.
typedef int16_t MR_TestSimpleTypes_E2;
enum // MR_TestSimpleTypes_E2
{
    MR_TestSimpleTypes_E2_e1 = 0,
};

// This enum has no constants.
typedef int32_t MR_TestSimpleTypes_E3;

// This has multiple words in the underlying type. This has caused a bug at one point...
typedef uint32_t MR_TestSimpleTypes_E4;

// This will use a custom typedef for the underlying type, if that's enabled!
typedef MR_C_int64_t MR_TestSimpleTypes_E5;

// Class templates.
// Generated from class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_TestSimpleTypes_ClassTemplate_uint64_t MR_TestSimpleTypes_ClassTemplate_uint64_t;

// Enums.
typedef int32_t MR_TestSimpleTypes_ClassTemplate_uint64_t_Enum;

// Generated from function `MR::TestSimpleTypes::GetInt`.
MR_C_API int32_t MR_TestSimpleTypes_GetInt(void);

// Generated from function `MR::TestSimpleTypes::SetInt`.
MR_C_API void MR_TestSimpleTypes_SetInt(int32_t _1);

// Generated from function `MR::TestSimpleTypes::SetIntDef`.
// Parameter `_1` has a default argument: `42`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntDef(const int32_t *_1);

// Generated from function `MR::TestSimpleTypes::GetIntPtr`.
MR_C_API int32_t *MR_TestSimpleTypes_GetIntPtr(void);

// Generated from function `MR::TestSimpleTypes::SetIntPtr`.
MR_C_API void MR_TestSimpleTypes_SetIntPtr(int32_t *_1);

// Generated from function `MR::TestSimpleTypes::SetIntPtrDef`.
// Parameter `_1` has a default argument: `&global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntPtrDef(int32_t *const *_1);

// Generated from function `MR::TestSimpleTypes::SetIntPtrDefNull`.
// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetIntPtrDefNull(int32_t *_1);

// Generated from function `MR::TestSimpleTypes::GetIntRef`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_TestSimpleTypes_GetIntRef(void);

// Generated from function `MR::TestSimpleTypes::SetIntRef`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_TestSimpleTypes_SetIntRef(int32_t *_1);

// Generated from function `MR::TestSimpleTypes::SetIntRefDef`.
// Parameter `_1` is a single object.
// Parameter `_1` has a default argument: `global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntRefDef(int32_t *_1);

// Generated from function `MR::TestSimpleTypes::GetVoidPtr`.
MR_C_API void *MR_TestSimpleTypes_GetVoidPtr(void);

// Generated from function `MR::TestSimpleTypes::SetVoidPtr`.
MR_C_API void MR_TestSimpleTypes_SetVoidPtr(void *_1);

// Generated from function `MR::TestSimpleTypes::SetVoidPtrDef`.
// Parameter `_1` has a default argument: `&global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetVoidPtrDef(void *const *_1);

// Generated from function `MR::TestSimpleTypes::SetVoidPtrDefNull`.
// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetVoidPtrDefNull(void *_1);

// Generated from function `MR::TestSimpleTypes::GetConstVoidPtr`.
MR_C_API const void *MR_TestSimpleTypes_GetConstVoidPtr(void);

// Generated from function `MR::TestSimpleTypes::SetConstVoidPtr`.
MR_C_API void MR_TestSimpleTypes_SetConstVoidPtr(const void *_1);

// Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDef`.
// Parameter `_1` has a default argument: `&global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetConstVoidPtrDef(const void *const *_1);

// Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDefNull`.
// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetConstVoidPtrDefNull(const void *_1);

// Generated from function `MR::TestSimpleTypes::GetVoidPtrPtr`.
MR_C_API void **MR_TestSimpleTypes_GetVoidPtrPtr(void);

// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtr`.
MR_C_API void MR_TestSimpleTypes_SetVoidPtrPtr(void **_1);

// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDef`.
// Parameter `_1` has a default argument: `&global_void_ptr`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetVoidPtrPtrDef(void **const *_1);

// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDefNull`.
// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetVoidPtrPtrDefNull(void **_1);

// Generated from function `MR::TestSimpleTypes::GetEnum`.
MR_C_API int32_t MR_TestSimpleTypes_GetEnum(void);

// Generated from function `MR::TestSimpleTypes::SetEnum`.
MR_C_API void MR_TestSimpleTypes_SetEnum(MR_TestSimpleTypes_E _1);

// Generated from function `MR::TestSimpleTypes::SetEnumDef`.
// Parameter `_1` has a default argument: `E::e1`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnumDef(const MR_TestSimpleTypes_E *_1);

// Generated from function `MR::TestSimpleTypes::GetEnumPtr`.
MR_C_API MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumPtr(void);

// Generated from function `MR::TestSimpleTypes::SetEnumPtr`.
MR_C_API void MR_TestSimpleTypes_SetEnumPtr(MR_TestSimpleTypes_E *_1);

// Generated from function `MR::TestSimpleTypes::SetEnumPtrDef`.
// Parameter `_1` has a default argument: `&global_enum`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnumPtrDef(MR_TestSimpleTypes_E *const *_1);

// Generated from function `MR::TestSimpleTypes::SetEnumPtrDefNull`.
// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetEnumPtrDefNull(MR_TestSimpleTypes_E *_1);

// Generated from function `MR::TestSimpleTypes::GetEnumRef`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumRef(void);

// Generated from function `MR::TestSimpleTypes::SetEnumRef`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_TestSimpleTypes_SetEnumRef(MR_TestSimpleTypes_E *_1);

// Generated from function `MR::TestSimpleTypes::SetEnumRefDef`.
// Parameter `_1` is a single object.
// Parameter `_1` has a default argument: `global_enum`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnumRefDef(MR_TestSimpleTypes_E *_1);

// Generated from function `MR::TestSimpleTypes::GetEnum2`.
MR_C_API int32_t MR_TestSimpleTypes_GetEnum2(void);

// Generated from function `MR::TestSimpleTypes::SetEnum2`.
MR_C_API void MR_TestSimpleTypes_SetEnum2(MR_TestSimpleTypes_E2 _1);

// Generated from function `MR::TestSimpleTypes::SetEnum2Def`.
// Parameter `_1` has a default argument: `E2::e1`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnum2Def(const MR_TestSimpleTypes_E2 *_1);

// Generated from function `MR::TestSimpleTypes::GetEnum2Ptr`.
MR_C_API MR_TestSimpleTypes_E2 *MR_TestSimpleTypes_GetEnum2Ptr(void);

// Generated from function `MR::TestSimpleTypes::SetEnum2Ptr`.
MR_C_API void MR_TestSimpleTypes_SetEnum2Ptr(MR_TestSimpleTypes_E2 *_1);

// Generated from function `MR::TestSimpleTypes::SetEnum2PtrDef`.
// Parameter `_1` has a default argument: `&global_enum2`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnum2PtrDef(MR_TestSimpleTypes_E2 *const *_1);

// Generated from function `MR::TestSimpleTypes::SetEnum2PtrDefNull`.
// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetEnum2PtrDefNull(MR_TestSimpleTypes_E2 *_1);

// Generated from function `MR::TestSimpleTypes::GetEnum2Ref`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TestSimpleTypes_E2 *MR_TestSimpleTypes_GetEnum2Ref(void);

// Generated from function `MR::TestSimpleTypes::SetEnum2Ref`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_TestSimpleTypes_SetEnum2Ref(MR_TestSimpleTypes_E2 *_1);

// Generated from function `MR::TestSimpleTypes::SetEnum2RefDef`.
// Parameter `_1` is a single object.
// Parameter `_1` has a default argument: `global_enum2`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnum2RefDef(MR_TestSimpleTypes_E2 *_1);

// Test all kinds of `char`.
// Generated from function `MR::TestSimpleTypes::CheckChar`.
MR_C_API void MR_TestSimpleTypes_CheckChar_char_ptr(char *_1);

// Generated from function `MR::TestSimpleTypes::CheckChar`.
MR_C_API void MR_TestSimpleTypes_CheckChar_uint8_t_ptr(uint8_t *_1);

// Generated from function `MR::TestSimpleTypes::CheckChar`.
MR_C_API void MR_TestSimpleTypes_CheckChar_int8_t_ptr(int8_t *_1);

// Generated from function `MR::TestSimpleTypes::blah`.
MR_C_API MR_C_uint64_t MR_TestSimpleTypes_blah_uint64_t(MR_C_uint64_t x);

// Generated from function `MR::TestSimpleTypes::blah`.
MR_C_API MR_C_int64_t MR_TestSimpleTypes_blah_int64_t(MR_C_int64_t x);

// Function templates.
// Generated from function `MR::TestSimpleTypes::FuncTemplate<MR_C_uint64_t>`.
MR_C_API MR_C_uint64_t MR_TestSimpleTypes_FuncTemplate_uint64_t(MR_C_uint64_t _1);

// Function templates.
// Generated from function `MR::TestSimpleTypes::FuncTemplate<int32_t>`.
MR_C_API int32_t MR_TestSimpleTypes_FuncTemplate_int32_t(int32_t _1);

// Returns a pointer to a member variable of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>` named `var<MR_C_uint64_t>`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_Get_var_uint64_t(void);

// Modifies a member variable of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>` named `var<MR_C_uint64_t>`.
MR_C_API void MR_TestSimpleTypes_ClassTemplate_uint64_t_Set_var_uint64_t(MR_C_uint64_t value);

// Returns a mutable pointer to a member variable of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>` named `var<MR_C_uint64_t>`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_GetMutable_var_uint64_t(void);

// Generated from a constructor of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother(const MR_TestSimpleTypes_ClassTemplate_uint64_t *_other);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_OffsetPtr(const MR_TestSimpleTypes_ClassTemplate_uint64_t *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_OffsetMutablePtr(MR_TestSimpleTypes_ClassTemplate_uint64_t *ptr, ptrdiff_t i);

// Constructors.
// Generated from a constructor of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t(MR_C_uint64_t _1);

// Constructors.
// Generated from a constructor of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int32_t(int32_t _1);

// Destroys a heap-allocated instance of `MR_TestSimpleTypes_ClassTemplate_uint64_t`. Does nothing if the pointer is null.
MR_C_API void MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy(const MR_TestSimpleTypes_ClassTemplate_uint64_t *_this);

// Destroys a heap-allocated array of `MR_TestSimpleTypes_ClassTemplate_uint64_t`. Does nothing if the pointer is null.
MR_C_API void MR_TestSimpleTypes_ClassTemplate_uint64_t_DestroyArray(const MR_TestSimpleTypes_ClassTemplate_uint64_t *_this);

// Generated from a method of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TestSimpleTypes_ClassTemplate_uint64_t *MR_TestSimpleTypes_ClassTemplate_uint64_t_AssignFromAnother(MR_TestSimpleTypes_ClassTemplate_uint64_t *_this, const MR_TestSimpleTypes_ClassTemplate_uint64_t *_other);

// Methods.
// Generated from a method of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>` named `foo<MR_C_uint64_t>`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_uint64_t(MR_TestSimpleTypes_ClassTemplate_uint64_t *_this);

// Methods.
// Generated from a method of class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>` named `foo<int32_t>`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_int32_t(MR_TestSimpleTypes_ClassTemplate_uint64_t *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_SIMPLE_TYPES_H
