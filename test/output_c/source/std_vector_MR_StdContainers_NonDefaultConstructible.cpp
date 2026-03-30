#define MR_C_BUILD_LIBRARY
#include "std_vector_MR_StdContainers_NonDefaultConstructible.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(std::vector<MR::StdContainers::NonDefaultConstructible>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(new std::vector<MR::StdContainers::NonDefaultConstructible>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::StdContainers::NonDefaultConstructible>);
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)new std::vector<MR::StdContainers::NonDefaultConstructible>(std::vector<MR::StdContainers::NonDefaultConstructible>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonDefaultConstructible>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::StdContainers::NonDefaultConstructible>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::StdContainers::NonDefaultConstructible>), std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::StdContainers::NonDefaultConstructible>) MRBINDC_CLASSARG_END(other, std::vector<MR::StdContainers::NonDefaultConstructible>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::StdContainers::NonDefaultConstructible> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::StdContainers::NonDefaultConstructible> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(((const std::vector<MR::StdContainers::NonDefaultConstructible> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *)(((std::vector<MR::StdContainers::NonDefaultConstructible> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_size, const MR_StdContainers_NonDefaultConstructible *value)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).resize(
        new_size,
        ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), *(const MR::StdContainers::NonDefaultConstructible *)(value))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).clear();
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).capacity();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).shrink_to_fit();
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonDefaultConstructible *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonDefaultConstructible *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).front());
    ) // MRBINDC_TRY
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).front());
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).back());
    ) // MRBINDC_TRY
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonDefaultConstructible *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).back());
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).push_back(
        ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin() + ptrdiff_t(position), ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, size_t position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin() + ptrdiff_t(position));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_mutable_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *position, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).insert(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)position)),
        ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_mutable_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).erase(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)position))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *position, const MR_StdContainers_NonDefaultConstructible *new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).insert(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)position)),
        ((new_elem ? void() : MRBINDC_THROW("Parameter `new_elem` can not be null.", void)), MR::StdContainers::NonDefaultConstructible(*(MR::StdContainers::NonDefaultConstructible *)new_elem))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_iter(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).erase(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)position))
    );
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).cbegin() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin_mut(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).cend() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).end());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end_mut(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).end() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(iter));
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)iter)) - ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).cbegin();
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index_mut(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)iter)) - ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible> *)(_this)).begin();
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)(new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)(((const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)(((std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_from_mutable(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *iter)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(
        ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)iter))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)(new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_ConstructFromAnother(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)new std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_AssignFromAnother(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_Destroy(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_DestroyArray(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetPtr(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)(((const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_OffsetMutablePtr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *)(((std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_deref(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonDefaultConstructible *)std::addressof(*((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_incr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_decr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator_add_assign(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)b)) - ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)a)) == ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::const_iterator *)b));
    ) // MRBINDC_TRY
}

MR_StdContainers_NonDefaultConstructible *MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_deref(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    MRBINDC_TRY(
    return (MR_StdContainers_NonDefaultConstructible *)std::addressof(*((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_incr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_decr(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator_add_assign(MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)b)) - ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator(const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *a, const MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)a)) == ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<MR::StdContainers::NonDefaultConstructible>::iterator(*(std::vector<MR::StdContainers::NonDefaultConstructible>::iterator *)b));
    ) // MRBINDC_TRY
}

