#pragma once

#include <exports.h>
#include <pass_by.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `std::unordered_multimap<int, float>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_unordered_multimap_int_float MR_C_std_unordered_multimap_int_float;

/// Read-only iterator for `MR_C_std_unordered_multimap_int_float`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_unordered_multimap_int_float_const_iterator MR_C_std_unordered_multimap_int_float_const_iterator;

/// Mutable iterator for `MR_C_std_unordered_multimap_int_float`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_unordered_multimap_int_float_iterator MR_C_std_unordered_multimap_int_float_iterator;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float *MR_C_std_unordered_multimap_int_float_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float *MR_C_std_unordered_multimap_int_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_unordered_multimap_int_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_unordered_multimap_int_float_AssignFromAnother(MR_C_std_unordered_multimap_int_float *_this, MR_C_PassBy other_pass_by, MR_C_std_unordered_multimap_int_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_unordered_multimap_int_float`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_unordered_multimap_int_float_Destroy(MR_C_std_unordered_multimap_int_float *_this);

/// The number of elements.
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_std_unordered_multimap_int_float_Size(const MR_C_std_unordered_multimap_int_float *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null.
MR_C_API bool MR_C_std_unordered_multimap_int_float_IsEmpty(const MR_C_std_unordered_multimap_int_float *_this);

/// Removes all elements from the container.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_unordered_multimap_int_float_Clear(MR_C_std_unordered_multimap_int_float *_this);

/// Checks if the contain contains this key.
/// Parameter `_this` can not be null.
/// Parameter `key` can not be null.
MR_C_API size_t MR_C_std_unordered_multimap_int_float_Count(const MR_C_std_unordered_multimap_int_float *_this, const int *key);

/// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
/// Parameter `_this` can not be null.
/// Parameter `key` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_const_iterator *MR_C_std_unordered_multimap_int_float_Find(const MR_C_std_unordered_multimap_int_float *_this, const int *key);

/// Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.
/// Parameter `_this` can not be null.
/// Parameter `key` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_iterator *MR_C_std_unordered_multimap_int_float_FindMutable(MR_C_std_unordered_multimap_int_float *_this, const int *key);

/// The begin iterator, const.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_const_iterator *MR_C_std_unordered_multimap_int_float_Begin(const MR_C_std_unordered_multimap_int_float *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_unordered_multimap_int_float_IsBegin(const MR_C_std_unordered_multimap_int_float *_this, const MR_C_std_unordered_multimap_int_float_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_iterator *MR_C_std_unordered_multimap_int_float_MutableBegin(MR_C_std_unordered_multimap_int_float *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_unordered_multimap_int_float_IsMutableBegin(MR_C_std_unordered_multimap_int_float *_this, const MR_C_std_unordered_multimap_int_float_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_const_iterator *MR_C_std_unordered_multimap_int_float_End(const MR_C_std_unordered_multimap_int_float *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_unordered_multimap_int_float_IsEnd(const MR_C_std_unordered_multimap_int_float *_this, const MR_C_std_unordered_multimap_int_float_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_iterator *MR_C_std_unordered_multimap_int_float_MutableEnd(MR_C_std_unordered_multimap_int_float *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_unordered_multimap_int_float_IsMutableEnd(MR_C_std_unordered_multimap_int_float *_this, const MR_C_std_unordered_multimap_int_float_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_const_iterator *MR_C_std_unordered_multimap_int_float_const_iterator_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_const_iterator *MR_C_std_unordered_multimap_int_float_const_iterator_ConstructFromAnother(const MR_C_std_unordered_multimap_int_float_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_unordered_multimap_int_float_const_iterator_AssignFromAnother(MR_C_std_unordered_multimap_int_float_const_iterator *_this, const MR_C_std_unordered_multimap_int_float_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_unordered_multimap_int_float_const_iterator`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_unordered_multimap_int_float_const_iterator_Destroy(MR_C_std_unordered_multimap_int_float_const_iterator *_this);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_const_iterator *MR_C_std_unordered_multimap_int_float_const_iterator_FromMutable(const MR_C_std_unordered_multimap_int_float_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_iterator *MR_C_std_unordered_multimap_int_float_iterator_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_unordered_multimap_int_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_unordered_multimap_int_float_iterator *MR_C_std_unordered_multimap_int_float_iterator_ConstructFromAnother(const MR_C_std_unordered_multimap_int_float_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_unordered_multimap_int_float_iterator_AssignFromAnother(MR_C_std_unordered_multimap_int_float_iterator *_this, const MR_C_std_unordered_multimap_int_float_iterator *other);

/// Destroys a heap-allocated instance of `MR_C_std_unordered_multimap_int_float_iterator`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_unordered_multimap_int_float_iterator_Destroy(MR_C_std_unordered_multimap_int_float_iterator *_this);

/// Dereferences a const iterator, returning the key.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_unordered_multimap_int_float_const_iterator_DerefKey(const MR_C_std_unordered_multimap_int_float_const_iterator *_this);

/// Dereferences a const iterator, returning the mapped value.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_unordered_multimap_int_float_const_iterator_DerefValue(const MR_C_std_unordered_multimap_int_float_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_unordered_multimap_int_float_const_iterator_Incr(MR_C_std_unordered_multimap_int_float_const_iterator *_this);

/// Dereferences a mutable iterator, returning the key.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int *MR_C_std_unordered_multimap_int_float_iterator_DerefKey(const MR_C_std_unordered_multimap_int_float_iterator *_this);

/// Dereferences a mutable iterator, returning the mapped value.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_unordered_multimap_int_float_iterator_DerefValue(const MR_C_std_unordered_multimap_int_float_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_unordered_multimap_int_float_iterator_Incr(MR_C_std_unordered_multimap_int_float_iterator *_this);

#ifdef __cplusplus
} // extern "C"
#endif
