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
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).operator=(
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

MR_C_std_vector_MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(const MR_CSharp_ExposedLayout *ptr, size_t size)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout *)new std::vector<MR::CSharp::ExposedLayout>(std::vector<MR::CSharp::ExposedLayout>(((const MR::CSharp::ExposedLayout *)ptr), ((const MR::CSharp::ExposedLayout *)ptr) + size));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_CSharp_ExposedLayout *ptr, size_t size)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)) = std::vector<MR::CSharp::ExposedLayout>(((const MR::CSharp::ExposedLayout *)ptr), ((const MR::CSharp::ExposedLayout *)ptr) + size);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_CSharp_ExposedLayout_size(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_CSharp_ExposedLayout_empty(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_resize(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t new_size)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).resize(
        new_size
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t new_size, const MR_CSharp_ExposedLayout *value)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).resize(
        new_size,
        ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), *(const MR::CSharp::ExposedLayout *)(value))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_clear(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).clear();
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_CSharp_ExposedLayout_capacity(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).capacity();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_reserve(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).shrink_to_fit();
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_at(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_front(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).front());
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).front());
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_back(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).back());
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).back());
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_data(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).data());
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).data());
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_push_back(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, MR_CSharp_ExposedLayout new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).push_back(
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), new_elem)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_insert(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t position, MR_CSharp_ExposedLayout new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).begin() + ptrdiff_t(position), MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), new_elem));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_erase(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, size_t position)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).begin() + ptrdiff_t(position));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_insert_at_mutable_iter(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *position, MR_CSharp_ExposedLayout new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::iterator(*(std::vector<MR::CSharp::ExposedLayout>::iterator *)position)),
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), new_elem)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_erase_at_mutable_iter(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::iterator(*(std::vector<MR::CSharp::ExposedLayout>::iterator *)position))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_insert_at_iter(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *position, MR_CSharp_ExposedLayout new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::const_iterator(*(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)position)),
        MRBINDC_BIT_CAST((MR::CSharp::ExposedLayout), new_elem)
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_erase_at_iter(MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::const_iterator(*(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)position))
    );
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_begin(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *)new std::vector<MR::CSharp::ExposedLayout>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_CSharp_ExposedLayout_is_begin(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *)new std::vector<MR::CSharp::ExposedLayout>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).begin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_CSharp_ExposedLayout_is_begin_mut(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout>::iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_end(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *)new std::vector<MR::CSharp::ExposedLayout>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_CSharp_ExposedLayout_is_end(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut(MR_C_std_vector_MR_CSharp_ExposedLayout *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *)new std::vector<MR::CSharp::ExposedLayout>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout> *)(_this)).end());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_CSharp_ExposedLayout_is_end_mut(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout>::iterator *)(iter));
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_MR_CSharp_ExposedLayout_to_index(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::const_iterator(*(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).cbegin();
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_MR_CSharp_ExposedLayout_to_index_mut(const MR_C_std_vector_MR_CSharp_ExposedLayout *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::iterator(*(std::vector<MR::CSharp::ExposedLayout>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout> *)(_this)).begin();
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *)new std::vector<MR::CSharp::ExposedLayout>::const_iterator(std::vector<MR::CSharp::ExposedLayout>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *)(new std::vector<MR::CSharp::ExposedLayout>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *)new std::vector<MR::CSharp::ExposedLayout>::const_iterator(std::vector<MR::CSharp::ExposedLayout>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::const_iterator(*(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_AssignFromAnother(MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::const_iterator(*(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_Destroy(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::CSharp::ExposedLayout>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_DestroyArray(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::CSharp::ExposedLayout>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_OffsetPtr(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *)(((const std::vector<MR::CSharp::ExposedLayout>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *)(((std::vector<MR::CSharp::ExposedLayout>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_from_mutable(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *iter)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *)new std::vector<MR::CSharp::ExposedLayout>::const_iterator(std::vector<MR::CSharp::ExposedLayout>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::iterator(*(std::vector<MR::CSharp::ExposedLayout>::iterator *)iter))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *)new std::vector<MR::CSharp::ExposedLayout>::iterator(std::vector<MR::CSharp::ExposedLayout>::iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *)(new std::vector<MR::CSharp::ExposedLayout>::iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_ConstructFromAnother(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *)new std::vector<MR::CSharp::ExposedLayout>::iterator(std::vector<MR::CSharp::ExposedLayout>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::iterator(*(std::vector<MR::CSharp::ExposedLayout>::iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_AssignFromAnother(MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::iterator(*(std::vector<MR::CSharp::ExposedLayout>::iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_Destroy(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::CSharp::ExposedLayout>::iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_DestroyArray(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::CSharp::ExposedLayout>::iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_OffsetPtr(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *)(((const std::vector<MR::CSharp::ExposedLayout>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_OffsetMutablePtr(MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *)(((std::vector<MR::CSharp::ExposedLayout>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_deref(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this)
{
    MRBINDC_TRY(
    return (const MR_CSharp_ExposedLayout *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_incr(MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_decr(MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator_add_assign(MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *a, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::const_iterator(*(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::const_iterator(*(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator(const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *a, const MR_C_std_vector_MR_CSharp_ExposedLayout_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::const_iterator(*(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::const_iterator(*(std::vector<MR::CSharp::ExposedLayout>::const_iterator *)b));
    ) // MRBINDC_TRY
}

MR_CSharp_ExposedLayout *MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_deref(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this)
{
    MRBINDC_TRY(
    return (MR_CSharp_ExposedLayout *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::CSharp::ExposedLayout>::iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_incr(MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_decr(MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_CSharp_ExposedLayout_iterator_add_assign(MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::CSharp::ExposedLayout>::iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_CSharp_ExposedLayout_iterator(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *a, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::iterator(*(std::vector<MR::CSharp::ExposedLayout>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::iterator(*(std::vector<MR::CSharp::ExposedLayout>::iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_MR_CSharp_ExposedLayout_iterator(const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *a, const MR_C_std_vector_MR_CSharp_ExposedLayout_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::iterator(*(std::vector<MR::CSharp::ExposedLayout>::iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::CSharp::ExposedLayout>::iterator(*(std::vector<MR::CSharp::ExposedLayout>::iterator *)b));
    ) // MRBINDC_TRY
}

