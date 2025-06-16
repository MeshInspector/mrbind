#include "std_pair_const_int_float.h"

#include <stdexcept>
#include <utility>


MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_DefaultConstruct(void)
{
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(std::pair<const int, float>());
}

MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_ConstructFromAnother(const MR_C_std_pair_const_int_float *other)
{
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(std::pair<const int, float>(
        (other ? std::pair<const int, float>(*(std::pair<const int, float> *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_pair_const_int_float_Destroy(MR_C_std_pair_const_int_float *_this)
{
    delete &(_this ? *(std::pair<const int, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

MR_C_std_pair_const_int_float *MR_C_std_pair_const_int_float_Construct(int first, float second)
{
    return (MR_C_std_pair_const_int_float *)new std::pair<const int, float>(std::pair<const int, float>(
        first,
        second
    ));
}

const int *MR_C_std_pair_const_int_float_First(const MR_C_std_pair_const_int_float *_this)
{
    return &((_this ? *(const std::pair<const int, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).first);
}

const float *MR_C_std_pair_const_int_float_Second(const MR_C_std_pair_const_int_float *_this)
{
    return &((_this ? *(const std::pair<const int, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

float *MR_C_std_pair_const_int_float_MutableSecond(MR_C_std_pair_const_int_float *_this)
{
    return &((_this ? *(std::pair<const int, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).second);
}

