#include "std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_function.h>

#include <functional>
#include <stdexcept>


MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E_DefaultConstruct(void)
{
    return (MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *)new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(std::function<MR::StdFunction::E(int, MR::StdFunction::E)>());
}

MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *)(new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>[num_elems]{});
}

MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *other)
{
    return (MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *)new std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(std::function<MR::StdFunction::E(int, MR::StdFunction::E)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_END(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>))
    ));
}

void MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E_AssignFromAnother(MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *_this, MR_C_PassBy other_pass_by, MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *other)
{
    (_this ? *(std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_COPY(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_MOVE(other, (std::function<MR::StdFunction::E(int, MR::StdFunction::E)>), std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>) MRBINDC_CLASSARG_END(other, std::function<MR::StdFunction::E(int, MR::StdFunction::E)>))
    );
}

void MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E_Destroy(MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *_this)
{
    delete ((std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)_this);
}

void MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E_DestroyArray(MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *_this)
{
    delete[] ((std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)_this);
}

const MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E_OffsetPtr(const MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *)(((const std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)ptr) + i);
}

MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E_OffsetMutablePtr(MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *)(((std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)ptr) + i);
}

void MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E_Assign(MR_C_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E_from_int_MR_StdFunction_E *_this, MR_StdFunction_E (*func)(int _1, MR_StdFunction_E _2))
{
    (_this ? *(std::function<MR::StdFunction::E(int, MR::StdFunction::E)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = [_f = func](int _1, MR::StdFunction::E _2) -> MR::StdFunction::E
    {
        decltype(auto) _return_value = _f(
            _1,
            (MR_StdFunction_E)(_2)
        );
        return ((MR::StdFunction::E)_return_value);
    };
}

