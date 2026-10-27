#define MR_AB_BUILD_LIBRARY
#include "AB/common/std_vector_MR_SeparateB.h"

#include <__mrbind_c_details.h>
#include <input/B/b.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_SeparateB *MR_C_std_vector_MR_SeparateB_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_SeparateB *)new std::vector<MR::SeparateB>(std::vector<MR::SeparateB>());
}

MR_C_std_vector_MR_SeparateB *MR_C_std_vector_MR_SeparateB_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_SeparateB *)(new std::vector<MR::SeparateB>[num_elems]{});
}

MR_C_std_vector_MR_SeparateB *MR_C_std_vector_MR_SeparateB_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateB *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateB>);
    return (MR_C_std_vector_MR_SeparateB *)new std::vector<MR::SeparateB>(std::vector<MR::SeparateB>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateB>), std::vector<MR::SeparateB>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateB>), std::vector<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateB>))
    ));
}

void MR_C_std_vector_MR_SeparateB_AssignFromAnother(MR_C_std_vector_MR_SeparateB *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateB *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateB>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateB>), std::vector<MR::SeparateB>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateB>), std::vector<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateB>))
    );
}

void MR_C_std_vector_MR_SeparateB_Destroy(const MR_C_std_vector_MR_SeparateB *_this)
{
    delete ((const std::vector<MR::SeparateB> *)_this);
}

void MR_C_std_vector_MR_SeparateB_DestroyArray(const MR_C_std_vector_MR_SeparateB *_this)
{
    delete[] ((const std::vector<MR::SeparateB> *)_this);
}

const MR_C_std_vector_MR_SeparateB *MR_C_std_vector_MR_SeparateB_OffsetPtr(const MR_C_std_vector_MR_SeparateB *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_SeparateB *)(((const std::vector<MR::SeparateB> *)ptr) + i);
}

MR_C_std_vector_MR_SeparateB *MR_C_std_vector_MR_SeparateB_OffsetMutablePtr(MR_C_std_vector_MR_SeparateB *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_SeparateB *)(((std::vector<MR::SeparateB> *)ptr) + i);
}

size_t MR_C_std_vector_MR_SeparateB_size(const MR_C_std_vector_MR_SeparateB *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).size();
}

bool MR_C_std_vector_MR_SeparateB_empty(const MR_C_std_vector_MR_SeparateB *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).empty();
}

void MR_C_std_vector_MR_SeparateB_resize_with_default_value(MR_C_std_vector_MR_SeparateB *_this, size_t new_size, const MR_SeparateB *value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).resize(
        new_size,
        ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), *(const MR::SeparateB *)(value))
    );
}

void MR_C_std_vector_MR_SeparateB_clear(MR_C_std_vector_MR_SeparateB *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).clear();
}

size_t MR_C_std_vector_MR_SeparateB_capacity(const MR_C_std_vector_MR_SeparateB *_this)
{
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).capacity();
}

void MR_C_std_vector_MR_SeparateB_reserve(MR_C_std_vector_MR_SeparateB *_this, size_t new_capacity)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_MR_SeparateB_shrink_to_fit(MR_C_std_vector_MR_SeparateB *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).shrink_to_fit();
}

const MR_SeparateB *MR_C_std_vector_MR_SeparateB_at(const MR_C_std_vector_MR_SeparateB *_this, size_t i)
{
    return (const MR_SeparateB *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).at(
        i
    ));
}

MR_SeparateB *MR_C_std_vector_MR_SeparateB_at_mut(MR_C_std_vector_MR_SeparateB *_this, size_t i)
{
    return (MR_SeparateB *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).at(
        i
    ));
}

const MR_SeparateB *MR_C_std_vector_MR_SeparateB_front(const MR_C_std_vector_MR_SeparateB *_this)
{
    return (const MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).front());
}

MR_SeparateB *MR_C_std_vector_MR_SeparateB_front_mut(MR_C_std_vector_MR_SeparateB *_this)
{
    return (MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).front());
}

const MR_SeparateB *MR_C_std_vector_MR_SeparateB_back(const MR_C_std_vector_MR_SeparateB *_this)
{
    return (const MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).back());
}

MR_SeparateB *MR_C_std_vector_MR_SeparateB_back_mut(MR_C_std_vector_MR_SeparateB *_this)
{
    return (MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).back());
}

void MR_C_std_vector_MR_SeparateB_push_back(MR_C_std_vector_MR_SeparateB *_this, MR_C_PassBy new_elem_pass_by, MR_SeparateB *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateB);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).push_back(
        (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateB) MRBINDC_CLASSARG_END(new_elem, MR::SeparateB))
    );
}

void MR_C_std_vector_MR_SeparateB_pop_back(MR_C_std_vector_MR_SeparateB *_this)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).pop_back();
}

void MR_C_std_vector_MR_SeparateB_insert(MR_C_std_vector_MR_SeparateB *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_SeparateB *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateB);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateB) MRBINDC_CLASSARG_END(new_elem, MR::SeparateB)));
}

void MR_C_std_vector_MR_SeparateB_erase(MR_C_std_vector_MR_SeparateB *_this, size_t position)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).begin() + ptrdiff_t(position));
}

const MR_SeparateB *MR_C_std_vector_MR_SeparateB_begin(const MR_C_std_vector_MR_SeparateB *_this)
{
    return (const MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).data());
}

MR_SeparateB *MR_C_std_vector_MR_SeparateB_begin_mut(MR_C_std_vector_MR_SeparateB *_this)
{
    return (MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).data());
}

const MR_SeparateB *MR_C_std_vector_MR_SeparateB_end(const MR_C_std_vector_MR_SeparateB *_this)
{
    return (const MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).size());
}

MR_SeparateB *MR_C_std_vector_MR_SeparateB_end_mut(MR_C_std_vector_MR_SeparateB *_this)
{
    return (MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).size());
}

