#pragma once

#include <exports.h>
#include <pass_by.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `std::set<float>`.
typedef struct MR_C_std_set_float MR_C_std_set_float;

/// Read-only iterator for `MR_C_std_set_float`.
typedef struct MR_C_std_set_float_const_iterator MR_C_std_set_float_const_iterator;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_set_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float *MR_C_std_set_float_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_set_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float *MR_C_std_set_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_set_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_set_float_AssignFromAnother(MR_C_std_set_float *_this, MR_C_PassBy other_pass_by, MR_C_std_set_float *other);

/// Destroys a heap-allocated instance of `std::set<float>`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_set_float_Destroy(MR_C_std_set_float *_this);

/// The number of elements.
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_std_set_float_Size(const MR_C_std_set_float *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null.
MR_C_API bool MR_C_std_set_float_IsEmpty(const MR_C_std_set_float *_this);

/// Removes all elements from the container.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_set_float_Clear(MR_C_std_set_float *_this);

/// Inserts a new element.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_set_float_Insert(MR_C_std_set_float *_this, float new_elem);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_set_float_InsertAtIter(MR_C_std_set_float *_this, const MR_C_std_set_float_const_iterator *position, float new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null.
/// Parameter `position` can not be null.
MR_C_API void MR_C_std_set_float_EraseAtIter(MR_C_std_set_float *_this, const MR_C_std_set_float_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_set_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float_const_iterator *MR_C_std_set_float_Begin(const MR_C_std_set_float *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_set_float_IsBegin(const MR_C_std_set_float *_this, const MR_C_std_set_float_const_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_set_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float_const_iterator *MR_C_std_set_float_End(const MR_C_std_set_float *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null.
/// Parameter `iter` can not be null.
MR_C_API bool MR_C_std_set_float_IsEnd(const MR_C_std_set_float *_this, const MR_C_std_set_float_const_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_set_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_set_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_set_float_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_set_float_const_iterator_AssignFromAnother(MR_C_std_set_float_const_iterator *_this, MR_C_PassBy other_pass_by, MR_C_std_set_float_const_iterator *other);

/// Destroys a heap-allocated instance of `std::set<float>::const_iterator`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_set_float_const_iterator_Destroy(MR_C_std_set_float_const_iterator *_this);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_set_float_const_iterator_Deref(const MR_C_std_set_float_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_set_float_const_iterator_Incr(MR_C_std_set_float_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_set_float_const_iterator_Decr(MR_C_std_set_float_const_iterator *_this);

#ifdef __cplusplus
} // extern "C"
#endif
