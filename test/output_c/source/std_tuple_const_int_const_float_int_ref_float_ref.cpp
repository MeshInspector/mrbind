#include "std_tuple_const_int_const_float_int_ref_float_ref.h"

#include <stdexcept>
#include <tuple>


void MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Destroy(MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this)
{
    delete ((std::tuple<const int, const float, int &, float &> *)_this);
}

void MR_C_std_tuple_const_int_const_float_int_ref_float_ref_DestroyArray(MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this)
{
    delete[] ((std::tuple<const int, const float, int &, float &> *)_this);
}

const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_OffsetPtr(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *)(((const std::tuple<const int, const float, int &, float &> *)ptr) + i);
}

MR_C_std_tuple_const_int_const_float_int_ref_float_ref *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_OffsetMutablePtr(MR_C_std_tuple_const_int_const_float_int_ref_float_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_const_int_const_float_int_ref_float_ref *)(((std::tuple<const int, const float, int &, float &> *)ptr) + i);
}

MR_C_std_tuple_const_int_const_float_int_ref_float_ref *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Construct(int _0, float _1, int *_2, float *_3)
{
    return (MR_C_std_tuple_const_int_const_float_int_ref_float_ref *)new std::tuple<const int, const float, int &, float &>(std::tuple<const int, const float, int &, float &>(
        _0,
        _1,
        (_2 ? *_2 : throw std::runtime_error("Parameter `_2` can not be null.")),
        (_3 ? *_3 : throw std::runtime_error("Parameter `_3` can not be null."))
    ));
}

const int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Get_const_int(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this)
{
    return &(std::get<0>((_this ? *(const std::tuple<const int, const float, int &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Get_const_float(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<const int, const float, int &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Get_int_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this)
{
    return &(std::get<2>((_this ? *(const std::tuple<const int, const float, int &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_Get_float_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref *_this)
{
    return &(std::get<3>((_this ? *(const std::tuple<const int, const float, int &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

