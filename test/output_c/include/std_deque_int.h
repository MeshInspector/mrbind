#pragma once

#include <exports.h>
#include <pass_by.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `std::deque<int>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_deque_int MR_C_std_deque_int;

/// Read-only iterator for `MR_C_std_deque_int`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_deque_int_const_iterator MR_C_std_deque_int_const_iterator;

/// Mutable iterator for `MR_C_std_deque_int`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_deque_int_iterator MR_C_std_deque_int_iterator;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int *MR_C_std_deque_int_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int *MR_C_std_deque_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_deque_int *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_AssignFromAnother(MR_C_std_deque_int *_this, MR_C_PassBy other_pass_by, MR_C_std_deque_int *other);

/// Destroys a heap-allocated instance of `MR_C_std_deque_int`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_Destroy(MR_C_std_deque_int *_this);

/// The number of elements.
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_std_deque_int_Size(const MR_C_std_deque_int *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null.
MR_C_API bool MR_C_std_deque_int_IsEmpty(const MR_C_std_deque_int *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_Resize(MR_C_std_deque_int *_this, size_t new_size);

/// Removes all elements from the container.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_Clear(MR_C_std_deque_int *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_deque_int_At(const MR_C_std_deque_int *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_deque_int_MutableAt(MR_C_std_deque_int *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null.
MR_C_API const int *MR_C_std_deque_int_Front(const MR_C_std_deque_int *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null.
MR_C_API int *MR_C_std_deque_int_MutableFront(MR_C_std_deque_int *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null.
MR_C_API const int *MR_C_std_deque_int_Back(const MR_C_std_deque_int *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null.
MR_C_API int *MR_C_std_deque_int_MutableBack(MR_C_std_deque_int *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_PushBack(MR_C_std_deque_int *_this, int new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_PopBack(MR_C_std_deque_int *_this);

/// Inserts a new element at the beginning.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_PushFront(MR_C_std_deque_int *_this, int new_elem);

/// Removes one element from the beginning.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_PopFront(MR_C_std_deque_int *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_Insert(MR_C_std_deque_int *_this, size_t position, int new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_Erase(MR_C_std_deque_int *_this, size_t position);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_deque_int_InsertAtMutableIter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *position, int new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_deque_int_EraseAtMutableIter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_deque_int_InsertAtIter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *position, int new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_deque_int_EraseAtIter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_Begin(const MR_C_std_deque_int *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_deque_int_IsBegin(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int_iterator *MR_C_std_deque_int_MutableBegin(MR_C_std_deque_int *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_deque_int_IsMutableBegin(MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_End(const MR_C_std_deque_int *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_deque_int_IsEnd(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int_iterator *MR_C_std_deque_int_MutableEnd(MR_C_std_deque_int *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_deque_int_IsMutableEnd(MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *iter);

/// Convert a const iterator to an index.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API ptrdiff_t MR_C_std_deque_int_ToIndex(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *iter);

/// Convert a mutable iterator to an index.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API ptrdiff_t MR_C_std_deque_int_MutableToIndex(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_deque_int_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_const_iterator_AssignFromAnother(MR_C_std_deque_int_const_iterator *_this, MR_C_PassBy other_pass_by, MR_C_std_deque_int_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_deque_int_const_iterator`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_const_iterator_Destroy(MR_C_std_deque_int_const_iterator *_this);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_FromMutable(const MR_C_std_deque_int_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_deque_int_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_deque_int_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_iterator_AssignFromAnother(MR_C_std_deque_int_iterator *_this, MR_C_PassBy other_pass_by, MR_C_std_deque_int_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_deque_int_iterator`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_iterator_Destroy(MR_C_std_deque_int_iterator *_this);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_deque_int_const_iterator_Deref(const MR_C_std_deque_int_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_const_iterator_Incr(MR_C_std_deque_int_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_const_iterator_Decr(MR_C_std_deque_int_const_iterator *_this);

/// Increments or decrements a const iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_const_iterator_OffsetBy(MR_C_std_deque_int_const_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two const iterators. Completes in constant time.
/// Parameter `a` can not be null.
/// Parameter `b` can not be null.
MR_C_API ptrdiff_t MR_C_std_deque_int_const_iterator_Distance(const MR_C_std_deque_int_const_iterator *a, const MR_C_std_deque_int_const_iterator *b);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_deque_int_iterator_Deref(const MR_C_std_deque_int_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_iterator_Incr(MR_C_std_deque_int_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_iterator_Decr(MR_C_std_deque_int_iterator *_this);

/// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_deque_int_iterator_OffsetBy(MR_C_std_deque_int_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two mutable iterators. Completes in constant time.
/// Parameter `a` can not be null.
/// Parameter `b` can not be null.
MR_C_API ptrdiff_t MR_C_std_deque_int_iterator_Distance(const MR_C_std_deque_int_iterator *a, const MR_C_std_deque_int_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif
