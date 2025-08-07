#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Generated from C++ container `std::multiset<int32_t>`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_multiset_int32_t MR_C_std_multiset_int32_t;

// Read-only iterator for `MR_C_std_multiset_int32_t`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_multiset_int32_t_const_iterator MR_C_std_multiset_int32_t_const_iterator;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int32_t *MR_C_std_multiset_int32_t_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_multiset_int32_t_DestroyArray()`.
// Use `MR_C_std_multiset_int32_t_OffsetMutablePtr()` and `MR_C_std_multiset_int32_t_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_multiset_int32_t *MR_C_std_multiset_int32_t_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int32_t *MR_C_std_multiset_int32_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_multiset_int32_t *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_multiset_int32_t_AssignFromAnother(MR_C_std_multiset_int32_t *_this, MR_C_PassBy other_pass_by, MR_C_std_multiset_int32_t *other);

// Destroys a heap-allocated instance of `MR_C_std_multiset_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_multiset_int32_t_Destroy(const MR_C_std_multiset_int32_t *_this);

// Destroys a heap-allocated array of `MR_C_std_multiset_int32_t`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_multiset_int32_t_DestroyArray(const MR_C_std_multiset_int32_t *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_multiset_int32_t *MR_C_std_multiset_int32_t_OffsetPtr(const MR_C_std_multiset_int32_t *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_multiset_int32_t *MR_C_std_multiset_int32_t_OffsetMutablePtr(MR_C_std_multiset_int32_t *ptr, ptrdiff_t i);

// Construct from a range of elements.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int32_t *MR_C_std_multiset_int32_t_ConstructFromRange(const int32_t *ptr, size_t size);

// Assign from a range of elements, overwriting previous contents.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_multiset_int32_t_AssignFromRange(MR_C_std_multiset_int32_t *_this, const int32_t *ptr, size_t size);

// The number of elements.
// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_multiset_int32_t_Size(const MR_C_std_multiset_int32_t *_this);

// Returns true if the size is zero.
// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_multiset_int32_t_IsEmpty(const MR_C_std_multiset_int32_t *_this);

// Removes all elements from the container.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_multiset_int32_t_Clear(MR_C_std_multiset_int32_t *_this);

// Checks if the contain contains this key.
// Parameter `_this` can not be null. It is a single object.
// Parameter `key` can not be null. It is a single object.
MR_C_API size_t MR_C_std_multiset_int32_t_Count(const MR_C_std_multiset_int32_t *_this, const int32_t *key);

// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `key` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int32_t_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int32_t_const_iterator *MR_C_std_multiset_int32_t_Find(const MR_C_std_multiset_int32_t *_this, const int32_t *key);

// Inserts a new element.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_multiset_int32_t_Insert(MR_C_std_multiset_int32_t *_this, int32_t new_elem);

// The begin iterator, const.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int32_t_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int32_t_const_iterator *MR_C_std_multiset_int32_t_Begin(const MR_C_std_multiset_int32_t *_this);

// Tests whether a const iterator is the begin iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_multiset_int32_t_IsBegin(const MR_C_std_multiset_int32_t *_this, const MR_C_std_multiset_int32_t_const_iterator *iter);

// The end iterator, const.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int32_t_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int32_t_const_iterator *MR_C_std_multiset_int32_t_End(const MR_C_std_multiset_int32_t *_this);

// Tests whether a const iterator is the end iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_std_multiset_int32_t_IsEnd(const MR_C_std_multiset_int32_t *_this, const MR_C_std_multiset_int32_t_const_iterator *iter);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int32_t_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int32_t_const_iterator *MR_C_std_multiset_int32_t_const_iterator_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_multiset_int32_t_const_iterator_DestroyArray()`.
// Use `MR_C_std_multiset_int32_t_const_iterator_OffsetMutablePtr()` and `MR_C_std_multiset_int32_t_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_multiset_int32_t_const_iterator *MR_C_std_multiset_int32_t_const_iterator_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_int32_t_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_int32_t_const_iterator *MR_C_std_multiset_int32_t_const_iterator_ConstructFromAnother(const MR_C_std_multiset_int32_t_const_iterator *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
MR_C_API void MR_C_std_multiset_int32_t_const_iterator_AssignFromAnother(MR_C_std_multiset_int32_t_const_iterator *_this, const MR_C_std_multiset_int32_t_const_iterator *other);

// Destroys a heap-allocated instance of `MR_C_std_multiset_int32_t_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_multiset_int32_t_const_iterator_Destroy(const MR_C_std_multiset_int32_t_const_iterator *_this);

// Destroys a heap-allocated array of `MR_C_std_multiset_int32_t_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_multiset_int32_t_const_iterator_DestroyArray(const MR_C_std_multiset_int32_t_const_iterator *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_multiset_int32_t_const_iterator *MR_C_std_multiset_int32_t_const_iterator_OffsetPtr(const MR_C_std_multiset_int32_t_const_iterator *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_multiset_int32_t_const_iterator *MR_C_std_multiset_int32_t_const_iterator_OffsetMutablePtr(MR_C_std_multiset_int32_t_const_iterator *ptr, ptrdiff_t i);

// Dereferences a const iterator.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_C_std_multiset_int32_t_const_iterator_Deref(const MR_C_std_multiset_int32_t_const_iterator *_this);

// Increments a const iterator.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_multiset_int32_t_const_iterator_Incr(MR_C_std_multiset_int32_t_const_iterator *_this);

// Decrements a const iterator.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_multiset_int32_t_const_iterator_Decr(MR_C_std_multiset_int32_t_const_iterator *_this);

#ifdef __cplusplus
} // extern "C"
#endif
