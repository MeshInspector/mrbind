#pragma once

#include <exports.h>
#include <pass_by.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


/// Stores one of 3 objects: `int`, `float`, `std::string`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_variant_int_float_std_string MR_C_std_variant_int_float_std_string;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_variant_int_float_std_string *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_variant_int_float_std_string_AssignFromAnother(MR_C_std_variant_int_float_std_string *_this, MR_C_PassBy other_pass_by, MR_C_std_variant_int_float_std_string *other);

/// Destroys a heap-allocated instance of `MR_C_std_variant_int_float_std_string`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_variant_int_float_std_string_Destroy(MR_C_std_variant_int_float_std_string *_this);

/// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_std_variant_int_float_std_string_Index(const MR_C_std_variant_int_float_std_string *_this);

/// Constructs the variant storing the element 0, of type `int`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructAs_int(int value);

/// Constructs the variant storing the element 1, of type `float`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructAs_float(float value);

/// Constructs the variant storing the element 2, of type `std::string`.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_std_string_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_std_string *MR_C_std_variant_int_float_std_string_ConstructAs_std_string(const char *value, const char *value_end);

/// Assigns to the variant, making it store the element 0, of type `int`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_variant_int_float_std_string_AssignAs_int(MR_C_std_variant_int_float_std_string *_this, int value);

/// Assigns to the variant, making it store the element 1, of type `float`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_variant_int_float_std_string_AssignAs_float(MR_C_std_variant_int_float_std_string *_this, float value);

/// Assigns to the variant, making it store the element 2, of type `std::string`.
/// Parameter `_this` can not be null.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MR_C_API void MR_C_std_variant_int_float_std_string_AssignAs_std_string(MR_C_std_variant_int_float_std_string *_this, const char *value, const char *value_end);

/// Returns the element 0, of type `int`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API const int *MR_C_std_variant_int_float_std_string_Get_int(const MR_C_std_variant_int_float_std_string *_this);

/// Returns the element 0, of type `int`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API int *MR_C_std_variant_int_float_std_string_GetMutable_int(MR_C_std_variant_int_float_std_string *_this);

/// Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API const float *MR_C_std_variant_int_float_std_string_Get_float(const MR_C_std_variant_int_float_std_string *_this);

/// Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API float *MR_C_std_variant_int_float_std_string_GetMutable_float(MR_C_std_variant_int_float_std_string *_this);

/// Returns the element 2, of type `std::string`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API const MR_C_std_string *MR_C_std_variant_int_float_std_string_Get_std_string(const MR_C_std_variant_int_float_std_string *_this);

/// Returns the element 2, of type `std::string`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API MR_C_std_string *MR_C_std_variant_int_float_std_string_GetMutable_std_string(MR_C_std_variant_int_float_std_string *_this);

#ifdef __cplusplus
} // extern "C"
#endif
