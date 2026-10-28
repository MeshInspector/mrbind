#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_StdContainers_NonAssignable MR_StdContainers_NonAssignable; // Defined in `#include <MR/test_std_containers.h>`.


/// Generated from C++ container `std::deque<MR::StdContainers::NonAssignable>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_deque_MR_StdContainers_NonAssignable MR_C_std_deque_MR_StdContainers_NonAssignable;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_deque_MR_StdContainers_NonAssignable_DestroyArray()`.
/// Use `MR_C_std_deque_MR_StdContainers_NonAssignable_OffsetMutablePtr()` and `MR_C_std_deque_MR_StdContainers_NonAssignable_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_deque_MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_C_std_deque_MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_deque_MR_StdContainers_NonAssignable *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy other_pass_by, MR_C_std_deque_MR_StdContainers_NonAssignable *other);

/// Destroys a heap-allocated instance of `MR_C_std_deque_MR_StdContainers_NonAssignable`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this);

/// Destroys a heap-allocated array of `MR_C_std_deque_MR_StdContainers_NonAssignable`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_deque_MR_StdContainers_NonAssignable_DestroyArray(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_deque_MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_OffsetPtr(const MR_C_std_deque_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_deque_MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_OffsetMutablePtr(MR_C_std_deque_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_deque_MR_StdContainers_NonAssignable_size(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_deque_MR_StdContainers_NonAssignable_empty(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_deque_MR_StdContainers_NonAssignable_resize(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t new_size);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_deque_MR_StdContainers_NonAssignable_clear(MR_C_std_deque_MR_StdContainers_NonAssignable *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_at(const MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_StdContainers_NonAssignable *MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, size_t i);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_deque_MR_StdContainers_NonAssignable_push_back(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back(MR_C_std_deque_MR_StdContainers_NonAssignable *_this);

/// Inserts a new element at the beginning.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_deque_MR_StdContainers_NonAssignable_push_front(MR_C_std_deque_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem);

/// Removes one element from the beginning.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front(MR_C_std_deque_MR_StdContainers_NonAssignable *_this);

#ifdef __cplusplus
} // extern "C"
#endif
