#ifndef MR_C_DETAIL_INCLUDED_STD_TUPLE_INT32_T_FLOAT_H
#define MR_C_DETAIL_INCLUDED_STD_TUPLE_INT32_T_FLOAT_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Stores 2 objects: `int32_t`, `float`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_tuple_int32_t_float MR_C_std_tuple_int32_t_float;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_tuple_int32_t_float_DestroyArray()`.
// Use `MR_C_std_tuple_int32_t_float_OffsetMutablePtr()` and `MR_C_std_tuple_int32_t_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_int32_t_float_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_ConstructFromAnother(const MR_C_std_tuple_int32_t_float *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_tuple_int32_t_float_AssignFromAnother(MR_C_std_tuple_int32_t_float *_this, const MR_C_std_tuple_int32_t_float *other);

// Destroys a heap-allocated instance of `MR_C_std_tuple_int32_t_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_int32_t_float_Destroy(const MR_C_std_tuple_int32_t_float *_this);

// Destroys a heap-allocated array of `MR_C_std_tuple_int32_t_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_int32_t_float_DestroyArray(const MR_C_std_tuple_int32_t_float *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_OffsetPtr(const MR_C_std_tuple_int32_t_float *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_OffsetMutablePtr(MR_C_std_tuple_int32_t_float *ptr, ptrdiff_t i);

// Constructs the tuple elementwise.
// The reference to the parameter `_0` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_int32_t_float_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_tuple_int32_t_float *MR_C_std_tuple_int32_t_float_Construct(int32_t _0, float _1);

// The element 0, of type `int32_t`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_C_std_tuple_int32_t_float_get_int32_t(const MR_C_std_tuple_int32_t_float *_this);

// The element 0, of type `int32_t`, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_C_std_tuple_int32_t_float_get_int32_t_mut(MR_C_std_tuple_int32_t_float *_this);

// The element 1, of type `float`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_tuple_int32_t_float_get_float(const MR_C_std_tuple_int32_t_float *_this);

// The element 1, of type `float`, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_tuple_int32_t_float_get_float_mut(MR_C_std_tuple_int32_t_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_TUPLE_INT32_T_FLOAT_H
