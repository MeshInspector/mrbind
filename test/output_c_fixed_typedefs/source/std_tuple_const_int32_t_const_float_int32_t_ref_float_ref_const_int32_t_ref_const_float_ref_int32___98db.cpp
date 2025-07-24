#define MR_C_BUILD_LIBRARY
#include "std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32___98db.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <tuple>
#include <utility>


void MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Destroy(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    delete ((const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)_this);
}

void MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_DestroyArray(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    delete[] ((const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)_this);
}

const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_OffsetPtr(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *)(((const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)ptr) + i);
}

MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_OffsetMutablePtr(MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *)(((std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)ptr) + i);
}

MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Construct(int32_t _0, float _1, int32_t *_2, float *_3, const int32_t *_4, const float *_5, int32_t *_6, float *_7, const int32_t *_8, const float *_9)
{
    return (MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *)new std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&>(std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&>(
        _0,
        _1,
        (_2 ? *_2 : throw std::runtime_error("Parameter `_2` can not be null.")),
        (_3 ? *_3 : throw std::runtime_error("Parameter `_3` can not be null.")),
        (_4 ? *_4 : throw std::runtime_error("Parameter `_4` can not be null.")),
        (_5 ? *_5 : throw std::runtime_error("Parameter `_5` can not be null.")),
        (_6 ? std::move(*_6) : throw std::runtime_error("Parameter `_6` can not be null.")),
        (_7 ? std::move(*_7) : throw std::runtime_error("Parameter `_7` can not be null.")),
        (_8 ? std::move(*_8) : throw std::runtime_error("Parameter `_8` can not be null.")),
        (_9 ? std::move(*_9) : throw std::runtime_error("Parameter `_9` can not be null."))
    ));
}

const int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_int32_t(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<0>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_float(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_int32_t_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<2>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_float_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<3>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_int32_t_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<4>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_float_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<5>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_int32_t_rvalue_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<6>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_float_rvalue_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<7>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const int32_t *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_int32_t_rvalue_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<8>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Get_const_float_rvalue_ref(const MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<9>((_this ? *(const std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

