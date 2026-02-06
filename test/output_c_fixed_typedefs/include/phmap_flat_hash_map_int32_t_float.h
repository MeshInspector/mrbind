#ifndef MR_C_DETAIL_INCLUDED_PHMAP_FLAT_HASH_MAP_INT32_T_FLOAT_H
#define MR_C_DETAIL_INCLUDED_PHMAP_FLAT_HASH_MAP_INT32_T_FLOAT_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_pair_const_int32_t_float MR_C_std_pair_const_int32_t_float; // Defined in `#include <std_pair_const_int32_t_float.h>`.


// Generated from C++ container `phmap::flat_hash_map<int32_t, float>`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_phmap_flat_hash_map_int32_t_float MR_C_phmap_flat_hash_map_int32_t_float;

// Read-only iterator for `MR_C_phmap_flat_hash_map_int32_t_float`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_phmap_flat_hash_map_int32_t_float_const_iterator MR_C_phmap_flat_hash_map_int32_t_float_const_iterator;

// Mutable iterator for `MR_C_phmap_flat_hash_map_int32_t_float`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_phmap_flat_hash_map_int32_t_float_iterator MR_C_phmap_flat_hash_map_int32_t_float_iterator;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_phmap_flat_hash_map_int32_t_float_DestroyArray()`.
// Use `MR_C_phmap_flat_hash_map_int32_t_float_OffsetMutablePtr()` and `MR_C_phmap_flat_hash_map_int32_t_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_phmap_flat_hash_map_int32_t_float *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_AssignFromAnother(MR_C_phmap_flat_hash_map_int32_t_float *_this, MR_C_PassBy other_pass_by, MR_C_phmap_flat_hash_map_int32_t_float *other);

// Destroys a heap-allocated instance of `MR_C_phmap_flat_hash_map_int32_t_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_Destroy(const MR_C_phmap_flat_hash_map_int32_t_float *_this);

// Destroys a heap-allocated array of `MR_C_phmap_flat_hash_map_int32_t_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_DestroyArray(const MR_C_phmap_flat_hash_map_int32_t_float *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_phmap_flat_hash_map_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_OffsetPtr(const MR_C_phmap_flat_hash_map_int32_t_float *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_OffsetMutablePtr(MR_C_phmap_flat_hash_map_int32_t_float *ptr, ptrdiff_t i);

// The number of elements.
// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_phmap_flat_hash_map_int32_t_float_size(const MR_C_phmap_flat_hash_map_int32_t_float *_this);

// Returns true if the size is zero.
// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_flat_hash_map_int32_t_float_empty(const MR_C_phmap_flat_hash_map_int32_t_float *_this);

// Removes all elements from the container.
// Parameter `_this` can not be null. It is a single object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_clear(MR_C_phmap_flat_hash_map_int32_t_float *_this);

// Returns the element with the specific key. If it doesn't exist, creates it first. Acts like map's `operator[]` in C++.
// Parameter `_this` can not be null. It is a single object.
// Parameter `key` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_phmap_flat_hash_map_int32_t_float_find_or_construct_elem(MR_C_phmap_flat_hash_map_int32_t_float *_this, const int32_t *key);

// Checks if the contain contains this key.
// Parameter `_this` can not be null. It is a single object.
// Parameter `key` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_flat_hash_map_int32_t_float_contains(const MR_C_phmap_flat_hash_map_int32_t_float *_this, const int32_t *key);

// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `key` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_find(const MR_C_phmap_flat_hash_map_int32_t_float *_this, const int32_t *key);

// Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `key` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_find_mut(MR_C_phmap_flat_hash_map_int32_t_float *_this, const int32_t *key);

// The begin iterator, const.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_begin(const MR_C_phmap_flat_hash_map_int32_t_float *_this);

// Tests whether a const iterator is the begin iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_flat_hash_map_int32_t_float_is_begin(const MR_C_phmap_flat_hash_map_int32_t_float *_this, const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *iter);

// The begin iterator, mutable.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_begin_mut(MR_C_phmap_flat_hash_map_int32_t_float *_this);

// Tests whether a mutable iterator is the begin iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_flat_hash_map_int32_t_float_is_begin_mut(const MR_C_phmap_flat_hash_map_int32_t_float *_this, const MR_C_phmap_flat_hash_map_int32_t_float_iterator *iter);

// The end iterator, const.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_end(const MR_C_phmap_flat_hash_map_int32_t_float *_this);

// Tests whether a const iterator is the end iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_flat_hash_map_int32_t_float_is_end(const MR_C_phmap_flat_hash_map_int32_t_float *_this, const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *iter);

// The end iterator, mutable.
// Parameter `_this` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_end_mut(MR_C_phmap_flat_hash_map_int32_t_float *_this);

// Tests whether a mutable iterator is the end iterator.
// Parameter `_this` can not be null. It is a single object.
// Parameter `iter` can not be null. It is a single object.
MR_C_API bool MR_C_phmap_flat_hash_map_int32_t_float_is_end_mut(const MR_C_phmap_flat_hash_map_int32_t_float *_this, const MR_C_phmap_flat_hash_map_int32_t_float_iterator *iter);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_DestroyArray()`.
// Use `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_OffsetMutablePtr()` and `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_ConstructFromAnother(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_AssignFromAnother(MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this, const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *other);

// Destroys a heap-allocated instance of `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_Destroy(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this);

// Destroys a heap-allocated array of `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_DestroyArray(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_OffsetPtr(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_OffsetMutablePtr(MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *ptr, ptrdiff_t i);

// Makes a const iterator from a mutable one.
// Parameter `iter` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_from_mutable(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *iter);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_iterator_Destroy()` to free it when you're done using it.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_iterator_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_phmap_flat_hash_map_int32_t_float_iterator_DestroyArray()`.
// Use `MR_C_phmap_flat_hash_map_int32_t_float_iterator_OffsetMutablePtr()` and `MR_C_phmap_flat_hash_map_int32_t_float_iterator_OffsetPtr()` to access the array elements.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_iterator_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_phmap_flat_hash_map_int32_t_float_iterator_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_iterator_ConstructFromAnother(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_iterator_AssignFromAnother(MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this, const MR_C_phmap_flat_hash_map_int32_t_float_iterator *other);

// Destroys a heap-allocated instance of `MR_C_phmap_flat_hash_map_int32_t_float_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_iterator_Destroy(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this);

// Destroys a heap-allocated array of `MR_C_phmap_flat_hash_map_int32_t_float_iterator`. Does nothing if the pointer is null.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_iterator_DestroyArray(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_iterator_OffsetPtr(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_iterator_OffsetMutablePtr(MR_C_phmap_flat_hash_map_int32_t_float_iterator *ptr, ptrdiff_t i);

// Dereferences a const iterator.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_pair_const_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_deref(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this);

// Dereferences a const iterator, returning the key.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_deref_key(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this);

// Dereferences a const iterator, returning the mapped value.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_deref_value(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this);

// Increments a const iterator.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_incr(MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this);

// Compares two const iterators for equality.
// Parameter `a` can not be null. It is a single object.
// Parameter `b` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_C_phmap_flat_hash_map_int32_t_float_const_iterator(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *a, const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *b);

// Dereferences a mutable iterator.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_pair_const_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_iterator_deref(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this);

// Dereferences a mutable iterator, returning the key.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_C_phmap_flat_hash_map_int32_t_float_iterator_deref_key(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this);

// Dereferences a mutable iterator, returning the mapped value.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_phmap_flat_hash_map_int32_t_float_iterator_deref_value(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this);

// Increments a mutable iterator.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_phmap_flat_hash_map_int32_t_float_iterator_incr(MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this);

// Compares two mutable iterators for equality.
// Parameter `a` can not be null. It is a single object.
// Parameter `b` can not be null. It is a single object.
MR_C_API bool MR_C_equal_MR_C_phmap_flat_hash_map_int32_t_float_iterator(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *a, const MR_C_phmap_flat_hash_map_int32_t_float_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_PHMAP_FLAT_HASH_MAP_INT32_T_FLOAT_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_PHMAP_FLAT_HASH_MAP_INT32_T_FLOAT_H_2)
#define MR_C_DETAIL_INCLUDED_PHMAP_FLAT_HASH_MAP_INT32_T_FLOAT_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_pair_const_int32_t_float.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_PHMAP_FLAT_HASH_MAP_INT32_T_FLOAT_H_2)
