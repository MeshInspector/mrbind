#ifndef MR_C_DETAIL_INCLUDED_EXPECTED_VOID_FLOAT_H
#define MR_C_DETAIL_INCLUDED_EXPECTED_VOID_FLOAT_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


// Stores either nothing (which represents success) or a `float` that represents an error.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_expected_void_float MR_C_expected_void_float;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_expected_void_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_expected_void_float *MR_C_expected_void_float_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_expected_void_float_DestroyArray()`.
// Use `MR_C_expected_void_float_OffsetMutablePtr()` and `MR_C_expected_void_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_expected_void_float *MR_C_expected_void_float_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_expected_void_float_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_expected_void_float *MR_C_expected_void_float_ConstructFromAnother(const MR_C_expected_void_float *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_expected_void_float_AssignFromAnother(MR_C_expected_void_float *_this, const MR_C_expected_void_float *other);

// Destroys a heap-allocated instance of `MR_C_expected_void_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_expected_void_float_Destroy(const MR_C_expected_void_float *_this);

// Destroys a heap-allocated array of `MR_C_expected_void_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_expected_void_float_DestroyArray(const MR_C_expected_void_float *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_expected_void_float *MR_C_expected_void_float_OffsetPtr(const MR_C_expected_void_float *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_expected_void_float *MR_C_expected_void_float_OffsetMutablePtr(MR_C_expected_void_float *ptr, ptrdiff_t i);

// Returns true if this instance represents success, or false if it represents an error.
// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_expected_void_float_Success(const MR_C_expected_void_float *_this);

// Returns true if this instance stores nothing (which represents success).
// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_expected_void_float_GetValue(const MR_C_expected_void_float *_this);

// If this instance represents an error, returns the stored `float`. Otherwise null.
// Parameter `_this` can not be null. It is a single object.
MR_C_API const float *MR_C_expected_void_float_GetError(const MR_C_expected_void_float *_this);

// If this instance represents an error, returns the stored `float`. Otherwise null. This version returns a mutable pointer.
// Parameter `_this` can not be null. It is a single object.
MR_C_API float *MR_C_expected_void_float_GetMutableError(MR_C_expected_void_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_EXPECTED_VOID_FLOAT_H
