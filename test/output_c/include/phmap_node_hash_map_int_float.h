#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `phmap::node_hash_map<int, float>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_phmap_node_hash_map_int_float MR_C_phmap_node_hash_map_int_float;

/// Read-only iterator for `MR_C_phmap_node_hash_map_int_float`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_phmap_node_hash_map_int_float_const_iterator MR_C_phmap_node_hash_map_int_float_const_iterator;

/// Mutable iterator for `MR_C_phmap_node_hash_map_int_float`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_phmap_node_hash_map_int_float_iterator MR_C_phmap_node_hash_map_int_float_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float *MR_C_phmap_node_hash_map_int_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_phmap_node_hash_map_int_float_DestroyArray()`.
/// Use `MR_C_phmap_node_hash_map_int_float_OffsetMutablePtr()` and `MR_C_phmap_node_hash_map_int_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_phmap_node_hash_map_int_float *MR_C_phmap_node_hash_map_int_float_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float *MR_C_phmap_node_hash_map_int_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_phmap_node_hash_map_int_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_phmap_node_hash_map_int_float_AssignFromAnother(MR_C_phmap_node_hash_map_int_float *_this, MR_C_PassBy other_pass_by, MR_C_phmap_node_hash_map_int_float *other);

/// Destroys a heap-allocated instance of `MR_C_phmap_node_hash_map_int_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_node_hash_map_int_float_Destroy(const MR_C_phmap_node_hash_map_int_float *_this);

/// Destroys a heap-allocated array of `MR_C_phmap_node_hash_map_int_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_node_hash_map_int_float_DestroyArray(const MR_C_phmap_node_hash_map_int_float *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_phmap_node_hash_map_int_float *MR_C_phmap_node_hash_map_int_float_OffsetPtr(const MR_C_phmap_node_hash_map_int_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_phmap_node_hash_map_int_float *MR_C_phmap_node_hash_map_int_float_OffsetMutablePtr(MR_C_phmap_node_hash_map_int_float *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_phmap_node_hash_map_int_float_Size(const MR_C_phmap_node_hash_map_int_float *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_node_hash_map_int_float_IsEmpty(const MR_C_phmap_node_hash_map_int_float *_this);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_phmap_node_hash_map_int_float_Clear(MR_C_phmap_node_hash_map_int_float *_this);

/// Returns the element with the specific key. If it doesn't exist, creates it first. Acts like map's `operator[]` in C++.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `key` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_phmap_node_hash_map_int_float_FindOrConstructElem(MR_C_phmap_node_hash_map_int_float *_this, const int *key);

/// Checks if the contain contains this key.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `key` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_node_hash_map_int_float_Contains(const MR_C_phmap_node_hash_map_int_float *_this, const int *key);

/// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `key` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_const_iterator *MR_C_phmap_node_hash_map_int_float_Find(const MR_C_phmap_node_hash_map_int_float *_this, const int *key);

/// Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `key` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_iterator *MR_C_phmap_node_hash_map_int_float_FindMutable(MR_C_phmap_node_hash_map_int_float *_this, const int *key);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_const_iterator *MR_C_phmap_node_hash_map_int_float_Begin(const MR_C_phmap_node_hash_map_int_float *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_node_hash_map_int_float_IsBegin(const MR_C_phmap_node_hash_map_int_float *_this, const MR_C_phmap_node_hash_map_int_float_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_iterator *MR_C_phmap_node_hash_map_int_float_MutableBegin(MR_C_phmap_node_hash_map_int_float *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_node_hash_map_int_float_IsMutableBegin(MR_C_phmap_node_hash_map_int_float *_this, const MR_C_phmap_node_hash_map_int_float_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_const_iterator *MR_C_phmap_node_hash_map_int_float_End(const MR_C_phmap_node_hash_map_int_float *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_node_hash_map_int_float_IsEnd(const MR_C_phmap_node_hash_map_int_float *_this, const MR_C_phmap_node_hash_map_int_float_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_iterator *MR_C_phmap_node_hash_map_int_float_MutableEnd(MR_C_phmap_node_hash_map_int_float *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_node_hash_map_int_float_IsMutableEnd(MR_C_phmap_node_hash_map_int_float *_this, const MR_C_phmap_node_hash_map_int_float_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_const_iterator *MR_C_phmap_node_hash_map_int_float_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_phmap_node_hash_map_int_float_const_iterator_DestroyArray()`.
/// Use `MR_C_phmap_node_hash_map_int_float_const_iterator_OffsetMutablePtr()` and `MR_C_phmap_node_hash_map_int_float_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_phmap_node_hash_map_int_float_const_iterator *MR_C_phmap_node_hash_map_int_float_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_const_iterator *MR_C_phmap_node_hash_map_int_float_const_iterator_ConstructFromAnother(const MR_C_phmap_node_hash_map_int_float_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MR_C_API void MR_C_phmap_node_hash_map_int_float_const_iterator_AssignFromAnother(MR_C_phmap_node_hash_map_int_float_const_iterator *_this, const MR_C_phmap_node_hash_map_int_float_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_phmap_node_hash_map_int_float_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy(const MR_C_phmap_node_hash_map_int_float_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_phmap_node_hash_map_int_float_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_node_hash_map_int_float_const_iterator_DestroyArray(const MR_C_phmap_node_hash_map_int_float_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_phmap_node_hash_map_int_float_const_iterator *MR_C_phmap_node_hash_map_int_float_const_iterator_OffsetPtr(const MR_C_phmap_node_hash_map_int_float_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_phmap_node_hash_map_int_float_const_iterator *MR_C_phmap_node_hash_map_int_float_const_iterator_OffsetMutablePtr(MR_C_phmap_node_hash_map_int_float_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_const_iterator *MR_C_phmap_node_hash_map_int_float_const_iterator_FromMutable(const MR_C_phmap_node_hash_map_int_float_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_iterator *MR_C_phmap_node_hash_map_int_float_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_phmap_node_hash_map_int_float_iterator_DestroyArray()`.
/// Use `MR_C_phmap_node_hash_map_int_float_iterator_OffsetMutablePtr()` and `MR_C_phmap_node_hash_map_int_float_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_phmap_node_hash_map_int_float_iterator *MR_C_phmap_node_hash_map_int_float_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_node_hash_map_int_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_node_hash_map_int_float_iterator *MR_C_phmap_node_hash_map_int_float_iterator_ConstructFromAnother(const MR_C_phmap_node_hash_map_int_float_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MR_C_API void MR_C_phmap_node_hash_map_int_float_iterator_AssignFromAnother(MR_C_phmap_node_hash_map_int_float_iterator *_this, const MR_C_phmap_node_hash_map_int_float_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_phmap_node_hash_map_int_float_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_node_hash_map_int_float_iterator_Destroy(const MR_C_phmap_node_hash_map_int_float_iterator *_this);

/// Destroys a heap-allocated array of `MR_C_phmap_node_hash_map_int_float_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_node_hash_map_int_float_iterator_DestroyArray(const MR_C_phmap_node_hash_map_int_float_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_phmap_node_hash_map_int_float_iterator *MR_C_phmap_node_hash_map_int_float_iterator_OffsetPtr(const MR_C_phmap_node_hash_map_int_float_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_phmap_node_hash_map_int_float_iterator *MR_C_phmap_node_hash_map_int_float_iterator_OffsetMutablePtr(MR_C_phmap_node_hash_map_int_float_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator, returning the key.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_phmap_node_hash_map_int_float_const_iterator_DerefKey(const MR_C_phmap_node_hash_map_int_float_const_iterator *_this);

/// Dereferences a const iterator, returning the mapped value.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_phmap_node_hash_map_int_float_const_iterator_DerefValue(const MR_C_phmap_node_hash_map_int_float_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_phmap_node_hash_map_int_float_const_iterator_Incr(MR_C_phmap_node_hash_map_int_float_const_iterator *_this);

/// Dereferences a mutable iterator, returning the key.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_phmap_node_hash_map_int_float_iterator_DerefKey(const MR_C_phmap_node_hash_map_int_float_iterator *_this);

/// Dereferences a mutable iterator, returning the mapped value.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_phmap_node_hash_map_int_float_iterator_DerefValue(const MR_C_phmap_node_hash_map_int_float_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_phmap_node_hash_map_int_float_iterator_Incr(MR_C_phmap_node_hash_map_int_float_iterator *_this);

#ifdef __cplusplus
} // extern "C"
#endif
