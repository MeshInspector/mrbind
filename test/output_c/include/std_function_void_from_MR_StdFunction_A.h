#pragma once

#include <common.h>
#include <exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_StdFunction_A MR_StdFunction_A; // Defined in `#include <MR/test_std_function.h>`.


/// Stores a functor of type: `void(MR::StdFunction::A)`. Possibly stateful.
/// Supported `MR_C_PassBy` modes: `MR_C_PassBy_DefaultConstruct`, `MR_C_PassBy_Copy`, `MR_C_PassBy_Move` (and `MR_C_PassBy_DefaultArgument` and `MR_C_PassBy_NoObject` if supported by the callee).
typedef struct MR_C_std_function_void_from_MR_StdFunction_A MR_C_std_function_void_from_MR_StdFunction_A;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_void_from_MR_StdFunction_A_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_C_std_function_void_from_MR_StdFunction_A_DestroyArray()`.
/// Use `MR_C_std_function_void_from_MR_StdFunction_A_OffsetMutablePtr()` and `MR_C_std_function_void_from_MR_StdFunction_A_OffsetPtr()` to access the array elements.
MR_C_API MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// The reference to the parameter `other` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_void_from_MR_StdFunction_A_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_void_from_MR_StdFunction_A *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `other` might be preserved in this object.
/// When this function is called, this object will drop any object references it held previously.
MR_C_API void MR_C_std_function_void_from_MR_StdFunction_A_AssignFromAnother(MR_C_std_function_void_from_MR_StdFunction_A *_this, MR_C_PassBy other_pass_by, MR_C_std_function_void_from_MR_StdFunction_A *other);

/// Destroys a heap-allocated instance of `MR_C_std_function_void_from_MR_StdFunction_A`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_void_from_MR_StdFunction_A_Destroy(const MR_C_std_function_void_from_MR_StdFunction_A *_this);

/// Destroys a heap-allocated array of `MR_C_std_function_void_from_MR_StdFunction_A`. Does nothing if the pointer is null.
MR_C_API void MR_C_std_function_void_from_MR_StdFunction_A_DestroyArray(const MR_C_std_function_void_from_MR_StdFunction_A *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API const MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_OffsetPtr(const MR_C_std_function_void_from_MR_StdFunction_A *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
/// The reference to the parameter `ptr` might be preserved in the return value.
MR_C_API MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_OffsetMutablePtr(MR_C_std_function_void_from_MR_StdFunction_A *ptr, ptrdiff_t i);

/// Returns true if this instance stores a callable, as opposed to being null.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API bool MR_C_std_function_void_from_MR_StdFunction_A_has_value(const MR_C_std_function_void_from_MR_StdFunction_A *_this);

/// Destroys the stored callable, making this instance null.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_function_void_from_MR_StdFunction_A_reset(MR_C_std_function_void_from_MR_StdFunction_A *_this);

/// Calls the stored callable.
/// Parameter `_this` can not be null. It is a single object.
MR_C_API void MR_C_std_function_void_from_MR_StdFunction_A_call(const MR_C_std_function_void_from_MR_StdFunction_A *_this, MR_C_PassBy _1_pass_by, MR_StdFunction_A *_1);

/// Construct a stateless function.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_void_from_MR_StdFunction_A_Destroy()` to free it when you're done using it.
/// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
MR_C_API MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_ConstructStateless(void (*func)(MR_StdFunction_A *_1));

/// Assign a stateless function.
/// Parameter `_this` can not be null. It is a single object.
/// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
MR_C_API void MR_C_std_function_void_from_MR_StdFunction_A_Assign(MR_C_std_function_void_from_MR_StdFunction_A *_this, void (*func)(MR_StdFunction_A *_1));

/// Construct a function with additional state.
/// The reference to the parameter `userdata` might be preserved in the constructed object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_function_void_from_MR_StdFunction_A_Destroy()` to free it when you're done using it.
/// When this function is called, this object will drop any object references it held previously.
/// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// Parameter `userdata` is propagated to `func`.
/// Parameter `postcall_callback` can be null. If specified, it will always be called right after `func`, after constructing the underlying C++ return value.
///   If null, then `func` will always receive null `_cleanup_value`. If specified, then `_cleanup_value` will not be null.
///   `func` can write to `*_cleanup_value`, and that value will be forwarded to the `postcall_callback` call.
///   Writing null has no special effect, `postcall_callback` will be called regardless. `*_cleanup_value` is null by default.
///   The intent is to handle cases where in C++ the callback returns by value, but the corresponding C callback returns a pointer,
///     which makes implementing the callback difficult, as you would need to either leak the pointer, or it would dangle.
///   With this callback, you can leak the pointer from `func`, and then clean it up in `postcall_callback`.
///   Another way to handle this is by using `MR_C_PassBy_MoveAndDestroy`,but it is less flexible than the callback,
///     since it forces an extra move in some cases. This might make no sense to C users,
///     but it helps when wrapping C bindings in another language. If you're using `MR_C_PassBy_Copy` or `MR_C_PassBy_Move`,
///     then in C you'd expect your pointer to outlive the callback, so all is good. But when wrapping C in a managed language where objects are shared references,
///     you might not know if the object you're returning is the last reference or not, so you'd have to either copy/move it into a temporary,
///     which you would then `MR_C_PassBy_MoveAndDestroy` (which adds an extra move), or introduce a null state to your objects
///     to `MR_C_PassBy_MoveAndDestroy` the original pointer (having the null state might be undesirable).
///     And attempting to use `MR_C_PassBy_Copy` or `MR_C_PassBy_Move` could dangle your pointer, if the returned object
///     in your language is a local or temporary, and is the last reference to the underlying C/C++ object.
///     What `postcall_callback` allows you to do is to preserve a reference to the returned object in your language, so that it lives long enough
///     for the contents to be copied into the returned C++ object.
/// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.
///   The `_this_userdata` parameter will never be null.
///   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.
///   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.
///   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.
///   Both `*_this_userdata` and `_other_userdata` will never be null at the same time.
MR_C_API MR_C_std_function_void_from_MR_StdFunction_A *MR_C_std_function_void_from_MR_StdFunction_A_ConstructEx(void (*func)(MR_StdFunction_A *_1, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata));

/// Assign a function with additional state.
/// Parameter `_this` can not be null. It is a single object.
/// The reference to the parameter `userdata` might be preserved in this object.
/// When this function is called, this object will drop any object references it held previously.
/// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// Parameter `userdata` is propagated to `func`.
/// Parameter `postcall_callback` can be null. If specified, it will always be called right after `func`, after constructing the underlying C++ return value.
///   If null, then `func` will always receive null `_cleanup_value`. If specified, then `_cleanup_value` will not be null.
///   `func` can write to `*_cleanup_value`, and that value will be forwarded to the `postcall_callback` call.
///   Writing null has no special effect, `postcall_callback` will be called regardless. `*_cleanup_value` is null by default.
///   The intent is to handle cases where in C++ the callback returns by value, but the corresponding C callback returns a pointer,
///     which makes implementing the callback difficult, as you would need to either leak the pointer, or it would dangle.
///   With this callback, you can leak the pointer from `func`, and then clean it up in `postcall_callback`.
///   Another way to handle this is by using `MR_C_PassBy_MoveAndDestroy`,but it is less flexible than the callback,
///     since it forces an extra move in some cases. This might make no sense to C users,
///     but it helps when wrapping C bindings in another language. If you're using `MR_C_PassBy_Copy` or `MR_C_PassBy_Move`,
///     then in C you'd expect your pointer to outlive the callback, so all is good. But when wrapping C in a managed language where objects are shared references,
///     you might not know if the object you're returning is the last reference or not, so you'd have to either copy/move it into a temporary,
///     which you would then `MR_C_PassBy_MoveAndDestroy` (which adds an extra move), or introduce a null state to your objects
///     to `MR_C_PassBy_MoveAndDestroy` the original pointer (having the null state might be undesirable).
///     And attempting to use `MR_C_PassBy_Copy` or `MR_C_PassBy_Move` could dangle your pointer, if the returned object
///     in your language is a local or temporary, and is the last reference to the underlying C/C++ object.
///     What `postcall_callback` allows you to do is to preserve a reference to the returned object in your language, so that it lives long enough
///     for the contents to be copied into the returned C++ object.
/// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.
///   The `_this_userdata` parameter will never be null.
///   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.
///   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.
///   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.
///   Both `*_this_userdata` and `_other_userdata` will never be null at the same time.
MR_C_API void MR_C_std_function_void_from_MR_StdFunction_A_AssignEx(MR_C_std_function_void_from_MR_StdFunction_A *_this, void (*func)(MR_StdFunction_A *_1, void *_userdata, void **_cleanup_value), void *userdata, void (*postcall_callback)(void *_userdata, void *_cleanup_value), void (*userdata_callback)(void **_this_userdata, void *_other_userdata));

#ifdef __cplusplus
} // extern "C"
#endif
