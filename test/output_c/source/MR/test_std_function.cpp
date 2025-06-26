#include "MR/test_std_function.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_function.h>


void MR_StdFunction_foo_std_function_int_func_from_int_int(MR_C_PassBy _1_pass_by, MR_C_std_function_int_func_from_int_int_from_int_int *_1)
{
    using namespace MR;
    using namespace StdFunction;
    MR::StdFunction::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::function<int(int, int)>) MRBINDC_CLASSARG_COPY(_1, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_MOVE(_1, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::function<int(int, int)>) MRBINDC_CLASSARG_END(_1, std::function<int(int, int)>))
    );
}

void MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E(MR_C_PassBy _1_pass_by, MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *_1)
{
    using namespace MR;
    using namespace StdFunction;
    MR::StdFunction::foo(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_COPY(_1, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_MOVE(_1, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_END(_1, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>))
    );
}

