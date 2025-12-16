#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_INCLUDES_FOR_ENUM_CONSTANTS_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_INCLUDES_FOR_ENUM_CONSTANTS_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1; // Defined in `#include <MR/test_includes_for_enum_constants_2.h>`.


// Make sure that the `.cpp` implementation file includes the header for `E` correctly.
// Generated from function `MR::IncludesForEnumConstants::foo`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy()` to free it when you're done using it.
MR_C_API MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1 *MR_IncludesForEnumConstants_foo(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_INCLUDES_FOR_ENUM_CONSTANTS_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_INCLUDES_FOR_ENUM_CONSTANTS_H_2)
#define MR_C_DETAIL_INCLUDED_MR_TEST_INCLUDES_FOR_ENUM_CONSTANTS_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <MR/test_includes_for_enum_constants_2.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_INCLUDES_FOR_ENUM_CONSTANTS_H_2)
