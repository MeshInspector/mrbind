#define MR_C_BUILD_LIBRARY
#include "std_vector_std_pair_MR_SeparateA_MR_SeparateB.h"

#include <__mrbind_c_details.h>
#include <input/A/a.h>
#include <input/B/b.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>
#include <vector>


MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *)(new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<std::pair<MR::SeparateA, MR::SeparateB>>);
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<std::pair<MR::SeparateA, MR::SeparateB>>) MRBINDC_CLASSARG_COPY(other, (std::vector<std::pair<MR::SeparateA, MR::SeparateB>>), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>) MRBINDC_CLASSARG_MOVE(other, (std::vector<std::pair<MR::SeparateA, MR::SeparateB>>), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<std::pair<MR::SeparateA, MR::SeparateB>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<std::pair<MR::SeparateA, MR::SeparateB>>) MRBINDC_CLASSARG_END(other, std::vector<std::pair<MR::SeparateA, MR::SeparateB>>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<std::pair<MR::SeparateA, MR::SeparateB>>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<std::pair<MR::SeparateA, MR::SeparateB>>) MRBINDC_CLASSARG_COPY(other, (std::vector<std::pair<MR::SeparateA, MR::SeparateB>>), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>) MRBINDC_CLASSARG_MOVE(other, (std::vector<std::pair<MR::SeparateA, MR::SeparateB>>), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<std::pair<MR::SeparateA, MR::SeparateB>>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<std::pair<MR::SeparateA, MR::SeparateB>>) MRBINDC_CLASSARG_END(other, std::vector<std::pair<MR::SeparateA, MR::SeparateB>>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_Destroy(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_DestroyArray(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_OffsetPtr(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *)(((const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_OffsetMutablePtr(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *)(((std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_size(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_empty(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_resize_with_default_value(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, size_t new_size, const MR_C_std_pair_MR_SeparateA_MR_SeparateB *value)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).resize(
        new_size,
        ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), *(const std::pair<MR::SeparateA, MR::SeparateB> *)(value))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_clear(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).clear();
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_capacity(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).capacity();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_reserve(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_shrink_to_fit(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).shrink_to_fit();
    ) // MRBINDC_TRY
}

const MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_MR_SeparateA_MR_SeparateB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at_mut(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).front());
    ) // MRBINDC_TRY
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front_mut(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).front());
    ) // MRBINDC_TRY
}

const MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).back());
    ) // MRBINDC_TRY
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back_mut(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).back());
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_push_back(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, MR_C_PassBy new_elem_pass_by, MR_C_std_pair_MR_SeparateA_MR_SeparateB *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, std::pair<MR::SeparateA, MR::SeparateB>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).push_back(
        (MRBINDC_CLASSARG_COPY(new_elem, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_MOVE(new_elem, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_END(new_elem, std::pair<MR::SeparateA, MR::SeparateB>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_pop_back(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_C_std_pair_MR_SeparateA_MR_SeparateB *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, std::pair<MR::SeparateA, MR::SeparateB>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_COPY(new_elem, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_MOVE(new_elem, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_END(new_elem, std::pair<MR::SeparateA, MR::SeparateB>)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, size_t position)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).begin() + ptrdiff_t(position));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert_at_mutable_iter(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *position, MR_C_PassBy new_elem_pass_by, MR_C_std_pair_MR_SeparateA_MR_SeparateB *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, std::pair<MR::SeparateA, MR::SeparateB>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)position)),
        (MRBINDC_CLASSARG_COPY(new_elem, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_MOVE(new_elem, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_END(new_elem, std::pair<MR::SeparateA, MR::SeparateB>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase_at_mutable_iter(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)position))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert_at_iter(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *position, MR_C_PassBy new_elem_pass_by, MR_C_std_pair_MR_SeparateA_MR_SeparateB *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, std::pair<MR::SeparateA, MR::SeparateB>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)position)),
        (MRBINDC_CLASSARG_COPY(new_elem, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_MOVE(new_elem, (std::pair<MR::SeparateA, MR::SeparateB>), std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, std::pair<MR::SeparateA, MR::SeparateB>) MRBINDC_CLASSARG_END(new_elem, std::pair<MR::SeparateA, MR::SeparateB>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase_at_iter(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)position))
    );
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_is_begin(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin_mut(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).begin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_is_begin_mut(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_is_end(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end_mut(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).end());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_is_end_mut(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)(iter));
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_to_index(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).cbegin();
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_to_index_mut(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>> *)(_this)).begin();
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *)(new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_ConstructFromAnother(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_AssignFromAnother(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_Destroy(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_DestroyArray(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_OffsetPtr(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *)(((const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_OffsetMutablePtr(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *)(((std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_from_mutable(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *iter)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)iter))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *)(new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_ConstructFromAnother(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *)new std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_AssignFromAnother(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *_this, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_Destroy(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_DestroyArray(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_OffsetPtr(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *)(((const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_OffsetMutablePtr(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *)(((std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_deref(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *_this)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_MR_SeparateA_MR_SeparateB *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_incr(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_decr(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator_add_assign(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *a, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *a, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::const_iterator *)b));
    ) // MRBINDC_TRY
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_deref(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_incr(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_decr(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator_add_assign(MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *a, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator(const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *a, const MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator(*(std::vector<std::pair<MR::SeparateA, MR::SeparateB>>::iterator *)b));
    ) // MRBINDC_TRY
}

