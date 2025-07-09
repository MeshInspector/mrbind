#pragma once

#include <exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from function `MR::TestSimpleTypes::GetInt`.
MR_C_API int32_t MR_TestSimpleTypes_GetInt(void);

/// Generated from function `MR::TestSimpleTypes::SetInt`.
MR_C_API void MR_TestSimpleTypes_SetInt(int32_t _1);

/// Generated from function `MR::TestSimpleTypes::SetIntDef`.
/// Parameter `_1` has a default argument: `42`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntDef(const int32_t *_1);

/// Generated from function `MR::TestSimpleTypes::GetIntPtr`.
MR_C_API int32_t *MR_TestSimpleTypes_GetIntPtr(void);

/// Generated from function `MR::TestSimpleTypes::SetIntPtr`.
MR_C_API void MR_TestSimpleTypes_SetIntPtr(int32_t *_1);

/// Generated from function `MR::TestSimpleTypes::SetIntPtrDef`.
/// Parameter `_1` has a default argument: `&global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntPtrDef(int32_t *const *_1);

/// Generated from function `MR::TestSimpleTypes::SetIntPtrDefNull`.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetIntPtrDefNull(int32_t *_1);

/// Generated from function `MR::TestSimpleTypes::GetIntRef`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_TestSimpleTypes_GetIntRef(void);

/// Generated from function `MR::TestSimpleTypes::SetIntRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_TestSimpleTypes_SetIntRef(int32_t *_1);

/// Generated from function `MR::TestSimpleTypes::SetIntRefDef`.
/// Parameter `_1` has a default argument: `global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntRefDef(int32_t *_1);

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

typedef int32_t MR_TestSimpleTypes_E;
enum // MR_TestSimpleTypes_E
{
    MR_TestSimpleTypes_E_e1 = 0,
};

/// Generated from function `MR::TestSimpleTypes::GetEnum`.
MR_C_API int32_t MR_TestSimpleTypes_GetEnum(void);

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
/// Parameter `_1` can not be null.
MR_C_API void MR_TestSimpleTypes_SetEnumRef(MR_TestSimpleTypes_E *_1);

/// Generated from function `MR::TestSimpleTypes::SetEnumRefDef`.
/// Parameter `_1` has a default argument: `global_enum`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnumRefDef(MR_TestSimpleTypes_E *_1);

// This enum has a custom underlying type.
typedef int16_t MR_TestSimpleTypes_E2;
enum // MR_TestSimpleTypes_E2
{
    MR_TestSimpleTypes_E2_e1 = 0,
};

/// Generated from function `MR::TestSimpleTypes::GetEnum2`.
MR_C_API int32_t MR_TestSimpleTypes_GetEnum2(void);

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
/// Parameter `_1` can not be null.
MR_C_API void MR_TestSimpleTypes_SetEnum2Ref(MR_TestSimpleTypes_E2 *_1);

/// Generated from function `MR::TestSimpleTypes::SetEnum2RefDef`.
/// Parameter `_1` has a default argument: `global_enum2`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnum2RefDef(MR_TestSimpleTypes_E2 *_1);

// This enum has no constants.
typedef int32_t MR_TestSimpleTypes_E3;

/// Generated from function `MR::TestSimpleTypes::blah`.
MR_C_API uint64_t MR_TestSimpleTypes_blah_uint64_t(uint64_t x);

/// Generated from function `MR::TestSimpleTypes::blah`.
MR_C_API int64_t MR_TestSimpleTypes_blah_int64_t(int64_t x);

#ifdef __cplusplus
} // extern "C"
#endif
