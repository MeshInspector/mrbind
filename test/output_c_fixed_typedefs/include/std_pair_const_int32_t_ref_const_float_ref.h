#ifndef MR_C_DETAIL_INCLUDED_STD_PAIR_CONST_INT32_T_REF_CONST_FLOAT_REF_H
#define MR_C_DETAIL_INCLUDED_STD_PAIR_CONST_INT32_T_REF_CONST_FLOAT_REF_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Stores two objects: `const int32_t &` and `const int32_t &`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_pair_const_int32_t_ref_const_float_ref MR_C_std_pair_const_int32_t_ref_const_float_ref;

// Constructs a copy of another instance. The source remains alive.
// Parameter `other` can not be null. It is a single object.
// The reference to the parameter `other` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int32_t_ref_const_float_ref_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_pair_const_int32_t_ref_const_float_ref *MR_C_std_pair_const_int32_t_ref_const_float_ref_ConstructFromAnother(const MR_C_std_pair_const_int32_t_ref_const_float_ref *other);

// Destroys a heap-allocated instance of `MR_C_std_pair_const_int32_t_ref_const_float_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_const_int32_t_ref_const_float_ref_Destroy(const MR_C_std_pair_const_int32_t_ref_const_float_ref *_this);

// Destroys a heap-allocated array of `MR_C_std_pair_const_int32_t_ref_const_float_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_pair_const_int32_t_ref_const_float_ref_DestroyArray(const MR_C_std_pair_const_int32_t_ref_const_float_ref *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_pair_const_int32_t_ref_const_float_ref *MR_C_std_pair_const_int32_t_ref_const_float_ref_OffsetPtr(const MR_C_std_pair_const_int32_t_ref_const_float_ref *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_pair_const_int32_t_ref_const_float_ref *MR_C_std_pair_const_int32_t_ref_const_float_ref_OffsetMutablePtr(MR_C_std_pair_const_int32_t_ref_const_float_ref *ptr, ptrdiff_t i);

// Constructs the pair elementwise.
// Parameter `first` can not be null. It is a single object.
// The reference to the parameter `first` might be preserved in the constructed object.
// Parameter `second` can not be null. It is a single object.
// The reference to the parameter `second` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_pair_const_int32_t_ref_const_float_ref_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_pair_const_int32_t_ref_const_float_ref *MR_C_std_pair_const_int32_t_ref_const_float_ref_Construct(const int32_t *first, const float *second);

// The first of the two elements, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const int32_t *MR_C_std_pair_const_int32_t_ref_const_float_ref_first(const MR_C_std_pair_const_int32_t_ref_const_float_ref *_this);

// The second of the two elements, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const float *MR_C_std_pair_const_int32_t_ref_const_float_ref_second(const MR_C_std_pair_const_int32_t_ref_const_float_ref *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_PAIR_CONST_INT32_T_REF_CONST_FLOAT_REF_H
