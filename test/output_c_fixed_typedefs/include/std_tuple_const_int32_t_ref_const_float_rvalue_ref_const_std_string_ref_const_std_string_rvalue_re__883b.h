#ifndef MR_C_DETAIL_INCLUDED_STD_TUPLE_CONST_INT32_T_REF_CONST_FLOAT_RVALUE_REF_CONST_STD_STRING_REF_CONST_STD_STRING_RVALUE_RE__883B_H
#define MR_C_DETAIL_INCLUDED_STD_TUPLE_CONST_INT32_T_REF_CONST_FLOAT_RVALUE_REF_CONST_STD_STRING_REF_CONST_STD_STRING_RVALUE_RE__883B_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


// Stores 4 objects: `const int32_t &`, `const float &&`, `const std::string &`, `const std::string &&`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref;

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *other);

// Destroys a heap-allocated instance of `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Destroy(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this);

// Destroys a heap-allocated array of `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_DestroyArray(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_OffsetPtr(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_OffsetMutablePtr(MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *ptr, ptrdiff_t i);

// Constructs the tuple elementwise.
// Parameter `_0` can not be null. It is a single object.
// The reference to the parameter `_0` might be preserved in the constructed object.
// Parameter `_1` can not be null. It is a single object.
// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
//   but if your pointer is owning, you must still destroy it manually later.
// The reference to the parameter `_1` might be preserved in the constructed object.
// Parameter `_2` can not be null.
// If `_2_end` is null, then `_2` is assumed to be null-terminated.
// The reference to the parameter `_2` might be preserved in the constructed object.
// Parameter `_3` can not be null.
// If `_3_end` is null, then `_3` is assumed to be null-terminated.
// The reference to the parameter `_3` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct(const int32_t *_0, const float *_1, const char *_2, const char *_2_end, const char *_3, const char *_3_end);

// The element 0, of type `const int32_t &`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_int32_t_ref(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this);

// The element 1, of type `const float &&`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// In C++ returns an rvalue reference.
MR_C_API const float *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_float_rvalue_ref(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this);

// The element 2, of type `const std::string &`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const MR_C_std_string *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_ref(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this);

// The element 3, of type `const std::string &&`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// In C++ returns an rvalue reference.
MR_C_API const MR_C_std_string *MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_rvalue_ref(const MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_TUPLE_CONST_INT32_T_REF_CONST_FLOAT_RVALUE_REF_CONST_STD_STRING_REF_CONST_STD_STRING_RVALUE_RE__883B_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_TUPLE_CONST_INT32_T_REF_CONST_FLOAT_RVALUE_REF_CONST_STD_STRING_REF_CONST_STD_STRING_RVALUE_RE__883B_H_2)
#define MR_C_DETAIL_INCLUDED_STD_TUPLE_CONST_INT32_T_REF_CONST_FLOAT_RVALUE_REF_CONST_STD_STRING_REF_CONST_STD_STRING_RVALUE_RE__883B_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_string.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_TUPLE_CONST_INT32_T_REF_CONST_FLOAT_RVALUE_REF_CONST_STD_STRING_REF_CONST_STD_STRING_RVALUE_RE__883B_H_2)
