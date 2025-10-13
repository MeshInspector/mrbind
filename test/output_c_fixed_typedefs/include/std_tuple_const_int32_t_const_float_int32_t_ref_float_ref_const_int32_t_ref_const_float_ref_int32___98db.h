#ifndef MR_C_DETAIL_INCLUDED_STD_TUPLE_CONST_INT32_T_CONST_FLOAT_INT32_T_REF_FLOAT_REF_CONST_INT32_T_REF_CONST_FLOAT_REF_INT32___98DB_H
#define MR_C_DETAIL_INCLUDED_STD_TUPLE_CONST_INT32_T_CONST_FLOAT_INT32_T_REF_FLOAT_REF_CONST_INT32_T_REF_CONST_FLOAT_REF_INT32___98DB_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Stores 10 objects: `const int32_t`, `const float`, `int32_t &`, `float &`, `const int32_t &`, `const float &`, `int32_t &&`, `float &&`, `const int32_t &&`, `const float &&`.
typedef struct MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref;

// Destroys a heap-allocated instance of `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Destroy(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// Destroys a heap-allocated array of `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_DestroyArray(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_OffsetPtr(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_OffsetMutablePtr(MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *ptr, ptrdiff_t i);

// Constructs the tuple elementwise.
// Parameter `_2` can not be null. It is a single object.
// Parameter `_3` can not be null. It is a single object.
// Parameter `_4` can not be null. It is a single object.
// Parameter `_5` can not be null. It is a single object.
// Parameter `_6` can not be null. It is a single object.
// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
//   but if your pointer is owning, you must still destroy it manually later.
// Parameter `_7` can not be null. It is a single object.
// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
//   but if your pointer is owning, you must still destroy it manually later.
// Parameter `_8` can not be null. It is a single object.
// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
//   but if your pointer is owning, you must still destroy it manually later.
// Parameter `_9` can not be null. It is a single object.
// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
//   but if your pointer is owning, you must still destroy it manually later.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Construct(int32_t _0, float _1, int32_t *_2, float *_3, const int32_t *_4, const float *_5, int32_t *_6, float *_7, const int32_t *_8, const float *_9);

// The element 0, of type `const int32_t`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_int32_t(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// The element 1, of type `const float`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_float(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// The element 2, of type `int32_t &`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_int32_t_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// The element 3, of type `float &`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_float_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// The element 4, of type `const int32_t &`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_int32_t_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// The element 5, of type `const float &`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_float_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// The element 6, of type `int32_t &&`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// In C++ returns an rvalue reference.
MR_C_API int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_int32_t_rvalue_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// The element 7, of type `float &&`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// In C++ returns an rvalue reference.
MR_C_API float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_float_rvalue_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// The element 8, of type `const int32_t &&`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// In C++ returns an rvalue reference.
MR_C_API const int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_int32_t_rvalue_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

// The element 9, of type `const float &&`, read-only.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// In C++ returns an rvalue reference.
MR_C_API const float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_float_rvalue_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_STD_TUPLE_CONST_INT32_T_CONST_FLOAT_INT32_T_REF_FLOAT_REF_CONST_INT32_T_REF_CONST_FLOAT_REF_INT32___98DB_H
