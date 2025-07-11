#include "std_tuple_float_double_int_int.h"

#include <stdexcept>
#include <tuple>


MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_DefaultConstruct(void)
{
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(std::tuple<float, double, int, int>());
}

MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_tuple_float_double_int_int *)(new std::tuple<float, double, int, int>[num_elems]{});
}

MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_ConstructFromAnother(const MR_C_std_tuple_float_double_int_int *other)
{
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(std::tuple<float, double, int, int>(
        (other ? std::tuple<float, double, int, int>(*(std::tuple<float, double, int, int> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_tuple_float_double_int_int_AssignFromAnother(MR_C_std_tuple_float_double_int_int *_this, const MR_C_std_tuple_float_double_int_int *other)
{
    (_this ? *(std::tuple<float, double, int, int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::tuple<float, double, int, int>(*(std::tuple<float, double, int, int> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_tuple_float_double_int_int_Destroy(MR_C_std_tuple_float_double_int_int *_this)
{
    delete ((std::tuple<float, double, int, int> *)_this);
}

void MR_C_std_tuple_float_double_int_int_DestroyArray(MR_C_std_tuple_float_double_int_int *_this)
{
    delete[] ((std::tuple<float, double, int, int> *)_this);
}

const MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_OffsetPtr(const MR_C_std_tuple_float_double_int_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_float_double_int_int *)(((const std::tuple<float, double, int, int> *)ptr) + i);
}

MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_OffsetMutablePtr(MR_C_std_tuple_float_double_int_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_float_double_int_int *)(((std::tuple<float, double, int, int> *)ptr) + i);
}

MR_C_std_tuple_float_double_int_int *MR_C_std_tuple_float_double_int_int_Construct(float _0, double _1, int _2, int _3)
{
    return (MR_C_std_tuple_float_double_int_int *)new std::tuple<float, double, int, int>(std::tuple<float, double, int, int>(
        _0,
        _1,
        _2,
        _3
    ));
}

const float *MR_C_std_tuple_float_double_int_int_Get_float(const MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<0>((_this ? *(const std::tuple<float, double, int, int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_float_double_int_int_GetMutable_float(MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<0>((_this ? *(std::tuple<float, double, int, int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const double *MR_C_std_tuple_float_double_int_int_Get_double(const MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<float, double, int, int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

double *MR_C_std_tuple_float_double_int_int_GetMutable_double(MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<1>((_this ? *(std::tuple<float, double, int, int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const int *MR_C_std_tuple_float_double_int_int_Get_int_2(const MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<2>((_this ? *(const std::tuple<float, double, int, int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int *MR_C_std_tuple_float_double_int_int_GetMutable_int_2(MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<2>((_this ? *(std::tuple<float, double, int, int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const int *MR_C_std_tuple_float_double_int_int_Get_int_3(const MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<3>((_this ? *(const std::tuple<float, double, int, int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int *MR_C_std_tuple_float_double_int_int_GetMutable_int_3(MR_C_std_tuple_float_double_int_int *_this)
{
    return &(std::get<3>((_this ? *(std::tuple<float, double, int, int> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

