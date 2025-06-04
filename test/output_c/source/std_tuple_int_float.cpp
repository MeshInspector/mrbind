#include "std_tuple_int_float.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <tuple>


MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_DefaultConstruct(void)
{
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(std::tuple<int, float>());
}

MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_tuple_int_float *other)
{
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(std::tuple<int, float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::tuple<int, float>) MRBINDC_CLASSARG_COPY(other, std::tuple<int, float>) MRBINDC_CLASSARG_MOVE(other, std::tuple<int, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::tuple<int, float>) MRBINDC_CLASSARG_END(other, std::tuple<int, float>))
    ));
}

void MR_C_std_tuple_int_float_AssignFromAnother(MR_C_std_tuple_int_float *_this, MR_C_PassBy other_pass_by, MR_C_std_tuple_int_float *other)
{
    (_this ? *(std::tuple<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::tuple<int, float>) MRBINDC_CLASSARG_COPY(other, std::tuple<int, float>) MRBINDC_CLASSARG_MOVE(other, std::tuple<int, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::tuple<int, float>) MRBINDC_CLASSARG_END(other, std::tuple<int, float>))
    );
}

void MR_C_std_tuple_int_float_Destroy(MR_C_std_tuple_int_float *_this)
{
    delete &(_this ? *(std::tuple<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const int *MR_C_std_tuple_int_float_Get_int(const MR_C_std_tuple_int_float *_this)
{
    return &(std::get<0>((_this ? *(const std::tuple<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int *MR_C_std_tuple_int_float_GetMutable_int(MR_C_std_tuple_int_float *_this)
{
    return &(std::get<0>((_this ? *(std::tuple<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_int_float_Get_float(const MR_C_std_tuple_int_float *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_int_float_GetMutable_float(MR_C_std_tuple_int_float *_this)
{
    return &(std::get<1>((_this ? *(std::tuple<int, float>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

