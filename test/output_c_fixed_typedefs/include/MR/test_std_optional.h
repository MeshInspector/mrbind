#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_STD_OPTIONAL_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_STD_OPTIONAL_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <common.h>
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_optional_MR_StdOptional_A MR_C_std_optional_MR_StdOptional_A; // Defined in `#include <std_optional_MR_StdOptional_A.h>`.
typedef struct MR_C_std_optional_MR_StdOptional_B MR_C_std_optional_MR_StdOptional_B; // Defined in `#include <std_optional_MR_StdOptional_B.h>`.
typedef struct MR_C_std_optional_MR_StdOptional_E MR_C_std_optional_MR_StdOptional_E; // Defined in `#include <std_optional_MR_StdOptional_E.h>`.
typedef struct MR_C_std_optional_int32_t MR_C_std_optional_int32_t; // Defined in `#include <std_optional_int32_t.h>`.
typedef struct MR_C_std_string MR_C_std_string; // Defined in `#include <std_string.h>`.


typedef int32_t MR_StdOptional_E;
enum // MR_StdOptional_E
{
    MR_StdOptional_E_e1 = 0,
};

// Generated from class `MR::StdOptional::A`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_StdOptional_A MR_StdOptional_A;

// Generated from class `MR::StdOptional::B`.
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_StdOptional_B MR_StdOptional_B;

// Generated from function `MR::StdOptional::GetInt`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_int32_t_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_int32_t *MR_StdOptional_GetInt(void);

// Generated from function `MR::StdOptional::SetInt`.
// Parameter `_1` is optional. To keep it empty, pass a null pointer.
MR_C_API void MR_StdOptional_SetInt(const int32_t *_1);

// Generated from function `MR::StdOptional::SetIntConstRef`.
// Parameter `_1` is optional. To keep it empty, pass a null pointer.
MR_C_API void MR_StdOptional_SetIntConstRef(const int32_t *_1);

// Generated from function `MR::StdOptional::SetIntDefTrivial`.
// Parameter `_1` is optional. To keep it empty, pass a null pointer.
// Parameter `_1` defaults to empty in C++.
MR_C_API void MR_StdOptional_SetIntDefTrivial(const int32_t *_1);

// Generated from function `MR::StdOptional::SetIntDef`.
// Parameter `_1` is a single object.
// Parameter `_1` has a default argument: `42`, pass a null pointer to use it.
MR_C_API void MR_StdOptional_SetIntDef(const MR_C_std_optional_int32_t *_1);

// Generated from function `MR::StdOptional::GetEnum`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_E_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_E *MR_StdOptional_GetEnum(void);

// Generated from function `MR::StdOptional::SetEnum`.
// Parameter `_1` is optional. To keep it empty, pass a null pointer.
MR_C_API void MR_StdOptional_SetEnum(const MR_StdOptional_E *_1);

// Generated from function `MR::StdOptional::SetEnumConstRef`.
// Parameter `_1` is optional. To keep it empty, pass a null pointer.
MR_C_API void MR_StdOptional_SetEnumConstRef(const MR_StdOptional_E *_1);

// Generated from function `MR::StdOptional::SetEnumDefTrivial`.
// Parameter `_1` is optional. To keep it empty, pass a null pointer.
// Parameter `_1` defaults to empty in C++.
MR_C_API void MR_StdOptional_SetEnumDefTrivial(const MR_StdOptional_E *_1);

// Generated from function `MR::StdOptional::SetEnumDef`.
// Parameter `_1` is a single object.
// Parameter `_1` has a default argument: `E::e1`, pass a null pointer to use it.
MR_C_API void MR_StdOptional_SetEnumDef(const MR_C_std_optional_MR_StdOptional_E *_1);

// Returns a pointer to a member variable of class `MR::StdOptional::A` named `x`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const int32_t *MR_StdOptional_A_Get_x(const MR_StdOptional_A *_this);

// Modifies a member variable of class `MR::StdOptional::A` named `x`.
// Parameter `_this` can not be null. It is a single object.
// The reference to the parameter `value` might be preserved in this object in element `x`.
// When this function is called, this object will drop object references it had previously in `x`.
MR_C_API void MR_StdOptional_A_Set_x(MR_StdOptional_A *_this, int32_t value);

// Returns a mutable pointer to a member variable of class `MR::StdOptional::A` named `x`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API int32_t *MR_StdOptional_A_GetMutable_x(MR_StdOptional_A *_this);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdOptional_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdOptional_A *MR_StdOptional_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_StdOptional_A_DestroyArray()`.
// Use `MR_StdOptional_A_OffsetMutablePtr()` and `MR_StdOptional_A_OffsetPtr()` to access the array elements.
MR_C_API MR_StdOptional_A *MR_StdOptional_A_DefaultConstructArray(size_t num_elems);

// Constructs `MR::StdOptional::A` elementwise.
// The reference to the parameter `x` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdOptional_A_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_StdOptional_A *MR_StdOptional_A_ConstructFrom(int32_t x);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_StdOptional_A *MR_StdOptional_A_OffsetPtr(const MR_StdOptional_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_StdOptional_A *MR_StdOptional_A_OffsetMutablePtr(MR_StdOptional_A *ptr, ptrdiff_t i);

// Generated from constructor `MR::StdOptional::A::A`.
// Parameter `_other` can not be null. It is a single object.
// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdOptional_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdOptional_A *MR_StdOptional_A_ConstructFromAnother(const MR_StdOptional_A *_other);

// Destroys a heap-allocated instance of `MR_StdOptional_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdOptional_A_Destroy(const MR_StdOptional_A *_this);

// Destroys a heap-allocated array of `MR_StdOptional_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdOptional_A_DestroyArray(const MR_StdOptional_A *_this);

// Generated from method `MR::StdOptional::A::operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_StdOptional_A *MR_StdOptional_A_AssignFromAnother(MR_StdOptional_A *_this, const MR_StdOptional_A *_other);

// Generated from function `MR::StdOptional::GetClass`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_A *MR_StdOptional_GetClass(void);

// Generated from function `MR::StdOptional::SetClass`.
// Parameter `_1` is a single object.
// Parameter `_1` is optional. To keep it empty, pass a null pointer.
MR_C_API void MR_StdOptional_SetClass(const MR_StdOptional_A *_1);

// Generated from function `MR::StdOptional::SetClassConstRef`.
// Parameter `_1` is a single object.
// Parameter `_1` is optional. To keep it empty, pass a null pointer.
MR_C_API void MR_StdOptional_SetClassConstRef(const MR_StdOptional_A *_1);

// Generated from function `MR::StdOptional::SetClassDefTrivial`.
// Parameter `_1` is a single object.
// Parameter `_1` is optional. To keep it empty, pass a null pointer.
// Parameter `_1` defaults to empty in C++.
MR_C_API void MR_StdOptional_SetClassDefTrivial(const MR_StdOptional_A *_1);

// Generated from function `MR::StdOptional::SetClassDef`.
// Parameter `_1` is a single object.
// Parameter `_1` has a default argument: `MR::StdOptional::A{42}`, pass a null pointer to use it.
MR_C_API void MR_StdOptional_SetClassDef(const MR_C_std_optional_MR_StdOptional_A *_1);

// Returns a pointer to a member variable of class `MR::StdOptional::B` named `s`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API const MR_C_std_string *MR_StdOptional_B_Get_s(const MR_StdOptional_B *_this);

// Modifies a member variable of class `MR::StdOptional::B` named `s`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `value` can not be null.
// If `value_end` is null, then `value` is assumed to be null-terminated.
// The reference to the parameter `value` might be preserved in this object in element `s`.
// When this function is called, this object will drop object references it had previously in `s`.
MR_C_API void MR_StdOptional_B_Set_s(MR_StdOptional_B *_this, const char *value, const char *value_end);

// Returns a mutable pointer to a member variable of class `MR::StdOptional::B` named `s`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// The reference to this object might be preserved as the return value.
MR_C_API MR_C_std_string *MR_StdOptional_B_GetMutable_s(MR_StdOptional_B *_this);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdOptional_B_Destroy()` to free it when you're done using it.
MR_C_API MR_StdOptional_B *MR_StdOptional_B_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_StdOptional_B_DestroyArray()`.
// Use `MR_StdOptional_B_OffsetMutablePtr()` and `MR_StdOptional_B_OffsetPtr()` to access the array elements.
MR_C_API MR_StdOptional_B *MR_StdOptional_B_DefaultConstructArray(size_t num_elems);

// Constructs `MR::StdOptional::B` elementwise.
// Parameter `s` can not be null.
// If `s_end` is null, then `s` is assumed to be null-terminated.
// The reference to the parameter `s` might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdOptional_B_Destroy()` to free it when you're done using it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_StdOptional_B *MR_StdOptional_B_ConstructFrom(const char *s, const char *s_end);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_StdOptional_B *MR_StdOptional_B_OffsetPtr(const MR_StdOptional_B *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_StdOptional_B *MR_StdOptional_B_OffsetMutablePtr(MR_StdOptional_B *ptr, ptrdiff_t i);

// Generated from constructor `MR::StdOptional::B::B`.
// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_StdOptional_B_Destroy()` to free it when you're done using it.
MR_C_API MR_StdOptional_B *MR_StdOptional_B_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_StdOptional_B *_other);

// Destroys a heap-allocated instance of `MR_StdOptional_B`. Does nothing if the pointer is null.
MR_C_API void MR_StdOptional_B_Destroy(const MR_StdOptional_B *_this);

// Destroys a heap-allocated array of `MR_StdOptional_B`. Does nothing if the pointer is null.
MR_C_API void MR_StdOptional_B_DestroyArray(const MR_StdOptional_B *_this);

// Generated from method `MR::StdOptional::B::operator=`.
// Parameter `_this` can not be null. It is a single object.
// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
// When this function is called, this object will drop any object references it had previously.
MR_C_API MR_StdOptional_B *MR_StdOptional_B_AssignFromAnother(MR_StdOptional_B *_this, MR_C_PassBy _other_pass_by, MR_StdOptional_B *_other);

// Generated from function `MR::StdOptional::GetClass2`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_optional_MR_StdOptional_B_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_optional_MR_StdOptional_B *MR_StdOptional_GetClass2(void);

// Generated from function `MR::StdOptional::SetClass2`.
// Parameter `_1` is optional. To keep it empty, pass `MR_C_PassBy_NoObject` and a null pointer.
MR_C_API void MR_StdOptional_SetClass2(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1);

// Generated from function `MR::StdOptional::SetClass2ConstRef`.
// Parameter `_1` is optional. To keep it empty, pass `MR_C_PassBy_NoObject` and a null pointer.
MR_C_API void MR_StdOptional_SetClass2ConstRef(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1);

// Generated from function `MR::StdOptional::SetClass2DefTrivial`.
// Parameter `_1` is optional. To keep it empty, pass `MR_C_PassBy_NoObject` and a null pointer.
// Parameter `_1` defaults to empty in C++.
MR_C_API void MR_StdOptional_SetClass2DefTrivial(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1);

// Generated from function `MR::StdOptional::SetClass2Def`.
// Parameter `_1` is optional. To keep it empty, pass `MR_C_PassBy_NoObject` and a null pointer.
// Parameter `_1` has a default argument: `MR::StdOptional::B{"blah"}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdOptional_SetClass2Def(MR_C_PassBy _1_pass_by, MR_StdOptional_B *_1);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_STD_OPTIONAL_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_STD_OPTIONAL_H_2)
#define MR_C_DETAIL_INCLUDED_MR_TEST_STD_OPTIONAL_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_optional_MR_StdOptional_A.h>
#include <std_optional_MR_StdOptional_B.h>
#include <std_optional_MR_StdOptional_E.h>
#include <std_optional_int32_t.h>
#include <std_string.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_STD_OPTIONAL_H_2)
