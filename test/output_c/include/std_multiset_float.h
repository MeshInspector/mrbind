#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_multiset_float MR_C_std_multiset_float; // Defined below in this file.
typedef struct MR_C_std_set_float_const_iterator MR_C_std_multiset_float_const_iterator; // Defined below in this file.


/// Generated from C++ container `std::multiset<float>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_multiset_float MR_C_std_multiset_float;

/// Read-only iterator for `MR_C_std_multiset_float`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_set_float_const_iterator MR_C_std_multiset_float_const_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float *MR_C_std_multiset_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_multiset_float_DestroyArray()`.
/// Use `MR_C_std_multiset_float_OffsetMutablePtr()` and `MR_C_std_multiset_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_multiset_float *MR_C_std_multiset_float_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float *MR_C_std_multiset_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_multiset_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_multiset_float_AssignFromAnother(MR_C_std_multiset_float *_this, MR_C_PassBy other_pass_by, MR_C_std_multiset_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_multiset_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_multiset_float_Destroy(const MR_C_std_multiset_float *_this);

/// Destroys a heap-allocated array of `MR_C_std_multiset_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_multiset_float_DestroyArray(const MR_C_std_multiset_float *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_multiset_float *MR_C_std_multiset_float_OffsetPtr(const MR_C_std_multiset_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_multiset_float *MR_C_std_multiset_float_OffsetMutablePtr(MR_C_std_multiset_float *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_std_multiset_float_Size(const MR_C_std_multiset_float *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null.
MR_C_API bool MR_C_std_multiset_float_IsEmpty(const MR_C_std_multiset_float *_this);

/// Removes all elements from the container.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_multiset_float_Clear(MR_C_std_multiset_float *_this);

/// Checks if the contain contains this key.
/// Parameter `_this` can not be null.
/// Parameter `key` can not be null.
MR_C_API size_t MR_C_std_multiset_float_Count(const MR_C_std_multiset_float *_this, const float *key);

/// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
/// Parameter `_this` can not be null.
/// Parameter `key` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_Find(const MR_C_std_multiset_float *_this, const float *key);

/// Inserts a new element.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_multiset_float_Insert(MR_C_std_multiset_float *_this, float new_elem);

/// The begin iterator, const.
/// Parameter `_this` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_Begin(const MR_C_std_multiset_float *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_multiset_float_IsBegin(const MR_C_std_multiset_float *_this, const MR_C_std_multiset_float_const_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_End(const MR_C_std_multiset_float *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_multiset_float_IsEnd(const MR_C_std_multiset_float *_this, const MR_C_std_multiset_float_const_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_multiset_float_const_iterator_DestroyArray()`.
/// Use `MR_C_std_multiset_float_const_iterator_OffsetMutablePtr()` and `MR_C_std_multiset_float_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_ConstructFromAnother(const MR_C_std_multiset_float_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_multiset_float_const_iterator_AssignFromAnother(MR_C_std_multiset_float_const_iterator *_this, const MR_C_std_multiset_float_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_multiset_float_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_multiset_float_const_iterator_Destroy(const MR_C_std_multiset_float_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_std_multiset_float_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_multiset_float_const_iterator_DestroyArray(const MR_C_std_multiset_float_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_OffsetPtr(const MR_C_std_multiset_float_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_OffsetMutablePtr(MR_C_std_multiset_float_const_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_multiset_float_const_iterator_Deref(const MR_C_std_multiset_float_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_multiset_float_const_iterator_Incr(MR_C_std_multiset_float_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_multiset_float_const_iterator_Decr(MR_C_std_multiset_float_const_iterator *_this);

#ifdef __cplusplus
} // extern "C"
#endif
