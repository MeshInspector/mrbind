#define MR_C_BUILD_LIBRARY
#include "std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <tuple>
#include <utility>


MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_ConstructFromAnother(const MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *other)
{
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *)new std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&>(std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&>(std::move(*(std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&> *)other)))
    ));
}

void MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Destroy(const MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *_this)
{
    delete ((const std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&> *)_this);
}

void MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_DestroyArray(const MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *_this)
{
    delete[] ((const std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&> *)_this);
}

const MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_OffsetPtr(const MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *ptr, ptrdiff_t i)
{
    return (const MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *)(((const std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&> *)ptr) + i);
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_OffsetMutablePtr(MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *ptr, ptrdiff_t i)
{
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *)(((std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&> *)ptr) + i);
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Construct(MR_CSharp_ExposedLayout *_0, const MR_CSharp_ExposedLayout *_1)
{
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *)new std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&>(std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&>(
        ((_0 ? void() : throw std::runtime_error("Parameter `_0` can not be null.")), std::move(*(MR::CSharp::ExposedLayout *)(_0))),
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), std::move(*(const MR::CSharp::ExposedLayout *)(_1)))
    ));
}

MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_get_MR_CSharp_ExposedLayout_rvalue_ref(const MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *_this)
{
    return (MR_CSharp_ExposedLayout *)std::addressof(mrbindc_details::unmove(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&> *)(_this)))));
}

const MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_get_const_MR_CSharp_ExposedLayout_rvalue_ref(const MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref *_this)
{
    return (const MR_CSharp_ExposedLayout *)std::addressof(mrbindc_details::unmove(std::get<1>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<MR::CSharp::ExposedLayout &&, const MR::CSharp::ExposedLayout &&> *)(_this)))));
}

