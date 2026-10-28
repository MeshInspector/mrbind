#define MR_C_BUILD_LIBRARY
#include "std_vector_MR_CSharp_ExposedLayout.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_csharp.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)new std::vector<MR::CSharp::ExposedLayout>(std::vector<MR::CSharp::ExposedLayout>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)(new std::vector<MR::CSharp::ExposedLayout>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_CSharp_ExposedLayout *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::CSharp::ExposedLayout>);
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)new std::vector<MR::CSharp::ExposedLayout>(std::vector<MR::CSharp::ExposedLayout>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::CSharp::ExposedLayout>), std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::CSharp::ExposedLayout>), std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_END(other, std::vector<MR::CSharp::ExposedLayout>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_CSharp_ExposedLayout *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::CSharp::ExposedLayout>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::CSharp::ExposedLayout>), std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::CSharp::ExposedLayout>), std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_END(other, std::vector<MR::CSharp::ExposedLayout>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::CSharp::ExposedLayout> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_DestroyArray(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::CSharp::ExposedLayout> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_OffsetPtr(const MR_C_std_vector_MR_CSharp_ExposedLayout *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_CSharp_ExposedLayout *)(((const std::vector<MR::CSharp::ExposedLayout> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_OffsetMutablePtr(MR_C_std_vector_MR_CSharp_ExposedLayout *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)(((std::vector<MR::CSharp::ExposedLayout> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_CSharp_ExposedLayout_size(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_CSharp_ExposedLayout_empty(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_resize(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t new_size)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).resize(
        new_size
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_clear(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).clear();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_reserve(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_at(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_data(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).data());
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).data());
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_push_back(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, MR_CSharp_ExposedLayout new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).push_back(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), new_elem)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

