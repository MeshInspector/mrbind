#pragma once

#include <common.h>
#include <exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Bases_A MR_Bases_A; // Defined below in this file.
typedef struct MR_Bases_B MR_Bases_B; // Defined below in this file.
typedef struct MR_Bases_B2 MR_Bases_B2; // Defined below in this file.
typedef struct MR_Bases_C MR_Bases_C; // Defined below in this file.
typedef struct MR_Bases_D MR_Bases_D; // Defined below in this file.
typedef struct MR_Bases_D2 MR_Bases_D2; // Defined below in this file.
typedef struct MR_Bases_D3 MR_Bases_D3; // Defined below in this file.
typedef struct MR_Bases_E MR_Bases_E; // Defined below in this file.
typedef struct MR_Bases_F MR_Bases_F; // Defined below in this file.
typedef struct MR_Bases_G MR_Bases_G; // Defined below in this file.
typedef struct MR_Bases_H MR_Bases_H; // Defined below in this file.
typedef struct MR_Bases_I MR_Bases_I; // Defined below in this file.


/// Generated from class `MR::Bases::A`.
/// Classes derived from this:
///   Virtually:
///     `MR::Bases::I`
///   Directly: (non-virtually)
///     `MR::Bases::B`
///     `MR::Bases::C`
///     `MR::Bases::H`
///   Indirectly: (non-virtually)
///     `MR::Bases::B2`
///   Ambiguously:
///     `MR::Bases::D`
///     `MR::Bases::D2`
///     `MR::Bases::D3`
typedef struct MR_Bases_A MR_Bases_A;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_A_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_A *MR_Bases_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_A_DestroyArray()`.
/// Use `MR_Bases_A_OffsetMutablePtr()` and `MR_Bases_A_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_A *MR_Bases_A_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_A *MR_Bases_A_OffsetPtr(const MR_Bases_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_A *MR_Bases_A_OffsetMutablePtr(MR_Bases_A *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::Bases::A` to a derived class `MR::Bases::B`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_B *MR_Bases_A_StaticDowncastTo_MR_Bases_B(const MR_Bases_A *object);

/// Downcasts an instance of `MR::Bases::A` to a derived class `MR::Bases::B`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_Bases_B *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_B(MR_Bases_A *object);

/// Downcasts an instance of `MR::Bases::A` to a derived class `MR::Bases::B2`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_B2 *MR_Bases_A_StaticDowncastTo_MR_Bases_B2(const MR_Bases_A *object);

/// Downcasts an instance of `MR::Bases::A` to a derived class `MR::Bases::B2`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_Bases_B2 *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_B2(MR_Bases_A *object);

/// Downcasts an instance of `MR::Bases::A` to a derived class `MR::Bases::C`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_C *MR_Bases_A_StaticDowncastTo_MR_Bases_C(const MR_Bases_A *object);

/// Downcasts an instance of `MR::Bases::A` to a derived class `MR::Bases::C`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_Bases_C *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_C(MR_Bases_A *object);

/// Downcasts an instance of `MR::Bases::A` to a derived class `MR::Bases::H`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_H *MR_Bases_A_StaticDowncastTo_MR_Bases_H(const MR_Bases_A *object);

/// Downcasts an instance of `MR::Bases::A` to a derived class `MR::Bases::H`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_Bases_H *MR_Bases_A_MutableStaticDowncastTo_MR_Bases_H(MR_Bases_A *object);

/// Generated from a constructor of class `MR::Bases::A`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_A_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_A *MR_Bases_A_ConstructFromAnother(const MR_Bases_A *_other);

/// Generated from a method of class `MR::Bases::A` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_A *MR_Bases_A_AssignFromAnother(MR_Bases_A *_this, const MR_Bases_A *_other);

/// Destroys a heap-allocated instance of `MR_Bases_A`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_A_Destroy(const MR_Bases_A *_this);

/// Destroys a heap-allocated array of `MR_Bases_A`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_A_DestroyArray(const MR_Bases_A *_this);

/// Generated from class `MR::Bases::B`.
/// Inherits from:
///   Directly: (non-virtually)
///     `MR::Bases::A`
/// Classes derived from this:
///   Directly: (non-virtually)
///     `MR::Bases::B2`
///     `MR::Bases::D`
///     `MR::Bases::D2`
///     `MR::Bases::D3`
typedef struct MR_Bases_B MR_Bases_B;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_B_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_B *MR_Bases_B_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_B_DestroyArray()`.
/// Use `MR_Bases_B_OffsetMutablePtr()` and `MR_Bases_B_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_B *MR_Bases_B_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_B *MR_Bases_B_OffsetPtr(const MR_Bases_B *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_B *MR_Bases_B_OffsetMutablePtr(MR_Bases_B *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Bases::B` to its base class `MR::Bases::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_A *MR_Bases_B_UpcastTo_MR_Bases_A(const MR_Bases_B *object);

/// Upcasts an instance of `MR::Bases::B` to its base class `MR::Bases::A`.
MR_C_API MR_Bases_A *MR_Bases_B_MutableUpcastTo_MR_Bases_A(MR_Bases_B *object);

/// Downcasts an instance of `MR::Bases::B` to a derived class `MR::Bases::B2`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_B2 *MR_Bases_B_StaticDowncastTo_MR_Bases_B2(const MR_Bases_B *object);

/// Downcasts an instance of `MR::Bases::B` to a derived class `MR::Bases::B2`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_Bases_B2 *MR_Bases_B_MutableStaticDowncastTo_MR_Bases_B2(MR_Bases_B *object);

/// Downcasts an instance of `MR::Bases::B` to a derived class `MR::Bases::D`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_D *MR_Bases_B_StaticDowncastTo_MR_Bases_D(const MR_Bases_B *object);

/// Downcasts an instance of `MR::Bases::B` to a derived class `MR::Bases::D`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_Bases_D *MR_Bases_B_MutableStaticDowncastTo_MR_Bases_D(MR_Bases_B *object);

/// Downcasts an instance of `MR::Bases::B` to a derived class `MR::Bases::D2`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_D2 *MR_Bases_B_StaticDowncastTo_MR_Bases_D2(const MR_Bases_B *object);

/// Downcasts an instance of `MR::Bases::B` to a derived class `MR::Bases::D2`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_Bases_D2 *MR_Bases_B_MutableStaticDowncastTo_MR_Bases_D2(MR_Bases_B *object);

/// Downcasts an instance of `MR::Bases::B` to a derived class `MR::Bases::D3`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_D3 *MR_Bases_B_StaticDowncastTo_MR_Bases_D3(const MR_Bases_B *object);

/// Downcasts an instance of `MR::Bases::B` to a derived class `MR::Bases::D3`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_Bases_D3 *MR_Bases_B_MutableStaticDowncastTo_MR_Bases_D3(MR_Bases_B *object);

/// Generated from a constructor of class `MR::Bases::B`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_B_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_B *MR_Bases_B_ConstructFromAnother(const MR_Bases_B *_other);

/// Generated from a method of class `MR::Bases::B` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_B *MR_Bases_B_AssignFromAnother(MR_Bases_B *_this, const MR_Bases_B *_other);

/// Destroys a heap-allocated instance of `MR_Bases_B`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_B_Destroy(const MR_Bases_B *_this);

/// Destroys a heap-allocated array of `MR_Bases_B`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_B_DestroyArray(const MR_Bases_B *_this);

/// Generated from class `MR::Bases::B2`.
/// Inherits from:
///   Directly: (non-virtually)
///     `MR::Bases::B`
///   Indirectly: (non-virtually)
///     `MR::Bases::A`
typedef struct MR_Bases_B2 MR_Bases_B2;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_B2_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_B2 *MR_Bases_B2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_B2_DestroyArray()`.
/// Use `MR_Bases_B2_OffsetMutablePtr()` and `MR_Bases_B2_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_B2 *MR_Bases_B2_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_B2 *MR_Bases_B2_OffsetPtr(const MR_Bases_B2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_B2 *MR_Bases_B2_OffsetMutablePtr(MR_Bases_B2 *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Bases::B2` to its base class `MR::Bases::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_A *MR_Bases_B2_UpcastTo_MR_Bases_A(const MR_Bases_B2 *object);

/// Upcasts an instance of `MR::Bases::B2` to its base class `MR::Bases::A`.
MR_C_API MR_Bases_A *MR_Bases_B2_MutableUpcastTo_MR_Bases_A(MR_Bases_B2 *object);

/// Upcasts an instance of `MR::Bases::B2` to its base class `MR::Bases::B`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_B *MR_Bases_B2_UpcastTo_MR_Bases_B(const MR_Bases_B2 *object);

/// Upcasts an instance of `MR::Bases::B2` to its base class `MR::Bases::B`.
MR_C_API MR_Bases_B *MR_Bases_B2_MutableUpcastTo_MR_Bases_B(MR_Bases_B2 *object);

/// Generated from a constructor of class `MR::Bases::B2`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_B2_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_B2 *MR_Bases_B2_ConstructFromAnother(const MR_Bases_B2 *_other);

/// Generated from a method of class `MR::Bases::B2` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_B2 *MR_Bases_B2_AssignFromAnother(MR_Bases_B2 *_this, const MR_Bases_B2 *_other);

/// Destroys a heap-allocated instance of `MR_Bases_B2`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_B2_Destroy(const MR_Bases_B2 *_this);

/// Destroys a heap-allocated array of `MR_Bases_B2`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_B2_DestroyArray(const MR_Bases_B2 *_this);

/// Generated from class `MR::Bases::C`.
/// Inherits from:
///   Directly: (non-virtually)
///     `MR::Bases::A`
/// Classes derived from this:
///   Directly: (non-virtually)
///     `MR::Bases::D`
typedef struct MR_Bases_C MR_Bases_C;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_C_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_C *MR_Bases_C_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_C_DestroyArray()`.
/// Use `MR_Bases_C_OffsetMutablePtr()` and `MR_Bases_C_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_C *MR_Bases_C_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_C *MR_Bases_C_OffsetPtr(const MR_Bases_C *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_C *MR_Bases_C_OffsetMutablePtr(MR_Bases_C *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Bases::C` to its base class `MR::Bases::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_A *MR_Bases_C_UpcastTo_MR_Bases_A(const MR_Bases_C *object);

/// Upcasts an instance of `MR::Bases::C` to its base class `MR::Bases::A`.
MR_C_API MR_Bases_A *MR_Bases_C_MutableUpcastTo_MR_Bases_A(MR_Bases_C *object);

/// Downcasts an instance of `MR::Bases::C` to a derived class `MR::Bases::D`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_D *MR_Bases_C_StaticDowncastTo_MR_Bases_D(const MR_Bases_C *object);

/// Downcasts an instance of `MR::Bases::C` to a derived class `MR::Bases::D`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_Bases_D *MR_Bases_C_MutableStaticDowncastTo_MR_Bases_D(MR_Bases_C *object);

/// Generated from a constructor of class `MR::Bases::C`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_C_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_C *MR_Bases_C_ConstructFromAnother(const MR_Bases_C *_other);

/// Generated from a method of class `MR::Bases::C` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_C *MR_Bases_C_AssignFromAnother(MR_Bases_C *_this, const MR_Bases_C *_other);

/// Destroys a heap-allocated instance of `MR_Bases_C`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_C_Destroy(const MR_Bases_C *_this);

/// Destroys a heap-allocated array of `MR_Bases_C`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_C_DestroyArray(const MR_Bases_C *_this);

/// Generated from class `MR::Bases::D`.
/// Inherits from:
///   Directly: (non-virtually)
///     `MR::Bases::B`
///     `MR::Bases::C`
///   Ambiguously:
///     `MR::Bases::A`
typedef struct MR_Bases_D MR_Bases_D;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_D_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_D *MR_Bases_D_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_D_DestroyArray()`.
/// Use `MR_Bases_D_OffsetMutablePtr()` and `MR_Bases_D_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_D *MR_Bases_D_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_D *MR_Bases_D_OffsetPtr(const MR_Bases_D *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_D *MR_Bases_D_OffsetMutablePtr(MR_Bases_D *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Bases::D` to its base class `MR::Bases::B`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_B *MR_Bases_D_UpcastTo_MR_Bases_B(const MR_Bases_D *object);

/// Upcasts an instance of `MR::Bases::D` to its base class `MR::Bases::B`.
MR_C_API MR_Bases_B *MR_Bases_D_MutableUpcastTo_MR_Bases_B(MR_Bases_D *object);

/// Upcasts an instance of `MR::Bases::D` to its base class `MR::Bases::C`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_C *MR_Bases_D_UpcastTo_MR_Bases_C(const MR_Bases_D *object);

/// Upcasts an instance of `MR::Bases::D` to its base class `MR::Bases::C`.
MR_C_API MR_Bases_C *MR_Bases_D_MutableUpcastTo_MR_Bases_C(MR_Bases_D *object);

/// Generated from a constructor of class `MR::Bases::D`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_D_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_D *MR_Bases_D_ConstructFromAnother(const MR_Bases_D *_other);

/// Generated from a method of class `MR::Bases::D` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_D *MR_Bases_D_AssignFromAnother(MR_Bases_D *_this, const MR_Bases_D *_other);

/// Destroys a heap-allocated instance of `MR_Bases_D`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_D_Destroy(const MR_Bases_D *_this);

/// Destroys a heap-allocated array of `MR_Bases_D`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_D_DestroyArray(const MR_Bases_D *_this);

/// Generated from class `MR::Bases::D2`.
/// Inherits from:
///   Directly: (non-virtually)
///     `MR::Bases::B`
///   Ambiguously:
///     `MR::Bases::A`
typedef struct MR_Bases_D2 MR_Bases_D2;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_D2_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_D2 *MR_Bases_D2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_D2_DestroyArray()`.
/// Use `MR_Bases_D2_OffsetMutablePtr()` and `MR_Bases_D2_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_D2 *MR_Bases_D2_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_D2 *MR_Bases_D2_OffsetPtr(const MR_Bases_D2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_D2 *MR_Bases_D2_OffsetMutablePtr(MR_Bases_D2 *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Bases::D2` to its base class `MR::Bases::B`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_B *MR_Bases_D2_UpcastTo_MR_Bases_B(const MR_Bases_D2 *object);

/// Upcasts an instance of `MR::Bases::D2` to its base class `MR::Bases::B`.
MR_C_API MR_Bases_B *MR_Bases_D2_MutableUpcastTo_MR_Bases_B(MR_Bases_D2 *object);

/// Generated from a constructor of class `MR::Bases::D2`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_D2_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_D2 *MR_Bases_D2_ConstructFromAnother(const MR_Bases_D2 *_other);

/// Generated from a method of class `MR::Bases::D2` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_D2 *MR_Bases_D2_AssignFromAnother(MR_Bases_D2 *_this, const MR_Bases_D2 *_other);

/// Destroys a heap-allocated instance of `MR_Bases_D2`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_D2_Destroy(const MR_Bases_D2 *_this);

/// Destroys a heap-allocated array of `MR_Bases_D2`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_D2_DestroyArray(const MR_Bases_D2 *_this);

/// Generated from class `MR::Bases::D3`.
/// Inherits from:
///   Directly: (non-virtually)
///     `MR::Bases::B`
///   Ambiguously:
///     `MR::Bases::A`
typedef struct MR_Bases_D3 MR_Bases_D3;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_D3_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_D3 *MR_Bases_D3_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_D3_DestroyArray()`.
/// Use `MR_Bases_D3_OffsetMutablePtr()` and `MR_Bases_D3_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_D3 *MR_Bases_D3_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_D3 *MR_Bases_D3_OffsetPtr(const MR_Bases_D3 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_D3 *MR_Bases_D3_OffsetMutablePtr(MR_Bases_D3 *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Bases::D3` to its base class `MR::Bases::B`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_B *MR_Bases_D3_UpcastTo_MR_Bases_B(const MR_Bases_D3 *object);

/// Upcasts an instance of `MR::Bases::D3` to its base class `MR::Bases::B`.
MR_C_API MR_Bases_B *MR_Bases_D3_MutableUpcastTo_MR_Bases_B(MR_Bases_D3 *object);

/// Generated from a constructor of class `MR::Bases::D3`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_D3_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_D3 *MR_Bases_D3_ConstructFromAnother(const MR_Bases_D3 *_other);

/// Generated from a method of class `MR::Bases::D3` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_D3 *MR_Bases_D3_AssignFromAnother(MR_Bases_D3 *_this, const MR_Bases_D3 *_other);

/// Destroys a heap-allocated instance of `MR_Bases_D3`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_D3_Destroy(const MR_Bases_D3 *_this);

/// Destroys a heap-allocated array of `MR_Bases_D3`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_D3_DestroyArray(const MR_Bases_D3 *_this);

/// Generated from class `MR::Bases::E`.
/// Classes derived from this:
///   Virtually:
///     `MR::Bases::G`
///     `MR::Bases::H`
///     `MR::Bases::I`
///   Directly: (non-virtually)
///     `MR::Bases::F`
typedef struct MR_Bases_E MR_Bases_E;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_E_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_E *MR_Bases_E_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_E_DestroyArray()`.
/// Use `MR_Bases_E_OffsetMutablePtr()` and `MR_Bases_E_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_E *MR_Bases_E_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_E *MR_Bases_E_OffsetPtr(const MR_Bases_E *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_E *MR_Bases_E_OffsetMutablePtr(MR_Bases_E *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::Bases::E` to a derived class `MR::Bases::F`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_F *MR_Bases_E_StaticDowncastTo_MR_Bases_F(const MR_Bases_E *object);

/// Downcasts an instance of `MR::Bases::E` to a derived class `MR::Bases::F`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MR_C_API MR_Bases_F *MR_Bases_E_MutableStaticDowncastTo_MR_Bases_F(MR_Bases_E *object);

/// Generated from a constructor of class `MR::Bases::E`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_E_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_E *MR_Bases_E_ConstructFromAnother(const MR_Bases_E *_other);

/// Generated from a method of class `MR::Bases::E` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_E *MR_Bases_E_AssignFromAnother(MR_Bases_E *_this, const MR_Bases_E *_other);

/// Destroys a heap-allocated instance of `MR_Bases_E`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_E_Destroy(const MR_Bases_E *_this);

/// Destroys a heap-allocated array of `MR_Bases_E`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_E_DestroyArray(const MR_Bases_E *_this);

/// Generated from class `MR::Bases::F`.
/// Inherits from:
///   Directly: (non-virtually)
///     `MR::Bases::E`
/// Classes derived from this:
///   Virtually:
///     `MR::Bases::G`
///     `MR::Bases::H`
///     `MR::Bases::I`
typedef struct MR_Bases_F MR_Bases_F;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_F_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_F *MR_Bases_F_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_F_DestroyArray()`.
/// Use `MR_Bases_F_OffsetMutablePtr()` and `MR_Bases_F_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_F *MR_Bases_F_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_F *MR_Bases_F_OffsetPtr(const MR_Bases_F *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_F *MR_Bases_F_OffsetMutablePtr(MR_Bases_F *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Bases::F` to its base class `MR::Bases::E`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_E *MR_Bases_F_UpcastTo_MR_Bases_E(const MR_Bases_F *object);

/// Upcasts an instance of `MR::Bases::F` to its base class `MR::Bases::E`.
MR_C_API MR_Bases_E *MR_Bases_F_MutableUpcastTo_MR_Bases_E(MR_Bases_F *object);

/// Generated from a constructor of class `MR::Bases::F`.
/// Parameter `_other` can not be null.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_F_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_F *MR_Bases_F_ConstructFromAnother(const MR_Bases_F *_other);

/// Generated from a method of class `MR::Bases::F` named `operator=`.
/// Parameter `_this` can not be null.
/// Parameter `_other` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_F *MR_Bases_F_AssignFromAnother(MR_Bases_F *_this, const MR_Bases_F *_other);

/// Destroys a heap-allocated instance of `MR_Bases_F`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_F_Destroy(const MR_Bases_F *_this);

/// Destroys a heap-allocated array of `MR_Bases_F`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_F_DestroyArray(const MR_Bases_F *_this);

/// Generated from class `MR::Bases::G`.
/// Inherits from:
///   Virtually:
///     `MR::Bases::E`
///     `MR::Bases::F`
typedef struct MR_Bases_G MR_Bases_G;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_G_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_G *MR_Bases_G_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_G_DestroyArray()`.
/// Use `MR_Bases_G_OffsetMutablePtr()` and `MR_Bases_G_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_G *MR_Bases_G_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_G *MR_Bases_G_OffsetPtr(const MR_Bases_G *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_G *MR_Bases_G_OffsetMutablePtr(MR_Bases_G *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Bases::G` to its base class `MR::Bases::E`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_E *MR_Bases_G_UpcastTo_MR_Bases_E(const MR_Bases_G *object);

/// Upcasts an instance of `MR::Bases::G` to its base class `MR::Bases::E`.
MR_C_API MR_Bases_E *MR_Bases_G_MutableUpcastTo_MR_Bases_E(MR_Bases_G *object);

/// Upcasts an instance of `MR::Bases::G` to its base class `MR::Bases::F`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_F *MR_Bases_G_UpcastTo_MR_Bases_F(const MR_Bases_G *object);

/// Upcasts an instance of `MR::Bases::G` to its base class `MR::Bases::F`.
MR_C_API MR_Bases_F *MR_Bases_G_MutableUpcastTo_MR_Bases_F(MR_Bases_G *object);

/// Generated from a constructor of class `MR::Bases::G`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_G_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_G *MR_Bases_G_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Bases_G *_other);

/// Generated from a method of class `MR::Bases::G` named `operator=`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_G *MR_Bases_G_AssignFromAnother(MR_Bases_G *_this, MR_C_PassBy _other_pass_by, MR_Bases_G *_other);

/// Destroys a heap-allocated instance of `MR_Bases_G`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_G_Destroy(const MR_Bases_G *_this);

/// Destroys a heap-allocated array of `MR_Bases_G`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_G_DestroyArray(const MR_Bases_G *_this);

/// Generated from class `MR::Bases::H`.
/// Inherits from:
///   Virtually:
///     `MR::Bases::E`
///     `MR::Bases::F`
///   Directly: (non-virtually)
///     `MR::Bases::A`
typedef struct MR_Bases_H MR_Bases_H;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_H_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_H *MR_Bases_H_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_H_DestroyArray()`.
/// Use `MR_Bases_H_OffsetMutablePtr()` and `MR_Bases_H_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_H *MR_Bases_H_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_H *MR_Bases_H_OffsetPtr(const MR_Bases_H *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_H *MR_Bases_H_OffsetMutablePtr(MR_Bases_H *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Bases::H` to its base class `MR::Bases::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_A *MR_Bases_H_UpcastTo_MR_Bases_A(const MR_Bases_H *object);

/// Upcasts an instance of `MR::Bases::H` to its base class `MR::Bases::A`.
MR_C_API MR_Bases_A *MR_Bases_H_MutableUpcastTo_MR_Bases_A(MR_Bases_H *object);

/// Upcasts an instance of `MR::Bases::H` to its base class `MR::Bases::E`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_E *MR_Bases_H_UpcastTo_MR_Bases_E(const MR_Bases_H *object);

/// Upcasts an instance of `MR::Bases::H` to its base class `MR::Bases::E`.
MR_C_API MR_Bases_E *MR_Bases_H_MutableUpcastTo_MR_Bases_E(MR_Bases_H *object);

/// Upcasts an instance of `MR::Bases::H` to its base class `MR::Bases::F`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_F *MR_Bases_H_UpcastTo_MR_Bases_F(const MR_Bases_H *object);

/// Upcasts an instance of `MR::Bases::H` to its base class `MR::Bases::F`.
MR_C_API MR_Bases_F *MR_Bases_H_MutableUpcastTo_MR_Bases_F(MR_Bases_H *object);

/// Generated from a constructor of class `MR::Bases::H`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_H_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_H *MR_Bases_H_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Bases_H *_other);

/// Generated from a method of class `MR::Bases::H` named `operator=`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_H *MR_Bases_H_AssignFromAnother(MR_Bases_H *_this, MR_C_PassBy _other_pass_by, MR_Bases_H *_other);

/// Destroys a heap-allocated instance of `MR_Bases_H`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_H_Destroy(const MR_Bases_H *_this);

/// Destroys a heap-allocated array of `MR_Bases_H`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_H_DestroyArray(const MR_Bases_H *_this);

/// Generated from class `MR::Bases::I`.
/// Inherits from:
///   Virtually:
///     `MR::Bases::A`
///     `MR::Bases::E`
///     `MR::Bases::F`
typedef struct MR_Bases_I MR_Bases_I;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_I_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_I *MR_Bases_I_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Bases_I_DestroyArray()`.
/// Use `MR_Bases_I_OffsetMutablePtr()` and `MR_Bases_I_OffsetPtr()` to access the array elements.
MR_C_API MR_Bases_I *MR_Bases_I_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API const MR_Bases_I *MR_Bases_I_OffsetPtr(const MR_Bases_I *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MR_C_API MR_Bases_I *MR_Bases_I_OffsetMutablePtr(MR_Bases_I *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Bases::I` to its base class `MR::Bases::A`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_A *MR_Bases_I_UpcastTo_MR_Bases_A(const MR_Bases_I *object);

/// Upcasts an instance of `MR::Bases::I` to its base class `MR::Bases::A`.
MR_C_API MR_Bases_A *MR_Bases_I_MutableUpcastTo_MR_Bases_A(MR_Bases_I *object);

/// Upcasts an instance of `MR::Bases::I` to its base class `MR::Bases::E`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_E *MR_Bases_I_UpcastTo_MR_Bases_E(const MR_Bases_I *object);

/// Upcasts an instance of `MR::Bases::I` to its base class `MR::Bases::E`.
MR_C_API MR_Bases_E *MR_Bases_I_MutableUpcastTo_MR_Bases_E(MR_Bases_I *object);

/// Upcasts an instance of `MR::Bases::I` to its base class `MR::Bases::F`.
/// This version is acting on mutable pointers.
MR_C_API const MR_Bases_F *MR_Bases_I_UpcastTo_MR_Bases_F(const MR_Bases_I *object);

/// Upcasts an instance of `MR::Bases::I` to its base class `MR::Bases::F`.
MR_C_API MR_Bases_F *MR_Bases_I_MutableUpcastTo_MR_Bases_F(MR_Bases_I *object);

/// Generated from a constructor of class `MR::Bases::I`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Bases_I_Destroy()` to free it when you're done using it.
MR_C_API MR_Bases_I *MR_Bases_I_ConstructFromAnother(MR_C_PassBy _other_pass_by, MR_Bases_I *_other);

/// Generated from a method of class `MR::Bases::I` named `operator=`.
/// Parameter `_this` can not be null.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_Bases_I *MR_Bases_I_AssignFromAnother(MR_Bases_I *_this, MR_C_PassBy _other_pass_by, MR_Bases_I *_other);

/// Destroys a heap-allocated instance of `MR_Bases_I`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_I_Destroy(const MR_Bases_I *_this);

/// Destroys a heap-allocated array of `MR_Bases_I`. Does nothing if the pointer is null.
MR_C_API void MR_Bases_I_DestroyArray(const MR_Bases_I *_this);

#ifdef __cplusplus
} // extern "C"
#endif
