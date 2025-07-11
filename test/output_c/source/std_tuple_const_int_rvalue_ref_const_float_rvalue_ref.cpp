#include "std_tuple_const_int_rvalue_ref_const_float_rvalue_ref.h"

#include <__mrbind_c_details.h>

#include <stdexcept>
#include <tuple>
#include <utility>


MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(const MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *other)
{
    return (MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *)new std::tuple<const int &&, const float &&>(std::tuple<const int &&, const float &&>(
        (other ? std::tuple<const int &&, const float &&>(std::move(*(std::tuple<const int &&, const float &&> *)other)) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    delete ((std::tuple<const int &&, const float &&> *)_this);
}

void MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref_DestroyArray(MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    delete[] ((std::tuple<const int &&, const float &&> *)_this);
}

const MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref_OffsetPtr(const MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *)(((const std::tuple<const int &&, const float &&> *)ptr) + i);
}

MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref_OffsetMutablePtr(MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *)(((std::tuple<const int &&, const float &&> *)ptr) + i);
}

MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref_Construct(const int *_0, const float *_1)
{
    return (MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *)new std::tuple<const int &&, const float &&>(std::tuple<const int &&, const float &&>(
        (_0 ? std::move(*_0) : throw std::runtime_error("Parameter `_0` can not be null.")),
        (_1 ? std::move(*_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    ));
}

const int *MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int_rvalue_ref(const MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<0>((_this ? *(const std::tuple<const int &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

const float *MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float_rvalue_ref(const MR_C_std_tuple_const_int_rvalue_ref_const_float_rvalue_ref *_this)
{
    return &mrbindc_details::unmove(std::get<1>((_this ? *(const std::tuple<const int &&, const float &&> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))));
}

