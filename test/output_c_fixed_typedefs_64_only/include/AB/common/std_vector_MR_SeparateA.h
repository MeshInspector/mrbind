#pragma once

#include <AB/common/exports.h>
#include <common.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MR_C_DETAIL_TYPEDEF_MR_SeparateA
#define MR_C_DETAIL_TYPEDEF_MR_SeparateA
typedef struct MR_SeparateA MR_SeparateA; // Defined in `#include <A/a.h>`.
#endif


#ifndef MR_C_DETAIL_TYPEDEF_MR_C_std_vector_MR_SeparateA
#define MR_C_DETAIL_TYPEDEF_MR_C_std_vector_MR_SeparateA
/// Generated from C++ container `std::vector<MR::SeparateA>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_SeparateA MR_C_std_vector_MR_SeparateA;
#endif

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_Destroy()` to free it when you're done using it.
MR_AB_API MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_SeparateA_DestroyArray()`.
/// Use `MR_C_std_vector_MR_SeparateA_OffsetMutablePtr()` and `MR_C_std_vector_MR_SeparateA_OffsetPtr()` to access the array elements.
MR_AB_API MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it held previously.
MR_AB_API MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateA *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it held previously.
MR_AB_API void MR_C_std_vector_MR_SeparateA_AssignFromAnother(MR_C_std_vector_MR_SeparateA *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateA *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_SeparateA`. Does nothing if the pointer is null.
MR_AB_API void MR_C_std_vector_MR_SeparateA_Destroy(const MR_C_std_vector_MR_SeparateA *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_SeparateA`. Does nothing if the pointer is null.
MR_AB_API void MR_C_std_vector_MR_SeparateA_DestroyArray(const MR_C_std_vector_MR_SeparateA *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_AB_API const MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_OffsetPtr(const MR_C_std_vector_MR_SeparateA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_AB_API MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_AB_API size_t MR_C_std_vector_MR_SeparateA_size(const MR_C_std_vector_MR_SeparateA *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MR_AB_API bool MR_C_std_vector_MR_SeparateA_empty(const MR_C_std_vector_MR_SeparateA *_this);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MR_AB_API void MR_C_std_vector_MR_SeparateA_resize_with_default_value(MR_C_std_vector_MR_SeparateA *_this, size_t new_size, const MR_SeparateA *value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop any object references it held previously.
MR_AB_API void MR_C_std_vector_MR_SeparateA_clear(MR_C_std_vector_MR_SeparateA *_this);

/// The memory capacity, measued in the number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_AB_API size_t MR_C_std_vector_MR_SeparateA_capacity(const MR_C_std_vector_MR_SeparateA *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null. It is a single object.
MR_AB_API void MR_C_std_vector_MR_SeparateA_reserve(MR_C_std_vector_MR_SeparateA *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
/// Parameter `_this` can not be null. It is a single object.
MR_AB_API void MR_C_std_vector_MR_SeparateA_shrink_to_fit(MR_C_std_vector_MR_SeparateA *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_AB_API const MR_SeparateA *MR_C_std_vector_MR_SeparateA_at(const MR_C_std_vector_MR_SeparateA *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_AB_API MR_SeparateA *MR_C_std_vector_MR_SeparateA_at_mut(MR_C_std_vector_MR_SeparateA *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_AB_API const MR_SeparateA *MR_C_std_vector_MR_SeparateA_front(const MR_C_std_vector_MR_SeparateA *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_AB_API MR_SeparateA *MR_C_std_vector_MR_SeparateA_front_mut(MR_C_std_vector_MR_SeparateA *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_AB_API const MR_SeparateA *MR_C_std_vector_MR_SeparateA_back(const MR_C_std_vector_MR_SeparateA *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_AB_API MR_SeparateA *MR_C_std_vector_MR_SeparateA_back_mut(MR_C_std_vector_MR_SeparateA *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_AB_API void MR_C_std_vector_MR_SeparateA_push_back(MR_C_std_vector_MR_SeparateA *_this, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MR_AB_API void MR_C_std_vector_MR_SeparateA_pop_back(MR_C_std_vector_MR_SeparateA *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_AB_API void MR_C_std_vector_MR_SeparateA_insert(MR_C_std_vector_MR_SeparateA *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
MR_AB_API void MR_C_std_vector_MR_SeparateA_erase(MR_C_std_vector_MR_SeparateA *_this, size_t position);

/// The begin iterator, const. Iterators of this container are plain pointers.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_AB_API const MR_SeparateA *MR_C_std_vector_MR_SeparateA_begin(const MR_C_std_vector_MR_SeparateA *_this);

/// The begin iterator, mutable. Iterators of this container are plain pointers.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_AB_API MR_SeparateA *MR_C_std_vector_MR_SeparateA_begin_mut(MR_C_std_vector_MR_SeparateA *_this);

/// The end iterator, const. Iterators of this container are plain pointers.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_AB_API const MR_SeparateA *MR_C_std_vector_MR_SeparateA_end(const MR_C_std_vector_MR_SeparateA *_this);

/// The end iterator, mutable. Iterators of this container are plain pointers.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_AB_API MR_SeparateA *MR_C_std_vector_MR_SeparateA_end_mut(MR_C_std_vector_MR_SeparateA *_this);

#ifdef __cplusplus
} // extern "C"
#endif
