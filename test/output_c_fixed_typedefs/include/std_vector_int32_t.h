#ifndef MR_C_DETAIL_INCLUDED_STD_VECTOR_INT32_T_H
#define MR_C_DETAIL_INCLUDED_STD_VECTOR_INT32_T_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Generated from C++ container `std::vector<int32_t>`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_int32_t MR_C_std_vector_int32_t;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_vector_int32_t_DestroyArray()`.
// Use `MR_C_std_vector_int32_t_OffsetMutablePtr()` and `MR_C_std_vector_int32_t_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_int32_t_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int32_t *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_vector_int32_t_AssignFromAnother(MR_C_std_vector_int32_t *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int32_t *other);

// Destroys a heap-allocated instance of `MR_C_std_vector_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_int32_t_Destroy(const MR_C_std_vector_int32_t *_this);

// Destroys a heap-allocated array of `MR_C_std_vector_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_int32_t_DestroyArray(const MR_C_std_vector_int32_t *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_OffsetPtr(const MR_C_std_vector_int32_t *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_OffsetMutablePtr(MR_C_std_vector_int32_t *ptr, ptrdiff_t i);

// Construct from a range of elements.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int32_t *MR_C_std_vector_int32_t_ConstructFromRange(const int32_t *ptr, size_t size);

// Assign from a range of elements, overwriting previous contents.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_int32_t_AssignFromRange(MR_C_std_vector_int32_t *_this, const int32_t *ptr, size_t size);

// The number of elements.
// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_int32_t_size(const MR_C_std_vector_int32_t *_this);

// Returns true if the size is zero.
// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_int32_t_empty(const MR_C_std_vector_int32_t *_this);

// Resizes the container. The new elements if any are zeroed.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_int32_t_resize(MR_C_std_vector_int32_t *_this, size_t new_size);

// Resizes the container. The new elements if any are set to the specified value.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_int32_t_resize_with_default_value(MR_C_std_vector_int32_t *_this, size_t new_size, int32_t value);

// Removes all elements from the container.
// Parameter `_this` can not be null. It is a single object.
// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_vector_int32_t_clear(MR_C_std_vector_int32_t *_this);

// The memory capacity, measued in the number of elements.
// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_int32_t_capacity(const MR_C_std_vector_int32_t *_this);

// Reserves memory for a certain number of elements. Never shrinks the memory.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_int32_t_reserve(MR_C_std_vector_int32_t *_this, size_t new_capacity);

// Shrinks the capacity to match the size.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_int32_t_shrink_to_fit(MR_C_std_vector_int32_t *_this);

// The element at a specific index, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const int32_t *MR_C_std_vector_int32_t_at(const MR_C_std_vector_int32_t *_this, size_t i);

// The element at a specific index, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API int32_t *MR_C_std_vector_int32_t_at_mut(MR_C_std_vector_int32_t *_this, size_t i);

// The first element or null if empty, read-only.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API const int32_t *MR_C_std_vector_int32_t_front(const MR_C_std_vector_int32_t *_this);

// The first element or null if empty, mutable.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API int32_t *MR_C_std_vector_int32_t_front_mut(MR_C_std_vector_int32_t *_this);

// The last element or null if empty, read-only.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API const int32_t *MR_C_std_vector_int32_t_back(const MR_C_std_vector_int32_t *_this);

// The last element or null if empty, mutable.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API int32_t *MR_C_std_vector_int32_t_back_mut(MR_C_std_vector_int32_t *_this);

// Returns a pointer to the continuous storage that holds all elements, read-only.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API const int32_t *MR_C_std_vector_int32_t_data(const MR_C_std_vector_int32_t *_this);

// Returns a pointer to the continuous storage that holds all elements, mutable.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API int32_t *MR_C_std_vector_int32_t_data_mut(MR_C_std_vector_int32_t *_this);

// Inserts a new element at the end.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_int32_t_push_back(MR_C_std_vector_int32_t *_this, int32_t new_elem);

// Removes one element from the end.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_int32_t_pop_back(MR_C_std_vector_int32_t *_this);

// Inserts a new element right before the specified position.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_int32_t_insert(MR_C_std_vector_int32_t *_this, size_t position, int32_t new_elem);

// Erases the element at the specified position.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_int32_t_erase(MR_C_std_vector_int32_t *_this, size_t position);

// The begin iterator, const. Iterators of this container are plain pointers.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API const int32_t *MR_C_std_vector_int32_t_begin(const MR_C_std_vector_int32_t *_this);

// The begin iterator, mutable. Iterators of this container are plain pointers.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API int32_t *MR_C_std_vector_int32_t_begin_mut(MR_C_std_vector_int32_t *_this);

// The end iterator, const. Iterators of this container are plain pointers.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API const int32_t *MR_C_std_vector_int32_t_end(const MR_C_std_vector_int32_t *_this);

// The end iterator, mutable. Iterators of this container are plain pointers.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API int32_t *MR_C_std_vector_int32_t_end_mut(MR_C_std_vector_int32_t *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_VECTOR_INT32_T_H
