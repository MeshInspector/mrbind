#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_vector_int64_t MR_C_std_vector_int64_t; // Defined in `#include <std_vector_int64_t.h>`.
typedef struct MR_C_std_vector_uint64_t MR_C_std_vector_uint64_t; // Defined in `#include <std_vector_uint64_t.h>`.


/// Generated from class `MR::TestSizeT::A<MR_C_uint64_t>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_TestSizeT_A_uint64_t MR_TestSizeT_A_uint64_t;

/// Generated from function `MR::TestSizeT::foo`.
MR_C_API MR_C_uint64_t MR_TestSizeT_foo_uint64_t(MR_C_uint64_t _1);

/// Generated from function `MR::TestSizeT::foo`.
/// Parameter `_1` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_uint64_t **MR_TestSizeT_foo_uint64_t_ptr(MR_C_uint64_t **_1);

/// Generated from function `MR::TestSizeT::foo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t *MR_TestSizeT_foo_std_vector_uint64_t(MR_C_PassBy _1_pass_by, MR_C_std_vector_uint64_t *_1);

/// Generated from function `MR::TestSizeT::foo`.
MR_C_API MR_C_int64_t MR_TestSizeT_foo_int64_t(MR_C_int64_t _1);

/// Generated from function `MR::TestSizeT::foo`.
/// Parameter `_1` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_int64_t **MR_TestSizeT_foo_int64_t_ptr(MR_C_int64_t **_1);

/// Generated from function `MR::TestSizeT::foo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_int64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int64_t *MR_TestSizeT_foo_std_vector_int64_t(MR_C_PassBy _1_pass_by, MR_C_std_vector_int64_t *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSizeT_A_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TestSizeT_A_uint64_t_DestroyArray()`.
/// Use `MR_TestSizeT_A_uint64_t_OffsetMutablePtr()` and `MR_TestSizeT_A_uint64_t_OffsetPtr()` to access the array elements.
MR_C_API MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_OffsetPtr(const MR_TestSizeT_A_uint64_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_OffsetMutablePtr(MR_TestSizeT_A_uint64_t *ptr, ptrdiff_t i);

/// Generated from constructor `MR::TestSizeT::A<MR_C_uint64_t>::A`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSizeT_A_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_ConstructFromAnother(const MR_TestSizeT_A_uint64_t *_other);

/// Destroys a heap-allocated instance of `MR_TestSizeT_A_uint64_t`. Does nothing if the pointer is null.
MR_C_API void MR_TestSizeT_A_uint64_t_Destroy(const MR_TestSizeT_A_uint64_t *_this);

/// Destroys a heap-allocated array of `MR_TestSizeT_A_uint64_t`. Does nothing if the pointer is null.
MR_C_API void MR_TestSizeT_A_uint64_t_DestroyArray(const MR_TestSizeT_A_uint64_t *_this);

/// Generated from method `MR::TestSizeT::A<MR_C_uint64_t>::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_AssignFromAnother(MR_TestSizeT_A_uint64_t *_this, const MR_TestSizeT_A_uint64_t *_other);

/// Generated from method `MR::TestSizeT::A<MR_C_uint64_t>::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_C_uint64_t MR_TestSizeT_A_uint64_t_foo(MR_TestSizeT_A_uint64_t *_this);

#ifdef __cplusplus
} // extern "C"
#endif
