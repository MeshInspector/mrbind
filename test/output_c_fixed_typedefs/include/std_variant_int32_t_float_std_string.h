#ifndef MR_C_DETAIL_INCLUDED_STD_VARIANT_INT32_T_FLOAT_STD_STRING_H
#define MR_C_DETAIL_INCLUDED_STD_VARIANT_INT32_T_FLOAT_STD_STRING_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


// Stores one of 3 objects: `int32_t`, `float`, `std::string`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_variant_int32_t_float_std_string MR_C_std_variant_int32_t_float_std_string;

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int32_t_float_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_C_std_variant_int32_t_float_std_string_DestroyArray()`.
// Use `MR_C_std_variant_int32_t_float_std_string_OffsetMutablePtr()` and `MR_C_std_variant_int32_t_float_std_string_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_DefaultConstructArray(size_t num_elems);

// Constructs a copy of another instance. The source remains alive.
// The reference to the parameter `other` might be preserved in the return value.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int32_t_float_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_variant_int32_t_float_std_string *other);

// Assigns the contents from another instance. Both objects remain alive after the call.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the parameter `_this`.
// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_variant_int32_t_float_std_string_AssignFromAnother(MR_C_std_variant_int32_t_float_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_variant_int32_t_float_std_string *other);

// Destroys a heap-allocated instance of `MR_C_std_variant_int32_t_float_std_string`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_variant_int32_t_float_std_string_Destroy(const MR_C_std_variant_int32_t_float_std_string *_this);

// Destroys a heap-allocated array of `MR_C_std_variant_int32_t_float_std_string`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_variant_int32_t_float_std_string_DestroyArray(const MR_C_std_variant_int32_t_float_std_string *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_OffsetPtr(const MR_C_std_variant_int32_t_float_std_string *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_OffsetMutablePtr(MR_C_std_variant_int32_t_float_std_string *ptr, ptrdiff_t i);

// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_variant_int32_t_float_std_string_Index(const MR_C_std_variant_int32_t_float_std_string *_this);

// Constructs the variant storing the element 0, of type `int32_t`.
// The reference to the parameter `value` might be preserved in the return value.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int32_t_float_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_ConstructAs_int32_t(int32_t value);

// Constructs the variant storing the element 1, of type `float`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int32_t_float_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_ConstructAs_float(float value);

// Constructs the variant storing the element 2, of type `std::string`.
// Parameter `value` can not be null.
// If `value_end` is null, then `value` is assumed to be null-terminated.
// The reference to the parameter `value` might be preserved in the return value.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int32_t_float_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int32_t_float_std_string *MR_C_std_variant_int32_t_float_std_string_ConstructAs_std_string(const char *value, const char *value_end);

// Assigns to the variant, making it store the element 0, of type `int32_t`.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `value` might be preserved in the parameter `_this`.
// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_variant_int32_t_float_std_string_AssignAs_int32_t(MR_C_std_variant_int32_t_float_std_string *_this, int32_t value);

// Assigns to the variant, making it store the element 1, of type `float`.
// Parameter `_this` can not be null. It is a single object.
// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_variant_int32_t_float_std_string_AssignAs_float(MR_C_std_variant_int32_t_float_std_string *_this, float value);

// Assigns to the variant, making it store the element 2, of type `std::string`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `value` can not be null.
// If `value_end` is null, then `value` is assumed to be null-terminated.
// The reference to the parameter `value` might be preserved in the parameter `_this`.
// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_variant_int32_t_float_std_string_AssignAs_std_string(MR_C_std_variant_int32_t_float_std_string *_this, const char *value, const char *value_end);

// Returns the element 0, of type `int32_t`, read-only. If it's not the active element, returns null.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const int32_t *MR_C_std_variant_int32_t_float_std_string_Get_int32_t(const MR_C_std_variant_int32_t_float_std_string *_this);

// Returns the element 0, of type `int32_t`, mutable. If it's not the active element, returns null.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API int32_t *MR_C_std_variant_int32_t_float_std_string_GetMutable_int32_t(MR_C_std_variant_int32_t_float_std_string *_this);

// Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const float *MR_C_std_variant_int32_t_float_std_string_Get_float(const MR_C_std_variant_int32_t_float_std_string *_this);

// Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API float *MR_C_std_variant_int32_t_float_std_string_GetMutable_float(MR_C_std_variant_int32_t_float_std_string *_this);

// Returns the element 2, of type `std::string`, read-only. If it's not the active element, returns null.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const MR_C_std_string *MR_C_std_variant_int32_t_float_std_string_Get_std_string(const MR_C_std_variant_int32_t_float_std_string *_this);

// Returns the element 2, of type `std::string`, mutable. If it's not the active element, returns null.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API MR_C_std_string *MR_C_std_variant_int32_t_float_std_string_GetMutable_std_string(MR_C_std_variant_int32_t_float_std_string *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_VARIANT_INT32_T_FLOAT_STD_STRING_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_VARIANT_INT32_T_FLOAT_STD_STRING_H_2)
#define MR_C_DETAIL_INCLUDED_STD_VARIANT_INT32_T_FLOAT_STD_STRING_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_string.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_STD_VARIANT_INT32_T_FLOAT_STD_STRING_H_2)
