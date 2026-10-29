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
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)new std::vector<MR::CSharp::ExposedLayout>(std::vector<MR::CSharp::ExposedLayout>());
}

MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)(new std::vector<MR::CSharp::ExposedLayout>[num_elems]{});
}

MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_CSharp_ExposedLayout *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::CSharp::ExposedLayout>);
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)new std::vector<MR::CSharp::ExposedLayout>(std::vector<MR::CSharp::ExposedLayout>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::CSharp::ExposedLayout>), std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::CSharp::ExposedLayout>), std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_END(other, std::vector<MR::CSharp::ExposedLayout>))
    ));
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_CSharp_ExposedLayout *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::CSharp::ExposedLayout>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::CSharp::ExposedLayout>), std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::CSharp::ExposedLayout>), std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::CSharp::ExposedLayout>) MRBINDC_CLASSARG_END(other, std::vector<MR::CSharp::ExposedLayout>))
    );
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    delete ((const std::vector<MR::CSharp::ExposedLayout> *)_this);
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_DestroyArray(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    delete[] ((const std::vector<MR::CSharp::ExposedLayout> *)_this);
}

const MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_OffsetPtr(const MR_C_std_vector_MR_CSharp_ExposedLayout *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_CSharp_ExposedLayout *)(((const std::vector<MR::CSharp::ExposedLayout> *)ptr) + i);
}

MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_OffsetMutablePtr(MR_C_std_vector_MR_CSharp_ExposedLayout *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)(((std::vector<MR::CSharp::ExposedLayout> *)ptr) + i);
}

size_t MR_C_std_vector_MR_CSharp_ExposedLayout_size(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).size();
}

bool MR_C_std_vector_MR_CSharp_ExposedLayout_empty(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty();
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_resize(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t new_size)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_clear(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).clear();
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_reserve(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t new_capacity)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).reserve(
        new_capacity
    );
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_at(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t i)
{
    return (const MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).at(
        i
    ));
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t i)
{
    return (MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).at(
        i
    ));
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_front(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).front());
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).front());
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_back(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).back());
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).back());
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_data(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).data());
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).data());
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_push_back(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, MR_CSharp_ExposedLayout new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).push_back(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), new_elem)
    );
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).pop_back();
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_insert(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t position, MR_CSharp_ExposedLayout new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).begin() + ptrdiff_t(position), MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), new_elem));
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_erase(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t position)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).begin() + ptrdiff_t(position));
}

