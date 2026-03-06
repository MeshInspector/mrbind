#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_SeparateA MR_SeparateA; // Defined in `#include <A/a.h>`.


/// Generated from C++ container `std::vector<MR::SeparateA>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_SeparateA MR_C_std_vector_MR_SeparateA;

/// Read-only iterator for `MR_C_std_vector_MR_SeparateA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_SeparateA_const_iterator MR_C_std_vector_MR_SeparateA_const_iterator;

/// Mutable iterator for `MR_C_std_vector_MR_SeparateA`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_SeparateA_iterator MR_C_std_vector_MR_SeparateA_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_SeparateA_DestroyArray()`.
/// Use `MR_C_std_vector_MR_SeparateA_OffsetMutablePtr()` and `MR_C_std_vector_MR_SeparateA_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateA *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_vector_MR_SeparateA_AssignFromAnother(MR_C_std_vector_MR_SeparateA *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateA *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_SeparateA`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_SeparateA_Destroy(const MR_C_std_vector_MR_SeparateA *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_SeparateA`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_SeparateA_DestroyArray(const MR_C_std_vector_MR_SeparateA *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_OffsetPtr(const MR_C_std_vector_MR_SeparateA *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_SeparateA_size(const MR_C_std_vector_MR_SeparateA *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_SeparateA_empty(const MR_C_std_vector_MR_SeparateA *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_resize(MR_C_std_vector_MR_SeparateA *_this, size_t new_size);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_resize_with_default_value(MR_C_std_vector_MR_SeparateA *_this, size_t new_size, const MR_SeparateA *value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_vector_MR_SeparateA_clear(MR_C_std_vector_MR_SeparateA *_this);

/// The memory capacity, measued in the number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_SeparateA_capacity(const MR_C_std_vector_MR_SeparateA *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_reserve(MR_C_std_vector_MR_SeparateA *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_shrink_to_fit(MR_C_std_vector_MR_SeparateA *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_SeparateA *MR_C_std_vector_MR_SeparateA_at(const MR_C_std_vector_MR_SeparateA *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_SeparateA *MR_C_std_vector_MR_SeparateA_at_mut(MR_C_std_vector_MR_SeparateA *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_SeparateA *MR_C_std_vector_MR_SeparateA_front(const MR_C_std_vector_MR_SeparateA *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_SeparateA *MR_C_std_vector_MR_SeparateA_front_mut(MR_C_std_vector_MR_SeparateA *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API const MR_SeparateA *MR_C_std_vector_MR_SeparateA_back(const MR_C_std_vector_MR_SeparateA *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_SeparateA *MR_C_std_vector_MR_SeparateA_back_mut(MR_C_std_vector_MR_SeparateA *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_SeparateA_push_back(MR_C_std_vector_MR_SeparateA *_this, const MR_SeparateA *new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_pop_back(MR_C_std_vector_MR_SeparateA *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_SeparateA_insert(MR_C_std_vector_MR_SeparateA *_this, size_t position, const MR_SeparateA *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_erase(MR_C_std_vector_MR_SeparateA *_this, size_t position);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_SeparateA_insert_at_mutable_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *position, const MR_SeparateA *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_erase_at_mutable_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_SeparateA_insert_at_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *position, const MR_SeparateA *new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_erase_at_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_const_iterator_Destroy()` to free it when you're done using it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_begin(const MR_C_std_vector_MR_SeparateA *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_SeparateA_is_begin(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_iterator_Destroy()` to free it when you're done using it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_begin_mut(MR_C_std_vector_MR_SeparateA *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_SeparateA_is_begin_mut(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_const_iterator_Destroy()` to free it when you're done using it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_end(const MR_C_std_vector_MR_SeparateA *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_SeparateA_is_end(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_iterator_Destroy()` to free it when you're done using it.
/// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_end_mut(MR_C_std_vector_MR_SeparateA *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_SeparateA_is_end_mut(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *iter);

/// Convert a const iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_SeparateA_to_index(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *iter);

/// Convert a mutable iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_SeparateA_to_index_mut(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_SeparateA_const_iterator_DestroyArray()`.
/// Use `MR_C_std_vector_MR_SeparateA_const_iterator_OffsetMutablePtr()` and `MR_C_std_vector_MR_SeparateA_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_const_iterator_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_SeparateA_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_vector_MR_SeparateA_const_iterator_AssignFromAnother(MR_C_std_vector_MR_SeparateA_const_iterator *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_SeparateA_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_SeparateA_const_iterator_Destroy(const MR_C_std_vector_MR_SeparateA_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_SeparateA_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_SeparateA_const_iterator_DestroyArray(const MR_C_std_vector_MR_SeparateA_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_OffsetPtr(const MR_C_std_vector_MR_SeparateA_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_from_mutable(const MR_C_std_vector_MR_SeparateA_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_SeparateA_iterator_DestroyArray()`.
/// Use `MR_C_std_vector_MR_SeparateA_iterator_OffsetMutablePtr()` and `MR_C_std_vector_MR_SeparateA_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_SeparateA_iterator_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_ConstructFromAnother(const MR_C_std_vector_MR_SeparateA_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_vector_MR_SeparateA_iterator_AssignFromAnother(MR_C_std_vector_MR_SeparateA_iterator *_this, const MR_C_std_vector_MR_SeparateA_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_SeparateA_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_SeparateA_iterator_Destroy(const MR_C_std_vector_MR_SeparateA_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_SeparateA_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_SeparateA_iterator_DestroyArray(const MR_C_std_vector_MR_SeparateA_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_OffsetPtr(const MR_C_std_vector_MR_SeparateA_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to things referred to by this object (if any) might be preserved as the return value.
MR_C_API const MR_SeparateA *MR_C_std_vector_MR_SeparateA_const_iterator_deref(const MR_C_std_vector_MR_SeparateA_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_const_iterator_incr(MR_C_std_vector_MR_SeparateA_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_const_iterator_decr(MR_C_std_vector_MR_SeparateA_const_iterator *_this);

/// Increments or decrements a const iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_const_iterator_add_assign(MR_C_std_vector_MR_SeparateA_const_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two const iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_sub_MR_C_std_vector_MR_SeparateA_const_iterator(const MR_C_std_vector_MR_SeparateA_const_iterator *a, const MR_C_std_vector_MR_SeparateA_const_iterator *b);

/// Compares two const iterators for equality.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_C_std_vector_MR_SeparateA_const_iterator(const MR_C_std_vector_MR_SeparateA_const_iterator *a, const MR_C_std_vector_MR_SeparateA_const_iterator *b);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to things referred to by this object (if any) might be preserved as the return value.
MR_C_API MR_SeparateA *MR_C_std_vector_MR_SeparateA_iterator_deref(const MR_C_std_vector_MR_SeparateA_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_iterator_incr(MR_C_std_vector_MR_SeparateA_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_iterator_decr(MR_C_std_vector_MR_SeparateA_iterator *_this);

/// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_SeparateA_iterator_add_assign(MR_C_std_vector_MR_SeparateA_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two mutable iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_sub_MR_C_std_vector_MR_SeparateA_iterator(const MR_C_std_vector_MR_SeparateA_iterator *a, const MR_C_std_vector_MR_SeparateA_iterator *b);

/// Compares two mutable iterators for equality.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_C_std_vector_MR_SeparateA_iterator(const MR_C_std_vector_MR_SeparateA_iterator *a, const MR_C_std_vector_MR_SeparateA_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif
