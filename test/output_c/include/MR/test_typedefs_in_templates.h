#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


// This tests a specific Clang bug/quirk.
// Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
typedef struct MR_TypedefsInTemplates_A_int MR_TypedefsInTemplates_A_int;

/// Generated from a constructor of class `MR::TypedefsInTemplates::A<int>`.
/// Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_A_int_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_Construct(void);

/// Generated from a constructor of class `MR::TypedefsInTemplates::A<int>`.
/// Parameter `_other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_A_int_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_ConstructFromAnother(const MR_TypedefsInTemplates_A_int *_other);

/// Generated from a method of class `MR::TypedefsInTemplates::A<int>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TypedefsInTemplates_A_int *MR_TypedefsInTemplates_A_int_AssignFromAnother(MR_TypedefsInTemplates_A_int *_this, const MR_TypedefsInTemplates_A_int *_other);

/// Generated from a destructor of class `MR::TypedefsInTemplates::A<int>`. Destroys the heap-allocated instances.
/// Parameter `_this` can not be null.
MR_C_API void MR_TypedefsInTemplates_A_int_Destroy(MR_TypedefsInTemplates_A_int *_this);

/// Generated from a method of class `MR::TypedefsInTemplates::A<int>` named `foo`.
/// Parameter `_this` can not be null.
MR_C_API int MR_TypedefsInTemplates_A_int_foo(MR_TypedefsInTemplates_A_int *_this);

typedef struct MR_TypedefsInTemplates_B_int MR_TypedefsInTemplates_B_int;

/// Generated from a constructor of class `MR::TypedefsInTemplates::B<int>`.
/// Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_Construct(void);

/// Generated from a constructor of class `MR::TypedefsInTemplates::B<int>`.
/// Parameter `_other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_ConstructFromAnother(const MR_TypedefsInTemplates_B_int *_other);

/// Generated from a method of class `MR::TypedefsInTemplates::B<int>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TypedefsInTemplates_B_int *MR_TypedefsInTemplates_B_int_AssignFromAnother(MR_TypedefsInTemplates_B_int *_this, const MR_TypedefsInTemplates_B_int *_other);

/// Generated from a destructor of class `MR::TypedefsInTemplates::B<int>`. Destroys the heap-allocated instances.
/// Parameter `_this` can not be null.
MR_C_API void MR_TypedefsInTemplates_B_int_Destroy(MR_TypedefsInTemplates_B_int *_this);

typedef struct MR_TypedefsInTemplates_B_int_BB_float MR_TypedefsInTemplates_B_int_BB_float;

/// Generated from a constructor of class `MR::TypedefsInTemplates::B<int>::BB<float>`.
/// Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int_BB_float_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_Construct(void);

/// Generated from a constructor of class `MR::TypedefsInTemplates::B<int>::BB<float>`.
/// Parameter `_other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_TypedefsInTemplates_B_int_BB_float_Destroy()` to free it when you're done using it.
MR_C_API MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(const MR_TypedefsInTemplates_B_int_BB_float *_other);

/// Generated from a method of class `MR::TypedefsInTemplates::B<int>::BB<float>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TypedefsInTemplates_B_int_BB_float *MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother(MR_TypedefsInTemplates_B_int_BB_float *_this, const MR_TypedefsInTemplates_B_int_BB_float *_other);

/// Generated from a destructor of class `MR::TypedefsInTemplates::B<int>::BB<float>`. Destroys the heap-allocated instances.
/// Parameter `_this` can not be null.
MR_C_API void MR_TypedefsInTemplates_B_int_BB_float_Destroy(MR_TypedefsInTemplates_B_int_BB_float *_this);

/// Generated from a method of class `MR::TypedefsInTemplates::B<int>::BB<float>` named `foo`.
/// Parameter `_this` can not be null.
MR_C_API int MR_TypedefsInTemplates_B_int_BB_float_foo(MR_TypedefsInTemplates_B_int_BB_float *_this);

/// Generated from a method of class `MR::TypedefsInTemplates::B<int>::BB<float>` named `foo2`.
/// Parameter `_this` can not be null.
MR_C_API int MR_TypedefsInTemplates_B_int_BB_float_foo2(MR_TypedefsInTemplates_B_int_BB_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
