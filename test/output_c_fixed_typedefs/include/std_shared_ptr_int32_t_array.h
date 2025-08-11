#ifndef MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_INT32_T_ARRAY_H
#define MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_INT32_T_ARRAY_H

#pragma push_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")
#define MR_C_DETAIL_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DETAIL_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Wraps a pointer to a shared reference-counted heap-allocated array of type `int32_t`, of an unspecified size.
// Doesn't store the size, it has to be obtained separately.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_shared_ptr_int32_t_array MR_C_std_shared_ptr_int32_t_array;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_int32_t_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_int32_t_array *MR_C_std_shared_ptr_int32_t_array_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_shared_ptr_int32_t_array_DestroyArray()`.
// Use `MR_C_std_shared_ptr_int32_t_array_OffsetMutablePtr()` and `MR_C_std_shared_ptr_int32_t_array_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_shared_ptr_int32_t_array *MR_C_std_shared_ptr_int32_t_array_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_int32_t_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_int32_t_array *MR_C_std_shared_ptr_int32_t_array_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int32_t_array *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_shared_ptr_int32_t_array_AssignFromAnother(MR_C_std_shared_ptr_int32_t_array *_this, MR_C_PassBy other_pass_by, MR_C_std_shared_ptr_int32_t_array *other);

// Destroys a heap-allocated instance of `MR_C_std_shared_ptr_int32_t_array`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_int32_t_array_Destroy(const MR_C_std_shared_ptr_int32_t_array *_this);

// Destroys a heap-allocated array of `MR_C_std_shared_ptr_int32_t_array`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_shared_ptr_int32_t_array_DestroyArray(const MR_C_std_shared_ptr_int32_t_array *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_shared_ptr_int32_t_array *MR_C_std_shared_ptr_int32_t_array_OffsetPtr(const MR_C_std_shared_ptr_int32_t_array *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_shared_ptr_int32_t_array *MR_C_std_shared_ptr_int32_t_array_OffsetMutablePtr(MR_C_std_shared_ptr_int32_t_array *ptr, ptrdiff_t i);

// Returns the stored pointer, possibly null.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t *MR_C_std_shared_ptr_int32_t_array_Get(const MR_C_std_shared_ptr_int32_t_array *_this);

// Returns an element from the stored array. The stored pointer must not be null.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_C_std_shared_ptr_int32_t_array_At(const MR_C_std_shared_ptr_int32_t_array *_this, ptrdiff_t i);

// How many shared pointers share the managed object. Zero if no object is being managed.
// This being zero usually conincides with `MR_C_std_shared_ptr_int32_t_array_Get()` returning null, but is ultimately orthogonal.
// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int MR_C_std_shared_ptr_int32_t_array_UseCount(const MR_C_std_shared_ptr_int32_t_array *_this);

// Create a new instance, taking ownership of an existing pointer.
// Parameter `ptr` can point to an array.
// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_C_FreeArray()` on it automatically.
MR_C_API void MR_C_std_shared_ptr_int32_t_array_Construct(int32_t *ptr);

// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
// Parameter `_this` can not be null. It is a single object.
// Parameter `ptr` can point to an array.
// Parameter `ptr` takes ownership of the passed pointer (if not null), and will later call `MR_C_FreeArray()` on it automatically.
MR_C_API void MR_C_std_shared_ptr_int32_t_array_Assign(MR_C_std_shared_ptr_int32_t_array *_this, int32_t *ptr);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_SHARED_PTR_INT32_T_ARRAY_H
