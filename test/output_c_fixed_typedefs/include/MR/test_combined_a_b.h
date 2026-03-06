#ifndef MR_C_DETAIL_INCLUDED_MR_TEST_COMBINED_A_B_H
#define MR_C_DETAIL_INCLUDED_MR_TEST_COMBINED_A_B_H

#pragma push_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include <exports.h>
#pragma pop_macro("MR_C_DISABLE_CONVENIENCE_INCLUDES")

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB; // Defined in `#include <AB/std_vector_std_pair_MR_SeparateA_MR_SeparateB.h>`.


// Generated from function `MR::GetCombinedVecAB`.
// Never returns null. Returns an instance allocated on the heap! Must call `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_Destroy()` to free it when you're done using it.
MR_C_API MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *MR_GetCombinedVecAB(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // MR_C_DETAIL_INCLUDED_MR_TEST_COMBINED_A_B_H

#if !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_COMBINED_A_B_H_2)
#define MR_C_DETAIL_INCLUDED_MR_TEST_COMBINED_A_B_H_2

// Convenience includes for types mentioned in this header. They are here at the bottom to make circular includes harmless.

#include <AB/std_vector_std_pair_MR_SeparateA_MR_SeparateB.h>

#endif // !defined(MR_C_DISABLE_CONVENIENCE_INCLUDES) && !defined(MR_C_DETAIL_INCLUDED_MR_TEST_COMBINED_A_B_H_2)
