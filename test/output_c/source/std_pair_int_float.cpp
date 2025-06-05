#include "std_pair_int_float.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <utility>


MR_C_std_pair_int_float *MR_C_std_pair_int_float_DefaultConstruct(void)
{
    return (MR_C_std_pair_int_float *)new std::pair<int, float>(std::pair<int, float>());
}

MR_C_std_pair_int_float *MR_C_std_pair_int_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_pair_int_float *other)
{
    return (MR_C_std_pair_int_float *)new std::pair<int, float>(std::pair<int, float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::pair<int, float>) MRBINDC_CLASSARG_COPY(other, std::pair<int, float>) MRBINDC_CLASSARG_MOVE(other, std::pair<int, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::pair<int, float>) MRBINDC_CLASSARG_END(other, std::pair<int, float>))
    ));
}

void MR_C_std_pair_int_float_AssignFromAnother(MR_C_std_pair_int_float *_this, MR_C_PassBy other_pass_by, MR_C_std_pair_int_float *other)
{
    (_this ? *(std::pair<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::pair<int, float>) MRBINDC_CLASSARG_COPY(other, std::pair<int, float>) MRBINDC_CLASSARG_MOVE(other, std::pair<int, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::pair<int, float>) MRBINDC_CLASSARG_END(other, std::pair<int, float>))
    );
}

void MR_C_std_pair_int_float_Destroy(MR_C_std_pair_int_float *_this)
{
    delete &(_this ? *(std::pair<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_C_std_pair_int_float *MR_C_std_pair_int_float_Construct(int first, float second)
{
    return (MR_C_std_pair_int_float *)new std::pair<int, float>(std::pair<int, float>(
        first,
        second
    ));
}

const int *MR_C_std_pair_int_float_First(const MR_C_std_pair_int_float *_this)
{
    return &((_this ? *(const std::pair<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).first);
}

int *MR_C_std_pair_int_float_MutableFirst(MR_C_std_pair_int_float *_this)
{
    return &((_this ? *(std::pair<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).first);
}

const float *MR_C_std_pair_int_float_Second(const MR_C_std_pair_int_float *_this)
{
    return &((_this ? *(const std::pair<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

float *MR_C_std_pair_int_float_MutableSecond(MR_C_std_pair_int_float *_this)
{
    return &((_this ? *(std::pair<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

