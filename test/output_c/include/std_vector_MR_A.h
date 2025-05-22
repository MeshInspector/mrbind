#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif

/// Generated from C++ container `std::vector<MR::A>`.
typedef struct MR_C_std_vector_MR_A MR_C_std_vector_MR_A;

typedef enum MR_C_std_vector_MR_A_PassBy
{
    MR_C_std_vector_MR_A_PassBy_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.
    MR_C_std_vector_MR_A_PassBy_Copy, // Copy the object into the function. That object is not modified, feel free to cast away the constness from it.
    MR_C_std_vector_MR_A_PassBy_Move, // Move the object into the function. You must still manually destroy your copy.
    MR_C_std_vector_MR_A_PassBy_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.
} MR_C_std_vector_MR_A_PassBy;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_ConstructFromAnother(MR_C_std_vector_MR_A_PassBy other_pass_by, MR_C_std_vector_MR_A *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
MR_C_API void MR_C_std_vector_MR_A_AssignFromAnother(MR_C_std_vector_MR_A *_this, MR_C_std_vector_MR_A_PassBy other_pass_by, MR_C_std_vector_MR_A *other);

/// Destroys a heap-allocated instance of `std::vector<MR::A>`.
MR_C_API void MR_C_std_vector_MR_A_Destroy(MR_C_std_vector_MR_A *_this);

#ifdef __cplusplus
} // extern "C"
#endif
