#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores 10 objects: `const int`, `const float`, `int &`, `float &`, `const int &`, `const float &`, `int &&`, `float &&`, `const int &&`, `const float &&`.
typedef struct MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref;

/// Destroys a heap-allocated instance of `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// Destroys a heap-allocated array of `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_DestroyArray(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_OffsetPtr(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_OffsetMutablePtr(MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *ptr, ptrdiff_t i);

/// Constructs the tuple elementwise.
/// Parameter `_2` can not be null. It is a single object.
/// The reference to the parameter `_2` might be preserved in the constructed object.
/// Parameter `_3` can not be null. It is a single object.
/// The reference to the parameter `_3` might be preserved in the constructed object.
/// Parameter `_4` can not be null. It is a single object.
/// The reference to the parameter `_4` might be preserved in the constructed object.
/// Parameter `_5` can not be null. It is a single object.
/// The reference to the parameter `_5` might be preserved in the constructed object.
/// Parameter `_6` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// The reference to the parameter `_6` might be preserved in the constructed object.
/// Parameter `_7` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// The reference to the parameter `_7` might be preserved in the constructed object.
/// Parameter `_8` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// The reference to the parameter `_8` might be preserved in the constructed object.
/// Parameter `_9` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// The reference to the parameter `_9` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(int _0, float _1, int *_2, float *_3, const int *_4, const float *_5, int *_6, float *_7, const int *_8, const float *_9);

/// The element 0, of type `const int`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// The element 1, of type `const float`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// The element 2, of type `int &`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// The element 3, of type `float &`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// The element 4, of type `const int &`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// The element 5, of type `const float &`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// The reference to this object might be preserved as the return value.
MR_C_API const float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// The element 6, of type `int &&`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
/// The reference to this object might be preserved as the return value.
MR_C_API int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_rvalue_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// The element 7, of type `float &&`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
/// The reference to this object might be preserved as the return value.
MR_C_API float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// The element 8, of type `const int &&`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
/// The reference to this object might be preserved as the return value.
MR_C_API const int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_rvalue_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

/// The element 9, of type `const float &&`, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// In C++ returns an rvalue reference.
/// The reference to this object might be preserved as the return value.
MR_C_API const float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this);

#ifdef __cplusplus
} // extern "C"
#endif
