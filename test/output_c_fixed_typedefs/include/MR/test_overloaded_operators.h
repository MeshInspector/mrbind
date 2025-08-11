#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_OVERLOADED_OPERATORS_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_OVERLOADED_OPERATORS_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Member functions.
// Generated from class `MR::OverloadedOps::A`.
typedef struct MR_OverloadedOps_A MR_OverloadedOps_A;

// Free functions.
// Generated from class `MR::OverloadedOps::B`.
typedef struct MR_OverloadedOps_B MR_OverloadedOps_B;

// Test how the names are generated.
// Generated from class `MR::OverloadedOps::C`.
typedef struct MR_OverloadedOps_C MR_OverloadedOps_C;

// Generated from class `MR::OverloadedOps::D`.
typedef struct MR_OverloadedOps_D MR_OverloadedOps_D;

// Destroys a heap-allocated instance of `MR_OverloadedOps_A`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadedOps_A_Destroy(const MR_OverloadedOps_A *_this);

// Destroys a heap-allocated array of `MR_OverloadedOps_A`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadedOps_A_DestroyArray(const MR_OverloadedOps_A *_this);

// Assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_AssignFromAnother(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_other);

// Unary plus.
// Generated from a method of class `MR::OverloadedOps::A` named `operator+`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_pos_MR_OverloadedOps_A(MR_OverloadedOps_A *_this);

// Binary plus.
// Generated from a method of class `MR::OverloadedOps::A` named `operator+`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_add_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Unary minus.
// Generated from a method of class `MR::OverloadedOps::A` named `operator-`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_neg_MR_OverloadedOps_A(MR_OverloadedOps_A *_this);

// Binary minus.
// Generated from a method of class `MR::OverloadedOps::A` named `operator-`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_sub_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Dereference (unary star).
// Generated from a method of class `MR::OverloadedOps::A` named `operator*`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_deref_MR_OverloadedOps_A(MR_OverloadedOps_A *_this);

// Multiply (binary star).
// Generated from a method of class `MR::OverloadedOps::A` named `operator*`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_mul_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Divide.
// Generated from a method of class `MR::OverloadedOps::A` named `operator/`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_div_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Modulo.
// Generated from a method of class `MR::OverloadedOps::A` named `operator%`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_mod_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Bit xor.
// Generated from a method of class `MR::OverloadedOps::A` named `operator^`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_xor_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Bit and.
// Generated from a method of class `MR::OverloadedOps::A` named `operator&`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_bitand_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Bit or.
// Generated from a method of class `MR::OverloadedOps::A` named `operator|`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_bitor_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Bit negate.
// Generated from a method of class `MR::OverloadedOps::A` named `operator~`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_compl_MR_OverloadedOps_A(MR_OverloadedOps_A *_this);

// Boolean negate.
// Generated from a method of class `MR::OverloadedOps::A` named `operator!`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_not_MR_OverloadedOps_A(MR_OverloadedOps_A *_this);

// Less.
// Generated from a method of class `MR::OverloadedOps::A` named `operator<`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_less_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Greater.
// Generated from a method of class `MR::OverloadedOps::A` named `operator>`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_greater_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Plus assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator+=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_add_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Minus assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator-=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_sub_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Multiply assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator*=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_mul_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Divide assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator/=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_div_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Modulo assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator%=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_mod_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Bit xor assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator^=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_xor_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Bit and assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator&=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_bitand_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Bit or assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator|=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_bitor_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Left shift.
// Generated from a method of class `MR::OverloadedOps::A` named `operator<<`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_lshift_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Right shift.
// Generated from a method of class `MR::OverloadedOps::A` named `operator>>`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_rshift_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Left shift assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator<<=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_lshift_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Right shift assign.
// Generated from a method of class `MR::OverloadedOps::A` named `operator>>=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_rshift_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Equal.
// Generated from a method of class `MR::OverloadedOps::A` named `operator==`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Not equal.
// Generated from a method of class `MR::OverloadedOps::A` named `operator!=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_not_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Less equal.
// Generated from a method of class `MR::OverloadedOps::A` named `operator<=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_less_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Greater equal.
// Generated from a method of class `MR::OverloadedOps::A` named `operator>=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_greater_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Compare three way.
// Generated from a method of class `MR::OverloadedOps::A` named `operator<=>`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_compare_three_way_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// And.
// Generated from a method of class `MR::OverloadedOps::A` named `operator&&`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_and_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Or.
// Generated from a method of class `MR::OverloadedOps::A` named `operator||`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_or_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Pre-increment.
// Generated from a method of class `MR::OverloadedOps::A` named `operator++`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_incr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this);

// Post-increment.
// Generated from a method of class `MR::OverloadedOps::A` named `operator++`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_post_incr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this);

// Pre-decrement.
// Generated from a method of class `MR::OverloadedOps::A` named `operator--`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_decr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this);

// Post-decrement.
// Generated from a method of class `MR::OverloadedOps::A` named `operator--`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_post_decr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this);

// Comma.
// Generated from a method of class `MR::OverloadedOps::A` named `operator,`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_comma_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Arrow star.
// Generated from a method of class `MR::OverloadedOps::A` named `operator->*`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_arrow_star(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Arrow.
// Generated from a method of class `MR::OverloadedOps::A` named `operator->`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_arrow(MR_OverloadedOps_A *_this);

// Function call.
// Generated from a method of class `MR::OverloadedOps::A` named `operator()`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_call(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Indexing.
// Generated from a method of class `MR::OverloadedOps::A` named `operator[]`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_OverloadedOps_A_index(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_OverloadedOps_A *MR_OverloadedOps_A_OffsetPtr(const MR_OverloadedOps_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_OverloadedOps_A *MR_OverloadedOps_A_OffsetMutablePtr(MR_OverloadedOps_A *ptr, ptrdiff_t i);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadedOps_B_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadedOps_B *MR_OverloadedOps_B_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_OverloadedOps_B_DestroyArray()`.
// Use `MR_OverloadedOps_B_OffsetMutablePtr()` and `MR_OverloadedOps_B_OffsetPtr()` to access the array elements.
MR_C_API MR_OverloadedOps_B *MR_OverloadedOps_B_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_OverloadedOps_B *MR_OverloadedOps_B_OffsetPtr(const MR_OverloadedOps_B *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_OverloadedOps_B *MR_OverloadedOps_B_OffsetMutablePtr(MR_OverloadedOps_B *ptr, ptrdiff_t i);

// Generated from a constructor of class `MR::OverloadedOps::B`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadedOps_B_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadedOps_B *MR_OverloadedOps_B_ConstructFromAnother(const MR_OverloadedOps_B *_other);

// Destroys a heap-allocated instance of `MR_OverloadedOps_B`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadedOps_B_Destroy(const MR_OverloadedOps_B *_this);

// Destroys a heap-allocated array of `MR_OverloadedOps_B`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadedOps_B_DestroyArray(const MR_OverloadedOps_B *_this);

// Generated from a method of class `MR::OverloadedOps::B` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_OverloadedOps_B *MR_OverloadedOps_B_AssignFromAnother(MR_OverloadedOps_B *_this, const MR_OverloadedOps_B *_other);

// Unary plus.
// Generated from function `MR::OverloadedOps::operator+`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_pos_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1);

// Binary plus.
// Generated from function `MR::OverloadedOps::operator+`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_add_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Unary minus.
// Generated from function `MR::OverloadedOps::operator-`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_neg_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1);

// Binary minus.
// Generated from function `MR::OverloadedOps::operator-`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_sub_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Dereference (unary star).
// Generated from function `MR::OverloadedOps::operator*`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_deref_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1);

// Multiply (binary star).
// Generated from function `MR::OverloadedOps::operator*`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_mul_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Divide.
// Generated from function `MR::OverloadedOps::operator/`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_div_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Modulo.
// Generated from function `MR::OverloadedOps::operator%`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_mod_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Bit xor.
// Generated from function `MR::OverloadedOps::operator^`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_xor_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Bit and.
// Generated from function `MR::OverloadedOps::operator&`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_bitand_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Bit or.
// Generated from function `MR::OverloadedOps::operator|`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_bitor_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Bit negate.
// Generated from function `MR::OverloadedOps::operator~`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_compl_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1);

// Boolean negate.
// Generated from function `MR::OverloadedOps::operator!`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_not_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1);

// Assign.
// friend int operator=(B, B); // Can't be a free function.
// Less.
// Generated from function `MR::OverloadedOps::operator<`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_less_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Greater.
// Generated from function `MR::OverloadedOps::operator>`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_greater_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Plus assign.
// Generated from function `MR::OverloadedOps::operator+=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_add_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Minus assign.
// Generated from function `MR::OverloadedOps::operator-=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_sub_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Multiply assign.
// Generated from function `MR::OverloadedOps::operator*=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_mul_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Divide assign.
// Generated from function `MR::OverloadedOps::operator/=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_div_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Modulo assign.
// Generated from function `MR::OverloadedOps::operator%=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_mod_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Bit xor assign.
// Generated from function `MR::OverloadedOps::operator^=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_xor_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Bit and assign.
// Generated from function `MR::OverloadedOps::operator&=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_bitand_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Bit or assign.
// Generated from function `MR::OverloadedOps::operator|=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_bitor_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Left shift.
// Generated from function `MR::OverloadedOps::operator<<`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_lshift_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Right shift.
// Generated from function `MR::OverloadedOps::operator>>`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_rshift_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Left shift assign.
// Generated from function `MR::OverloadedOps::operator<<=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_lshift_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Right shift assign.
// Generated from function `MR::OverloadedOps::operator>>=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_rshift_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Equal.
// Generated from function `MR::OverloadedOps::operator==`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Not equal.
// Generated from function `MR::OverloadedOps::operator!=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_not_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Less equal.
// Generated from function `MR::OverloadedOps::operator<=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_less_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Greater equal.
// Generated from function `MR::OverloadedOps::operator>=`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_greater_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Compare three way.
// Generated from function `MR::OverloadedOps::operator<=>`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_compare_three_way_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// And.
// Generated from function `MR::OverloadedOps::operator&&`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_and_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Or.
// Generated from function `MR::OverloadedOps::operator||`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_or_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Pre-increment.
// Generated from function `MR::OverloadedOps::operator++`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_incr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1);

// Post-increment.
// Generated from function `MR::OverloadedOps::operator++`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_post_incr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1);

// Pre-decrement.
// Generated from function `MR::OverloadedOps::operator--`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_decr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1);

// Post-decrement.
// Generated from function `MR::OverloadedOps::operator--`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_post_decr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1);

// Comma.
// Generated from function `MR::OverloadedOps::operator,`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_comma_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Arrow star.
// Generated from function `MR::OverloadedOps::operator->*`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API int32_t MR_C_arrow_star_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadedOps_C_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadedOps_C *MR_OverloadedOps_C_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_OverloadedOps_C_DestroyArray()`.
// Use `MR_OverloadedOps_C_OffsetMutablePtr()` and `MR_OverloadedOps_C_OffsetPtr()` to access the array elements.
MR_C_API MR_OverloadedOps_C *MR_OverloadedOps_C_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_OverloadedOps_C *MR_OverloadedOps_C_OffsetPtr(const MR_OverloadedOps_C *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_OverloadedOps_C *MR_OverloadedOps_C_OffsetMutablePtr(MR_OverloadedOps_C *ptr, ptrdiff_t i);

// Generated from a constructor of class `MR::OverloadedOps::C`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadedOps_C_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadedOps_C *MR_OverloadedOps_C_ConstructFromAnother(const MR_OverloadedOps_C *_other);

// Destroys a heap-allocated instance of `MR_OverloadedOps_C`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadedOps_C_Destroy(const MR_OverloadedOps_C *_this);

// Destroys a heap-allocated array of `MR_OverloadedOps_C`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadedOps_C_DestroyArray(const MR_OverloadedOps_C *_this);

// Generated from a method of class `MR::OverloadedOps::C` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_OverloadedOps_C *MR_OverloadedOps_C_AssignFromAnother(MR_OverloadedOps_C *_this, const MR_OverloadedOps_C *_other);

// If rhs type is same as the lhs one (ignoring cvref), it's not emitted.
// Generated from function `MR::OverloadedOps::operator+`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API void MR_C_add_MR_OverloadedOps_C(const MR_OverloadedOps_C *_1, const MR_OverloadedOps_C *_2);

// But different types are printed.
// Generated from function `MR::OverloadedOps::operator+`.
// Parameter `_1` can not be null. It is a single object.
// Parameter `_2` can not be null. It is a single object.
MR_C_API void MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(const MR_OverloadedOps_C *_1, const MR_OverloadedOps_B *_2);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadedOps_D_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadedOps_D *MR_OverloadedOps_D_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_OverloadedOps_D_DestroyArray()`.
// Use `MR_OverloadedOps_D_OffsetMutablePtr()` and `MR_OverloadedOps_D_OffsetPtr()` to access the array elements.
MR_C_API MR_OverloadedOps_D *MR_OverloadedOps_D_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_OverloadedOps_D *MR_OverloadedOps_D_OffsetPtr(const MR_OverloadedOps_D *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_OverloadedOps_D *MR_OverloadedOps_D_OffsetMutablePtr(MR_OverloadedOps_D *ptr, ptrdiff_t i);

// Generated from a constructor of class `MR::OverloadedOps::D`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadedOps_D_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadedOps_D *MR_OverloadedOps_D_ConstructFromAnother(const MR_OverloadedOps_D *_other);

// Destroys a heap-allocated instance of `MR_OverloadedOps_D`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadedOps_D_Destroy(const MR_OverloadedOps_D *_this);

// Destroys a heap-allocated array of `MR_OverloadedOps_D`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadedOps_D_DestroyArray(const MR_OverloadedOps_D *_this);

// Generated from a method of class `MR::OverloadedOps::D` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_OverloadedOps_D *MR_OverloadedOps_D_AssignFromAnother(MR_OverloadedOps_D *_this, const MR_OverloadedOps_D *_other);

// Disambiguating the names.
// Generated from a method of class `MR::OverloadedOps::D` named `operator*`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_deref_MR_OverloadedOps_D_ref(MR_OverloadedOps_D *_this);

// Generated from a method of class `MR::OverloadedOps::D` named `operator*`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_C_deref_const_MR_OverloadedOps_D_ref(const MR_OverloadedOps_D *_this);

// Generated from function `MR::OverloadedOps::operator+`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_pos_MR_OverloadedOps_D_ref(MR_OverloadedOps_D *_1);

// Generated from function `MR::OverloadedOps::operator+`.
// Parameter `_1` can not be null. It is a single object.
MR_C_API int32_t MR_C_pos_const_MR_OverloadedOps_D_ref(const MR_OverloadedOps_D *_1);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_OVERLOADED_OPERATORS_H
