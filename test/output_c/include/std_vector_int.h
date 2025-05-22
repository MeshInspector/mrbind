#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif

/// Generated from C++ container `std::vector<int>`.
typedef struct MR_C_std_vector_int MR_C_std_vector_int;

typedef enum MR_C_std_vector_int_PassBy
{
    MR_C_std_vector_int_PassBy_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.
    MR_C_std_vector_int_PassBy_Copy, // Copy the object into the function. That object is not modified, feel free to cast away the constness from it.
    MR_C_std_vector_int_PassBy_Move, // Move the object into the function. You must still manually destroy your copy.
    MR_C_std_vector_int_PassBy_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.
} MR_C_std_vector_int_PassBy;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int *MR_C_std_vector_int_ConstructFromAnother(MR_C_std_vector_int_PassBy other_pass_by, MR_C_std_vector_int *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
MR_C_API void MR_C_std_vector_int_AssignFromAnother(MR_C_std_vector_int *_this, MR_C_std_vector_int_PassBy other_pass_by, MR_C_std_vector_int *other);

/// Destroys a heap-allocated instance of `std::vector<int>`.
MR_C_API void MR_C_std_vector_int_Destroy(MR_C_std_vector_int *_this);

#ifdef __cplusplus
} // extern "C"
#endif
