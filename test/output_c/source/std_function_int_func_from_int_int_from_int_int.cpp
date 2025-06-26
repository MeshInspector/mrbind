#include "std_function_int_func_from_int_int_from_int_int.h"

#include <__mrbind_c_details.h>

#include <functional>
#include <stdexcept>


MR_C_std_function_int_func_from_int_int_from_int_int *MR_C_std_function_int_func_from_int_int_from_int_int_DefaultConstruct(void)
{
    return (MR_C_std_function_int_func_from_int_int_from_int_int *)new std::function<int(int, int)>(std::function<int(int, int)>());
}

MR_C_std_function_int_func_from_int_int_from_int_int *MR_C_std_function_int_func_from_int_int_from_int_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_function_int_func_from_int_int_from_int_int *)(new std::function<int(int, int)>[num_elems]{});
}

MR_C_std_function_int_func_from_int_int_from_int_int *MR_C_std_function_int_func_from_int_int_from_int_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_function_int_func_from_int_int_from_int_int *other)
{
    return (MR_C_std_function_int_func_from_int_int_from_int_int *)new std::function<int(int, int)>(std::function<int(int, int)>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int(int, int)>) MRBINDC_CLASSARG_COPY(other, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int(int, int)>) MRBINDC_CLASSARG_END(other, std::function<int(int, int)>))
    ));
}

void MR_C_std_function_int_func_from_int_int_from_int_int_AssignFromAnother(MR_C_std_function_int_func_from_int_int_from_int_int *_this, MR_C_PassBy other_pass_by, MR_C_std_function_int_func_from_int_int_from_int_int *other)
{
    (_this ? *(std::function<int(int, int)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::function<int(int, int)>) MRBINDC_CLASSARG_COPY(other, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_MOVE(other, (std::function<int(int, int)>), std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::function<int(int, int)>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::function<int(int, int)>) MRBINDC_CLASSARG_END(other, std::function<int(int, int)>))
    );
}

void MR_C_std_function_int_func_from_int_int_from_int_int_Destroy(MR_C_std_function_int_func_from_int_int_from_int_int *_this)
{
    delete ((std::function<int(int, int)> *)_this);
}

void MR_C_std_function_int_func_from_int_int_from_int_int_DestroyArray(MR_C_std_function_int_func_from_int_int_from_int_int *_this)
{
    delete[] ((std::function<int(int, int)> *)_this);
}

const MR_C_std_function_int_func_from_int_int_from_int_int *MR_C_std_function_int_func_from_int_int_from_int_int_OffsetPtr(const MR_C_std_function_int_func_from_int_int_from_int_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_function_int_func_from_int_int_from_int_int *)(((const std::function<int(int, int)> *)ptr) + i);
}

MR_C_std_function_int_func_from_int_int_from_int_int *MR_C_std_function_int_func_from_int_int_from_int_int_OffsetMutablePtr(MR_C_std_function_int_func_from_int_int_from_int_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_function_int_func_from_int_int_from_int_int *)(((std::function<int(int, int)> *)ptr) + i);
}

void MR_C_std_function_int_func_from_int_int_from_int_int_Assign(MR_C_std_function_int_func_from_int_int_from_int_int *_this, int (*func)(int _1, int _2))
{
    (_this ? *(std::function<int(int, int)> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = [_f = func](int _1, int _2) -> int
    {
        decltype(auto) _return_value = _f(
            _1,
            _2
        );
        return _return_value;
    };
}

