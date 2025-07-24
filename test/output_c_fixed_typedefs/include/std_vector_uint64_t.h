#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `std::vector<uint64_t>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_uint64_t MR_C_std_vector_uint64_t;

/// Read-only iterator for `MR_C_std_vector_uint64_t`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_uint64_t_const_iterator MR_C_std_vector_uint64_t_const_iterator;

/// Mutable iterator for `MR_C_std_vector_uint64_t`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_uint64_t_iterator MR_C_std_vector_uint64_t_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t *MR_C_std_vector_uint64_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_uint64_t_DestroyArray()`.
/// Use `MR_C_std_vector_uint64_t_OffsetMutablePtr()` and `MR_C_std_vector_uint64_t_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_uint64_t *MR_C_std_vector_uint64_t_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t *MR_C_std_vector_uint64_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_uint64_t *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_AssignFromAnother(MR_C_std_vector_uint64_t *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_uint64_t *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_uint64_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_uint64_t_Destroy(const MR_C_std_vector_uint64_t *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_uint64_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_uint64_t_DestroyArray(const MR_C_std_vector_uint64_t *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_vector_uint64_t *MR_C_std_vector_uint64_t_OffsetPtr(const MR_C_std_vector_uint64_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_vector_uint64_t *MR_C_std_vector_uint64_t_OffsetMutablePtr(MR_C_std_vector_uint64_t *ptr, ptrdiff_t i);

/// Construct from a range of elements.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t *MR_C_std_vector_uint64_t_ConstructFromRange(const uint64_t *ptr, size_t size);

/// Assign from a range of elements, overwriting previous contents.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_AssignFromRange(MR_C_std_vector_uint64_t *_this, const uint64_t *ptr, size_t size);

/// The number of elements.
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_std_vector_uint64_t_Size(const MR_C_std_vector_uint64_t *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null.
MR_C_API bool MR_C_std_vector_uint64_t_IsEmpty(const MR_C_std_vector_uint64_t *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_Resize(MR_C_std_vector_uint64_t *_this, size_t new_size);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_ResizeWithDefaultValue(MR_C_std_vector_uint64_t *_this, size_t new_size, MR_C_uint64_t value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_Clear(MR_C_std_vector_uint64_t *_this);

/// The memory capacity, measued in the number of elements.
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_std_vector_uint64_t_Capacity(const MR_C_std_vector_uint64_t *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_Reserve(MR_C_std_vector_uint64_t *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_ShrinkToFit(MR_C_std_vector_uint64_t *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const uint64_t *MR_C_std_vector_uint64_t_At(const MR_C_std_vector_uint64_t *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API uint64_t *MR_C_std_vector_uint64_t_MutableAt(MR_C_std_vector_uint64_t *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null.
MR_C_API const uint64_t *MR_C_std_vector_uint64_t_Front(const MR_C_std_vector_uint64_t *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null.
MR_C_API uint64_t *MR_C_std_vector_uint64_t_MutableFront(MR_C_std_vector_uint64_t *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null.
MR_C_API const uint64_t *MR_C_std_vector_uint64_t_Back(const MR_C_std_vector_uint64_t *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null.
MR_C_API uint64_t *MR_C_std_vector_uint64_t_MutableBack(MR_C_std_vector_uint64_t *_this);

/// Returns a pointer to the continuous storage that holds all elements, read-only.
/// Parameter `_this` can not be null.
MR_C_API const uint64_t *MR_C_std_vector_uint64_t_Data(const MR_C_std_vector_uint64_t *_this);

/// Returns a pointer to the continuous storage that holds all elements, mutable.
/// Parameter `_this` can not be null.
MR_C_API uint64_t *MR_C_std_vector_uint64_t_MutableData(MR_C_std_vector_uint64_t *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_PushBack(MR_C_std_vector_uint64_t *_this, MR_C_uint64_t new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_PopBack(MR_C_std_vector_uint64_t *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_Insert(MR_C_std_vector_uint64_t *_this, size_t position, MR_C_uint64_t new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_Erase(MR_C_std_vector_uint64_t *_this, size_t position);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_InsertAtMutableIter(MR_C_std_vector_uint64_t *_this, const MR_C_std_vector_uint64_t_iterator *position, MR_C_uint64_t new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_EraseAtMutableIter(MR_C_std_vector_uint64_t *_this, const MR_C_std_vector_uint64_t_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_InsertAtIter(MR_C_std_vector_uint64_t *_this, const MR_C_std_vector_uint64_t_const_iterator *position, MR_C_uint64_t new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_EraseAtIter(MR_C_std_vector_uint64_t *_this, const MR_C_std_vector_uint64_t_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t_const_iterator *MR_C_std_vector_uint64_t_Begin(const MR_C_std_vector_uint64_t *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_vector_uint64_t_IsBegin(const MR_C_std_vector_uint64_t *_this, const MR_C_std_vector_uint64_t_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t_iterator *MR_C_std_vector_uint64_t_MutableBegin(MR_C_std_vector_uint64_t *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_vector_uint64_t_IsMutableBegin(MR_C_std_vector_uint64_t *_this, const MR_C_std_vector_uint64_t_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t_const_iterator *MR_C_std_vector_uint64_t_End(const MR_C_std_vector_uint64_t *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_vector_uint64_t_IsEnd(const MR_C_std_vector_uint64_t *_this, const MR_C_std_vector_uint64_t_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t_iterator *MR_C_std_vector_uint64_t_MutableEnd(MR_C_std_vector_uint64_t *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_vector_uint64_t_IsMutableEnd(MR_C_std_vector_uint64_t *_this, const MR_C_std_vector_uint64_t_iterator *iter);

/// Convert a const iterator to an index.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API ptrdiff_t MR_C_std_vector_uint64_t_ToIndex(const MR_C_std_vector_uint64_t *_this, const MR_C_std_vector_uint64_t_const_iterator *iter);

/// Convert a mutable iterator to an index.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API ptrdiff_t MR_C_std_vector_uint64_t_MutableToIndex(const MR_C_std_vector_uint64_t *_this, const MR_C_std_vector_uint64_t_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t_const_iterator *MR_C_std_vector_uint64_t_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_uint64_t_const_iterator_DestroyArray()`.
/// Use `MR_C_std_vector_uint64_t_const_iterator_OffsetMutablePtr()` and `MR_C_std_vector_uint64_t_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_uint64_t_const_iterator *MR_C_std_vector_uint64_t_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t_const_iterator *MR_C_std_vector_uint64_t_const_iterator_ConstructFromAnother(const MR_C_std_vector_uint64_t_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_const_iterator_AssignFromAnother(MR_C_std_vector_uint64_t_const_iterator *_this, const MR_C_std_vector_uint64_t_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_uint64_t_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_uint64_t_const_iterator_Destroy(const MR_C_std_vector_uint64_t_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_uint64_t_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_uint64_t_const_iterator_DestroyArray(const MR_C_std_vector_uint64_t_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_vector_uint64_t_const_iterator *MR_C_std_vector_uint64_t_const_iterator_OffsetPtr(const MR_C_std_vector_uint64_t_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_vector_uint64_t_const_iterator *MR_C_std_vector_uint64_t_const_iterator_OffsetMutablePtr(MR_C_std_vector_uint64_t_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t_const_iterator *MR_C_std_vector_uint64_t_const_iterator_FromMutable(const MR_C_std_vector_uint64_t_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t_iterator *MR_C_std_vector_uint64_t_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_uint64_t_iterator_DestroyArray()`.
/// Use `MR_C_std_vector_uint64_t_iterator_OffsetMutablePtr()` and `MR_C_std_vector_uint64_t_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_uint64_t_iterator *MR_C_std_vector_uint64_t_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t_iterator *MR_C_std_vector_uint64_t_iterator_ConstructFromAnother(const MR_C_std_vector_uint64_t_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_iterator_AssignFromAnother(MR_C_std_vector_uint64_t_iterator *_this, const MR_C_std_vector_uint64_t_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_uint64_t_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_uint64_t_iterator_Destroy(const MR_C_std_vector_uint64_t_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_uint64_t_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_uint64_t_iterator_DestroyArray(const MR_C_std_vector_uint64_t_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_vector_uint64_t_iterator *MR_C_std_vector_uint64_t_iterator_OffsetPtr(const MR_C_std_vector_uint64_t_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_vector_uint64_t_iterator *MR_C_std_vector_uint64_t_iterator_OffsetMutablePtr(MR_C_std_vector_uint64_t_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const uint64_t *MR_C_std_vector_uint64_t_const_iterator_Deref(const MR_C_std_vector_uint64_t_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_const_iterator_Incr(MR_C_std_vector_uint64_t_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_const_iterator_Decr(MR_C_std_vector_uint64_t_const_iterator *_this);

/// Increments or decrements a const iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_const_iterator_OffsetBy(MR_C_std_vector_uint64_t_const_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two const iterators. Completes in constant time.
/// Parameter `a` can not be null.
/// Parameter `b` can not be null.
MR_C_API ptrdiff_t MR_C_std_vector_uint64_t_const_iterator_Distance(const MR_C_std_vector_uint64_t_const_iterator *a, const MR_C_std_vector_uint64_t_const_iterator *b);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API uint64_t *MR_C_std_vector_uint64_t_iterator_Deref(const MR_C_std_vector_uint64_t_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_iterator_Incr(MR_C_std_vector_uint64_t_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_iterator_Decr(MR_C_std_vector_uint64_t_iterator *_this);

/// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_vector_uint64_t_iterator_OffsetBy(MR_C_std_vector_uint64_t_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two mutable iterators. Completes in constant time.
/// Parameter `a` can not be null.
/// Parameter `b` can not be null.
MR_C_API ptrdiff_t MR_C_std_vector_uint64_t_iterator_Distance(const MR_C_std_vector_uint64_t_iterator *a, const MR_C_std_vector_uint64_t_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif
