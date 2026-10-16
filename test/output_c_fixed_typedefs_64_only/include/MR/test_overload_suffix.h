#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifndef MR_C_DETAIL_TYPEDEF_MR_OverloadSuffix_A
#define MR_C_DETAIL_TYPEDEF_MR_OverloadSuffix_A
/// Generated from class `MR::OverloadSuffix::A`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_OverloadSuffix_A MR_OverloadSuffix_A;
#endif

#ifndef MR_C_DETAIL_TYPEDEF_MR_OverloadSuffix_B
#define MR_C_DETAIL_TYPEDEF_MR_OverloadSuffix_B
/// Generated from class `MR::OverloadSuffix::B`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_OverloadSuffix_B MR_OverloadSuffix_B;
#endif

#ifndef MR_C_DETAIL_TYPEDEF_MR_OverloadSuffix_C
#define MR_C_DETAIL_TYPEDEF_MR_OverloadSuffix_C
/// Generated from class `MR::OverloadSuffix::C`.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_OverloadSuffix_C MR_OverloadSuffix_C;
#endif

// Just normal stuff with no annotations:
/// Generated from function `MR::OverloadSuffix::foo_a`.
MR_C_API void MR_OverloadSuffix_foo_a_1_int(int _1);

/// Generated from function `MR::OverloadSuffix::foo_a`.
MR_C_API void MR_OverloadSuffix_foo_a_1_float(float _1);

/// Generated from function `MR::OverloadSuffix::foo_a`.
MR_C_API void MR_OverloadSuffix_foo_a_2(int _1, int _2);

/// Generated from function `MR::OverloadSuffix::bar_a`.
MR_C_API void MR_OverloadSuffix_bar_a_int(int _1);

/// Generated from function `MR::OverloadSuffix::bar_a`.
MR_C_API void MR_OverloadSuffix_bar_a_float(float _1);

/// Generated from function `MR::OverloadSuffix::baz_a`.
MR_C_API void MR_OverloadSuffix_baz_a_1(int _1);

/// Generated from function `MR::OverloadSuffix::baz_a`.
MR_C_API void MR_OverloadSuffix_baz_a_2(int _1, int _2);

/// Generated from constructor `MR::OverloadSuffix::A::A`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_A_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_A *MR_OverloadSuffix_A_ConstructFromAnother(const MR_OverloadSuffix_A *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_OverloadSuffix_A *MR_OverloadSuffix_A_OffsetPtr(const MR_OverloadSuffix_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_OverloadSuffix_A *MR_OverloadSuffix_A_OffsetMutablePtr(MR_OverloadSuffix_A *ptr, ptrdiff_t i);

/// Generated from constructor `MR::OverloadSuffix::A::A`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_A_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_A *MR_OverloadSuffix_A_Construct_1_int(int _1);

/// Generated from constructor `MR::OverloadSuffix::A::A`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_A_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_A *MR_OverloadSuffix_A_Construct_1_float(float _1);

/// Generated from constructor `MR::OverloadSuffix::A::A`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_A_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_A *MR_OverloadSuffix_A_Construct_2(int _1, int _2);

/// Destroys a heap-allocated instance of `MR_OverloadSuffix_A`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadSuffix_A_Destroy(const MR_OverloadSuffix_A *_this);

/// Destroys a heap-allocated array of `MR_OverloadSuffix_A`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadSuffix_A_DestroyArray(const MR_OverloadSuffix_A *_this);

/// Generated from method `MR::OverloadSuffix::A::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_OverloadSuffix_A *MR_OverloadSuffix_A_AssignFromAnother(MR_OverloadSuffix_A *_this, const MR_OverloadSuffix_A *_other);

/// Generated from method `MR::OverloadSuffix::A::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_A_foo_1_int(MR_OverloadSuffix_A *_this, int _1);

/// Generated from method `MR::OverloadSuffix::A::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_A_foo_1_float(MR_OverloadSuffix_A *_this, float _1);

/// Generated from method `MR::OverloadSuffix::A::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_A_foo_2(MR_OverloadSuffix_A *_this, int _1, int _2);

/// Generated from method `MR::OverloadSuffix::A::operator-`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_sub_MR_OverloadSuffix_A_int(MR_OverloadSuffix_A *_this, int _1);

/// Generated from method `MR::OverloadSuffix::A::operator-`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_sub_MR_OverloadSuffix_A_float(MR_OverloadSuffix_A *_this, float _1);

/// Generated from method `MR::OverloadSuffix::A::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_A_index_int(MR_OverloadSuffix_A *_this, int _1);

/// Generated from method `MR::OverloadSuffix::A::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_A_index_float(MR_OverloadSuffix_A *_this, float _1);

/// Generated from function `MR::OverloadSuffix::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_pos_MR_OverloadSuffix_A_ref(MR_OverloadSuffix_A *_1);

/// Generated from function `MR::OverloadSuffix::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_pos_const_MR_OverloadSuffix_A_ref(const MR_OverloadSuffix_A *_1);

// With empty suffix:
/// Generated from function `MR::OverloadSuffix::foo_b`.
MR_C_API void MR_OverloadSuffix_foo_b(int _1);

/// Generated from function `MR::OverloadSuffix::foo_b`.
MR_C_API void MR_OverloadSuffix_foo_b_1(float _1);

/// Generated from function `MR::OverloadSuffix::foo_b`.
MR_C_API void MR_OverloadSuffix_foo_b_2(int _1, int _2);

/// Generated from function `MR::OverloadSuffix::bar_b`.
MR_C_API void MR_OverloadSuffix_bar_b(int _1);

/// Generated from function `MR::OverloadSuffix::bar_b`.
MR_C_API void MR_OverloadSuffix_bar_b_float(float _1);

/// Generated from function `MR::OverloadSuffix::baz_b`.
MR_C_API void MR_OverloadSuffix_baz_b(int _1);

/// Generated from function `MR::OverloadSuffix::baz_b`.
MR_C_API void MR_OverloadSuffix_baz_b_int(int _1, int _2);

/// Generated from constructor `MR::OverloadSuffix::B::B`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_B_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_B *MR_OverloadSuffix_B_ConstructFromAnother(const MR_OverloadSuffix_B *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_OverloadSuffix_B *MR_OverloadSuffix_B_OffsetPtr(const MR_OverloadSuffix_B *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_OverloadSuffix_B *MR_OverloadSuffix_B_OffsetMutablePtr(MR_OverloadSuffix_B *ptr, ptrdiff_t i);

/// Generated from constructor `MR::OverloadSuffix::B::B`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_B_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_B *MR_OverloadSuffix_B_Construct(int _1);

/// Generated from constructor `MR::OverloadSuffix::B::B`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_B_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_B *MR_OverloadSuffix_B_Construct_1(float _1);

/// Generated from constructor `MR::OverloadSuffix::B::B`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_B_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_B *MR_OverloadSuffix_B_Construct_2(int _1, int _2);

/// Destroys a heap-allocated instance of `MR_OverloadSuffix_B`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadSuffix_B_Destroy(const MR_OverloadSuffix_B *_this);

/// Destroys a heap-allocated array of `MR_OverloadSuffix_B`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadSuffix_B_DestroyArray(const MR_OverloadSuffix_B *_this);

/// Generated from method `MR::OverloadSuffix::B::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_OverloadSuffix_B *MR_OverloadSuffix_B_AssignFromAnother(MR_OverloadSuffix_B *_this, const MR_OverloadSuffix_B *_other);

/// Generated from method `MR::OverloadSuffix::B::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_B_foo(MR_OverloadSuffix_B *_this, int _1);

/// Generated from method `MR::OverloadSuffix::B::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_B_foo_1(MR_OverloadSuffix_B *_this, float _1);

/// Generated from method `MR::OverloadSuffix::B::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_B_foo_2(MR_OverloadSuffix_B *_this, int _1, int _2);

// Currently has no effect on those.
/// Generated from method `MR::OverloadSuffix::B::operator-`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_sub_MR_OverloadSuffix_B_int(MR_OverloadSuffix_B *_this, int _1);

/// Generated from method `MR::OverloadSuffix::B::operator-`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_sub_MR_OverloadSuffix_B_float(MR_OverloadSuffix_B *_this, float _1);

// Works on those, though.
/// Generated from method `MR::OverloadSuffix::B::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_B_index(MR_OverloadSuffix_B *_this, int _1);

/// Generated from method `MR::OverloadSuffix::B::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_B_index_float(MR_OverloadSuffix_B *_this, float _1);

// Currently has no effect on those.
/// Generated from function `MR::OverloadSuffix::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_pos_MR_OverloadSuffix_B_ref(MR_OverloadSuffix_B *_1);

/// Generated from function `MR::OverloadSuffix::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_pos_const_MR_OverloadSuffix_B_ref(const MR_OverloadSuffix_B *_1);

// With custom suffix:
/// Generated from function `MR::OverloadSuffix::foo_c`.
MR_C_API void MR_OverloadSuffix_foo_c_blah(int _1);

/// Generated from function `MR::OverloadSuffix::foo_c`.
MR_C_API void MR_OverloadSuffix_foo_c_1(float _1);

/// Generated from function `MR::OverloadSuffix::foo_c`.
MR_C_API void MR_OverloadSuffix_foo_c_2(int _1, int _2);

/// Generated from function `MR::OverloadSuffix::bar_c`.
MR_C_API void MR_OverloadSuffix_bar_c_blah(int _1);

/// Generated from function `MR::OverloadSuffix::bar_c`.
MR_C_API void MR_OverloadSuffix_bar_c(float _1);

/// Generated from function `MR::OverloadSuffix::baz_c`.
MR_C_API void MR_OverloadSuffix_baz_c_blah(int _1);

/// Generated from function `MR::OverloadSuffix::baz_c`.
MR_C_API void MR_OverloadSuffix_baz_c(int _1, int _2);

/// Generated from constructor `MR::OverloadSuffix::C::C`.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_C_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_C *MR_OverloadSuffix_C_ConstructFromAnother(const MR_OverloadSuffix_C *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_OverloadSuffix_C *MR_OverloadSuffix_C_OffsetPtr(const MR_OverloadSuffix_C *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_OverloadSuffix_C *MR_OverloadSuffix_C_OffsetMutablePtr(MR_OverloadSuffix_C *ptr, ptrdiff_t i);

/// Generated from constructor `MR::OverloadSuffix::C::C`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_C_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_C *MR_OverloadSuffix_C_Construct_blah(int _1);

/// Generated from constructor `MR::OverloadSuffix::C::C`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_C_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_C *MR_OverloadSuffix_C_Construct_1(float _1);

/// Generated from constructor `MR::OverloadSuffix::C::C`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OverloadSuffix_C_Destroy()` to free it when you're done using it.
MR_C_API MR_OverloadSuffix_C *MR_OverloadSuffix_C_Construct_2(int _1, int _2);

/// Destroys a heap-allocated instance of `MR_OverloadSuffix_C`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadSuffix_C_Destroy(const MR_OverloadSuffix_C *_this);

/// Destroys a heap-allocated array of `MR_OverloadSuffix_C`. Does nothing if the pointer is null.
MR_C_API void MR_OverloadSuffix_C_DestroyArray(const MR_OverloadSuffix_C *_this);

/// Generated from method `MR::OverloadSuffix::C::operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_OverloadSuffix_C *MR_OverloadSuffix_C_AssignFromAnother(MR_OverloadSuffix_C *_this, const MR_OverloadSuffix_C *_other);

/// Generated from method `MR::OverloadSuffix::C::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_C_foo_blah(MR_OverloadSuffix_C *_this, int _1);

/// Generated from method `MR::OverloadSuffix::C::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_C_foo_1(MR_OverloadSuffix_C *_this, float _1);

/// Generated from method `MR::OverloadSuffix::C::foo`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_C_foo_2(MR_OverloadSuffix_C *_this, int _1, int _2);

// Currently has no effect on those.
/// Generated from method `MR::OverloadSuffix::C::operator-`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_sub_MR_OverloadSuffix_C_int(MR_OverloadSuffix_C *_this, int _1);

/// Generated from method `MR::OverloadSuffix::C::operator-`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_sub_MR_OverloadSuffix_C_float(MR_OverloadSuffix_C *_this, float _1);

// Works on those, though.
/// Generated from method `MR::OverloadSuffix::C::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_C_index_blah(MR_OverloadSuffix_C *_this, int _1);

/// Generated from method `MR::OverloadSuffix::C::operator[]`.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_OverloadSuffix_C_index(MR_OverloadSuffix_C *_this, float _1);

// Currently has no effect on those.
/// Generated from function `MR::OverloadSuffix::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_pos_MR_OverloadSuffix_C_ref(MR_OverloadSuffix_C *_1);

/// Generated from function `MR::OverloadSuffix::operator+`.
/// Parameter `_1` can not be null. It is a single object.
MR_C_API void MR_C_pos_const_MR_OverloadSuffix_C_ref(const MR_OverloadSuffix_C *_1);

#ifdef __cplusplus
} // extern "C"
#endif
