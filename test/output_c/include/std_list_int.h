#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `std::list<int>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_list_int MR_C_std_list_int;

/// Read-only iterator for `MR_C_std_list_int`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_list_int_const_iterator MR_C_std_list_int_const_iterator;

/// Mutable iterator for `MR_C_std_list_int`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_list_int_iterator MR_C_std_list_int_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int *MR_C_std_list_int_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_list_int_DestroyArray()`.
/// Use `MR_C_std_list_int_OffsetMutablePtr()` and `MR_C_std_list_int_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_list_int *MR_C_std_list_int_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int *MR_C_std_list_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_list_int *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_AssignFromAnother(MR_C_std_list_int *_this, MR_C_PassBy other_pass_by, MR_C_std_list_int *other);

/// Destroys a heap-allocated instance of `MR_C_std_list_int`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_list_int_Destroy(const MR_C_std_list_int *_this);

/// Destroys a heap-allocated array of `MR_C_std_list_int`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_list_int_DestroyArray(const MR_C_std_list_int *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_list_int *MR_C_std_list_int_OffsetPtr(const MR_C_std_list_int *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_list_int *MR_C_std_list_int_OffsetMutablePtr(MR_C_std_list_int *ptr, ptrdiff_t i);

/// Construct from a range of elements.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int *MR_C_std_list_int_ConstructFromRange(const int *ptr, size_t size);

/// Assign from a range of elements, overwriting previous contents.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_AssignFromRange(MR_C_std_list_int *_this, const int *ptr, size_t size);

/// The number of elements.
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_std_list_int_Size(const MR_C_std_list_int *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null.
MR_C_API bool MR_C_std_list_int_IsEmpty(const MR_C_std_list_int *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_Resize(MR_C_std_list_int *_this, size_t new_size);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_ResizeWithDefaultValue(MR_C_std_list_int *_this, size_t new_size, int value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_Clear(MR_C_std_list_int *_this);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null.
MR_C_API const int *MR_C_std_list_int_Front(const MR_C_std_list_int *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null.
MR_C_API int *MR_C_std_list_int_MutableFront(MR_C_std_list_int *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null.
MR_C_API const int *MR_C_std_list_int_Back(const MR_C_std_list_int *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null.
MR_C_API int *MR_C_std_list_int_MutableBack(MR_C_std_list_int *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_PushBack(MR_C_std_list_int *_this, int new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_PopBack(MR_C_std_list_int *_this);

/// Inserts a new element at the beginning.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_PushFront(MR_C_std_list_int *_this, int new_elem);

/// Removes one element from the beginning.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_PopFront(MR_C_std_list_int *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_list_int_InsertAtMutableIter(MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *position, int new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_list_int_EraseAtMutableIter(MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_list_int_InsertAtIter(MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *position, int new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_list_int_EraseAtIter(MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int_const_iterator *MR_C_std_list_int_Begin(const MR_C_std_list_int *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_list_int_IsBegin(const MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int_iterator *MR_C_std_list_int_MutableBegin(MR_C_std_list_int *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_list_int_IsMutableBegin(MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int_const_iterator *MR_C_std_list_int_End(const MR_C_std_list_int *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_list_int_IsEnd(const MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int_iterator *MR_C_std_list_int_MutableEnd(MR_C_std_list_int *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_list_int_IsMutableEnd(MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_list_int_const_iterator_DestroyArray()`.
/// Use `MR_C_std_list_int_const_iterator_OffsetMutablePtr()` and `MR_C_std_list_int_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_ConstructFromAnother(const MR_C_std_list_int_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_list_int_const_iterator_AssignFromAnother(MR_C_std_list_int_const_iterator *_this, const MR_C_std_list_int_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_list_int_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_list_int_const_iterator_Destroy(const MR_C_std_list_int_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_list_int_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_list_int_const_iterator_DestroyArray(const MR_C_std_list_int_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_OffsetPtr(const MR_C_std_list_int_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_OffsetMutablePtr(MR_C_std_list_int_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_FromMutable(const MR_C_std_list_int_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_list_int_iterator_DestroyArray()`.
/// Use `MR_C_std_list_int_iterator_OffsetMutablePtr()` and `MR_C_std_list_int_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_list_int_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_ConstructFromAnother(const MR_C_std_list_int_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_list_int_iterator_AssignFromAnother(MR_C_std_list_int_iterator *_this, const MR_C_std_list_int_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_list_int_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_list_int_iterator_Destroy(const MR_C_std_list_int_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_list_int_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_list_int_iterator_DestroyArray(const MR_C_std_list_int_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_OffsetPtr(const MR_C_std_list_int_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_OffsetMutablePtr(MR_C_std_list_int_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_list_int_const_iterator_Deref(const MR_C_std_list_int_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_const_iterator_Incr(MR_C_std_list_int_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_const_iterator_Decr(MR_C_std_list_int_const_iterator *_this);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int *MR_C_std_list_int_iterator_Deref(const MR_C_std_list_int_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_iterator_Incr(MR_C_std_list_int_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_list_int_iterator_Decr(MR_C_std_list_int_iterator *_this);

#ifdef __cplusplus
} // extern "C"
#endif
