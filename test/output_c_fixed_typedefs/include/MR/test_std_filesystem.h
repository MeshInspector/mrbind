#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_filesystem_path MR_C_std_filesystem_path; // Defined in `#include <std_filesystem_path.h>`.


// Generated from function `MR::StdFilesystem::GetPath`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_filesystem_path_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_filesystem_path *MR_StdFilesystem_GetPath(void);

// Generated from function `MR::StdFilesystem::SetPath`.
// Parameter `_1` is a UTF-8 encoded filesystem path.
MR_C_API void MR_StdFilesystem_SetPath(const char *_1, const char *_1_end);

// Generated from function `MR::StdFilesystem::SetPathConstRef`.
// Parameter `_1` is a UTF-8 encoded filesystem path.
MR_C_API void MR_StdFilesystem_SetPathConstRef(const char *_1, const char *_1_end);

// Generated from function `MR::StdFilesystem::SetPathDefTrivial`.
// Parameter `_1` is a UTF-8 encoded filesystem path.
// Parameter `_1` has a default argument: `{}`, pass a null pointer to both it and `_1_end` to use it.
MR_C_API void MR_StdFilesystem_SetPathDefTrivial(const char *_1, const char *_1_end);

// Generated from function `MR::StdFilesystem::SetPathDef`.
// Parameter `_1` is a UTF-8 encoded filesystem path.
// Parameter `_1` has a default argument: `"hmm"`, pass a null pointer to both it and `_1_end` to use it.
MR_C_API void MR_StdFilesystem_SetPathDef(const char *_1, const char *_1_end);

#ifdef __cplusplus
} // extern "C"
#endif


// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <std_filesystem_path.h>
