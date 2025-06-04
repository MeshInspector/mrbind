#include "std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <tuple>


void MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    delete &(_this ? *(std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<0>((_this ? *(const std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<1>((_this ? *(const std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_int_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<2>((_this ? *(const std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_float_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<3>((_this ? *(const std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<4>((_this ? *(const std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &(std::get<5>((_this ? *(const std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_int_rvalue_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<6>((_this ? *(const std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_float_rvalue_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<7>((_this ? *(const std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const int *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int_rvalue_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<8>((_this ? *(const std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float_rvalue_ref(const MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<9>((_this ? *(const std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

