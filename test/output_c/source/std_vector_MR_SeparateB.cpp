#define MR_C_BUILD_LIBRARY
#include "std_vector_MR_SeparateB.h"

#include <__mrbind_c_details.h>
#include <input/B/b.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_SeparateB *MR_C_std_vector_MR_SeparateB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateB *)new std::vector<MR::SeparateB>(std::vector<MR::SeparateB>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateB *MR_C_std_vector_MR_SeparateB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateB *)(new std::vector<MR::SeparateB>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateB *MR_C_std_vector_MR_SeparateB_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateB *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateB>);
    return (MR_C_std_vector_MR_SeparateB *)new std::vector<MR::SeparateB>(std::vector<MR::SeparateB>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateB>), std::vector<MR::SeparateB>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateB>), std::vector<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateB>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_AssignFromAnother(MR_C_std_vector_MR_SeparateB *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateB *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateB>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateB>), std::vector<MR::SeparateB>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateB>), std::vector<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateB>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateB>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_Destroy(const MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::SeparateB> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_DestroyArray(const MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::SeparateB> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_SeparateB *MR_C_std_vector_MR_SeparateB_OffsetPtr(const MR_C_std_vector_MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_SeparateB *)(((const std::vector<MR::SeparateB> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateB *MR_C_std_vector_MR_SeparateB_OffsetMutablePtr(MR_C_std_vector_MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateB *)(((std::vector<MR::SeparateB> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_SeparateB_size(const MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_SeparateB_empty(const MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_resize_with_default_value(MR_C_std_vector_MR_SeparateB *_this, size_t new_size, const MR_SeparateB *value)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).resize(
        new_size,
        ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), *(const MR::SeparateB *)(value))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_clear(MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).clear();
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_SeparateB_capacity(const MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).capacity();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_reserve(MR_C_std_vector_MR_SeparateB *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_shrink_to_fit(MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).shrink_to_fit();
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_C_std_vector_MR_SeparateB_at(const MR_C_std_vector_MR_SeparateB *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_C_std_vector_MR_SeparateB_at_mut(MR_C_std_vector_MR_SeparateB *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_C_std_vector_MR_SeparateB_front(const MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).front());
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_C_std_vector_MR_SeparateB_front_mut(MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).front());
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_C_std_vector_MR_SeparateB_back(const MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).back());
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_C_std_vector_MR_SeparateB_back_mut(MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).back());
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_push_back(MR_C_std_vector_MR_SeparateB *_this, MR_C_PassBy new_elem_pass_by, MR_SeparateB *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateB);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).push_back(
        (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateB) MRBINDC_CLASSARG_END(new_elem, MR::SeparateB))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_pop_back(MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_insert(MR_C_std_vector_MR_SeparateB *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_SeparateB *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateB);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateB), MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateB) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateB) MRBINDC_CLASSARG_END(new_elem, MR::SeparateB)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateB_erase(MR_C_std_vector_MR_SeparateB *_this, size_t position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).begin() + ptrdiff_t(position));
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_C_std_vector_MR_SeparateB_begin(const MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).data());
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_C_std_vector_MR_SeparateB_begin_mut(MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).data());
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_C_std_vector_MR_SeparateB_end(const MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateB> *)(_this)).size());
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_C_std_vector_MR_SeparateB_end_mut(MR_C_std_vector_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).data() + ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateB> *)(_this)).size());
    ) // MRBINDC_TRY
}

