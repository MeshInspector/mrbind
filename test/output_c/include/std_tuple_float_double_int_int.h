#pragma once

#include <exports.h>
#include <pass_by.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores 4 objects: `float`, `double`, `int`, `int`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_tuple_float_double_int_int MR_C_std_tuple_float_double_int_int;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_float_double_int_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_float_double_int_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_tuple_float_double_int_int *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_tuple_float_double_int_int_AssignFromAnother(MR_C_std_tuple_float_double_int_int *_this, MR_C_PassBy other_pass_by, MR_C_std_tuple_float_double_int_int *other);

/// Destroys a heap-allocated instance of `MR_C_std_tuple_float_double_int_int`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_tuple_float_double_int_int_Destroy(MR_C_std_tuple_float_double_int_int *_this);

/// Constructs the tuple elementwise.
/// Returns an instance allocated on the heap! Must call `MR_C_std_tuple_float_double_int_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_Construct(float _0, double _1, int _2, int _3);

/// The element 0, of type `float`, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_tuple_float_double_int_int_Get_float(const MR_C_std_tuple_float_double_int_int *_this);

/// The element 0, of type `float`, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_tuple_float_double_int_int_GetMutable_float(MR_C_std_tuple_float_double_int_int *_this);

/// The element 1, of type `double`, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const double *MR_C_std_tuple_float_double_int_int_Get_double(const MR_C_std_tuple_float_double_int_int *_this);

/// The element 1, of type `double`, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API double *MR_C_std_tuple_float_double_int_int_GetMutable_double(MR_C_std_tuple_float_double_int_int *_this);

/// The element 2, of type `int`, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_tuple_float_double_int_int_Get_int_2(const MR_C_std_tuple_float_double_int_int *_this);

/// The element 2, of type `int`, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_tuple_float_double_int_int_GetMutable_int_2(MR_C_std_tuple_float_double_int_int *_this);

/// The element 3, of type `int`, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_tuple_float_double_int_int_Get_int_3(const MR_C_std_tuple_float_double_int_int *_this);

/// The element 3, of type `int`, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_tuple_float_double_int_int_GetMutable_int_3(MR_C_std_tuple_float_double_int_int *_this);

#ifdef __cplusplus
} // extern "C"
#endif
