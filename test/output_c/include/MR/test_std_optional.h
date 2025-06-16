#pragma once

#include <exports.h>
#include <pass_by.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_optional_MR_StdOptional_A MR_C_std_optional_MR_StdOptional_A; // Defined in `#include <std_optional_MR_StdOptional_A.h>`.
typedef struct MR_C_std_optional_MR_StdOptional_B MR_C_std_optional_MR_StdOptional_B; // Defined in `#include <std_optional_MR_StdOptional_B.h>`.
typedef struct MR_C_std_optional_MR_StdOptional_E MR_C_std_optional_MR_StdOptional_E; // Defined in `#include <std_optional_MR_StdOptional_E.h>`.
typedef struct MR_C_std_optional_int MR_C_std_optional_int; // Defined in `#include <std_optional_int.h>`.
typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


/// Generated from function `MR::StdOptional::GetInt`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_int *MR_StdOptional_GetInt(void);

/// Generated from function `MR::StdOptional::SetInt`.
MR_C_API void MR_StdOptional_SetInt(const int *_1);

/// Generated from function `MR::StdOptional::SetIntDefTrivial`.
/// Parameter `_1` defaults to null in C++.
MR_C_API void MR_StdOptional_SetIntDefTrivial(const int *_1);

/// Generated from function `MR::StdOptional::SetIntDef`.
/// Parameter `_1` has default argument: `42`, pass a null pointer to use it.
MR_C_API void MR_StdOptional_SetIntDef(const MR_C_std_optional_int *_1);

typedef enum MR_StdOptional_E
{
    MR_StdOptional_E_e1 = 0,
} MR_StdOptional_E;

/// Generated from function `MR::StdOptional::GetEnum`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_E_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_E *MR_StdOptional_GetEnum(void);

/// Generated from function `MR::StdOptional::SetEnum`.
MR_C_API void MR_StdOptional_SetEnum(const MR_StdOptional_E *_1);

/// Generated from function `MR::StdOptional::SetEnumDefTrivial`.
/// Parameter `_1` defaults to null in C++.
MR_C_API void MR_StdOptional_SetEnumDefTrivial(const MR_StdOptional_E *_1);

/// Generated from function `MR::StdOptional::SetEnumDef`.
/// Parameter `_1` has default argument: `E::e1`, pass a null pointer to use it.
MR_C_API void MR_StdOptional_SetEnumDef(const MR_C_std_optional_MR_StdOptional_E *_1);

typedef struct MR_StdOptional_A MR_StdOptional_A;

/// Generated from a member variable of C++ class `MR::StdOptional::A` named `x`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_StdOptional_A_GetConst_x(const MR_StdOptional_A *_this);

/// Generated from a member variable of C++ class `MR::StdOptional::A` named `x`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_StdOptional_A_GetMutable_x(MR_StdOptional_A *_this);

/// Generated from a constructor of class `MR::StdOptional::A`.
/// Returns an instance allocated on the heap! Must call `MR_StdOptional_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdOptional_A *MR_StdOptional_A_Construct(void);

/// Generated from a constructor of class `MR::StdOptional::A`.
/// Parameter `_other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_StdOptional_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdOptional_A *MR_StdOptional_A_ConstructFromAnother(const MR_StdOptional_A *_other);

/// Generated from a destructor of class `MR::StdOptional::A`. Destroys the heap-allocated instances.
/// Parameter `_this` can not be null.
MR_C_API void MR_StdOptional_A_Destroy(MR_StdOptional_A *_this);

/// Generated from a method of class `MR::StdOptional::A` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdOptional_A *MR_StdOptional_A_AssignFromAnother(MR_StdOptional_A *_this, const MR_StdOptional_A *_other);

/// Generated from function `MR::StdOptional::GetClass`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_A *MR_StdOptional_GetClass(void);

/// Generated from function `MR::StdOptional::SetClass`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdOptional_SetClass(const MR_StdOptional_A *_1);

/// Generated from function `MR::StdOptional::SetClassDefTrivial`.
/// Parameter `_1` defaults to null in C++.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdOptional_SetClassDefTrivial(const MR_StdOptional_A *_1);

/// Generated from function `MR::StdOptional::SetClassDef`.
/// Parameter `_1` has default argument: `MR::StdOptional::A{42}`, pass a null pointer to use it.
MR_C_API void MR_StdOptional_SetClassDef(const MR_C_std_optional_MR_StdOptional_A *_1);

typedef struct MR_StdOptional_B MR_StdOptional_B;

/// Generated from a member variable of C++ class `MR::StdOptional::B` named `s`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_StdOptional_B_GetConst_s(const MR_StdOptional_B *_this);

/// Generated from a member variable of C++ class `MR::StdOptional::B` named `s`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_StdOptional_B_GetMutable_s(MR_StdOptional_B *_this);

/// Generated from a constructor of class `MR::StdOptional::B`.
/// Returns an instance allocated on the heap! Must call `MR_StdOptional_B_Destroy()` to free it when you're done using it.
MR_C_API MR_StdOptional_B *MR_StdOptional_B_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_StdOptional_B *_other);

/// Generated from a constructor of class `MR::StdOptional::B`.
/// Returns an instance allocated on the heap! Must call `MR_StdOptional_B_Destroy()` to free it when you're done using it.
MR_C_API MR_StdOptional_B *MR_StdOptional_B_Construct(void);

/// Generated from a method of class `MR::StdOptional::B` named `operator=`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdOptional_B *MR_StdOptional_B_AssignFromAnother(MR_StdOptional_B *_this, MR_C_PassBy _other_pass_by, MR_StdOptional_B *_other);

/// Generated from a destructor of class `MR::StdOptional::B`. Destroys the heap-allocated instances.
/// Parameter `_this` can not be null.
MR_C_API void MR_StdOptional_B_Destroy(MR_StdOptional_B *_this);

/// Generated from function `MR::StdOptional::GetClass2`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_B_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_B *MR_StdOptional_GetClass2(void);

/// Generated from function `MR::StdOptional::SetClass2`.
MR_C_API void MR_StdOptional_SetClass2(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1);

/// Generated from function `MR::StdOptional::SetClass2DefTrivial`.
/// Parameter `_1` defaults to null in C++.
MR_C_API void MR_StdOptional_SetClass2DefTrivial(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1);

/// Generated from function `MR::StdOptional::SetClass2Def`.
/// Parameter `_1` has default argument: `MR::StdOptional::B{"blah"}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdOptional_SetClass2Def(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1);

#ifdef __cplusplus
} // extern "C"
#endif
