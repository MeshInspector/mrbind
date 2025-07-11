#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from function `MR::TestSimpleTypes::GetInt`.
MR_C_API int MR_TestSimpleTypes_GetInt(void);

/// Generated from function `MR::TestSimpleTypes::SetInt`.
MR_C_API void MR_TestSimpleTypes_SetInt(int _1);

/// Generated from function `MR::TestSimpleTypes::SetIntDef`.
/// Parameter `_1` has default argument: `42`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntDef(const int *_1);

/// Generated from function `MR::TestSimpleTypes::GetIntPtr`.
MR_C_API int *MR_TestSimpleTypes_GetIntPtr(void);

/// Generated from function `MR::TestSimpleTypes::SetIntPtr`.
MR_C_API void MR_TestSimpleTypes_SetIntPtr(int *_1);

/// Generated from function `MR::TestSimpleTypes::SetIntPtrDef`.
/// Parameter `_1` has default argument: `&global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntPtrDef(int *const *_1);

/// Generated from function `MR::TestSimpleTypes::SetIntPtrDefNull`.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_TestSimpleTypes_SetIntPtrDefNull(int *_1);

/// Generated from function `MR::TestSimpleTypes::GetIntRef`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_TestSimpleTypes_GetIntRef(void);

/// Generated from function `MR::TestSimpleTypes::SetIntRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_TestSimpleTypes_SetIntRef(int *_1);

/// Generated from function `MR::TestSimpleTypes::SetIntRefDef`.
/// Parameter `_1` has default argument: `global_int`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetIntRefDef(int *_1);

typedef enum MR_TestSimpleTypes_E
{
    MR_TestSimpleTypes_E_e1 = 0,
} MR_TestSimpleTypes_E;

/// Generated from function `MR::TestSimpleTypes::GetEnum`.
MR_C_API int MR_TestSimpleTypes_GetEnum(void);

/// Generated from function `MR::TestSimpleTypes::SetEnum`.
MR_C_API void MR_TestSimpleTypes_SetEnum(MR_TestSimpleTypes_E _1);

/// Generated from function `MR::TestSimpleTypes::SetEnumDef`.
/// Parameter `_1` has default argument: `E::e1`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnumDef(const MR_TestSimpleTypes_E *_1);

/// Generated from function `MR::TestSimpleTypes::GetEnumPtr`.
MR_C_API MR_TestSimpleTypes_E *MR_TestSimpleTypes_GetEnumPtr(void);

/// Generated from function `MR::TestSimpleTypes::SetEnumPtr`.
MR_C_API void MR_TestSimpleTypes_SetEnumPtr(MR_TestSimpleTypes_E *_1);

/// Generated from function `MR::TestSimpleTypes::SetEnumPtrDef`.
/// Parameter `_1` has default argument: `&global_enum`, pass a null pointer to use it.
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
/// Parameter `_1` has default argument: `global_enum`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnumRefDef(MR_TestSimpleTypes_E *_1);

// This enum has a custom underlying type.
typedef short MR_TestSimpleTypes_E2;
enum // MR_TestSimpleTypes_E2
{
    MR_TestSimpleTypes_E2_e1 = 0,
};

/// Generated from function `MR::TestSimpleTypes::GetEnum2`.
MR_C_API int MR_TestSimpleTypes_GetEnum2(void);

/// Generated from function `MR::TestSimpleTypes::SetEnum2`.
MR_C_API void MR_TestSimpleTypes_SetEnum2(MR_TestSimpleTypes_E2 _1);

/// Generated from function `MR::TestSimpleTypes::SetEnum2Def`.
/// Parameter `_1` has default argument: `E2::e1`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnum2Def(const MR_TestSimpleTypes_E2 *_1);

/// Generated from function `MR::TestSimpleTypes::GetEnum2Ptr`.
MR_C_API MR_TestSimpleTypes_E2 *MR_TestSimpleTypes_GetEnum2Ptr(void);

/// Generated from function `MR::TestSimpleTypes::SetEnum2Ptr`.
MR_C_API void MR_TestSimpleTypes_SetEnum2Ptr(MR_TestSimpleTypes_E2 *_1);

/// Generated from function `MR::TestSimpleTypes::SetEnum2PtrDef`.
/// Parameter `_1` has default argument: `&global_enum2`, pass a null pointer to use it.
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
/// Parameter `_1` has default argument: `global_enum2`, pass a null pointer to use it.
MR_C_API void MR_TestSimpleTypes_SetEnum2RefDef(MR_TestSimpleTypes_E2 *_1);

// This enum has no constants.
typedef enum MR_TestSimpleTypes_E3
{
    MR_TestSimpleTypes_E3_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_TestSimpleTypes_E3;

#ifdef __cplusplus
} // extern "C"
#endif
