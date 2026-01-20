#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `std::vector<long>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_long MR_C_std_vector_long;

/// Read-only iterator for `MR_C_std_vector_long`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_long_const_iterator MR_C_std_vector_long_const_iterator;

/// Mutable iterator for `MR_C_std_vector_long`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_long_iterator MR_C_std_vector_long_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long *MR_C_std_vector_long_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_long_DestroyArray()`.
/// Use `MR_C_std_vector_long_OffsetMutablePtr()` and `MR_C_std_vector_long_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_long *MR_C_std_vector_long_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// The reference to the parameter `other` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long *MR_C_std_vector_long_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_long *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the parameter `_this`.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_vector_long_AssignFromAnother(MR_C_std_vector_long *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_long *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_long`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_long_Destroy(const MR_C_std_vector_long *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_long`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_long_DestroyArray(const MR_C_std_vector_long *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_long *MR_C_std_vector_long_OffsetPtr(const MR_C_std_vector_long *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_long *MR_C_std_vector_long_OffsetMutablePtr(MR_C_std_vector_long *ptr, ptrdiff_t i);

/// Construct from a range of elements.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long *MR_C_std_vector_long_ConstructFromRange(const long *ptr, size_t size);

/// Assign from a range of elements, overwriting previous contents.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_AssignFromRange(MR_C_std_vector_long *_this, const long *ptr, size_t size);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_long_Size(const MR_C_std_vector_long *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_long_IsEmpty(const MR_C_std_vector_long *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_Resize(MR_C_std_vector_long *_this, size_t new_size);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_ResizeWithDefaultValue(MR_C_std_vector_long *_this, size_t new_size, long value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_vector_long_Clear(MR_C_std_vector_long *_this);

/// The memory capacity, measued in the number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_long_Capacity(const MR_C_std_vector_long *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_Reserve(MR_C_std_vector_long *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_ShrinkToFit(MR_C_std_vector_long *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const long *MR_C_std_vector_long_At(const MR_C_std_vector_long *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API long *MR_C_std_vector_long_MutableAt(MR_C_std_vector_long *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const long *MR_C_std_vector_long_Front(const MR_C_std_vector_long *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API long *MR_C_std_vector_long_MutableFront(MR_C_std_vector_long *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const long *MR_C_std_vector_long_Back(const MR_C_std_vector_long *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API long *MR_C_std_vector_long_MutableBack(MR_C_std_vector_long *_this);

/// Returns a pointer to the continuous storage that holds all elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const long *MR_C_std_vector_long_Data(const MR_C_std_vector_long *_this);

/// Returns a pointer to the continuous storage that holds all elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API long *MR_C_std_vector_long_MutableData(MR_C_std_vector_long *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_PushBack(MR_C_std_vector_long *_this, long new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_PopBack(MR_C_std_vector_long *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_Insert(MR_C_std_vector_long *_this, size_t position, long new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_Erase(MR_C_std_vector_long *_this, size_t position);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_InsertAtMutableIter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *position, long new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_EraseAtMutableIter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_InsertAtIter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *position, long new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_EraseAtIter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_Begin(const MR_C_std_vector_long *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_long_IsBegin(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long_iterator *MR_C_std_vector_long_MutableBegin(MR_C_std_vector_long *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_long_IsMutableBegin(MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_End(const MR_C_std_vector_long *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_long_IsEnd(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long_iterator *MR_C_std_vector_long_MutableEnd(MR_C_std_vector_long *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_long_IsMutableEnd(MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *iter);

/// Convert a const iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_long_ToIndex(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *iter);

/// Convert a mutable iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_long_MutableToIndex(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_long_const_iterator_DestroyArray()`.
/// Use `MR_C_std_vector_long_const_iterator_OffsetMutablePtr()` and `MR_C_std_vector_long_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_ConstructFromAnother(const MR_C_std_vector_long_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the parameter `_this`.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_vector_long_const_iterator_AssignFromAnother(MR_C_std_vector_long_const_iterator *_this, const MR_C_std_vector_long_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_long_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_long_const_iterator_Destroy(const MR_C_std_vector_long_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_long_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_long_const_iterator_DestroyArray(const MR_C_std_vector_long_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_OffsetPtr(const MR_C_std_vector_long_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_OffsetMutablePtr(MR_C_std_vector_long_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_FromMutable(const MR_C_std_vector_long_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_long_iterator_DestroyArray()`.
/// Use `MR_C_std_vector_long_iterator_OffsetMutablePtr()` and `MR_C_std_vector_long_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_ConstructFromAnother(const MR_C_std_vector_long_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the parameter `_this`.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_vector_long_iterator_AssignFromAnother(MR_C_std_vector_long_iterator *_this, const MR_C_std_vector_long_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_long_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_long_iterator_Destroy(const MR_C_std_vector_long_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_long_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_long_iterator_DestroyArray(const MR_C_std_vector_long_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_OffsetPtr(const MR_C_std_vector_long_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_OffsetMutablePtr(MR_C_std_vector_long_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_this` (if any) might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const long *MR_C_std_vector_long_const_iterator_Deref(const MR_C_std_vector_long_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_const_iterator_Incr(MR_C_std_vector_long_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_const_iterator_Decr(MR_C_std_vector_long_const_iterator *_this);

/// Increments or decrements a const iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_const_iterator_OffsetBy(MR_C_std_vector_long_const_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two const iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_long_const_iterator_Distance(const MR_C_std_vector_long_const_iterator *a, const MR_C_std_vector_long_const_iterator *b);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_this` (if any) might be preserved in the return value.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API long *MR_C_std_vector_long_iterator_Deref(const MR_C_std_vector_long_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_iterator_Incr(MR_C_std_vector_long_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_iterator_Decr(MR_C_std_vector_long_iterator *_this);

/// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_long_iterator_OffsetBy(MR_C_std_vector_long_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two mutable iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_long_iterator_Distance(const MR_C_std_vector_long_iterator *a, const MR_C_std_vector_long_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif
