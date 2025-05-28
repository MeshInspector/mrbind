#pragma once

#include <exports.h>
#include <pass_by.h>
#include <std_vector_MR_A.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string;


typedef struct MR_A MR_A;

/// Generated from a member variable of C++ class `MR::A` named `x`.
/// The returned pointer is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_A_GetConst_x(const MR_A *_this);

/// Generated from a member variable of C++ class `MR::A` named `x`.
/// The returned pointer is non-owning, do NOT destroy it.
MR_C_API MR_C_std_string *MR_A_GetMutable_x(MR_A *_this);

/// Generated from a destructor of class `MR::A`. Destroys the heap-allocated instances.
MR_C_API void MR_A_Destroy(MR_A *_this);

/// Generated from a constructor of class `MR::A`.
/// Returns an instance allocated on the heap! Must call `MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_A *MR_A_Construct(void);

/// Generated from a constructor of class `MR::A`.
/// Returns an instance allocated on the heap! Must call `MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_A *MR_A_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_A *_other);

/// Generated from a method of class `MR::A` named `operator=`.
/// The returned pointer is non-owning, do NOT destroy it.
MR_C_API MR_A *MR_A_AssignFromAnother(MR_A *_this, MR_C_PassBy _other_pass_by, MR_A *_other);

/// Generated from function `MR::foo`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_A *MR_foo(void);

/// Generated from function `MR::bar`.
MR_C_API void MR_bar(MR_C_PassBy _0_pass_by, MR_C_std_vector_MR_A *_0);

#ifdef __cplusplus
} // extern "C"
#endif
