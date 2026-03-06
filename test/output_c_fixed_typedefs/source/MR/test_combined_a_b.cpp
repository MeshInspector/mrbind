#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_combined_a_b.h"

#include <input/A/a.h>
#include <input/B/b.h>
#include <input/MR/test_combined_a_b.h>

#include <utility>
#include <vector>


MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *MR_GetCombinedVecAB(void)
{
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>(::MR::GetCombinedVecAB());
}

