#pragma once

#include <exports.h>
#include <pass_by.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_A MR_A;

/// Generated from C++ container `std::vector<MR::A>`.
typedef struct MR_C_std_vector_MR_A MR_C_std_vector_MR_A;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_MR_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_MR_A *MR_C_std_vector_MR_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
MR_C_API void MR_C_std_vector_MR_A_AssignFromAnother(MR_C_std_vector_MR_A *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_A *other);

/// Destroys a heap-allocated instance of `std::vector<MR::A>`.
MR_C_API void MR_C_std_vector_MR_A_Destroy(MR_C_std_vector_MR_A *_this);

/// The number of elements.
MR_C_API size_t MR_C_std_vector_MR_A_Size(const MR_C_std_vector_MR_A *_this);

/// Returns true if the size is zero.
MR_C_API bool MR_C_std_vector_MR_A_IsEmpty(const MR_C_std_vector_MR_A *_this);

/// Resizes the container. The new elements if any are zeroed.
MR_C_API void MR_C_std_vector_MR_A_Resize(MR_C_std_vector_MR_A *_this, size_t new_size);

/// Removes all elements from the container.
MR_C_API void MR_C_std_vector_MR_A_Clear(MR_C_std_vector_MR_A *_this);

/// The memory capacity, measued in the number of elements.
MR_C_API size_t MR_C_std_vector_MR_A_Capacity(const MR_C_std_vector_MR_A *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
MR_C_API void MR_C_std_vector_MR_A_Reserve(MR_C_std_vector_MR_A *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
MR_C_API void MR_C_std_vector_MR_A_ShrinkToFit(MR_C_std_vector_MR_A *_this);

/// The element at a specific index, read-only.
/// The returned pointer is non-owning, do NOT destroy it.
MR_C_API const MR_A *MR_C_std_vector_MR_A_At(const MR_C_std_vector_MR_A *_this, size_t i);

/// The element at a specific index, mutable.
/// The returned pointer is non-owning, do NOT destroy it.
MR_C_API MR_A *MR_C_std_vector_MR_A_MutableAt(MR_C_std_vector_MR_A *_this, size_t i);

/// The first element or null if empty, read-only.
MR_C_API const MR_A *MR_C_std_vector_MR_A_Front(const MR_C_std_vector_MR_A *_this);

/// The first element or null if empty, mutable.
MR_C_API MR_A *MR_C_std_vector_MR_A_MutableFront(MR_C_std_vector_MR_A *_this);

/// The last element or null if empty, read-only.
MR_C_API const MR_A *MR_C_std_vector_MR_A_Back(const MR_C_std_vector_MR_A *_this);

/// The last element or null if empty, mutable.
MR_C_API MR_A *MR_C_std_vector_MR_A_MutableBack(MR_C_std_vector_MR_A *_this);

/// Inserts a new element at the end.
MR_C_API void MR_C_std_vector_MR_A_PushBack(MR_C_std_vector_MR_A *_this, MR_C_PassBy new_elem_pass_by, MR_A *new_elem);

/// Removes one element from the end.
MR_C_API void MR_C_std_vector_MR_A_PopBack(MR_C_std_vector_MR_A *_this);

#ifdef __cplusplus
} // extern "C"
#endif
