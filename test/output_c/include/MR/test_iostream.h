#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_istream MR_C_std_istream; // Defined in `#include <iostream.h>`.
typedef struct MR_C_std_ostream MR_C_std_ostream; // Defined in `#include <iostream.h>`.


/// Generated from class `MR::IOStream::A`.
typedef struct MR_IOStream_A MR_IOStream_A;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IOStream_A_Destroy()` to free it when you're done using it.
MR_C_API MR_IOStream_A *MR_IOStream_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IOStream_A_DestroyArray()`.
/// Use `MR_IOStream_A_OffsetMutablePtr()` and `MR_IOStream_A_OffsetPtr()` to access the array elements.
MR_C_API MR_IOStream_A *MR_IOStream_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_IOStream_A *MR_IOStream_A_OffsetPtr(const MR_IOStream_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_IOStream_A *MR_IOStream_A_OffsetMutablePtr(MR_IOStream_A *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IOStream::A`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IOStream_A_Destroy()` to free it when you're done using it.
MR_C_API MR_IOStream_A *MR_IOStream_A_ConstructFromAnother(const MR_IOStream_A *_other);

/// Destroys a heap-allocated instance of `MR_IOStream_A`. Does nothing if the pointer is null.
MR_C_API void MR_IOStream_A_Destroy(const MR_IOStream_A *_this);

/// Destroys a heap-allocated array of `MR_IOStream_A`. Does nothing if the pointer is null.
MR_C_API void MR_IOStream_A_DestroyArray(const MR_IOStream_A *_this);

/// Generated from a method of class `MR::IOStream::A` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_IOStream_A *MR_IOStream_A_AssignFromAnother(MR_IOStream_A *_this, const MR_IOStream_A *_other);

/// Generated from function `MR::IOStream::operator<<`.
/// Parameter `_1` can not be null.
/// Parameter `_2` can not be null.
MR_C_API void MR_C_print_MR_IOStream_A(MR_C_std_ostream *_1, const MR_IOStream_A *_2);

/// Generated from function `MR::IOStream::operator>>`.
/// Parameter `_1` can not be null.
/// Parameter `_2` can not be null.
MR_C_API void MR_C_rshift_std_istream_MR_IOStream_A(MR_C_std_istream *_1, MR_IOStream_A *_2);

#ifdef __cplusplus
} // extern "C"
#endif
