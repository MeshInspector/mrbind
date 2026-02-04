#ifndef MR_C_DETAIL_INCLUDED_STD_OPTIONAL_MR_CSHARP_TRIVIAL_H
#define MR_C_DETAIL_INCLUDED_STD_OPTIONAL_MR_CSHARP_TRIVIAL_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_CSharp_Trivial MR_CSharp_Trivial; // Defined in `#include <MR/test_csharp.h>`.


// Stores either a single `MR::CSharp::Trivial` or nothing.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_optional_MR_CSharp_Trivial MR_C_std_optional_MR_CSharp_Trivial;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_CSharp_Trivial_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_optional_MR_CSharp_Trivial_DestroyArray()`.
// Use `MR_C_std_optional_MR_CSharp_Trivial_OffsetMutablePtr()` and `MR_C_std_optional_MR_CSharp_Trivial_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_CSharp_Trivial_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother(const MR_C_std_optional_MR_CSharp_Trivial *other);

// Constructs a new instance.
// Parameter `other` is a single object.
// Parameter `other` is optional. To keep it empty, pass a null pointer.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_CSharp_Trivial_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom(const MR_CSharp_Trivial *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in this object.
// When this function is called, this object will drop any object references it had previously.
MR_C_API void MR_C_std_optional_MR_CSharp_Trivial_AssignFromAnother(MR_C_std_optional_MR_CSharp_Trivial *_this, const MR_C_std_optional_MR_CSharp_Trivial *other);

// Assigns the contents.
// Parameter `_this` can not be null. It is a single object.
// Parameter `other` is a single object.
// Parameter `other` is optional. To keep it empty, pass a null pointer.
MR_C_API void MR_C_std_optional_MR_CSharp_Trivial_AssignFrom(MR_C_std_optional_MR_CSharp_Trivial *_this, const MR_CSharp_Trivial *other);

// Destroys a heap-allocated instance of `MR_C_std_optional_MR_CSharp_Trivial`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_optional_MR_CSharp_Trivial_Destroy(const MR_C_std_optional_MR_CSharp_Trivial *_this);

// Destroys a heap-allocated array of `MR_C_std_optional_MR_CSharp_Trivial`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_optional_MR_CSharp_Trivial_DestroyArray(const MR_C_std_optional_MR_CSharp_Trivial *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_OffsetPtr(const MR_C_std_optional_MR_CSharp_Trivial *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_optional_MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_OffsetMutablePtr(MR_C_std_optional_MR_CSharp_Trivial *ptr, ptrdiff_t i);

// The stored element or null if none, read-only.
// Parameter `_this` can not be null. It is a single object.
MR_C_API const MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_value(const MR_C_std_optional_MR_CSharp_Trivial *_this);

// The stored element or null if none, mutable.
// Parameter `_this` can not be null. It is a single object.
MR_C_API MR_CSharp_Trivial *MR_C_std_optional_MR_CSharp_Trivial_value_mut(MR_C_std_optional_MR_CSharp_Trivial *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_OPTIONAL_MR_CSHARP_TRIVIAL_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_OPTIONAL_MR_CSHARP_TRIVIAL_H_2)
#define MR_C_DETAIL_INCLUDED_STD_OPTIONAL_MR_CSHARP_TRIVIAL_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <MR/test_csharp.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_OPTIONAL_MR_CSHARP_TRIVIAL_H_2)
