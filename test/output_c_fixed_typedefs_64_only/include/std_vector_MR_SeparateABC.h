#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MR_C_DETAIL_TYPEDEF_MR_SeparateABC
#define MR_C_DETAIL_TYPEDEF_MR_SeparateABC
typedef struct MR_SeparateABC MR_SeparateABC; // Defined in `#include <ABC/abc.h>`.
#endif


#ifndef MR_C_DETAIL_TYPEDEF_MR_C_std_vector_MR_SeparateABC
#define MR_C_DETAIL_TYPEDEF_MR_C_std_vector_MR_SeparateABC
/// Generated from C++ container `std::vector<MR::SeparateABC>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_SeparateABC MR_C_std_vector_MR_SeparateABC;
#endif

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateABC_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_SeparateABC_DestroyArray()`.
/// Use `MR_C_std_vector_MR_SeparateABC_OffsetMutablePtr()` and `MR_C_std_vector_MR_SeparateABC_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateABC_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateABC *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_vector_MR_SeparateABC_AssignFromAnother(MR_C_std_vector_MR_SeparateABC *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateABC *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_SeparateABC`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_SeparateABC_Destroy(const MR_C_std_vector_MR_SeparateABC *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_SeparateABC`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_SeparateABC_DestroyArray(const MR_C_std_vector_MR_SeparateABC *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_OffsetPtr(const MR_C_std_vector_MR_SeparateABC *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_OffsetMutablePtr(MR_C_std_vector_MR_SeparateABC *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_SeparateABC_size(const MR_C_std_vector_MR_SeparateABC *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_SeparateABC_empty(const MR_C_std_vector_MR_SeparateABC *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateABC_resize(MR_C_std_vector_MR_SeparateABC *_this, size_t new_size);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_vector_MR_SeparateABC_clear(MR_C_std_vector_MR_SeparateABC *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateABC_reserve(MR_C_std_vector_MR_SeparateABC *_this, size_t new_capacity);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_at(const MR_C_std_vector_MR_SeparateABC *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_at_mut(MR_C_std_vector_MR_SeparateABC *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_front(const MR_C_std_vector_MR_SeparateABC *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_front_mut(MR_C_std_vector_MR_SeparateABC *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_back(const MR_C_std_vector_MR_SeparateABC *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_back_mut(MR_C_std_vector_MR_SeparateABC *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_SeparateABC_push_back(MR_C_std_vector_MR_SeparateABC *_this, const MR_SeparateABC *new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateABC_pop_back(MR_C_std_vector_MR_SeparateABC *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_SeparateABC_insert(MR_C_std_vector_MR_SeparateABC *_this, size_t position, const MR_SeparateABC *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateABC_erase(MR_C_std_vector_MR_SeparateABC *_this, size_t position);

#ifdef __cplusplus
} // extern "C"
#endif
