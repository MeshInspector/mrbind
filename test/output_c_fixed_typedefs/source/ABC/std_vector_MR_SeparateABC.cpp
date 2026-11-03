#define MR_ABC_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "ABC/std_vector_MR_SeparateABC.h"

#include <__mrbind_c_details.h>
#include <input/ABC/abc.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_SeparateABC *)new std::vector<MR::SeparateABC>(std::vector<MR::SeparateABC>());
}

MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_SeparateABC *)(new std::vector<MR::SeparateABC>[num_elems]{});
}

MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateABC *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateABC>);
    return (MR_C_std_vector_MR_SeparateABC *)new std::vector<MR::SeparateABC>(std::vector<MR::SeparateABC>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateABC>), std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateABC>), std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateABC>))
    ));
}

void MR_C_std_vector_MR_SeparateABC_AssignFromAnother(MR_C_std_vector_MR_SeparateABC *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateABC *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateABC>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateABC>), std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateABC>), std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateABC>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateABC>))
    );
}

void MR_C_std_vector_MR_SeparateABC_Destroy(const MR_C_std_vector_MR_SeparateABC *_this)
{
    delete ((const std::vector<MR::SeparateABC> *)_this);
}

void MR_C_std_vector_MR_SeparateABC_DestroyArray(const MR_C_std_vector_MR_SeparateABC *_this)
{
    delete[] ((const std::vector<MR::SeparateABC> *)_this);
}

const MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_OffsetPtr(const MR_C_std_vector_MR_SeparateABC *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_SeparateABC *)(((const std::vector<MR::SeparateABC> *)ptr) + i);
}

MR_C_std_vector_MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_OffsetMutablePtr(MR_C_std_vector_MR_SeparateABC *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_SeparateABC *)(((std::vector<MR::SeparateABC> *)ptr) + i);
}

size_t MR_C_std_vector_MR_SeparateABC_size(const MR_C_std_vector_MR_SeparateABC *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).size();
}

bool MR_C_std_vector_MR_SeparateABC_empty(const MR_C_std_vector_MR_SeparateABC *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).empty();
}

void MR_C_std_vector_MR_SeparateABC_resize(MR_C_std_vector_MR_SeparateABC *_this, size_t new_size)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_MR_SeparateABC_resize_with_default_value(MR_C_std_vector_MR_SeparateABC *_this, size_t new_size, const MR_SeparateABC *value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).resize(
        new_size,
        ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), *(const MR::SeparateABC *)(value))
    );
}

void MR_C_std_vector_MR_SeparateABC_clear(MR_C_std_vector_MR_SeparateABC *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).clear();
}

size_t MR_C_std_vector_MR_SeparateABC_capacity(const MR_C_std_vector_MR_SeparateABC *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).capacity();
}

void MR_C_std_vector_MR_SeparateABC_reserve(MR_C_std_vector_MR_SeparateABC *_this, size_t new_capacity)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_MR_SeparateABC_shrink_to_fit(MR_C_std_vector_MR_SeparateABC *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).shrink_to_fit();
}

const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_at(const MR_C_std_vector_MR_SeparateABC *_this, size_t i)
{
    return (const MR_SeparateABC *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).at(
        i
    ));
}

MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_at_mut(MR_C_std_vector_MR_SeparateABC *_this, size_t i)
{
    return (MR_SeparateABC *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).at(
        i
    ));
}

const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_front(const MR_C_std_vector_MR_SeparateABC *_this)
{
    return (const MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).front());
}

MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_front_mut(MR_C_std_vector_MR_SeparateABC *_this)
{
    return (MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).front());
}

const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_back(const MR_C_std_vector_MR_SeparateABC *_this)
{
    return (const MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).back());
}

MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_back_mut(MR_C_std_vector_MR_SeparateABC *_this)
{
    return (MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).back());
}

void MR_C_std_vector_MR_SeparateABC_push_back(MR_C_std_vector_MR_SeparateABC *_this, const MR_SeparateABC *new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).push_back(
        ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::SeparateABC(*(MR::SeparateABC *)new_elem))
    );
}

void MR_C_std_vector_MR_SeparateABC_pop_back(MR_C_std_vector_MR_SeparateABC *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).pop_back();
}

void MR_C_std_vector_MR_SeparateABC_insert(MR_C_std_vector_MR_SeparateABC *_this, size_t position, const MR_SeparateABC *new_elem)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).begin() + ptrdiff_t(position), ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::SeparateABC(*(MR::SeparateABC *)new_elem)));
}

void MR_C_std_vector_MR_SeparateABC_erase(MR_C_std_vector_MR_SeparateABC *_this, size_t position)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).begin() + ptrdiff_t(position));
}

const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_begin(const MR_C_std_vector_MR_SeparateABC *_this)
{
    return (const MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).data());
}

MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_begin_mut(MR_C_std_vector_MR_SeparateABC *_this)
{
    return (MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).data());
}

const MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_end(const MR_C_std_vector_MR_SeparateABC *_this)
{
    return (const MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateABC> *)(_this)).size());
}

MR_SeparateABC *MR_C_std_vector_MR_SeparateABC_end_mut(MR_C_std_vector_MR_SeparateABC *_this)
{
    return (MR_SeparateABC *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateABC> *)(_this)).size());
}

