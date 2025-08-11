#ifndef MR_C_DETAIL_INCLUDED_STD_UNIQUE_PTR_INT32_T_H
#define MR_C_DETAIL_INCLUDED_STD_UNIQUE_PTR_INT32_T_H

#pragma push_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")
#define MR_C_DETAIL_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Wraps a pointer to a single heap-allocated `int32_t`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_unique_ptr_int32_t MR_C_std_unique_ptr_int32_t;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unique_ptr_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_unique_ptr_int32_t_DestroyArray()`.
// Use `MR_C_std_unique_ptr_int32_t_OffsetMutablePtr()` and `MR_C_std_unique_ptr_int32_t_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unique_ptr_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_ConstructFromAnother(const MR_C_std_unique_ptr_int32_t *other);

// Constructs a new instance.
// Parameter `other` should point to a single object rather than to an array.
// Parameter `other` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_unique_ptr_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_ConstructFrom(int32_t *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
MR_C_API void MR_C_std_unique_ptr_int32_t_AssignFromAnother(MR_C_std_unique_ptr_int32_t *_this, const MR_C_std_unique_ptr_int32_t *other);

// Assigns the contents.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` should point to a single object rather than to an array.
// Parameter `other` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
MR_C_API void MR_C_std_unique_ptr_int32_t_AssignFrom(MR_C_std_unique_ptr_int32_t *_this, int32_t *other);

// Destroys a heap-allocated instance of `MR_C_std_unique_ptr_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_unique_ptr_int32_t_Destroy(const MR_C_std_unique_ptr_int32_t *_this);

// Destroys a heap-allocated array of `MR_C_std_unique_ptr_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_unique_ptr_int32_t_DestroyArray(const MR_C_std_unique_ptr_int32_t *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_OffsetPtr(const MR_C_std_unique_ptr_int32_t *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_unique_ptr_int32_t *MR_C_std_unique_ptr_int32_t_OffsetMutablePtr(MR_C_std_unique_ptr_int32_t *ptr, ptrdiff_t i);

// Returns the stored pointer, possibly null.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t *MR_C_std_unique_ptr_int32_t_Get(const MR_C_std_unique_ptr_int32_t *_this);

// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
// The returned pointer is owning! It must be deallocated using `MR_C_Free()`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t *MR_C_std_unique_ptr_int32_t_Release(MR_C_std_unique_ptr_int32_t *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_UNIQUE_PTR_INT32_T_H
