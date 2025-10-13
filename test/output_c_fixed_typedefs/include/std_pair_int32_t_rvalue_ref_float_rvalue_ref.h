#ifndef MR_C_DETAIL_INCLUDED_STD_PAIR_INT32_T_RVALUE_REF_FLOAT_RVALUE_REF_H
#define MR_C_DETAIL_INCLUDED_STD_PAIR_INT32_T_RVALUE_REF_FLOAT_RVALUE_REF_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Stores two objects: `int32_t &&` and `int32_t &&`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref;

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref_ConstructFromAnother(const MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *other);

// Destroys a heap-allocated instance of `MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref_Destroy(const MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *_this);

// Destroys a heap-allocated array of `MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref_DestroyArray(const MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref_OffsetPtr(const MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref_OffsetMutablePtr(MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *ptr, ptrdiff_t i);

// Constructs the pair elementwise.
// Parameter `first` can not be null. It is a single object.
// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
//   but if your pointer is owning, you must still destroy it manually later.
// Parameter `second` can not be null. It is a single object.
// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
//   but if your pointer is owning, you must still destroy it manually later.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref_Construct(int32_t *first, float *second);

// The first of the two elements, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// In C++ returns an rvalue reference.
MR_C_API int32_t *MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref_First(const MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *_this);

// The second of the two elements, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// In C++ returns an rvalue reference.
MR_C_API float *MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref_Second(const MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_PAIR_INT32_T_RVALUE_REF_FLOAT_RVALUE_REF_H
