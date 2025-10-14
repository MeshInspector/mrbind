#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_COPY_INHERITED_MEMBERS_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_COPY_INHERITED_MEMBERS_H

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


// Generated from class `MR::CopyInheritedMembers::A`.
// Derived classes:
//   Virtual:
//     `MR::CopyInheritedMembers::G`
//     `MR::CopyInheritedMembers::H`
//     `MR::CopyInheritedMembers::I`
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::C`
//     `MR::CopyInheritedMembers::E`
//     `MR::CopyInheritedMembers::F`
//     `MR::CopyInheritedMembers::J`
//   Ambiguous:
//     `MR::CopyInheritedMembers::K`
//     `MR::CopyInheritedMembers::L`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_A MR_CopyInheritedMembers_A;

// Generated from class `MR::CopyInheritedMembers::B`.
// Derived classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::C`
//     `MR::CopyInheritedMembers::D`
//   Indirect: (non-virtual)
//     `MR::CopyInheritedMembers::E`
//     `MR::CopyInheritedMembers::F`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_B MR_CopyInheritedMembers_B;

// Generated from class `MR::CopyInheritedMembers::C`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::A`
//     `MR::CopyInheritedMembers::B`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_C MR_CopyInheritedMembers_C;

// Generated from class `MR::CopyInheritedMembers::D`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::B`
// Derived classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::E`
//     `MR::CopyInheritedMembers::F`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_D MR_CopyInheritedMembers_D;

// Generated from class `MR::CopyInheritedMembers::E`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::A`
//     `MR::CopyInheritedMembers::D`
//   Indirect: (non-virtual)
//     `MR::CopyInheritedMembers::B`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_E MR_CopyInheritedMembers_E;

// Generated from class `MR::CopyInheritedMembers::F`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::D`
//     `MR::CopyInheritedMembers::A`
//   Indirect: (non-virtual)
//     `MR::CopyInheritedMembers::B`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_F MR_CopyInheritedMembers_F;

// Generated from class `MR::CopyInheritedMembers::G`.
// Base classes:
//   Virtual:
//     `MR::CopyInheritedMembers::A`
// Derived classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::H`
//     `MR::CopyInheritedMembers::I`
//     `MR::CopyInheritedMembers::K`
//     `MR::CopyInheritedMembers::L`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_G MR_CopyInheritedMembers_G;

// Generated from class `MR::CopyInheritedMembers::H`.
// Base classes:
//   Virtual:
//     `MR::CopyInheritedMembers::A`
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::G`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_H MR_CopyInheritedMembers_H;

// Generated from class `MR::CopyInheritedMembers::I`.
// Base classes:
//   Virtual:
//     `MR::CopyInheritedMembers::A`
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::G`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_I MR_CopyInheritedMembers_I;

// Generated from class `MR::CopyInheritedMembers::J`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::A`
// Derived classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::K`
//     `MR::CopyInheritedMembers::L`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_J MR_CopyInheritedMembers_J;

// Generated from class `MR::CopyInheritedMembers::K`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::G`
//     `MR::CopyInheritedMembers::J`
//   Ambiguous:
//     `MR::CopyInheritedMembers::A`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_K MR_CopyInheritedMembers_K;

// Generated from class `MR::CopyInheritedMembers::L`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::J`
//     `MR::CopyInheritedMembers::G`
//   Ambiguous:
//     `MR::CopyInheritedMembers::A`
// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_CopyInheritedMembers_L MR_CopyInheritedMembers_L;

// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::A` named `StaticField`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_CopyInheritedMembers_A_Get_StaticField(void);

// Modifies a member variable of class `MR::CopyInheritedMembers::A` named `StaticField`.
MR_C_API void MR_CopyInheritedMembers_A_Set_StaticField(int32_t value);

// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::A` named `StaticField`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_CopyInheritedMembers_A_GetMutable_StaticField(void);

// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::A` named `Field`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_CopyInheritedMembers_A_Get_Field(const MR_CopyInheritedMembers_A *_this);

// Modifies a member variable of class `MR::CopyInheritedMembers::A` named `Field`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CopyInheritedMembers_A_Set_Field(MR_CopyInheritedMembers_A *_this, int32_t value);

// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::A` named `Field`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_CopyInheritedMembers_A_GetMutable_Field(MR_CopyInheritedMembers_A *_this);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_A_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_A_DestroyArray()`.
// Use `MR_CopyInheritedMembers_A_OffsetMutablePtr()` and `MR_CopyInheritedMembers_A_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_DefaultConstructArray(size_t num_elems);

// Constructs `MR::CopyInheritedMembers::A` elementwise.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_A_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_ConstructFrom(int32_t Field);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_OffsetPtr(const MR_CopyInheritedMembers_A *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_OffsetMutablePtr(MR_CopyInheritedMembers_A *ptr, ptrdiff_t i);

// Downcasts an instance of `MR::CopyInheritedMembers::A` to a derived class `MR::CopyInheritedMembers::C`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_C(const MR_CopyInheritedMembers_A *object);

// Downcasts an instance of `MR::CopyInheritedMembers::A` to a derived class `MR::CopyInheritedMembers::C`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_C(MR_CopyInheritedMembers_A *object);

// Downcasts an instance of `MR::CopyInheritedMembers::A` to a derived class `MR::CopyInheritedMembers::E`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_E(const MR_CopyInheritedMembers_A *object);

// Downcasts an instance of `MR::CopyInheritedMembers::A` to a derived class `MR::CopyInheritedMembers::E`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_E(MR_CopyInheritedMembers_A *object);

// Downcasts an instance of `MR::CopyInheritedMembers::A` to a derived class `MR::CopyInheritedMembers::F`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_F(const MR_CopyInheritedMembers_A *object);

// Downcasts an instance of `MR::CopyInheritedMembers::A` to a derived class `MR::CopyInheritedMembers::F`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_F(MR_CopyInheritedMembers_A *object);

// Downcasts an instance of `MR::CopyInheritedMembers::A` to a derived class `MR::CopyInheritedMembers::J`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_A_StaticDowncastTo_MR_CopyInheritedMembers_J(const MR_CopyInheritedMembers_A *object);

// Downcasts an instance of `MR::CopyInheritedMembers::A` to a derived class `MR::CopyInheritedMembers::J`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_A_MutableStaticDowncastTo_MR_CopyInheritedMembers_J(MR_CopyInheritedMembers_A *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::A`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_A_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_ConstructFromAnother(const MR_CopyInheritedMembers_A *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_A`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_A_Destroy(const MR_CopyInheritedMembers_A *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_A`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_A_DestroyArray(const MR_CopyInheritedMembers_A *_this);

// Generated from a conversion operator of class `MR::CopyInheritedMembers::A` to type `int32_t`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_CopyInheritedMembers_A_ConvertTo_int32_t(MR_CopyInheritedMembers_A *_this);

// Generated from a method of class `MR::CopyInheritedMembers::A` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_A_AssignFromAnother(MR_CopyInheritedMembers_A *_this, const MR_CopyInheritedMembers_A *_other);

// Generated from a method of class `MR::CopyInheritedMembers::A` named `Method`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CopyInheritedMembers_A_Method(MR_CopyInheritedMembers_A *_this);

// Generated from a method of class `MR::CopyInheritedMembers::A` named `StaticFunc`.
MR_C_API void MR_CopyInheritedMembers_A_StaticFunc(void);

// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::B` named `StaticField`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_CopyInheritedMembers_B_Get_StaticField(void);

// Modifies a member variable of class `MR::CopyInheritedMembers::B` named `StaticField`.
MR_C_API void MR_CopyInheritedMembers_B_Set_StaticField(int32_t value);

// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::B` named `StaticField`.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_CopyInheritedMembers_B_GetMutable_StaticField(void);

// Returns a pointer to a member variable of class `MR::CopyInheritedMembers::B` named `Field`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API const int32_t *MR_CopyInheritedMembers_B_Get_Field(const MR_CopyInheritedMembers_B *_this);

// Modifies a member variable of class `MR::CopyInheritedMembers::B` named `Field`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CopyInheritedMembers_B_Set_Field(MR_CopyInheritedMembers_B *_this, int32_t value);

// Returns a mutable pointer to a member variable of class `MR::CopyInheritedMembers::B` named `Field`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API int32_t *MR_CopyInheritedMembers_B_GetMutable_Field(MR_CopyInheritedMembers_B *_this);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_B_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_B_DestroyArray()`.
// Use `MR_CopyInheritedMembers_B_OffsetMutablePtr()` and `MR_CopyInheritedMembers_B_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_DefaultConstructArray(size_t num_elems);

// Constructs `MR::CopyInheritedMembers::B` elementwise.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_B_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_ConstructFrom(int32_t Field);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_OffsetPtr(const MR_CopyInheritedMembers_B *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_OffsetMutablePtr(MR_CopyInheritedMembers_B *ptr, ptrdiff_t i);

// Downcasts an instance of `MR::CopyInheritedMembers::B` to a derived class `MR::CopyInheritedMembers::C`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_C(const MR_CopyInheritedMembers_B *object);

// Downcasts an instance of `MR::CopyInheritedMembers::B` to a derived class `MR::CopyInheritedMembers::C`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_C(MR_CopyInheritedMembers_B *object);

// Downcasts an instance of `MR::CopyInheritedMembers::B` to a derived class `MR::CopyInheritedMembers::D`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_D(const MR_CopyInheritedMembers_B *object);

// Downcasts an instance of `MR::CopyInheritedMembers::B` to a derived class `MR::CopyInheritedMembers::D`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_D(MR_CopyInheritedMembers_B *object);

// Downcasts an instance of `MR::CopyInheritedMembers::B` to a derived class `MR::CopyInheritedMembers::E`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_E(const MR_CopyInheritedMembers_B *object);

// Downcasts an instance of `MR::CopyInheritedMembers::B` to a derived class `MR::CopyInheritedMembers::E`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_E(MR_CopyInheritedMembers_B *object);

// Downcasts an instance of `MR::CopyInheritedMembers::B` to a derived class `MR::CopyInheritedMembers::F`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_B_StaticDowncastTo_MR_CopyInheritedMembers_F(const MR_CopyInheritedMembers_B *object);

// Downcasts an instance of `MR::CopyInheritedMembers::B` to a derived class `MR::CopyInheritedMembers::F`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_B_MutableStaticDowncastTo_MR_CopyInheritedMembers_F(MR_CopyInheritedMembers_B *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::B`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_B_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_ConstructFromAnother(const MR_CopyInheritedMembers_B *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_B`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_B_Destroy(const MR_CopyInheritedMembers_B *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_B`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_B_DestroyArray(const MR_CopyInheritedMembers_B *_this);

// Generated from a conversion operator of class `MR::CopyInheritedMembers::B` to type `int32_t`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API int32_t MR_CopyInheritedMembers_B_ConvertTo_int32_t(MR_CopyInheritedMembers_B *_this);

// Generated from a method of class `MR::CopyInheritedMembers::B` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_B_AssignFromAnother(MR_CopyInheritedMembers_B *_this, const MR_CopyInheritedMembers_B *_other);

// Generated from a method of class `MR::CopyInheritedMembers::B` named `Method`.
// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_CopyInheritedMembers_B_Method(MR_CopyInheritedMembers_B *_this);

// Generated from a method of class `MR::CopyInheritedMembers::B` named `StaticFunc`.
MR_C_API void MR_CopyInheritedMembers_B_StaticFunc(void);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_C_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_C_DestroyArray()`.
// Use `MR_CopyInheritedMembers_C_OffsetMutablePtr()` and `MR_CopyInheritedMembers_C_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_OffsetPtr(const MR_CopyInheritedMembers_C *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_OffsetMutablePtr(MR_CopyInheritedMembers_C *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::CopyInheritedMembers::C` to its base class `MR::CopyInheritedMembers::A`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_C *object);

// Upcasts an instance of `MR::CopyInheritedMembers::C` to its base class `MR::CopyInheritedMembers::A`.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_C *object);

// Upcasts an instance of `MR::CopyInheritedMembers::C` to its base class `MR::CopyInheritedMembers::B`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_C *object);

// Upcasts an instance of `MR::CopyInheritedMembers::C` to its base class `MR::CopyInheritedMembers::B`.
MR_C_API MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_C *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::C`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_C_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_ConstructFromAnother(const MR_CopyInheritedMembers_C *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_C`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_C_Destroy(const MR_CopyInheritedMembers_C *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_C`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_C_DestroyArray(const MR_CopyInheritedMembers_C *_this);

// Generated from a method of class `MR::CopyInheritedMembers::C` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_C *MR_CopyInheritedMembers_C_AssignFromAnother(MR_CopyInheritedMembers_C *_this, const MR_CopyInheritedMembers_C *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_D_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_D_DestroyArray()`.
// Use `MR_CopyInheritedMembers_D_OffsetMutablePtr()` and `MR_CopyInheritedMembers_D_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_OffsetPtr(const MR_CopyInheritedMembers_D *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_OffsetMutablePtr(MR_CopyInheritedMembers_D *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::CopyInheritedMembers::D` to its base class `MR::CopyInheritedMembers::B`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_D *object);

// Upcasts an instance of `MR::CopyInheritedMembers::D` to its base class `MR::CopyInheritedMembers::B`.
MR_C_API MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_D_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_D *object);

// Downcasts an instance of `MR::CopyInheritedMembers::D` to a derived class `MR::CopyInheritedMembers::E`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_D_StaticDowncastTo_MR_CopyInheritedMembers_E(const MR_CopyInheritedMembers_D *object);

// Downcasts an instance of `MR::CopyInheritedMembers::D` to a derived class `MR::CopyInheritedMembers::E`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_D_MutableStaticDowncastTo_MR_CopyInheritedMembers_E(MR_CopyInheritedMembers_D *object);

// Downcasts an instance of `MR::CopyInheritedMembers::D` to a derived class `MR::CopyInheritedMembers::F`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_D_StaticDowncastTo_MR_CopyInheritedMembers_F(const MR_CopyInheritedMembers_D *object);

// Downcasts an instance of `MR::CopyInheritedMembers::D` to a derived class `MR::CopyInheritedMembers::F`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_D_MutableStaticDowncastTo_MR_CopyInheritedMembers_F(MR_CopyInheritedMembers_D *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::D`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_D_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_ConstructFromAnother(const MR_CopyInheritedMembers_D *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_D`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_D_Destroy(const MR_CopyInheritedMembers_D *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_D`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_D_DestroyArray(const MR_CopyInheritedMembers_D *_this);

// Generated from a method of class `MR::CopyInheritedMembers::D` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_D_AssignFromAnother(MR_CopyInheritedMembers_D *_this, const MR_CopyInheritedMembers_D *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_E_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_E_DestroyArray()`.
// Use `MR_CopyInheritedMembers_E_OffsetMutablePtr()` and `MR_CopyInheritedMembers_E_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_OffsetPtr(const MR_CopyInheritedMembers_E *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_OffsetMutablePtr(MR_CopyInheritedMembers_E *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::CopyInheritedMembers::E` to its base class `MR::CopyInheritedMembers::A`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_E *object);

// Upcasts an instance of `MR::CopyInheritedMembers::E` to its base class `MR::CopyInheritedMembers::A`.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_E *object);

// Upcasts an instance of `MR::CopyInheritedMembers::E` to its base class `MR::CopyInheritedMembers::B`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_E *object);

// Upcasts an instance of `MR::CopyInheritedMembers::E` to its base class `MR::CopyInheritedMembers::B`.
MR_C_API MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_E *object);

// Upcasts an instance of `MR::CopyInheritedMembers::E` to its base class `MR::CopyInheritedMembers::D`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D(const MR_CopyInheritedMembers_E *object);

// Upcasts an instance of `MR::CopyInheritedMembers::E` to its base class `MR::CopyInheritedMembers::D`.
MR_C_API MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_D(MR_CopyInheritedMembers_E *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::E`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_E_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_ConstructFromAnother(const MR_CopyInheritedMembers_E *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_E`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_E_Destroy(const MR_CopyInheritedMembers_E *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_E`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_E_DestroyArray(const MR_CopyInheritedMembers_E *_this);

// Generated from a method of class `MR::CopyInheritedMembers::E` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_E *MR_CopyInheritedMembers_E_AssignFromAnother(MR_CopyInheritedMembers_E *_this, const MR_CopyInheritedMembers_E *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_F_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_F_DestroyArray()`.
// Use `MR_CopyInheritedMembers_F_OffsetMutablePtr()` and `MR_CopyInheritedMembers_F_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_OffsetPtr(const MR_CopyInheritedMembers_F *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_OffsetMutablePtr(MR_CopyInheritedMembers_F *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::CopyInheritedMembers::F` to its base class `MR::CopyInheritedMembers::B`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B(const MR_CopyInheritedMembers_F *object);

// Upcasts an instance of `MR::CopyInheritedMembers::F` to its base class `MR::CopyInheritedMembers::B`.
MR_C_API MR_CopyInheritedMembers_B *MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_B(MR_CopyInheritedMembers_F *object);

// Upcasts an instance of `MR::CopyInheritedMembers::F` to its base class `MR::CopyInheritedMembers::D`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D(const MR_CopyInheritedMembers_F *object);

// Upcasts an instance of `MR::CopyInheritedMembers::F` to its base class `MR::CopyInheritedMembers::D`.
MR_C_API MR_CopyInheritedMembers_D *MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_D(MR_CopyInheritedMembers_F *object);

// Upcasts an instance of `MR::CopyInheritedMembers::F` to its base class `MR::CopyInheritedMembers::A`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_F *object);

// Upcasts an instance of `MR::CopyInheritedMembers::F` to its base class `MR::CopyInheritedMembers::A`.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_F *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::F`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_F_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_ConstructFromAnother(const MR_CopyInheritedMembers_F *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_F`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_F_Destroy(const MR_CopyInheritedMembers_F *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_F`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_F_DestroyArray(const MR_CopyInheritedMembers_F *_this);

// Generated from a method of class `MR::CopyInheritedMembers::F` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_F *MR_CopyInheritedMembers_F_AssignFromAnother(MR_CopyInheritedMembers_F *_this, const MR_CopyInheritedMembers_F *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_G_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_G_DestroyArray()`.
// Use `MR_CopyInheritedMembers_G_OffsetMutablePtr()` and `MR_CopyInheritedMembers_G_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_OffsetPtr(const MR_CopyInheritedMembers_G *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_OffsetMutablePtr(MR_CopyInheritedMembers_G *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::CopyInheritedMembers::G` to its base class `MR::CopyInheritedMembers::A`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_G *object);

// Upcasts an instance of `MR::CopyInheritedMembers::G` to its base class `MR::CopyInheritedMembers::A`.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_G_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_G *object);

// Downcasts an instance of `MR::CopyInheritedMembers::G` to a derived class `MR::CopyInheritedMembers::H`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_H(const MR_CopyInheritedMembers_G *object);

// Downcasts an instance of `MR::CopyInheritedMembers::G` to a derived class `MR::CopyInheritedMembers::H`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_H(MR_CopyInheritedMembers_G *object);

// Downcasts an instance of `MR::CopyInheritedMembers::G` to a derived class `MR::CopyInheritedMembers::I`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_I(const MR_CopyInheritedMembers_G *object);

// Downcasts an instance of `MR::CopyInheritedMembers::G` to a derived class `MR::CopyInheritedMembers::I`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_I(MR_CopyInheritedMembers_G *object);

// Downcasts an instance of `MR::CopyInheritedMembers::G` to a derived class `MR::CopyInheritedMembers::K`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_K(const MR_CopyInheritedMembers_G *object);

// Downcasts an instance of `MR::CopyInheritedMembers::G` to a derived class `MR::CopyInheritedMembers::K`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_K(MR_CopyInheritedMembers_G *object);

// Downcasts an instance of `MR::CopyInheritedMembers::G` to a derived class `MR::CopyInheritedMembers::L`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_L(const MR_CopyInheritedMembers_G *object);

// Downcasts an instance of `MR::CopyInheritedMembers::G` to a derived class `MR::CopyInheritedMembers::L`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_L(MR_CopyInheritedMembers_G *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::G`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_G_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_G *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_G`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_G_Destroy(const MR_CopyInheritedMembers_G *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_G`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_G_DestroyArray(const MR_CopyInheritedMembers_G *_this);

// Generated from a method of class `MR::CopyInheritedMembers::G` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_G_AssignFromAnother(MR_CopyInheritedMembers_G *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_G *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_H_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_H_DestroyArray()`.
// Use `MR_CopyInheritedMembers_H_OffsetMutablePtr()` and `MR_CopyInheritedMembers_H_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_OffsetPtr(const MR_CopyInheritedMembers_H *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_OffsetMutablePtr(MR_CopyInheritedMembers_H *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::CopyInheritedMembers::H` to its base class `MR::CopyInheritedMembers::A`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_H *object);

// Upcasts an instance of `MR::CopyInheritedMembers::H` to its base class `MR::CopyInheritedMembers::A`.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_H *object);

// Upcasts an instance of `MR::CopyInheritedMembers::H` to its base class `MR::CopyInheritedMembers::G`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G(const MR_CopyInheritedMembers_H *object);

// Upcasts an instance of `MR::CopyInheritedMembers::H` to its base class `MR::CopyInheritedMembers::G`.
MR_C_API MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_G(MR_CopyInheritedMembers_H *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::H`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_H_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_H *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_H`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_H_Destroy(const MR_CopyInheritedMembers_H *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_H`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_H_DestroyArray(const MR_CopyInheritedMembers_H *_this);

// Generated from a method of class `MR::CopyInheritedMembers::H` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_H *MR_CopyInheritedMembers_H_AssignFromAnother(MR_CopyInheritedMembers_H *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_H *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_I_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_I_DestroyArray()`.
// Use `MR_CopyInheritedMembers_I_OffsetMutablePtr()` and `MR_CopyInheritedMembers_I_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_OffsetPtr(const MR_CopyInheritedMembers_I *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_OffsetMutablePtr(MR_CopyInheritedMembers_I *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::CopyInheritedMembers::I` to its base class `MR::CopyInheritedMembers::A`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_I *object);

// Upcasts an instance of `MR::CopyInheritedMembers::I` to its base class `MR::CopyInheritedMembers::A`.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_I *object);

// Upcasts an instance of `MR::CopyInheritedMembers::I` to its base class `MR::CopyInheritedMembers::G`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G(const MR_CopyInheritedMembers_I *object);

// Upcasts an instance of `MR::CopyInheritedMembers::I` to its base class `MR::CopyInheritedMembers::G`.
MR_C_API MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_G(MR_CopyInheritedMembers_I *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::I`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_I_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_I *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_I`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_I_Destroy(const MR_CopyInheritedMembers_I *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_I`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_I_DestroyArray(const MR_CopyInheritedMembers_I *_this);

// Generated from a method of class `MR::CopyInheritedMembers::I` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_I *MR_CopyInheritedMembers_I_AssignFromAnother(MR_CopyInheritedMembers_I *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_I *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_J_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_J_DestroyArray()`.
// Use `MR_CopyInheritedMembers_J_OffsetMutablePtr()` and `MR_CopyInheritedMembers_J_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_OffsetPtr(const MR_CopyInheritedMembers_J *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_OffsetMutablePtr(MR_CopyInheritedMembers_J *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::CopyInheritedMembers::J` to its base class `MR::CopyInheritedMembers::A`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A(const MR_CopyInheritedMembers_J *object);

// Upcasts an instance of `MR::CopyInheritedMembers::J` to its base class `MR::CopyInheritedMembers::A`.
MR_C_API MR_CopyInheritedMembers_A *MR_CopyInheritedMembers_J_MutableUpcastTo_MR_CopyInheritedMembers_A(MR_CopyInheritedMembers_J *object);

// Downcasts an instance of `MR::CopyInheritedMembers::J` to a derived class `MR::CopyInheritedMembers::K`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_J_StaticDowncastTo_MR_CopyInheritedMembers_K(const MR_CopyInheritedMembers_J *object);

// Downcasts an instance of `MR::CopyInheritedMembers::J` to a derived class `MR::CopyInheritedMembers::K`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_J_MutableStaticDowncastTo_MR_CopyInheritedMembers_K(MR_CopyInheritedMembers_J *object);

// Downcasts an instance of `MR::CopyInheritedMembers::J` to a derived class `MR::CopyInheritedMembers::L`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_J_StaticDowncastTo_MR_CopyInheritedMembers_L(const MR_CopyInheritedMembers_J *object);

// Downcasts an instance of `MR::CopyInheritedMembers::J` to a derived class `MR::CopyInheritedMembers::L`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_J_MutableStaticDowncastTo_MR_CopyInheritedMembers_L(MR_CopyInheritedMembers_J *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::J`.
// Parameter `_other` can not be null. It is a single object.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_J_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_ConstructFromAnother(const MR_CopyInheritedMembers_J *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_J`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_J_Destroy(const MR_CopyInheritedMembers_J *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_J`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_J_DestroyArray(const MR_CopyInheritedMembers_J *_this);

// Generated from a method of class `MR::CopyInheritedMembers::J` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// Parameter `_other` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_J_AssignFromAnother(MR_CopyInheritedMembers_J *_this, const MR_CopyInheritedMembers_J *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_K_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_K_DestroyArray()`.
// Use `MR_CopyInheritedMembers_K_OffsetMutablePtr()` and `MR_CopyInheritedMembers_K_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_OffsetPtr(const MR_CopyInheritedMembers_K *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_OffsetMutablePtr(MR_CopyInheritedMembers_K *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::CopyInheritedMembers::K` to its base class `MR::CopyInheritedMembers::G`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_G(const MR_CopyInheritedMembers_K *object);

// Upcasts an instance of `MR::CopyInheritedMembers::K` to its base class `MR::CopyInheritedMembers::G`.
MR_C_API MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_K_MutableUpcastTo_MR_CopyInheritedMembers_G(MR_CopyInheritedMembers_K *object);

// Upcasts an instance of `MR::CopyInheritedMembers::K` to its base class `MR::CopyInheritedMembers::J`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_J(const MR_CopyInheritedMembers_K *object);

// Upcasts an instance of `MR::CopyInheritedMembers::K` to its base class `MR::CopyInheritedMembers::J`.
MR_C_API MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_K_MutableUpcastTo_MR_CopyInheritedMembers_J(MR_CopyInheritedMembers_K *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::K`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_K_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_K *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_K`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_K_Destroy(const MR_CopyInheritedMembers_K *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_K`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_K_DestroyArray(const MR_CopyInheritedMembers_K *_this);

// Generated from a method of class `MR::CopyInheritedMembers::K` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_K_AssignFromAnother(MR_CopyInheritedMembers_K *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_K *_other);

// Constructs an empty (default-constructed) instance.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_L_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_DefaultConstruct(void);

// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
// The array must be destroyed using `MR_CopyInheritedMembers_L_DestroyArray()`.
// Use `MR_CopyInheritedMembers_L_OffsetMutablePtr()` and `MR_CopyInheritedMembers_L_OffsetPtr()` to access the array elements.
MR_C_API MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_DefaultConstructArray(size_t num_elems);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_OffsetPtr(const MR_CopyInheritedMembers_L *ptr, ptrdiff_t i);

// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_OffsetMutablePtr(MR_CopyInheritedMembers_L *ptr, ptrdiff_t i);

// Upcasts an instance of `MR::CopyInheritedMembers::L` to its base class `MR::CopyInheritedMembers::J`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_J(const MR_CopyInheritedMembers_L *object);

// Upcasts an instance of `MR::CopyInheritedMembers::L` to its base class `MR::CopyInheritedMembers::J`.
MR_C_API MR_CopyInheritedMembers_J *MR_CopyInheritedMembers_L_MutableUpcastTo_MR_CopyInheritedMembers_J(MR_CopyInheritedMembers_L *object);

// Upcasts an instance of `MR::CopyInheritedMembers::L` to its base class `MR::CopyInheritedMembers::G`.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_G(const MR_CopyInheritedMembers_L *object);

// Upcasts an instance of `MR::CopyInheritedMembers::L` to its base class `MR::CopyInheritedMembers::G`.
MR_C_API MR_CopyInheritedMembers_G *MR_CopyInheritedMembers_L_MutableUpcastTo_MR_CopyInheritedMembers_G(MR_CopyInheritedMembers_L *object);

// Generated from a constructor of class `MR::CopyInheritedMembers::L`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_CopyInheritedMembers_L_Destroy()` to free it when you're done using it.
MR_C_API MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_L *_other);

// Destroys a heap-allocated instance of `MR_CopyInheritedMembers_L`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_L_Destroy(const MR_CopyInheritedMembers_L *_this);

// Destroys a heap-allocated array of `MR_CopyInheritedMembers_L`. Does nothing if the pointer is null.
MR_C_API void MR_CopyInheritedMembers_L_DestroyArray(const MR_CopyInheritedMembers_L *_this);

// Generated from a method of class `MR::CopyInheritedMembers::L` named `operator=`.
// Parameter `_this` can not be null. It is a single object.
// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_CopyInheritedMembers_L *MR_CopyInheritedMembers_L_AssignFromAnother(MR_CopyInheritedMembers_L *_this, MR_C_PassBy _other_pass_by, MR_CopyInheritedMembers_L *_other);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_COPY_INHERITED_MEMBERS_H
