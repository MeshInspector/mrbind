#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_vector_long MR_C_std_vector_long; // Defined in `#include <std_vector_long.h>`.
typedef struct MR_C_std_vector_unsigned_long MR_C_std_vector_unsigned_long; // Defined in `#include <std_vector_unsigned_long.h>`.


/// Generated from class `MR::TestSizeT::A<unsigned long>`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_TestSizeT_A_unsigned_long MR_TestSizeT_A_unsigned_long;

/// Generated from function `MR::TestSizeT::foo`.
MR_C_API unsigned long MR_TestSizeT_foo_unsigned_long(unsigned long _1);

/// Generated from function `MR::TestSizeT::foo`.
/// Parameter `_1` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API unsigned long **MR_TestSizeT_foo_unsigned_long_ptr(unsigned long **_1);

/// Generated from function `MR::TestSizeT::foo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_unsigned_long_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_unsigned_long *MR_TestSizeT_foo_std_vector_unsigned_long(MR_C_PassBy _1_pass_by, MR_C_std_vector_unsigned_long *_1);

/// Generated from function `MR::TestSizeT::foo`.
MR_C_API long MR_TestSizeT_foo_long(long _1);

/// Generated from function `MR::TestSizeT::foo`.
/// Parameter `_1` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API long **MR_TestSizeT_foo_long_ptr(long **_1);

/// Generated from function `MR::TestSizeT::foo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_long_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_long *MR_TestSizeT_foo_std_vector_long(MR_C_PassBy _1_pass_by, MR_C_std_vector_long *_1);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSizeT_A_unsigned_long_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TestSizeT_A_unsigned_long_DestroyArray()`.
/// Use `MR_TestSizeT_A_unsigned_long_OffsetMutablePtr()` and `MR_TestSizeT_A_unsigned_long_OffsetPtr()` to access the array elements.
MR_C_API MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_OffsetPtr(const MR_TestSizeT_A_unsigned_long *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_OffsetMutablePtr(MR_TestSizeT_A_unsigned_long *ptr, ptrdiff_t i);

/// Generated from constructor `MR::TestSizeT::A<unsigned long>::A`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TestSizeT_A_unsigned_long_Destroy()` to free it when you're done using it.
MR_C_API MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_ConstructFromAnother(const MR_TestSizeT_A_unsigned_long *_other);

/// Destroys a heap-allocated instance of `MR_TestSizeT_A_unsigned_long`. Does nothing if the pointer is null.
MR_C_API void MR_TestSizeT_A_unsigned_long_Destroy(const MR_TestSizeT_A_unsigned_long *_this);

/// Destroys a heap-allocated array of `MR_TestSizeT_A_unsigned_long`. Does nothing if the pointer is null.
MR_C_API void MR_TestSizeT_A_unsigned_long_DestroyArray(const MR_TestSizeT_A_unsigned_long *_this);

/// Generated from method `MR::TestSizeT::A<unsigned long>::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the parameter `_this`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API MR_TestSizeT_A_unsigned_long *MR_TestSizeT_A_unsigned_long_AssignFromAnother(MR_TestSizeT_A_unsigned_long *_this, const MR_TestSizeT_A_unsigned_long *_other);

/// Generated from method `MR::TestSizeT::A<unsigned long>::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API unsigned long MR_TestSizeT_A_unsigned_long_foo(MR_TestSizeT_A_unsigned_long *_this);

#ifdef __cplusplus
} // extern "C"
#endif
