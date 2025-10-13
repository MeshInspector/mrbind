#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_USING_DECLS_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_USING_DECLS_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


// Test how `using` declarations import things.
// Generated from class `MR::UsingDecls::A`.
// Derived classes:
//   Direct: (non-virtual)
//     `MR::UsingDecls::B`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_UsingDecls_A MR_UsingDecls_A;

typedef int32_t MR_UsingDecls_A_E;

// Generated from class `MR::UsingDecls::B`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::UsingDecls::A`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_UsingDecls_B MR_UsingDecls_B;

// Returns a pointer to a member variable of class `MR::UsingDecls::A` named `StaticVar`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_UsingDecls_A_Get_StaticVar(void);

// Modifies a member variable of class `MR::UsingDecls::A` named `StaticVar`.
MR_C_API void MR_UsingDecls_A_Set_StaticVar(int32_t value);

// Returns a mutable pointer to a member variable of class `MR::UsingDecls::A` named `StaticVar`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_UsingDecls_A_GetMutable_StaticVar(void);

// Returns a pointer to a member variable of class `MR::UsingDecls::A` named `Field`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_UsingDecls_A_Get_Field(const MR_UsingDecls_A *_this);

// Modifies a member variable of class `MR::UsingDecls::A` named `Field`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_UsingDecls_A_Set_Field(MR_UsingDecls_A *_this, int32_t value);

// Returns a mutable pointer to a member variable of class `MR::UsingDecls::A` named `Field`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_UsingDecls_A_GetMutable_Field(MR_UsingDecls_A *_this);

// Generated from a constructor of class `MR::UsingDecls::A`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_UsingDecls_A_Destroy()` to free it when you're done using it.
MR_C_API MR_UsingDecls_A *MR_UsingDecls_A_ConstructFromAnother(const MR_UsingDecls_A *_other);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_UsingDecls_A *MR_UsingDecls_A_OffsetPtr(const MR_UsingDecls_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_UsingDecls_A *MR_UsingDecls_A_OffsetMutablePtr(MR_UsingDecls_A *ptr, ptrdiff_t i);

// Downcasts an instance of `MR::UsingDecls::A` to a derived class `MR::UsingDecls::B`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_UsingDecls_B *MR_UsingDecls_A_StaticDowncastTo_MR_UsingDecls_B(const MR_UsingDecls_A *object);

// Downcasts an instance of `MR::UsingDecls::A` to a derived class `MR::UsingDecls::B`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_UsingDecls_B *MR_UsingDecls_A_MutableStaticDowncastTo_MR_UsingDecls_B(MR_UsingDecls_A *object);

// Generated from a constructor of class `MR::UsingDecls::A`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_UsingDecls_A_Destroy()` to free it when you're done using it.
MR_C_API MR_UsingDecls_A *MR_UsingDecls_A_Construct(int32_t _1);

// Destroys a heap-allocated instance of `MR_UsingDecls_A`. Does nothing if the pointer is null.
MR_C_API void MR_UsingDecls_A_Destroy(const MR_UsingDecls_A *_this);

// Destroys a heap-allocated array of `MR_UsingDecls_A`. Does nothing if the pointer is null.
MR_C_API void MR_UsingDecls_A_DestroyArray(const MR_UsingDecls_A *_this);

// Generated from a conversion operator of class `MR::UsingDecls::A` to type `int32_t`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_UsingDecls_A_ConvertTo_int32_t(MR_UsingDecls_A *_this);

// Generated from a method of class `MR::UsingDecls::A` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_UsingDecls_A *MR_UsingDecls_A_AssignFromAnother(MR_UsingDecls_A *_this, const MR_UsingDecls_A *_other);

// Generated from a method of class `MR::UsingDecls::A` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_UsingDecls_A_assign(MR_UsingDecls_A *_this, int32_t _1);

// Generated from a method of class `MR::UsingDecls::A` named `Method`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_UsingDecls_A_Method(MR_UsingDecls_A *_this);

// Generated from a method of class `MR::UsingDecls::A` named `StaticFunc`.
MR_C_API void MR_UsingDecls_A_StaticFunc(void);

// Generated from a constructor of class `MR::UsingDecls::B`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_UsingDecls_B_Destroy()` to free it when you're done using it.
MR_C_API MR_UsingDecls_B *MR_UsingDecls_B_ConstructFromAnother(const MR_UsingDecls_B *_other);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_UsingDecls_B *MR_UsingDecls_B_OffsetPtr(const MR_UsingDecls_B *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_UsingDecls_B *MR_UsingDecls_B_OffsetMutablePtr(MR_UsingDecls_B *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::UsingDecls::B` to its base class `MR::UsingDecls::A`.
// This version is acting on mutable pointers.
MR_C_API const MR_UsingDecls_A *MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A(const MR_UsingDecls_B *object);

// Upcasts an instance of `MR::UsingDecls::B` to its base class `MR::UsingDecls::A`.
MR_C_API MR_UsingDecls_A *MR_UsingDecls_B_MutableUpcastTo_MR_UsingDecls_A(MR_UsingDecls_B *object);

// Destroys a heap-allocated instance of `MR_UsingDecls_B`. Does nothing if the pointer is null.
MR_C_API void MR_UsingDecls_B_Destroy(const MR_UsingDecls_B *_this);

// Destroys a heap-allocated array of `MR_UsingDecls_B`. Does nothing if the pointer is null.
MR_C_API void MR_UsingDecls_B_DestroyArray(const MR_UsingDecls_B *_this);

// Generated from a method of class `MR::UsingDecls::B` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_UsingDecls_B *MR_UsingDecls_B_AssignFromAnother(MR_UsingDecls_B *_this, const MR_UsingDecls_B *_other);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_USING_DECLS_H
