#pragma once

#include <exports.h>
#include <pass_by.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/// Generated from C++ container `std::vector<int>`.
typedef struct MR_C_std_vector_int MR_C_std_vector_int;

/// Constructs an empty (default-constructed) instance.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int *MR_C_std_vector_int_DefaultConstruct(void);

/// Constructs a copy of another instance. The source remains alive.
/// Returns an instance allocated on the heap! Must call `MR_C_std_vector_int_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_int *MR_C_std_vector_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
MR_C_API void MR_C_std_vector_int_AssignFromAnother(MR_C_std_vector_int *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int *other);

/// Destroys a heap-allocated instance of `std::vector<int>`.
MR_C_API void MR_C_std_vector_int_Destroy(MR_C_std_vector_int *_this);

/// The number of elements.
MR_C_API size_t MR_C_std_vector_int_Size(const MR_C_std_vector_int *_this);

/// Returns true if the size is zero.
MR_C_API bool MR_C_std_vector_int_IsEmpty(const MR_C_std_vector_int *_this);

/// Resizes the container. The new elements if any are zeroed.
MR_C_API void MR_C_std_vector_int_Resize(MR_C_std_vector_int *_this, size_t new_size);

/// Removes all elements from the container.
MR_C_API void MR_C_std_vector_int_Clear(MR_C_std_vector_int *_this);

/// The memory capacity, measued in the number of elements.
MR_C_API size_t MR_C_std_vector_int_Capacity(const MR_C_std_vector_int *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
MR_C_API void MR_C_std_vector_int_Reserve(MR_C_std_vector_int *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
MR_C_API void MR_C_std_vector_int_ShrinkToFit(MR_C_std_vector_int *_this);

/// The element at a specific index, read-only.
MR_C_API const int *MR_C_std_vector_int_At(const MR_C_std_vector_int *_this, size_t i);

/// The element at a specific index, mutable.
MR_C_API int *MR_C_std_vector_int_MutableAt(MR_C_std_vector_int *_this, size_t i);

/// The first element or null if empty, read-only.
MR_C_API const int *MR_C_std_vector_int_Front(const MR_C_std_vector_int *_this);

/// The first element or null if empty, mutable.
MR_C_API int *MR_C_std_vector_int_MutableFront(MR_C_std_vector_int *_this);

/// The last element or null if empty, read-only.
MR_C_API const int *MR_C_std_vector_int_Back(const MR_C_std_vector_int *_this);

/// The last element or null if empty, mutable.
MR_C_API int *MR_C_std_vector_int_MutableBack(MR_C_std_vector_int *_this);

/// Returns a pointer to the continuous storage that holds all elements, read-only.
MR_C_API const int *MR_C_std_vector_int_Data(const MR_C_std_vector_int *_this);

/// Returns a pointer to the continuous storage that holds all elements, mutable.
MR_C_API int *MR_C_std_vector_int_MutableData(MR_C_std_vector_int *_this);

/// Inserts a new element at the end.
MR_C_API void MR_C_std_vector_int_PushBack(MR_C_std_vector_int *_this, int new_elem);

/// Removes one element from the end.
MR_C_API void MR_C_std_vector_int_PopBack(MR_C_std_vector_int *_this);

#ifdef __cplusplus
} // extern "C"
#endif
