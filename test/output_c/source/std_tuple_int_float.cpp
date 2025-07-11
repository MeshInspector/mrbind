#include "std_tuple_int_float.h"

#include <stdexcept>
#include <tuple>


MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_DefaultConstruct(void)
{
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(std::tuple<int, float>());
}

MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_tuple_int_float *)(new std::tuple<int, float>[num_elems]{});
}

MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_ConstructFromAnother(const MR_C_std_tuple_int_float *other)
{
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(std::tuple<int, float>(
        (other ? std::tuple<int, float>(*(std::tuple<int, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_tuple_int_float_AssignFromAnother(MR_C_std_tuple_int_float *_this, const MR_C_std_tuple_int_float *other)
{
    (_this ? *(std::tuple<int, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::tuple<int, float>(*(std::tuple<int, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_tuple_int_float_Destroy(MR_C_std_tuple_int_float *_this)
{
    delete ((std::tuple<int, float> *)_this);
}

void MR_C_std_tuple_int_float_DestroyArray(MR_C_std_tuple_int_float *_this)
{
    delete[] ((std::tuple<int, float> *)_this);
}

const MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_OffsetPtr(const MR_C_std_tuple_int_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_int_float *)(((const std::tuple<int, float> *)ptr) + i);
}

MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_OffsetMutablePtr(MR_C_std_tuple_int_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_int_float *)(((std::tuple<int, float> *)ptr) + i);
}

MR_C_std_tuple_int_float *MR_C_std_tuple_int_float_Construct(int _0, float _1)
{
    return (MR_C_std_tuple_int_float *)new std::tuple<int, float>(std::tuple<int, float>(
        _0,
        _1
    ));
}

const int *MR_C_std_tuple_int_float_Get_int(const MR_C_std_tuple_int_float *_this)
{
    return &(std::get<0>((_this ? *(const std::tuple<int, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int *MR_C_std_tuple_int_float_GetMutable_int(MR_C_std_tuple_int_float *_this)
{
    return &(std::get<0>((_this ? *(std::tuple<int, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_int_float_Get_float(const MR_C_std_tuple_int_float *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<int, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_int_float_GetMutable_float(MR_C_std_tuple_int_float *_this)
{
    return &(std::get<1>((_this ? *(std::tuple<int, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

