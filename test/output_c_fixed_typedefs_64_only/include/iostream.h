#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifndef MR_C_DETAIL_TYPEDEF_MR_C_std_ostream
#define MR_C_DETAIL_TYPEDEF_MR_C_std_ostream
/// A C++ output stream.
typedef struct MR_C_std_ostream MR_C_std_ostream;
#endif

#ifndef MR_C_DETAIL_TYPEDEF_MR_C_std_istream
#define MR_C_DETAIL_TYPEDEF_MR_C_std_istream
/// A C++ input stream.
typedef struct MR_C_std_istream MR_C_std_istream;
#endif

/// Returns the `stdout` stream.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_ostream *MR_C_GetStdCout(void);

/// Returns the `stderr` stream, buffered.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_ostream *MR_C_GetStdCerr(void);

/// Returns the `stderr` stream, unbuffered.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_ostream *MR_C_GetStdClog(void);

/// Returns the `stdin` stream.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MR_C_API MR_C_std_istream *MR_C_GetStdCin(void);

#ifdef __cplusplus
} // extern "C"
#endif
