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
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::J`
//   Ambiguous:
//     `MR::CopyInheritedMembers::K`
typedef struct MR_CopyInheritedMembers_A MR_CopyInheritedMembers_A;

// struct D : B {};
// struct E : A, D {}; // This gets nothing.
// struct F : D, A {}; // This gets nothing.
// Generated from class `MR::CopyInheritedMembers::G`.
// Base classes:
//   Virtual:
//     `MR::CopyInheritedMembers::A`
// Derived classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::K`
typedef struct MR_CopyInheritedMembers_G MR_CopyInheritedMembers_G;

// struct H : G, virtual A {}; // This gets everything from `A`.
// struct I : virtual A, G {}; // This gets everything from `A`.
// Generated from class `MR::CopyInheritedMembers::J`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::A`
// Derived classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::K`
typedef struct MR_CopyInheritedMembers_J MR_CopyInheritedMembers_J;

// Generated from class `MR::CopyInheritedMembers::K`.
// Base classes:
//   Direct: (non-virtual)
//     `MR::CopyInheritedMembers::G`
//     `MR::CopyInheritedMembers::J`
//   Ambiguous:
//     `MR::CopyInheritedMembers::A`
typedef struct MR_CopyInheritedMembers_K MR_CopyInheritedMembers_K;

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

// Downcasts an instance of `MR::CopyInheritedMembers::G` to a derived class `MR::CopyInheritedMembers::K`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
// This version is acting on mutable pointers.
MR_C_API const MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_G_StaticDowncastTo_MR_CopyInheritedMembers_K(const MR_CopyInheritedMembers_G *object);

// Downcasts an instance of `MR::CopyInheritedMembers::G` to a derived class `MR::CopyInheritedMembers::K`.
// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_CopyInheritedMembers_K *MR_CopyInheritedMembers_G_MutableStaticDowncastTo_MR_CopyInheritedMembers_K(MR_CopyInheritedMembers_G *object);

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

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_COPY_INHERITED_MEMBERS_H
