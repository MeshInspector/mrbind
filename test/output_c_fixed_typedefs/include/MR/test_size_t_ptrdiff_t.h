#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_vector_int64_t MR_C_std_vector_int64_t; // Defined in `#include <std_vector_int64_t.h>`.
typedef struct MR_C_std_vector_uint64_t MR_C_std_vector_uint64_t; // Defined in `#include <std_vector_uint64_t.h>`.
typedef struct MR_TestSizeT_A_uint64_t MR_TestSizeT_A_uint64_t; // Defined below in this file.


/// Generated from function `MR::TestSizeT::foo`.
MR_C_API uint64_t MR_TestSizeT_foo_uint64_t(uint64_t _1);

/// Generated from function `MR::TestSizeT::foo`.
/// Parameter `_1` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API uint64_t **MR_TestSizeT_foo_uint64_t_ptr_ref(uint64_t **_1);

/// Generated from function `MR::TestSizeT::foo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_uint64_t *MR_TestSizeT_foo_std_vector_uint64_t(MR_C_PassBy _1_pass_by, MR_C_std_vector_uint64_t *_1);

/// Generated from function `MR::TestSizeT::foo`.
MR_C_API int64_t MR_TestSizeT_foo_int64_t(int64_t _1);

/// Generated from function `MR::TestSizeT::foo`.
/// Parameter `_1` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int64_t **MR_TestSizeT_foo_int64_t_ptr_ref(int64_t **_1);

/// Generated from function `MR::TestSizeT::foo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_int64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int64_t *MR_TestSizeT_foo_std_vector_int64_t(MR_C_PassBy _1_pass_by, MR_C_std_vector_int64_t *_1);

/// Generated from class `MR::TestSizeT::A<uint64_t>`.
typedef struct MR_TestSizeT_A_uint64_t MR_TestSizeT_A_uint64_t;

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

/// Generated from a constructor of class `MR::TestSizeT::A<uint64_t>`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSizeT_A_uint64_t_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_ConstructFromAnother(const MR_TestSizeT_A_uint64_t *_other);

/// Destroys a heap-allocated instance of `MR_TestSizeT_A_uint64_t`. Does nothing if the pointer is null.
MR_C_API void MR_TestSizeT_A_uint64_t_Destroy(const MR_TestSizeT_A_uint64_t *_this);

/// Destroys a heap-allocated array of `MR_TestSizeT_A_uint64_t`. Does nothing if the pointer is null.
MR_C_API void MR_TestSizeT_A_uint64_t_DestroyArray(const MR_TestSizeT_A_uint64_t *_this);

/// Generated from a method of class `MR::TestSizeT::A<uint64_t>` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_TestSizeT_A_uint64_t *MR_TestSizeT_A_uint64_t_AssignFromAnother(MR_TestSizeT_A_uint64_t *_this, const MR_TestSizeT_A_uint64_t *_other);

/// Generated from a method of class `MR::TestSizeT::A<uint64_t>` named `foo`.
/// Parameter `_this` can not be null.
MR_C_API uint64_t MR_TestSizeT_A_uint64_t_foo(MR_TestSizeT_A_uint64_t *_this);

#ifdef __cplusplus
} // extern "C"
#endif
