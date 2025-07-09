#include "std_tuple_const_int32_t_const_float_int32_t_ref_float_ref.h"

#include <stdexcept>
#include <tuple>


void MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_Destroy(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *_this)
{
    delete ((const std::tuple<const int32_t, const float, int32_t &, float &> *)_this);
}

void MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_DestroyArray(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *_this)
{
    delete[] ((const std::tuple<const int32_t, const float, int32_t &, float &> *)_this);
}

const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_OffsetPtr(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *)(((const std::tuple<const int32_t, const float, int32_t &, float &> *)ptr) + i);
}

MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_OffsetMutablePtr(MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *)(((std::tuple<const int32_t, const float, int32_t &, float &> *)ptr) + i);
}

MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_Construct(int32_t _0, float _1, int32_t *_2, float *_3)
{
    return (MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *)new std::tuple<const int32_t, const float, int32_t &, float &>(std::tuple<const int32_t, const float, int32_t &, float &>(
        _0,
        _1,
        (_2 ? *(int32_t *)(_2) : throw std::runtime_error("Parameter `_2` can not be null.")),
        (_3 ? *_3 : throw std::runtime_error("Parameter `_3` can not be null."))
    ));
}

const int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_Get_const_int32_t(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *_this)
{
    return (const int32_t *)&(std::get<0>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_Get_const_float(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_Get_int32_t_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *_this)
{
    return (int32_t *)&(std::get<2>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_Get_float_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref *_this)
{
    return &(std::get<3>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

