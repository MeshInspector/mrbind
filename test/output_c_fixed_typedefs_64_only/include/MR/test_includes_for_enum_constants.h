#pragma once

#include <exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1; // Defined in `#include <MR/test_includes_for_enum_constants_2.h>`.


// Make sure that the `.cpp` implementation file includes the header for `E` correctly.
/// Generated from function `MR::IncludesForEnumConstants::foo`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy()` to free it when you're done using it.
MR_C_API MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_foo(void);

#ifdef __cplusplus
} // extern "C"
#endif
