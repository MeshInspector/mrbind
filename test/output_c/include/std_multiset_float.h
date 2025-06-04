#pragma once

#include <exports.h>
#include <pass_by.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `std::multiset<float>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_multiset_float MR_C_std_multiset_float;

/// Read-only iterator for `MR_C_std_multiset_float`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, `MR_C_PassBy_DefaultArgument` (if supported by the callee).
typedef struct MR_C_std_set_float_const_iterator MR_C_std_multiset_float_const_iterator;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float *MR_C_std_multiset_float_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float *MR_C_std_multiset_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_multiset_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_multiset_float_AssignFromAnother(MR_C_std_multiset_float *_this, MR_C_PassBy other_pass_by, MR_C_std_multiset_float *other);

/// Destroys a heap-allocated instance of `std::multiset<float>`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_multiset_float_Destroy(MR_C_std_multiset_float *_this);

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
/// Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_Find(const MR_C_std_multiset_float *_this, const float *key);

/// Inserts a new element.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_multiset_float_Insert(MR_C_std_multiset_float *_this, float new_elem);

/// The begin iterator, const.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_Begin(const MR_C_std_multiset_float *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_multiset_float_IsBegin(const MR_C_std_multiset_float *_this, const MR_C_std_multiset_float_const_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_End(const MR_C_std_multiset_float *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_multiset_float_IsEnd(const MR_C_std_multiset_float *_this, const MR_C_std_multiset_float_const_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_multiset_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_multiset_float_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_multiset_float_const_iterator_AssignFromAnother(MR_C_std_multiset_float_const_iterator *_this, MR_C_PassBy other_pass_by, MR_C_std_multiset_float_const_iterator *other);

/// Destroys a heap-allocated instance of `std::multiset<float>::const_iterator`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_multiset_float_const_iterator_Destroy(MR_C_std_multiset_float_const_iterator *_this);

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
