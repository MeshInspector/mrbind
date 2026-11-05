#define MR_C_BUILD_LIBRARY
#include "std_vector_MR_SeparateABC.h"

#include <__mrbind_c_details.h>
#include <input/ABC/abc.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateABC *)new std::vector<MR::SeparateABC>(std::vector<MR::SeparateABC>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateABC *)(new std::vector<MR::SeparateABC>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateABC *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateABC>);
    return (MR_C_std_vector_MR_SeparateABC *)new std::vector<MR::SeparateABC>(std::vector<MR::SeparateABC>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateABC>), std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateABC>), std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateABC>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_AssignFromAnother(MR_C_std_vector_MR_SeparateABC *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateABC *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateABC>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateABC>), std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateABC>), std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateABC>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_Destroy(const MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::SeparateABC> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_DestroyArray(const MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::SeparateABC> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_OffsetPtr(const MR_C_std_vector_MR_SeparateABC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_SeparateABC *)(((const std::vector<MR::SeparateABC> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_OffsetMutablePtr(MR_C_std_vector_MR_SeparateABC *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateABC *)(((std::vector<MR::SeparateABC> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_SeparateABC_size(const MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_SeparateABC_empty(const MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_resize(MR_C_std_vector_MR_SeparateABC *_this, size_t new_size)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).resize(
        new_size
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_resize_with_default_value(MR_C_std_vector_MR_SeparateABC *_this, size_t new_size, const MR_SeparateABC *value)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).resize(
        new_size,
        ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), *(const MR::SeparateABC *)(value))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_clear(MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).clear();
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_SeparateABC_capacity(const MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).capacity();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_reserve(MR_C_std_vector_MR_SeparateABC *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_shrink_to_fit(MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).shrink_to_fit();
    ) // MRBINDC_TRY
}

const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_at(const MR_C_std_vector_MR_SeparateABC *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_SeparateABC *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_at_mut(MR_C_std_vector_MR_SeparateABC *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_SeparateABC *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_front(const MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).front());
    ) // MRBINDC_TRY
}

MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_front_mut(MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).front());
    ) // MRBINDC_TRY
}

const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_back(const MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).back());
    ) // MRBINDC_TRY
}

MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_back_mut(MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).back());
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_push_back(MR_C_std_vector_MR_SeparateABC *_this, const MR_SeparateABC *new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).push_back(
        ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::SeparateABC(*(MR::SeparateABC *)new_elem))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_pop_back(MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_insert(MR_C_std_vector_MR_SeparateABC *_this, size_t position, const MR_SeparateABC *new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).begin() + ptrdiff_t(position), ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::SeparateABC(*(MR::SeparateABC *)new_elem)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateABC_erase(MR_C_std_vector_MR_SeparateABC *_this, size_t position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).begin() + ptrdiff_t(position));
    ) // MRBINDC_TRY
}

const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_begin(const MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).data());
    ) // MRBINDC_TRY
}

MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_begin_mut(MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).data());
    ) // MRBINDC_TRY
}

const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_end(const MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).size());
    ) // MRBINDC_TRY
}

MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_end_mut(MR_C_std_vector_MR_SeparateABC *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).size());
    ) // MRBINDC_TRY
}

