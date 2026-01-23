#pragma once

#include <MR/test_csharp.h>
#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `std::vector<MR::CSharp::ExposedLayout>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_CSharp_ExposedLayout MR_C_std_vector_MR_CSharp_ExposedLayout;

/// Read-only iterator for `MR_C_std_vector_MR_CSharp_ExposedLayout`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator;

/// Mutable iterator for `MR_C_std_vector_MR_CSharp_ExposedLayout`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_CSharp_ExposedLayout_iterator MR_C_std_vector_MR_CSharp_ExposedLayout_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_CSharp_ExposedLayout_DestroyArray()`.
/// Use `MR_C_std_vector_MR_CSharp_ExposedLayout_OffsetMutablePtr()` and `MR_C_std_vector_MR_CSharp_ExposedLayout_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_CSharp_ExposedLayout *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_CSharp_ExposedLayout *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_CSharp_ExposedLayout`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_CSharp_ExposedLayout`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_DestroyArray(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_OffsetPtr(const MR_C_std_vector_MR_CSharp_ExposedLayout *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_OffsetMutablePtr(MR_C_std_vector_MR_CSharp_ExposedLayout *ptr, ptrdiff_t i);

/// Construct from a range of elements.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(const MR_CSharp_ExposedLayout *ptr, size_t size);

/// Assign from a range of elements, overwriting previous contents.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_CSharp_ExposedLayout *ptr, size_t size);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_CSharp_ExposedLayout_Size(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_CSharp_ExposedLayout_IsEmpty(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_Resize(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t new_size);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_ResizeWithDefaultValue(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t new_size, const MR_CSharp_ExposedLayout *value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_Clear(MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// The memory capacity, measued in the number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_CSharp_ExposedLayout_Capacity(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_Reserve(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_ShrinkToFit(MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_At(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_MutableAt(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_Front(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_MutableFront(MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_Back(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_MutableBack(MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Returns a pointer to the continuous storage that holds all elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_Data(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Returns a pointer to the continuous storage that holds all elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_MutableData(MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_PushBack(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, MR_CSharp_ExposedLayout new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_PopBack(MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_Insert(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t position, MR_CSharp_ExposedLayout new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_Erase(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t position);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_InsertAtMutableIter(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *position, MR_CSharp_ExposedLayout new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_EraseAtMutableIter(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// The reference to the parameter `new_elem` might be preserved in this object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_InsertAtIter(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *position, MR_CSharp_ExposedLayout new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_EraseAtIter(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_Begin(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_CSharp_ExposedLayout_IsBegin(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_MutableBegin(MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_CSharp_ExposedLayout_IsMutableBegin(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_End(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_CSharp_ExposedLayout_IsEnd(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_MutableEnd(MR_C_std_vector_MR_CSharp_ExposedLayout *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_CSharp_ExposedLayout_IsMutableEnd(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *iter);

/// Convert a const iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_CSharp_ExposedLayout_ToIndex(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *iter);

/// Convert a mutable iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_CSharp_ExposedLayout_MutableToIndex(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DestroyArray()`.
/// Use `MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_OffsetMutablePtr()` and `MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_AssignFromAnother(MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Destroy(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DestroyArray(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_OffsetPtr(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_FromMutable(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DestroyArray()`.
/// Use `MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_OffsetMutablePtr()` and `MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_ConstructFromAnother(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_AssignFromAnother(MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_vector_MR_CSharp_ExposedLayout_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Destroy(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_vector_MR_CSharp_ExposedLayout_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DestroyArray(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_OffsetPtr(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_OffsetMutablePtr(MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Deref(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Incr(MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Decr(MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this);

/// Increments or decrements a const iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_OffsetBy(MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two const iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Distance(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *a, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *b);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Deref(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Incr(MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Decr(MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this);

/// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_OffsetBy(MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two mutable iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Distance(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *a, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif
