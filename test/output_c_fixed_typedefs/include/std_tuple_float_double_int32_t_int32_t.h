#pragma once

#include <exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Stores 4 objects: `float`, `double`, `int32_t`, `int32_t`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_tuple_float_double_int32_t_int32_t MR_C_std_tuple_float_double_int32_t_int32_t;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_float_double_int32_t_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_tuple_float_double_int32_t_int32_t_DestroyArray()`.
// Use `MR_C_std_tuple_float_double_int32_t_int32_t_OffsetMutablePtr()` and `MR_C_std_tuple_float_double_int32_t_int32_t_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_float_double_int32_t_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother(const MR_C_std_tuple_float_double_int32_t_int32_t *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
MR_C_API void MR_C_std_tuple_float_double_int32_t_int32_t_AssignFromAnother(MR_C_std_tuple_float_double_int32_t_int32_t *_this, const MR_C_std_tuple_float_double_int32_t_int32_t *other);

// Destroys a heap-allocated instance of `MR_C_std_tuple_float_double_int32_t_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_float_double_int32_t_int32_t_Destroy(const MR_C_std_tuple_float_double_int32_t_int32_t *_this);

// Destroys a heap-allocated array of `MR_C_std_tuple_float_double_int32_t_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_float_double_int32_t_int32_t_DestroyArray(const MR_C_std_tuple_float_double_int32_t_int32_t *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_OffsetPtr(const MR_C_std_tuple_float_double_int32_t_int32_t *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_OffsetMutablePtr(MR_C_std_tuple_float_double_int32_t_int32_t *ptr, ptrdiff_t i);

// Constructs the tuple elementwise.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_float_double_int32_t_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_float_double_int32_t_int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_Construct(float _0, double _1, int32_t _2, int32_t _3);

// The element 0, of type `float`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_tuple_float_double_int32_t_int32_t_Get_float(const MR_C_std_tuple_float_double_int32_t_int32_t *_this);

// The element 0, of type `float`, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_tuple_float_double_int32_t_int32_t_GetMutable_float(MR_C_std_tuple_float_double_int32_t_int32_t *_this);

// The element 1, of type `double`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const double *MR_C_std_tuple_float_double_int32_t_int32_t_Get_double(const MR_C_std_tuple_float_double_int32_t_int32_t *_this);

// The element 1, of type `double`, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API double *MR_C_std_tuple_float_double_int32_t_int32_t_GetMutable_double(MR_C_std_tuple_float_double_int32_t_int32_t *_this);

// The element 2, of type `int32_t`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_Get_int32_t_2(const MR_C_std_tuple_float_double_int32_t_int32_t *_this);

// The element 2, of type `int32_t`, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_GetMutable_int32_t_2(MR_C_std_tuple_float_double_int32_t_int32_t *_this);

// The element 3, of type `int32_t`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_Get_int32_t_3(const MR_C_std_tuple_float_double_int32_t_int32_t *_this);

// The element 3, of type `int32_t`, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_C_std_tuple_float_double_int32_t_int32_t_GetMutable_int32_t_3(MR_C_std_tuple_float_double_int32_t_int32_t *_this);

#ifdef __cplusplus
} // extern "C"
#endif
