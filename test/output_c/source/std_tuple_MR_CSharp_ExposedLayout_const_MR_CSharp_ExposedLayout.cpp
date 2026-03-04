#define MR_C_BUILD_LIBRARY
#include "std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <tuple>


MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *)new std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout>(std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout>());
    ) // MRBINDC_TRY
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *)(new std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *other)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *)new std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout>(std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout>(*(std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Destroy(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    delete ((const std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DestroyArray(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_OffsetPtr(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *)(((const std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_OffsetMutablePtr(MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *)(((std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct(MR_CSharp_ExposedLayout _0, MR_CSharp_ExposedLayout _1)
{
    MRBINDC_TRY(
    return (MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *)new std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout>(std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout>(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), _0),
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), _1)
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout> *)(_this))));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout_mut(MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)std::addressof(std::get<0>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout> *)(_this))));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_const_MR_CSharp_ExposedLayout(const MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)std::addressof(std::get<1>(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::tuple<MR::CSharp::ExposedLayout, const MR::CSharp::ExposedLayout> *)(_this))));
    ) // MRBINDC_TRY
}

