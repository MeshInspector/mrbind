#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `phmap::flat_hash_set<int>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_phmap_flat_hash_set_int MR_C_phmap_flat_hash_set_int;

/// Read-only iterator for `MR_C_phmap_flat_hash_set_int`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_phmap_flat_hash_set_int_const_iterator MR_C_phmap_flat_hash_set_int_const_iterator;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_set_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_set_int *MR_C_phmap_flat_hash_set_int_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_phmap_flat_hash_set_int_DestroyArray()`.
/// Use `MR_C_phmap_flat_hash_set_int_OffsetMutablePtr()` and `MR_C_phmap_flat_hash_set_int_OffsetPtr()` to access the array elements.
MR_C_API MR_C_phmap_flat_hash_set_int *MR_C_phmap_flat_hash_set_int_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_set_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_set_int *MR_C_phmap_flat_hash_set_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_phmap_flat_hash_set_int *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_phmap_flat_hash_set_int_AssignFromAnother(MR_C_phmap_flat_hash_set_int *_this, MR_C_PassBy other_pass_by, MR_C_phmap_flat_hash_set_int *other);

/// Destroys a heap-allocated instance of `MR_C_phmap_flat_hash_set_int`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_flat_hash_set_int_Destroy(MR_C_phmap_flat_hash_set_int *_this);

/// Destroys a heap-allocated array of `MR_C_phmap_flat_hash_set_int`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_flat_hash_set_int_DestroyArray(MR_C_phmap_flat_hash_set_int *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_phmap_flat_hash_set_int *MR_C_phmap_flat_hash_set_int_OffsetPtr(const MR_C_phmap_flat_hash_set_int *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_phmap_flat_hash_set_int *MR_C_phmap_flat_hash_set_int_OffsetMutablePtr(MR_C_phmap_flat_hash_set_int *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_phmap_flat_hash_set_int_Size(const MR_C_phmap_flat_hash_set_int *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null.
MR_C_API bool MR_C_phmap_flat_hash_set_int_IsEmpty(const MR_C_phmap_flat_hash_set_int *_this);

/// Removes all elements from the container.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_phmap_flat_hash_set_int_Clear(MR_C_phmap_flat_hash_set_int *_this);

/// Checks if the contain contains this key.
/// Parameter `_this` can not be null.
/// Parameter `key` can not be null.
MR_C_API bool MR_C_phmap_flat_hash_set_int_Contains(const MR_C_phmap_flat_hash_set_int *_this, const int *key);

/// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
/// Parameter `_this` can not be null.
/// Parameter `key` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_set_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_set_int_const_iterator *MR_C_phmap_flat_hash_set_int_Find(const MR_C_phmap_flat_hash_set_int *_this, const int *key);

/// Inserts a new element.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_phmap_flat_hash_set_int_Insert(MR_C_phmap_flat_hash_set_int *_this, int new_elem);

/// The begin iterator, const.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_set_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_set_int_const_iterator *MR_C_phmap_flat_hash_set_int_Begin(const MR_C_phmap_flat_hash_set_int *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_phmap_flat_hash_set_int_IsBegin(const MR_C_phmap_flat_hash_set_int *_this, const MR_C_phmap_flat_hash_set_int_const_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_set_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_set_int_const_iterator *MR_C_phmap_flat_hash_set_int_End(const MR_C_phmap_flat_hash_set_int *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_phmap_flat_hash_set_int_IsEnd(const MR_C_phmap_flat_hash_set_int *_this, const MR_C_phmap_flat_hash_set_int_const_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_set_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_set_int_const_iterator *MR_C_phmap_flat_hash_set_int_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_phmap_flat_hash_set_int_const_iterator_DestroyArray()`.
/// Use `MR_C_phmap_flat_hash_set_int_const_iterator_OffsetMutablePtr()` and `MR_C_phmap_flat_hash_set_int_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_phmap_flat_hash_set_int_const_iterator *MR_C_phmap_flat_hash_set_int_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_set_int_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_set_int_const_iterator *MR_C_phmap_flat_hash_set_int_const_iterator_ConstructFromAnother(const MR_C_phmap_flat_hash_set_int_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_phmap_flat_hash_set_int_const_iterator_AssignFromAnother(MR_C_phmap_flat_hash_set_int_const_iterator *_this, const MR_C_phmap_flat_hash_set_int_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_phmap_flat_hash_set_int_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_flat_hash_set_int_const_iterator_Destroy(MR_C_phmap_flat_hash_set_int_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_phmap_flat_hash_set_int_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_flat_hash_set_int_const_iterator_DestroyArray(MR_C_phmap_flat_hash_set_int_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_phmap_flat_hash_set_int_const_iterator *MR_C_phmap_flat_hash_set_int_const_iterator_OffsetPtr(const MR_C_phmap_flat_hash_set_int_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_phmap_flat_hash_set_int_const_iterator *MR_C_phmap_flat_hash_set_int_const_iterator_OffsetMutablePtr(MR_C_phmap_flat_hash_set_int_const_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_phmap_flat_hash_set_int_const_iterator_Deref(const MR_C_phmap_flat_hash_set_int_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_phmap_flat_hash_set_int_const_iterator_Incr(MR_C_phmap_flat_hash_set_int_const_iterator *_this);

#ifdef __cplusplus
} // extern "C"
#endif
