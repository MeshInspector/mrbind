#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from function `MR::Overloads::a`.
MR_C_API void MR_Overloads_a_1(int _1);

/// Generated from function `MR::Overloads::a`.
MR_C_API void MR_Overloads_a_2(int _1, int _2);

/// Generated from function `MR::Overloads::b<int>`.
MR_C_API void MR_Overloads_b_int(void);

/// Generated from function `MR::Overloads::b<float>`.
MR_C_API void MR_Overloads_b_float(void);

/// Generated from function `MR::Overloads::c`.
MR_C_API void MR_Overloads_c_int(int _1);

/// Generated from function `MR::Overloads::c`.
MR_C_API void MR_Overloads_c_float(float _1);

/// Generated from function `MR::Overloads::d`.
MR_C_API void MR_Overloads_d_int(char _1, int _2, char _3);

/// Generated from function `MR::Overloads::d`.
MR_C_API void MR_Overloads_d_float(char _1, float _2, char _3);

/// Generated from function `MR::Overloads::e`.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `_2` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_Overloads_e_const_int_ref(const int *_1, int *_2);

/// Generated from function `MR::Overloads::e`.
/// Parameter `_1` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `_2` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_Overloads_e_int_rvalue_ref_int(int *_1, int *_2);

/// Generated from function `MR::Overloads::e`.
/// Parameter `_1` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `_2` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_Overloads_e_int_rvalue_ref_float(int *_1, float *_2);

// This is a fun testcase. Here we must not omit cvref on the first parameter, even if it partially helps with disambiguation,
//   because that ultimately leads to an ambiguity.
// So we can only omit cvref if each function has cvref in that parameter).
/// Generated from function `MR::Overloads::f`.
MR_C_API void MR_Overloads_f_float(float _1, int _2);

/// Generated from function `MR::Overloads::f`.
/// Parameter `_1` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_Overloads_f_int_rvalue_ref(int *_1, float _2);

/// Generated from function `MR::Overloads::f`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_Overloads_f_const_int_ref(const int *_1, float _2);

#ifdef __cplusplus
} // extern "C"
#endif
