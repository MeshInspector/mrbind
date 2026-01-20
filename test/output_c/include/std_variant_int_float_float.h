#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores one of 3 objects: `int`, `float`, `float`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_variant_int_float_float MR_C_std_variant_int_float_float;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_variant_int_float_float_DestroyArray()`.
/// Use `MR_C_std_variant_int_float_float_OffsetMutablePtr()` and `MR_C_std_variant_int_float_float_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the return value.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructFromAnother(const MR_C_std_variant_int_float_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in the parameter `_this`.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_variant_int_float_float_AssignFromAnother(MR_C_std_variant_int_float_float *_this, const MR_C_std_variant_int_float_float *other);

/// Destroys a heap-allocated instance of `MR_C_std_variant_int_float_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_variant_int_float_float_Destroy(const MR_C_std_variant_int_float_float *_this);

/// Destroys a heap-allocated array of `MR_C_std_variant_int_float_float`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_variant_int_float_float_DestroyArray(const MR_C_std_variant_int_float_float *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_OffsetPtr(const MR_C_std_variant_int_float_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_OffsetMutablePtr(MR_C_std_variant_int_float_float *ptr, ptrdiff_t i);

/// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
/// Parameter `_this` can not be null. It is a single object.
MR_C_API size_t MR_C_std_variant_int_float_float_Index(const MR_C_std_variant_int_float_float *_this);

/// Constructs the variant storing the element 0, of type `int`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructAs_int(int value);

/// Constructs the variant storing the element 1, of type `float`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructAs_float_1(float value);

/// Constructs the variant storing the element 2, of type `float`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_variant_int_float_float_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_variant_int_float_float *MR_C_std_variant_int_float_float_ConstructAs_float_2(float value);

/// Assigns to the variant, making it store the element 0, of type `int`.
/// Parameter `_this` can not be null. It is a single object.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_variant_int_float_float_AssignAs_int(MR_C_std_variant_int_float_float *_this, int value);

/// Assigns to the variant, making it store the element 1, of type `float`.
/// Parameter `_this` can not be null. It is a single object.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_variant_int_float_float_AssignAs_float_1(MR_C_std_variant_int_float_float *_this, float value);

/// Assigns to the variant, making it store the element 2, of type `float`.
/// Parameter `_this` can not be null. It is a single object.
/// After this function is called, the parameter `_this` will drop any object references it had previously.
MR_C_API void MR_C_std_variant_int_float_float_AssignAs_float_2(MR_C_std_variant_int_float_float *_this, float value);

/// Returns the element 0, of type `int`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const int *MR_C_std_variant_int_float_float_Get_int(const MR_C_std_variant_int_float_float *_this);

/// Returns the element 0, of type `int`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API int *MR_C_std_variant_int_float_float_GetMutable_int(MR_C_std_variant_int_float_float *_this);

/// Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const float *MR_C_std_variant_int_float_float_Get_float_1(const MR_C_std_variant_int_float_float *_this);

/// Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API float *MR_C_std_variant_int_float_float_GetMutable_float_1(MR_C_std_variant_int_float_float *_this);

/// Returns the element 2, of type `float`, read-only. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API const float *MR_C_std_variant_int_float_float_Get_float_2(const MR_C_std_variant_int_float_float *_this);

/// Returns the element 2, of type `float`, mutable. If it's not the active element, returns null.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `_this` might be preserved in the return value.
MR_C_API float *MR_C_std_variant_int_float_float_GetMutable_float_2(MR_C_std_variant_int_float_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
