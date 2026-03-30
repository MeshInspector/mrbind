#define MR_C_BUILD_LIBRARY
#include "std_vector_MR_SeparateA.h"

#include <__mrbind_c_details.h>
#include <input/A/a.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA *)new std::vector<MR::SeparateA>(std::vector<MR::SeparateA>());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA *)(new std::vector<MR::SeparateA>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateA *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateA>);
    return (MR_C_std_vector_MR_SeparateA *)new std::vector<MR::SeparateA>(std::vector<MR::SeparateA>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateA>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_AssignFromAnother(MR_C_std_vector_MR_SeparateA *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateA *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateA>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateA>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_Destroy(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::SeparateA> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_DestroyArray(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::SeparateA> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_OffsetPtr(const MR_C_std_vector_MR_SeparateA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_SeparateA *)(((const std::vector<MR::SeparateA> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA *)(((std::vector<MR::SeparateA> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_SeparateA_size(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_SeparateA_empty(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_resize_with_default_value(MR_C_std_vector_MR_SeparateA *_this, size_t new_size, const MR_SeparateA *value)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).resize(
        new_size,
        ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), *(const MR::SeparateA *)(value))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_clear(MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).clear();
    ) // MRBINDC_TRY
}

size_t MR_C_std_vector_MR_SeparateA_capacity(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).capacity();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_reserve(MR_C_std_vector_MR_SeparateA *_this, size_t new_capacity)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).reserve(
        new_capacity
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_shrink_to_fit(MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).shrink_to_fit();
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_C_std_vector_MR_SeparateA_at(const MR_C_std_vector_MR_SeparateA *_this, size_t i)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_C_std_vector_MR_SeparateA_at_mut(MR_C_std_vector_MR_SeparateA *_this, size_t i)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).at(
        i
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_C_std_vector_MR_SeparateA_front(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).front());
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_C_std_vector_MR_SeparateA_front_mut(MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).front());
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_C_std_vector_MR_SeparateA_back(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).back());
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_C_std_vector_MR_SeparateA_back_mut(MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).empty() ? nullptr : &((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).back());
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_push_back(MR_C_std_vector_MR_SeparateA *_this, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateA);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).push_back(
        (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(new_elem, MR::SeparateA))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_pop_back(MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_insert(MR_C_std_vector_MR_SeparateA *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateA);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).insert(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(new_elem, MR::SeparateA)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_erase(MR_C_std_vector_MR_SeparateA *_this, size_t position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).erase(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).begin() + ptrdiff_t(position));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_insert_at_mutable_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *position, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateA);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).insert(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)position)),
        (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(new_elem, MR::SeparateA))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_erase_at_mutable_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).erase(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)position))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_insert_at_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *position, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateA);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).insert(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)position)),
        (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(new_elem, MR::SeparateA))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_erase_at_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).erase(
        ((position ? void() : MRBINDC_THROW("Parameter `position` can not be null.", void)), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)position))
    );
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_begin(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)new std::vector<MR::SeparateA>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_SeparateA_is_begin(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).cbegin() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<MR::SeparateA>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_begin_mut(MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_iterator *)new std::vector<MR::SeparateA>::iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).begin());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_SeparateA_is_begin_mut(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).begin() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<MR::SeparateA>::iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_end(const MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)new std::vector<MR::SeparateA>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_SeparateA_is_end(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).cend() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<MR::SeparateA>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_end_mut(MR_C_std_vector_MR_SeparateA *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_iterator *)new std::vector<MR::SeparateA>::iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA> *)(_this)).end());
    ) // MRBINDC_TRY
}

bool MR_C_std_vector_MR_SeparateA_is_end_mut(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).end() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::vector<MR::SeparateA>::iterator *)(iter));
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_MR_SeparateA_to_index(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)iter)) - ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).cbegin();
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_std_vector_MR_SeparateA_to_index_mut(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *iter)
{
    MRBINDC_TRY(
    return ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)iter)) - ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA> *)(_this)).begin();
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)new std::vector<MR::SeparateA>::const_iterator(std::vector<MR::SeparateA>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)(new std::vector<MR::SeparateA>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_SeparateA_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)new std::vector<MR::SeparateA>::const_iterator(std::vector<MR::SeparateA>::const_iterator(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_const_iterator_AssignFromAnother(MR_C_std_vector_MR_SeparateA_const_iterator *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA>::const_iterator *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_const_iterator_Destroy(const MR_C_std_vector_MR_SeparateA_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::SeparateA>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_const_iterator_DestroyArray(const MR_C_std_vector_MR_SeparateA_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::SeparateA>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_OffsetPtr(const MR_C_std_vector_MR_SeparateA_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_SeparateA_const_iterator *)(((const std::vector<MR::SeparateA>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)(((std::vector<MR::SeparateA>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_from_mutable(const MR_C_std_vector_MR_SeparateA_iterator *iter)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)new std::vector<MR::SeparateA>::const_iterator(std::vector<MR::SeparateA>::iterator(
        ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)iter))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_iterator *)new std::vector<MR::SeparateA>::iterator(std::vector<MR::SeparateA>::iterator());
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_iterator *)(new std::vector<MR::SeparateA>::iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_ConstructFromAnother(const MR_C_std_vector_MR_SeparateA_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_iterator *)new std::vector<MR::SeparateA>::iterator(std::vector<MR::SeparateA>::iterator(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_iterator_AssignFromAnother(MR_C_std_vector_MR_SeparateA_iterator *_this, const MR_C_std_vector_MR_SeparateA_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA>::iterator *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_iterator_Destroy(const MR_C_std_vector_MR_SeparateA_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::vector<MR::SeparateA>::iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_iterator_DestroyArray(const MR_C_std_vector_MR_SeparateA_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::vector<MR::SeparateA>::iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_OffsetPtr(const MR_C_std_vector_MR_SeparateA_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_vector_MR_SeparateA_iterator *)(((const std::vector<MR::SeparateA>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_vector_MR_SeparateA_iterator *)(((std::vector<MR::SeparateA>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_C_std_vector_MR_SeparateA_const_iterator_deref(const MR_C_std_vector_MR_SeparateA_const_iterator *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)std::addressof(*((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_const_iterator_incr(MR_C_std_vector_MR_SeparateA_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_const_iterator_decr(MR_C_std_vector_MR_SeparateA_const_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_const_iterator_add_assign(MR_C_std_vector_MR_SeparateA_const_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA>::const_iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_SeparateA_const_iterator(const MR_C_std_vector_MR_SeparateA_const_iterator *a, const MR_C_std_vector_MR_SeparateA_const_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)b)) - ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_MR_SeparateA_const_iterator(const MR_C_std_vector_MR_SeparateA_const_iterator *a, const MR_C_std_vector_MR_SeparateA_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)a)) == ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)b));
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_C_std_vector_MR_SeparateA_iterator_deref(const MR_C_std_vector_MR_SeparateA_iterator *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)std::addressof(*((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::vector<MR::SeparateA>::iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_iterator_incr(MR_C_std_vector_MR_SeparateA_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_iterator_decr(MR_C_std_vector_MR_SeparateA_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_vector_MR_SeparateA_iterator_add_assign(MR_C_std_vector_MR_SeparateA_iterator *_this, ptrdiff_t delta)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::vector<MR::SeparateA>::iterator *)(_this)) += delta;
    ) // MRBINDC_TRY
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_SeparateA_iterator(const MR_C_std_vector_MR_SeparateA_iterator *a, const MR_C_std_vector_MR_SeparateA_iterator *b)
{
    MRBINDC_TRY(
    return ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)b)) - ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)a));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_vector_MR_SeparateA_iterator(const MR_C_std_vector_MR_SeparateA_iterator *a, const MR_C_std_vector_MR_SeparateA_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)a)) == ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)b));
    ) // MRBINDC_TRY
}

