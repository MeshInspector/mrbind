#define MR_C_BUILD_LIBRARY
#include "std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <tuple>


void MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Destroy(const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *_this)
{
    MRBINDC_TRY(
    delete ((const std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_DestroyArray(const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_OffsetPtr(const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *)(((const std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_OffsetMutablePtr(MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *)(((std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct(MR_CSharp_ExposedLayout *_0, const MR_CSharp_ExposedLayout *_1)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *)new std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &>(std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &>(
        ((_0 ? void() : throw std::runtime_error("Parameter `_0` can not be null.")), *(MR::CSharp::ExposedLayout *)(_0)),
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *(const MR::CSharp::ExposedLayout *)(_1))
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_MR_CSharp_ExposedLayout_ref(const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &> *)(_this))));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_const_MR_CSharp_ExposedLayout_ref(const MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)std::addressof(std::get<1>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<MR::CSharp::ExposedLayout &, const MR::CSharp::ExposedLayout &> *)(_this))));
    ) // MRBINDC_TRY
}

