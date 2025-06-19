#pragma once

#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_unique_ptr_MR_StdUniquePtr_A MR_C_std_unique_ptr_MR_StdUniquePtr_A; // Defined in `#include <std_unique_ptr_MR_StdUniquePtr_A.h>`.
typedef struct MR_C_std_unique_ptr_MR_StdUniquePtr_A_array MR_C_std_unique_ptr_MR_StdUniquePtr_A_array; // Defined in `#include <std_unique_ptr_MR_StdUniquePtr_A_array.h>`.
typedef struct MR_C_std_unique_ptr_int MR_C_std_unique_ptr_int; // Defined in `#include <std_unique_ptr_int.h>`.
typedef struct MR_C_std_unique_ptr_int_array MR_C_std_unique_ptr_int_array; // Defined in `#include <std_unique_ptr_int_array.h>`.


/// Generated from function `MR::StdUniquePtr::GetInt`.
/// The returned pointer is owning! It must be deallocated using `MR_C_Free().
MR_C_API int *MR_StdUniquePtr_GetInt(void);

/// Generated from function `MR::StdUniquePtr::SetInt`.
/// Parameter `_1` should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
MR_C_API void MR_StdUniquePtr_SetInt(int *_1);

/// Generated from function `MR::StdUniquePtr::SetIntConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdUniquePtr_SetIntConstRef(const MR_C_std_unique_ptr_int *_1);

/// Generated from function `MR::StdUniquePtr::SetIntDefTrivial`.
/// Parameter `_1` should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_StdUniquePtr_SetIntDefTrivial(int *_1);

/// Generated from function `MR::StdUniquePtr::SetIntDef`.
/// Parameter `_1` (after dereferencing) should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the (deferenced) passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
/// Parameter `_1` has default argument: `std::make_unique<int>(42)`, pass a null pointer to use it.
MR_C_API void MR_StdUniquePtr_SetIntDef(int *const *_1);

/// Generated from function `MR::StdUniquePtr::SetIntLvalueRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdUniquePtr_SetIntLvalueRef(MR_C_std_unique_ptr_int *_1);

/// Generated from function `MR::StdUniquePtr::SetIntLvalueConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdUniquePtr_SetIntLvalueConstRef(const MR_C_std_unique_ptr_int *_1);

/// Generated from function `MR::StdUniquePtr::SetIntRvalueRef`.
/// Parameter `_1` should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
MR_C_API void MR_StdUniquePtr_SetIntRvalueRef(int *_1);

/// Generated from function `MR::StdUniquePtr::SetIntRvalueConstRef`.
/// Parameter `_1` should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
MR_C_API void MR_StdUniquePtr_SetIntRvalueConstRef(int *_1);

/// Generated from function `MR::StdUniquePtr::GetIntArr`.
/// The returned pointer is owning! It must be deallocated using `MR_C_FreeArray().
MR_C_API int *MR_StdUniquePtr_GetIntArr(void);

/// Generated from function `MR::StdUniquePtr::SetIntArr`.
/// Parameter `_1` can point to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_C_FreeArray()` on it automatically.
MR_C_API void MR_StdUniquePtr_SetIntArr(int *_1);

/// Generated from function `MR::StdUniquePtr::SetIntArrDefTrivial`.
/// Parameter `_1` can point to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_C_FreeArray()` on it automatically.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_StdUniquePtr_SetIntArrDefTrivial(int *_1);

/// Generated from function `MR::StdUniquePtr::SetIntArrDef`.
/// Parameter `_1` (after dereferencing) can point to an array.
/// Parameter `_1` takes ownership of the (deferenced) passed pointer (if not null), and will later call `MR_C_FreeArray()` on it automatically.
/// Parameter `_1` has default argument: `std::make_unique<int[]>(42)`, pass a null pointer to use it.
MR_C_API void MR_StdUniquePtr_SetIntArrDef(int *const *_1);

// Now with a class:
typedef struct MR_StdUniquePtr_A MR_StdUniquePtr_A;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_StdUniquePtr_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdUniquePtr_A *MR_StdUniquePtr_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_StdUniquePtr_A_DestroyArray()`.
/// Use `MR_StdUniquePtr_A_OffsetMutablePtr()` and `MR_StdUniquePtr_A_OffsetPtr()` to access the array elements.
MR_C_API MR_StdUniquePtr_A *MR_StdUniquePtr_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_StdUniquePtr_A *MR_StdUniquePtr_A_OffsetPtr(const MR_StdUniquePtr_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_StdUniquePtr_A *MR_StdUniquePtr_A_OffsetMutablePtr(MR_StdUniquePtr_A *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::StdUniquePtr::A`.
/// Parameter `_other` can not be null.
/// Returns an instance allocated on the heap! Must call `MR_StdUniquePtr_A_Destroy()` to free it when you're done using it.
MR_C_API MR_StdUniquePtr_A *MR_StdUniquePtr_A_ConstructFromAnother(const MR_StdUniquePtr_A *_other);

/// Destroys a heap-allocated instance of `MR_StdUniquePtr_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdUniquePtr_A_Destroy(MR_StdUniquePtr_A *_this);

/// Destroys a heap-allocated array of `MR_StdUniquePtr_A`. Does nothing if the pointer is null.
MR_C_API void MR_StdUniquePtr_A_DestroyArray(MR_StdUniquePtr_A *_this);

/// Generated from a method of class `MR::StdUniquePtr::A` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_StdUniquePtr_A *MR_StdUniquePtr_A_AssignFromAnother(MR_StdUniquePtr_A *_this, const MR_StdUniquePtr_A *_other);

/// Generated from function `MR::StdUniquePtr::GetClass`.
/// The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_Destroy().
MR_C_API MR_StdUniquePtr_A *MR_StdUniquePtr_GetClass(void);

/// Generated from function `MR::StdUniquePtr::SetClass`.
/// Parameter `_1` should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_StdUniquePtr_A_Destroy()` on it automatically.
MR_C_API void MR_StdUniquePtr_SetClass(MR_StdUniquePtr_A *_1);

/// Generated from function `MR::StdUniquePtr::SetClassConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdUniquePtr_SetClassConstRef(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1);

/// Generated from function `MR::StdUniquePtr::SetClassDefTrivial`.
/// Parameter `_1` should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_StdUniquePtr_A_Destroy()` on it automatically.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_StdUniquePtr_SetClassDefTrivial(MR_StdUniquePtr_A *_1);

/// Generated from function `MR::StdUniquePtr::SetClassDef`.
/// Parameter `_1` (after dereferencing) should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the (deferenced) passed pointer (if not null), and will later call `MR_StdUniquePtr_A_Destroy()` on it automatically.
/// Parameter `_1` has default argument: `std::make_unique<MR::StdUniquePtr::A>(MR::StdUniquePtr::A{})`, pass a null pointer to use it.
MR_C_API void MR_StdUniquePtr_SetClassDef(MR_StdUniquePtr_A *const *_1);

/// Generated from function `MR::StdUniquePtr::SetClassLvalueRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdUniquePtr_SetClassLvalueRef(MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1);

/// Generated from function `MR::StdUniquePtr::SetClassLvalueConstRef`.
/// Parameter `_1` can not be null.
MR_C_API void MR_StdUniquePtr_SetClassLvalueConstRef(const MR_C_std_unique_ptr_MR_StdUniquePtr_A *_1);

/// Generated from function `MR::StdUniquePtr::SetClassRvalueRef`.
/// Parameter `_1` should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_StdUniquePtr_A_Destroy()` on it automatically.
MR_C_API void MR_StdUniquePtr_SetClassRvalueRef(MR_StdUniquePtr_A *_1);

/// Generated from function `MR::StdUniquePtr::SetClassRvalueConstRef`.
/// Parameter `_1` should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_StdUniquePtr_A_Destroy()` on it automatically.
MR_C_API void MR_StdUniquePtr_SetClassRvalueConstRef(MR_StdUniquePtr_A *_1);

/// Generated from function `MR::StdUniquePtr::GetClassArr`.
/// The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_DestroyArray().
MR_C_API MR_StdUniquePtr_A *MR_StdUniquePtr_GetClassArr(void);

/// Generated from function `MR::StdUniquePtr::SetClassArr`.
/// Parameter `_1` can point to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_StdUniquePtr_A_DestroyArray()` on it automatically.
MR_C_API void MR_StdUniquePtr_SetClassArr(MR_StdUniquePtr_A *_1);

/// Generated from function `MR::StdUniquePtr::SetClassArrDefTrivial`.
/// Parameter `_1` can point to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_StdUniquePtr_A_DestroyArray()` on it automatically.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_StdUniquePtr_SetClassArrDefTrivial(MR_StdUniquePtr_A *_1);

/// Generated from function `MR::StdUniquePtr::SetClassArrDef`.
/// Parameter `_1` (after dereferencing) can point to an array.
/// Parameter `_1` takes ownership of the (deferenced) passed pointer (if not null), and will later call `MR_StdUniquePtr_A_DestroyArray()` on it automatically.
/// Parameter `_1` has default argument: `std::make_unique<MR::StdUniquePtr::A[]>(42)`, pass a null pointer to use it.
MR_C_API void MR_StdUniquePtr_SetClassArrDef(MR_StdUniquePtr_A *const *_1);

// Here `std::unique_ptr<float>` never gets emitted as an actual type (since we don't have non-null default arguments), so its header should not be emitted.
/// Generated from function `MR::StdUniquePtr::GetFloat`.
/// The returned pointer is owning! It must be deallocated using `MR_C_Free().
MR_C_API float *MR_StdUniquePtr_GetFloat(void);

/// Generated from function `MR::StdUniquePtr::SetFloat`.
/// Parameter `_1` should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
MR_C_API void MR_StdUniquePtr_SetFloat(float *_1);

/// Generated from function `MR::StdUniquePtr::SetFloatDefTrivial`.
/// Parameter `_1` should point to a single object rather than to an array.
/// Parameter `_1` takes ownership of the passed pointer (if not null), and will later call `MR_C_Free()` on it automatically.
/// Parameter `_1` defaults to a null pointer in C++.
MR_C_API void MR_StdUniquePtr_SetFloatDefTrivial(float *_1);

#ifdef __cplusplus
} // extern "C"
#endif
