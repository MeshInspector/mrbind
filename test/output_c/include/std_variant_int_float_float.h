#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores one of 3 objects: `int`, `float`, `float`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move`, (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_variant_int_float_float MR_C_std_variant_int_float_float;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructFromAnother(const MR_C_std_variant_int_float_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null.
/// Parameter `other` can not be null.
MR_C_API void MR_C_std_variant_int_float_float_AssignFromAnother(MR_C_std_variant_int_float_float *_this, const MR_C_std_variant_int_float_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_variant_int_float_float`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_variant_int_float_float_Destroy(MR_C_std_variant_int_float_float *_this);

/// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
/// Parameter `_this` can not be null.
MR_C_API size_t MR_C_std_variant_int_float_float_Index(const MR_C_std_variant_int_float_float *_this);

/// Constructs the variant storing the element 0, of type `int`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructAs_int(int value);

/// Constructs the variant storing the element 1, of type `float`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructAs_float_1(float value);

/// Constructs the variant storing the element 2, of type `float`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructAs_float_2(float value);

/// Assigns to the variant, making it store the element 0, of type `int`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_variant_int_float_float_AssignAs_int(MR_C_std_variant_int_float_float *_this, int value);

/// Assigns to the variant, making it store the element 1, of type `float`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_variant_int_float_float_AssignAs_float_1(MR_C_std_variant_int_float_float *_this, float value);

/// Assigns to the variant, making it store the element 2, of type `float`.
/// Parameter `_this` can not be null.
MR_C_API void MR_C_std_variant_int_float_float_AssignAs_float_2(MR_C_std_variant_int_float_float *_this, float value);

/// Returns the element 0, of type `int`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API const int *MR_C_std_variant_int_float_float_Get_int(const MR_C_std_variant_int_float_float *_this);

/// Returns the element 0, of type `int`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API int *MR_C_std_variant_int_float_float_GetMutable_int(MR_C_std_variant_int_float_float *_this);

/// Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API const float *MR_C_std_variant_int_float_float_Get_float_1(const MR_C_std_variant_int_float_float *_this);

/// Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API float *MR_C_std_variant_int_float_float_GetMutable_float_1(MR_C_std_variant_int_float_float *_this);

/// Returns the element 2, of type `float`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API const float *MR_C_std_variant_int_float_float_Get_float_2(const MR_C_std_variant_int_float_float *_this);

/// Returns the element 2, of type `float`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null.
MR_C_API float *MR_C_std_variant_int_float_float_GetMutable_float_2(MR_C_std_variant_int_float_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
