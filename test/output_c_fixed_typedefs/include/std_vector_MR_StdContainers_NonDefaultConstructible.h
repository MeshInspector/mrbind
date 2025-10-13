#ifndef MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_STDCONTAINERS_NONDEFAULTCONSTRUCTIBLE_H
#define MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_STDCONTAINERS_NONDEFAULTCONSTRUCTIBLE_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_StdContainers_NonDefaultConstructible MR_StdContainers_NonDefaultConstructible; // Defined in `#include <MR/test_std_containers.h>`.


// Generated from C++ container `std::vector<MR::StdContainers::NonDefaultConstructible>`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_StdContainers_NonDefaultConstructible MR_C_std_vector_MR_StdContainers_NonDefaultConstructible;

// Read-only iterator for `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator;

// Mutable iterator for `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DestroyArray()`.
// Use `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr()` and `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other);

// Destroys a heap-allocated instance of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Destroys a heap-allocated array of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i);

// The number of elements.
// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Size(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Returns true if the size is zero.
// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_IsEmpty(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Resizes the container. The new elements if any are set to the specified value.
// Parameter `_this` can not be null. It is a single object.
// Parameter `value` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ResizeWithDefaultValue(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_size, const MR_StdContainers_NonDefaultConstructible *value);

// Removes all elements from the container.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Clear(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// The memory capacity, measued in the number of elements.
// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Capacity(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Reserves memory for a certain number of elements. Never shrinks the memory.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Reserve(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_capacity);

// Shrinks the capacity to match the size.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ShrinkToFit(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// The element at a specific index, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_At(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i);

// The element at a specific index, mutable.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableAt(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i);

// The first element or null if empty, read-only.
// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Front(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// The first element or null if empty, mutable.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableFront(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// The last element or null if empty, read-only.
// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Back(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// The last element or null if empty, mutable.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableBack(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Inserts a new element at the end.
// Parameter `_this` can not be null. It is a single object.
// Parameter `new_elem` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_PushBack(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_StdContainers_NonDefaultConstructible *new_elem);

// Removes one element from the end.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_PopBack(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Inserts a new element right before the specified position.
// Parameter `_this` can not be null. It is a single object.
// Parameter `new_elem` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Insert(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position, const MR_StdContainers_NonDefaultConstructible *new_elem);

// Erases the element at the specified position.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Erase(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position);

// Inserts a new element right before the specified position.
// Parameter `_this` can not be null. It is a single object.
// Parameter `position` can not be null. It is a single object.
// Parameter `new_elem` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_InsertAtMutableIter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *position, const MR_StdContainers_NonDefaultConstructible *new_elem);

// Erases the element at the specified position.
// Parameter `_this` can not be null. It is a single object.
// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_EraseAtMutableIter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *position);

// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
// Parameter `_this` can not be null. It is a single object.
// Parameter `position` can not be null. It is a single object.
// Parameter `new_elem` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_InsertAtIter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *position, const MR_StdContainers_NonDefaultConstructible *new_elem);

// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
// Parameter `_this` can not be null. It is a single object.
// Parameter `position` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_EraseAtIter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *position);

// The begin iterator, const.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Begin(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Tests whether a const iterator is the begin iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_IsBegin(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter);

// The begin iterator, mutable.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableBegin(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Tests whether a mutable iterator is the begin iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_IsMutableBegin(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter);

// The end iterator, const.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_End(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Tests whether a const iterator is the end iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_IsEnd(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter);

// The end iterator, mutable.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableEnd(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this);

// Tests whether a mutable iterator is the end iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_IsMutableEnd(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter);

// Convert a const iterator to an index.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ToIndex(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter);

// Convert a mutable iterator to an index.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_MutableToIndex(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DestroyArray()`.
// Use `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetMutablePtr()` and `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *other);

// Destroys a heap-allocated instance of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this);

// Destroys a heap-allocated array of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *ptr, ptrdiff_t i);

// Makes a const iterator from a mutable one.
// Parameter `iter` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_FromMutable(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DestroyArray()`.
// Use `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetMutablePtr()` and `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *other);

// Destroys a heap-allocated instance of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this);

// Destroys a heap-allocated array of `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *ptr, ptrdiff_t i);

// Dereferences a const iterator.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Deref(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this);

// Increments a const iterator.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Incr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this);

// Decrements a const iterator.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Decr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this);

// Increments or decrements a const iterator by the specific amount. Completes in constant time.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetBy(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this, ptrdiff_t delta);

// Computes the signed difference between two const iterators. Completes in constant time.
// Parameter `a` can not be null. It is a single object.
// Parameter `b` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Distance(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *b);

// Dereferences a mutable iterator.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Deref(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this);

// Increments a mutable iterator.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Incr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this);

// Decrements a mutable iterator.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Decr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this);

// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetBy(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this, ptrdiff_t delta);

// Computes the signed difference between two mutable iterators. Completes in constant time.
// Parameter `a` can not be null. It is a single object.
// Parameter `b` can not be null. It is a single object.
MR_C_API ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Distance(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_STDCONTAINERS_NONDEFAULTCONSTRUCTIBLE_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_STDCONTAINERS_NONDEFAULTCONSTRUCTIBLE_H_2)
#define MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_STDCONTAINERS_NONDEFAULTCONSTRUCTIBLE_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <MR/test_std_containers.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_VECTOR_MR_STDCONTAINERS_NONDEFAULTCONSTRUCTIBLE_H_2)
