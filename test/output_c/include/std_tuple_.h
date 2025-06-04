#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores 0 objects: .
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_tuple_ MR_C_std_tuple_;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple__Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_ *MR_C_std_tuple__DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple__Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_ *MR_C_std_tuple__ConstructFromAnother(const MR_C_std_tuple_ *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_tuple__AssignFromAnother(MR_C_std_tuple_ *_this, const MR_C_std_tuple_ *other);

/// Destroys a heap-allocated instance of `MR_C_std_tuple_`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_tuple__Destroy(MR_C_std_tuple_ *_this);

#ifdef __cplusplus
} // extern "C"
#endif
