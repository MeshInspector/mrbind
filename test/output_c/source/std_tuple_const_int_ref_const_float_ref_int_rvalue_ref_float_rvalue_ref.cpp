#include "std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <tuple>
#include <utility>


MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother(const MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *other)
{
    return (MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *)new std::tuple<const int &, const float &, int &&, float &&>(std::tuple<const int &, const float &, int &&, float &&>(
        (other ? std::tuple<const int &, const float &, int &&, float &&>(std::move(*(std::tuple<const int &, const float &, int &&, float &&> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_Destroy(const MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *_this)
{
    delete ((const std::tuple<const int &, const float &, int &&, float &&> *)_this);
}

void MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_DestroyArray(const MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *_this)
{
    delete[] ((const std::tuple<const int &, const float &, int &&, float &&> *)_this);
}

const MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_OffsetPtr(const MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *)(((const std::tuple<const int &, const float &, int &&, float &&> *)ptr) + i);
}

MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_OffsetMutablePtr(MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *)(((std::tuple<const int &, const float &, int &&, float &&> *)ptr) + i);
}

MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_Construct(const int *_0, const float *_1, int *_2, float *_3)
{
    return (MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *)new std::tuple<const int &, const float &, int &&, float &&>(std::tuple<const int &, const float &, int &&, float &&>(
        (_0 ? *_0 : throw std::runtime_error("Parameter `_0` can not be null.")),
        (_1 ? *_1 : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? std::move(*_2) : throw std::runtime_error("Parameter `_2` can not be null.")),
        (_3 ? std::move(*_3) : throw std::runtime_error("Parameter `_3` can not be null."))
    ));
}

const int *MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_Get_const_int_ref(const MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *_this)
{
    return &(std::get<0>((_this ? *(const std::tuple<const int &, const float &, int &&, float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_Get_const_float_ref(const MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<const int &, const float &, int &&, float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int *MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_Get_int_rvalue_ref(const MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<2>((_this ? *(const std::tuple<const int &, const float &, int &&, float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_Get_float_rvalue_ref(const MR_C_std_tuple_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<3>((_this ? *(const std::tuple<const int &, const float &, int &&, float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

