#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_shared_ptr_MR_StdSharedPtr_A MR_C_std_shared_ptr_MR_StdSharedPtr_A; // Defined in `#include <std_shared_ptr_MR_StdSharedPtr_A.h>`.
typedef struct MR_C_std_shared_ptr_MR_StdSharedPtr_A_array MR_C_std_shared_ptr_MR_StdSharedPtr_A_array; // Defined in `#include <std_shared_ptr_MR_StdSharedPtr_A_array.h>`.
typedef struct MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42; // Defined in `#include <std_shared_ptr_MR_StdSharedPtr_A_array_42.h>`.
typedef struct MR_C_std_shared_ptr_int MR_C_std_shared_ptr_int; // Defined in `#include <std_shared_ptr_int.h>`.
typedef struct MR_C_std_shared_ptr_int_array MR_C_std_shared_ptr_int_array; // Defined in `#include <std_shared_ptr_int_array.h>`.
typedef struct MR_C_std_shared_ptr_int_array_42 MR_C_std_shared_ptr_int_array_42; // Defined in `#include <std_shared_ptr_int_array_42.h>`.


/// Generated from function `MR::StdSharedPtr::GetInt`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_int *MR_StdSharedPtr_GetInt(void);

/// Generated from function `MR::StdSharedPtr::SetInt`.
MR_C_API void MR_StdSharedPtr_SetInt(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int *_1);

/// Generated from function `MR::StdSharedPtr::SetIntConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdSharedPtr_SetIntConstRef(const MR_C_std_shared_ptr_int *_1);

/// Generated from function `MR::StdSharedPtr::SetIntDefTrivial`.
/// Parameter `_1` has default argument: `{}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetIntDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int *_1);

/// Generated from function `MR::StdSharedPtr::SetIntDef`.
/// Parameter `_1` has default argument: `std::make_unique<int>(42)`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetIntDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int *_1);

/// Generated from function `MR::StdSharedPtr::SetIntLvalueRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdSharedPtr_SetIntLvalueRef(MR_C_std_shared_ptr_int *_1);

/// Generated from function `MR::StdSharedPtr::SetIntLvalueConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdSharedPtr_SetIntLvalueConstRef(const MR_C_std_shared_ptr_int *_1);

/// Generated from function `MR::StdSharedPtr::SetIntRvalueRef`.
/// Parameter `_1` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdSharedPtr_SetIntRvalueRef(MR_C_std_shared_ptr_int *_1);

/// Generated from function `MR::StdSharedPtr::SetIntRvalueConstRef`.
/// Parameter `_1` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdSharedPtr_SetIntRvalueConstRef(const MR_C_std_shared_ptr_int *_1);

/// Generated from function `MR::StdSharedPtr::GetIntArr`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_int_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_int_array *MR_StdSharedPtr_GetIntArr(void);

/// Generated from function `MR::StdSharedPtr::SetIntArr`.
MR_C_API void MR_StdSharedPtr_SetIntArr(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array *_1);

/// Generated from function `MR::StdSharedPtr::SetIntArrDefTrivial`.
/// Parameter `_1` has default argument: `{}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetIntArrDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array *_1);

/// Generated from function `MR::StdSharedPtr::SetIntArrDef`.
/// Parameter `_1` has default argument: `std::make_unique<int[]>(42)`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetIntArrDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array *_1);

/// Generated from function `MR::StdSharedPtr::GetIntArr42`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_int_array_42_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_int_array_42 *MR_StdSharedPtr_GetIntArr42(void);

/// Generated from function `MR::StdSharedPtr::SetIntArr42`.
MR_C_API void MR_StdSharedPtr_SetIntArr42(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array_42 *_1);

/// Generated from function `MR::StdSharedPtr::SetIntArr42DefTrivial`.
/// Parameter `_1` has default argument: `{}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetIntArr42DefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array_42 *_1);

/// Generated from function `MR::StdSharedPtr::SetIntArr42Def`.
/// Parameter `_1` has default argument: `std::make_shared<int[42]>()`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetIntArr42Def(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_int_array_42 *_1);

// Now with a class:
typedef struct MR_StdSharedPtr_A MR_StdSharedPtr_A;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_StdSharedPtr_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdSharedPtr_A *MR_StdSharedPtr_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_StdSharedPtr_A_DestroyArray()`.
/// Use `MR_StdSharedPtr_A_OffsetMutablePtr()` and `MR_StdSharedPtr_A_OffsetPtr()` to access the array elements.
MR_C_API MR_StdSharedPtr_A *MR_StdSharedPtr_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_StdSharedPtr_A *MR_StdSharedPtr_A_OffsetPtr(const MR_StdSharedPtr_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_StdSharedPtr_A *MR_StdSharedPtr_A_OffsetMutablePtr(MR_StdSharedPtr_A *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::StdSharedPtr::A`.
/// Parameter `_other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_StdSharedPtr_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdSharedPtr_A *MR_StdSharedPtr_A_ConstructFromAnother(const MR_StdSharedPtr_A *_other);

/// Destroys a heap-allocated instance of `MR_StdSharedPtr_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdSharedPtr_A_Destroy(MR_StdSharedPtr_A *_this);

/// Destroys a heap-allocated array of `MR_StdSharedPtr_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdSharedPtr_A_DestroyArray(MR_StdSharedPtr_A *_this);

/// Generated from a method of class `MR::StdSharedPtr::A` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdSharedPtr_A *MR_StdSharedPtr_A_AssignFromAnother(MR_StdSharedPtr_A *_this, const MR_StdSharedPtr_A *_other);

/// Generated from function `MR::StdSharedPtr::GetClass`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_StdSharedPtr_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_StdSharedPtr_A *MR_StdSharedPtr_GetClass(void);

/// Generated from function `MR::StdSharedPtr::SetClass`.
MR_C_API void MR_StdSharedPtr_SetClass(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1);

/// Generated from function `MR::StdSharedPtr::SetClassConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdSharedPtr_SetClassConstRef(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1);

/// Generated from function `MR::StdSharedPtr::SetClassDefTrivial`.
/// Parameter `_1` has default argument: `{}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetClassDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1);

/// Generated from function `MR::StdSharedPtr::SetClassDef`.
/// Parameter `_1` has default argument: `std::make_unique<MR::StdSharedPtr::A>(MR::StdSharedPtr::A{})`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetClassDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1);

/// Generated from function `MR::StdSharedPtr::SetClassLvalueRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdSharedPtr_SetClassLvalueRef(MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1);

/// Generated from function `MR::StdSharedPtr::SetClassLvalueConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdSharedPtr_SetClassLvalueConstRef(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1);

/// Generated from function `MR::StdSharedPtr::SetClassRvalueRef`.
/// Parameter `_1` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdSharedPtr_SetClassRvalueRef(MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1);

/// Generated from function `MR::StdSharedPtr::SetClassRvalueConstRef`.
/// Parameter `_1` can not be null.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MR_C_API void MR_StdSharedPtr_SetClassRvalueConstRef(const MR_C_std_shared_ptr_MR_StdSharedPtr_A *_1);

/// Generated from function `MR::StdSharedPtr::GetClassArr`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *MR_StdSharedPtr_GetClassArr(void);

/// Generated from function `MR::StdSharedPtr::SetClassArr`.
MR_C_API void MR_StdSharedPtr_SetClassArr(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_1);

/// Generated from function `MR::StdSharedPtr::SetClassArrDefTrivial`.
/// Parameter `_1` has default argument: `{}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetClassArrDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_1);

/// Generated from function `MR::StdSharedPtr::SetClassArrDef`.
/// Parameter `_1` has default argument: `std::make_unique<MR::StdSharedPtr::A[]>(42)`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetClassArrDef(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array *_1);

/// Generated from function `MR::StdSharedPtr::GetClassArr42`.
/// Returns an instance allocated on the heap! Must call `MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *MR_StdSharedPtr_GetClassArr42(void);

/// Generated from function `MR::StdSharedPtr::SetClassArr42`.
MR_C_API void MR_StdSharedPtr_SetClassArr42(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *_1);

/// Generated from function `MR::StdSharedPtr::SetClassArr42DefTrivial`.
/// Parameter `_1` has default argument: `{}`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetClassArr42DefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *_1);

/// Generated from function `MR::StdSharedPtr::SetClassArr42Def`.
/// Parameter `_1` has default argument: `std::make_shared<MR::StdSharedPtr::A[42]>()`, pass `MR_C_PassBy_DefaultArgument` and a null pointer to use it.
MR_C_API void MR_StdSharedPtr_SetClassArr42Def(MR_C_PassBy _1_pass_by, MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 *_1);

#ifdef __cplusplus
} // extern "C"
#endif
