#ifndef MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_INSTANTIATEONLY_A_H
#define MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_INSTANTIATEONLY_A_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_InstantiateOnly_A MR_InstantiateOnly_A; // Defined in `#include <MR/test_instantiate_only.h>`.


// Generated from C++ container `std::vector<MR::InstantiateOnly::A>`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_InstantiateOnly_A MR_C_std_vector_MR_InstantiateOnly_A;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_InstantiateOnly_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_vector_MR_InstantiateOnly_A_DestroyArray()`.
// Use `MR_C_std_vector_MR_InstantiateOnly_A_OffsetMutablePtr()` and `MR_C_std_vector_MR_InstantiateOnly_A_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_InstantiateOnly_A_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_C_std_vector_MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_InstantiateOnly_A *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_AssignFromAnother(MR_C_std_vector_MR_InstantiateOnly_A *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_InstantiateOnly_A *other);

// Destroys a heap-allocated instance of `MR_C_std_vector_MR_InstantiateOnly_A`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_Destroy(const MR_C_std_vector_MR_InstantiateOnly_A *_this);

// Destroys a heap-allocated array of `MR_C_std_vector_MR_InstantiateOnly_A`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_DestroyArray(const MR_C_std_vector_MR_InstantiateOnly_A *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_OffsetPtr(const MR_C_std_vector_MR_InstantiateOnly_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_OffsetMutablePtr(MR_C_std_vector_MR_InstantiateOnly_A *ptr, ptrdiff_t i);

// The number of elements.
// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_InstantiateOnly_A_size(const MR_C_std_vector_MR_InstantiateOnly_A *_this);

// Returns true if the size is zero.
// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_InstantiateOnly_A_empty(const MR_C_std_vector_MR_InstantiateOnly_A *_this);

// Resizes the container. The new elements if any are zeroed.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_resize(MR_C_std_vector_MR_InstantiateOnly_A *_this, size_t new_size);

// Resizes the container. The new elements if any are set to the specified value.
// Parameter `_this` can not be null. It is a single object.
// Parameter `value` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_resize_with_default_value(MR_C_std_vector_MR_InstantiateOnly_A *_this, size_t new_size, const MR_InstantiateOnly_A *value);

// Removes all elements from the container.
// Parameter `_this` can not be null. It is a single object.
// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_clear(MR_C_std_vector_MR_InstantiateOnly_A *_this);

// The memory capacity, measued in the number of elements.
// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_InstantiateOnly_A_capacity(const MR_C_std_vector_MR_InstantiateOnly_A *_this);

// Reserves memory for a certain number of elements. Never shrinks the memory.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_reserve(MR_C_std_vector_MR_InstantiateOnly_A *_this, size_t new_capacity);

// Shrinks the capacity to match the size.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_shrink_to_fit(MR_C_std_vector_MR_InstantiateOnly_A *_this);

// The element at a specific index, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_at(const MR_C_std_vector_MR_InstantiateOnly_A *_this, size_t i);

// The element at a specific index, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_at_mut(MR_C_std_vector_MR_InstantiateOnly_A *_this, size_t i);

// The first element or null if empty, read-only.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_front(const MR_C_std_vector_MR_InstantiateOnly_A *_this);

// The first element or null if empty, mutable.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_front_mut(MR_C_std_vector_MR_InstantiateOnly_A *_this);

// The last element or null if empty, read-only.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_back(const MR_C_std_vector_MR_InstantiateOnly_A *_this);

// The last element or null if empty, mutable.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_back_mut(MR_C_std_vector_MR_InstantiateOnly_A *_this);

// Inserts a new element at the end.
// Parameter `_this` can not be null. It is a single object.
// Parameter `new_elem` can not be null. It is a single object.
// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_push_back(MR_C_std_vector_MR_InstantiateOnly_A *_this, const MR_InstantiateOnly_A *new_elem);

// Removes one element from the end.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_pop_back(MR_C_std_vector_MR_InstantiateOnly_A *_this);

// Inserts a new element right before the specified position.
// Parameter `_this` can not be null. It is a single object.
// Parameter `new_elem` can not be null. It is a single object.
// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_insert(MR_C_std_vector_MR_InstantiateOnly_A *_this, size_t position, const MR_InstantiateOnly_A *new_elem);

// Erases the element at the specified position.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_InstantiateOnly_A_erase(MR_C_std_vector_MR_InstantiateOnly_A *_this, size_t position);

// The begin iterator, const. Iterators of this container are plain pointers.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_begin(const MR_C_std_vector_MR_InstantiateOnly_A *_this);

// The begin iterator, mutable. Iterators of this container are plain pointers.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_begin_mut(MR_C_std_vector_MR_InstantiateOnly_A *_this);

// The end iterator, const. Iterators of this container are plain pointers.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_end(const MR_C_std_vector_MR_InstantiateOnly_A *_this);

// The end iterator, mutable. Iterators of this container are plain pointers.
// Parameter `_this` can not be null. It is a single object.
// The reference to this object might be preserved as the return value.
MR_C_API MR_InstantiateOnly_A *MR_C_std_vector_MR_InstantiateOnly_A_end_mut(MR_C_std_vector_MR_InstantiateOnly_A *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_INSTANTIATEONLY_A_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_INSTANTIATEONLY_A_H_2)
#define MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_INSTANTIATEONLY_A_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <MR/test_instantiate_only.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_INSTANTIATEONLY_A_H_2)
