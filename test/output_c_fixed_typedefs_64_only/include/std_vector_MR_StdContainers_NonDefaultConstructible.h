#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_StdContainers_NonDefaultConstructible MR_StdContainers_NonDefaultConstructible; // Defined in `#include <MR/test_std_containers.h>`.


/// Generated from C++ container `std::vector<MR::StdContainers::NonDefaultConstructible>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_StdContainers_NonDefaultConstructible MR_C_std_vector_MR_StdContainers_NonDefaultConstructible;

/// Read-only iterator for `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator;

/// Mutable iterator for `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DestroyArray()`.
/// Use `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr()` and `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_size, const MR_StdContainers_NonDefaultConstructible *value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// The memory capacity, measued in the number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_StdContainers_NonDefaultConstructible *new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position, const MR_StdContainers_NonDefaultConstructible *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_mutable_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *position, const MR_StdContainers_NonDefaultConstructible *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_mutable_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *position, const MR_StdContainers_NonDefaultConstructible *new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy()` to free it when you're done using it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy()` to free it when you're done using it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin_mut(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy()` to free it when you're done using it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy()` to free it when you're done using it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end_mut(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter);

/// Convert a const iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter);

/// Convert a mutable iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index_mut(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DestroyArray()`.
/// Use `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetMutablePtr()` and `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DestroyArray()`.
/// Use `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetMutablePtr()` and `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to things referred to by this object (if any) might be preserved as the return value.
MR_C_API const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_deref(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this);

/// Increments or decrements a const iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_add_assign(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two const iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *b);

/// Compares two const iterators for equality.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *b);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to things referred to by this object (if any) might be preserved as the return value.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_deref(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this);

/// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_add_assign(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two mutable iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *b);

/// Compares two mutable iterators for equality.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif
