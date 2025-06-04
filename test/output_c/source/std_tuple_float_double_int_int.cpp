#include "std_tuple_float_double_int_int.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <tuple>


MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_DefaultConstruct(void)
{
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(std::tuple<float, double, int, int>());
}

MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_tuple_float_double_int_int *other)
{
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(std::tuple<float, double, int, int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::tuple<float, double, int, int>) MRBINDC_CLASSARG_COPY(other, std::tuple<float, double, int, int>) MRBINDC_CLASSARG_MOVE(other, std::tuple<float, double, int, int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::tuple<float, double, int, int>) MRBINDC_CLASSARG_END(other, std::tuple<float, double, int, int>))
    ));
}

void MR_C_std_tuple_float_double_int_int_AssignFromAnother(MR_C_std_tuple_float_double_int_int *_this, MR_C_PassBy other_pass_by, MR_C_std_tuple_float_double_int_int *other)
{
    (_this ? *(std::tuple<float, double, int, int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::tuple<float, double, int, int>) MRBINDC_CLASSARG_COPY(other, std::tuple<float, double, int, int>) MRBINDC_CLASSARG_MOVE(other, std::tuple<float, double, int, int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::tuple<float, double, int, int>) MRBINDC_CLASSARG_END(other, std::tuple<float, double, int, int>))
    );
}

void MR_C_std_tuple_float_double_int_int_Destroy(MR_C_std_tuple_float_double_int_int *_this)
{
    delete &(_this ? *(std::tuple<float, double, int, int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const float *MR_C_std_tuple_float_double_int_int_Get_float(const MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<0>((_this ? *(const std::tuple<float, double, int, int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_float_double_int_int_GetMutable_float(MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<0>((_this ? *(std::tuple<float, double, int, int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const double *MR_C_std_tuple_float_double_int_int_Get_double(const MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<float, double, int, int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

double *MR_C_std_tuple_float_double_int_int_GetMutable_double(MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<1>((_this ? *(std::tuple<float, double, int, int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const int *MR_C_std_tuple_float_double_int_int_Get_int_2(const MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<2>((_this ? *(const std::tuple<float, double, int, int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int *MR_C_std_tuple_float_double_int_int_GetMutable_int_2(MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<2>((_this ? *(std::tuple<float, double, int, int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const int *MR_C_std_tuple_float_double_int_int_Get_int_3(const MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<3>((_this ? *(const std::tuple<float, double, int, int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int *MR_C_std_tuple_float_double_int_int_GetMutable_int_3(MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<3>((_this ? *(std::tuple<float, double, int, int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

