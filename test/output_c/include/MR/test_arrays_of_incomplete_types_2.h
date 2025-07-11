#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif


// Can't use an opaque struct as an array element, because, well, it's opaque. But a enum should work.
typedef enum MR_IncompleteArrayElemType_E
{
    MR_IncompleteArrayElemType_E_zero // The original C++ enum has no constants. Since C doesn't support empty enums, this dummy constant was added.
} MR_IncompleteArrayElemType_E;

/// Generated from function `MR::IncompleteArrayElemType::bar`.
MR_C_API void MR_IncompleteArrayElemType_bar(MR_IncompleteArrayElemType_E (*_1)[4]);

#ifdef __cplusplus
} // extern "C"
#endif
