#define MR_A_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "A/std_vector_MR_SeparateA.h"

#include <__mrbind_c_details.h>
#include <input/A/a.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_SeparateA *)new std::vector<MR::SeparateA>(std::vector<MR::SeparateA>());
}

MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_SeparateA *)(new std::vector<MR::SeparateA>[num_elems]{});
}

MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateA *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateA>);
    return (MR_C_std_vector_MR_SeparateA *)new std::vector<MR::SeparateA>(std::vector<MR::SeparateA>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateA>))
    ));
}

void MR_C_std_vector_MR_SeparateA_AssignFromAnother(MR_C_std_vector_MR_SeparateA *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_MR_SeparateA *other)
{
    MRBINDC_CLASSARG_GUARD(other, std::vector<MR::SeparateA>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR::SeparateA>), std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR::SeparateA>) MRBINDC_CLASSARG_END(other, std::vector<MR::SeparateA>))
    );
}

void MR_C_std_vector_MR_SeparateA_Destroy(const MR_C_std_vector_MR_SeparateA *_this)
{
    delete ((const std::vector<MR::SeparateA> *)_this);
}

void MR_C_std_vector_MR_SeparateA_DestroyArray(const MR_C_std_vector_MR_SeparateA *_this)
{
    delete[] ((const std::vector<MR::SeparateA> *)_this);
}

const MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_OffsetPtr(const MR_C_std_vector_MR_SeparateA *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_SeparateA *)(((const std::vector<MR::SeparateA> *)ptr) + i);
}

MR_C_std_vector_MR_SeparateA *MR_C_std_vector_MR_SeparateA_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_SeparateA *)(((std::vector<MR::SeparateA> *)ptr) + i);
}

size_t MR_C_std_vector_MR_SeparateA_size(const MR_C_std_vector_MR_SeparateA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).size();
}

bool MR_C_std_vector_MR_SeparateA_empty(const MR_C_std_vector_MR_SeparateA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).empty();
}

void MR_C_std_vector_MR_SeparateA_resize_with_default_value(MR_C_std_vector_MR_SeparateA *_this, size_t new_size, const MR_SeparateA *value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).resize(
        new_size,
        ((value ? void() : throw std::runtime_error("Parameter `value` can not be null.")), *(const MR::SeparateA *)(value))
    );
}

void MR_C_std_vector_MR_SeparateA_clear(MR_C_std_vector_MR_SeparateA *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).clear();
}

size_t MR_C_std_vector_MR_SeparateA_capacity(const MR_C_std_vector_MR_SeparateA *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).capacity();
}

void MR_C_std_vector_MR_SeparateA_reserve(MR_C_std_vector_MR_SeparateA *_this, size_t new_capacity)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_MR_SeparateA_shrink_to_fit(MR_C_std_vector_MR_SeparateA *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).shrink_to_fit();
}

const MR_SeparateA *MR_C_std_vector_MR_SeparateA_at(const MR_C_std_vector_MR_SeparateA *_this, size_t i)
{
    return (const MR_SeparateA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).at(
        i
    ));
}

MR_SeparateA *MR_C_std_vector_MR_SeparateA_at_mut(MR_C_std_vector_MR_SeparateA *_this, size_t i)
{
    return (MR_SeparateA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).at(
        i
    ));
}

const MR_SeparateA *MR_C_std_vector_MR_SeparateA_front(const MR_C_std_vector_MR_SeparateA *_this)
{
    return (const MR_SeparateA *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).front());
}

MR_SeparateA *MR_C_std_vector_MR_SeparateA_front_mut(MR_C_std_vector_MR_SeparateA *_this)
{
    return (MR_SeparateA *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).front());
}

const MR_SeparateA *MR_C_std_vector_MR_SeparateA_back(const MR_C_std_vector_MR_SeparateA *_this)
{
    return (const MR_SeparateA *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).back());
}

MR_SeparateA *MR_C_std_vector_MR_SeparateA_back_mut(MR_C_std_vector_MR_SeparateA *_this)
{
    return (MR_SeparateA *)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).back());
}

void MR_C_std_vector_MR_SeparateA_push_back(MR_C_std_vector_MR_SeparateA *_this, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateA);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).push_back(
        (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(new_elem, MR::SeparateA))
    );
}

void MR_C_std_vector_MR_SeparateA_pop_back(MR_C_std_vector_MR_SeparateA *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).pop_back();
}

void MR_C_std_vector_MR_SeparateA_insert(MR_C_std_vector_MR_SeparateA *_this, size_t position, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateA);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).begin() + ptrdiff_t(position), (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(new_elem, MR::SeparateA)));
}

void MR_C_std_vector_MR_SeparateA_erase(MR_C_std_vector_MR_SeparateA *_this, size_t position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_MR_SeparateA_insert_at_mutable_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *position, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateA);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)position)),
        (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(new_elem, MR::SeparateA))
    );
}

void MR_C_std_vector_MR_SeparateA_erase_at_mutable_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)position))
    );
}

void MR_C_std_vector_MR_SeparateA_insert_at_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *position, MR_C_PassBy new_elem_pass_by, MR_SeparateA *new_elem)
{
    MRBINDC_CLASSARG_GUARD(new_elem, MR::SeparateA);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)position)),
        (MRBINDC_CLASSARG_COPY(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_MOVE(new_elem, (MR::SeparateA), MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::SeparateA) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::SeparateA) MRBINDC_CLASSARG_END(new_elem, MR::SeparateA))
    );
}

void MR_C_std_vector_MR_SeparateA_erase_at_iter(MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)position))
    );
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_begin(const MR_C_std_vector_MR_SeparateA *_this)
{
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)new std::vector<MR::SeparateA>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).cbegin());
}

bool MR_C_std_vector_MR_SeparateA_is_begin(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::SeparateA>::const_iterator *)(iter));
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_begin_mut(MR_C_std_vector_MR_SeparateA *_this)
{
    return (MR_C_std_vector_MR_SeparateA_iterator *)new std::vector<MR::SeparateA>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).begin());
}

bool MR_C_std_vector_MR_SeparateA_is_begin_mut(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::SeparateA>::iterator *)(iter));
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_end(const MR_C_std_vector_MR_SeparateA *_this)
{
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)new std::vector<MR::SeparateA>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).cend());
}

bool MR_C_std_vector_MR_SeparateA_is_end(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::SeparateA>::const_iterator *)(iter));
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_end_mut(MR_C_std_vector_MR_SeparateA *_this)
{
    return (MR_C_std_vector_MR_SeparateA_iterator *)new std::vector<MR::SeparateA>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA> *)(_this)).end());
}

bool MR_C_std_vector_MR_SeparateA_is_end_mut(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR::SeparateA>::iterator *)(iter));
}

ptrdiff_t MR_C_std_vector_MR_SeparateA_to_index(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_vector_MR_SeparateA_to_index_mut(const MR_C_std_vector_MR_SeparateA *_this, const MR_C_std_vector_MR_SeparateA_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA> *)(_this)).begin();
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)new std::vector<MR::SeparateA>::const_iterator(std::vector<MR::SeparateA>::const_iterator());
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)(new std::vector<MR::SeparateA>::const_iterator[num_elems]{});
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_ConstructFromAnother(const MR_C_std_vector_MR_SeparateA_const_iterator *other)
{
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)new std::vector<MR::SeparateA>::const_iterator(std::vector<MR::SeparateA>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)other))
    ));
}

void MR_C_std_vector_MR_SeparateA_const_iterator_AssignFromAnother(MR_C_std_vector_MR_SeparateA_const_iterator *_this, const MR_C_std_vector_MR_SeparateA_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)other))
    );
}

void MR_C_std_vector_MR_SeparateA_const_iterator_Destroy(const MR_C_std_vector_MR_SeparateA_const_iterator *_this)
{
    delete ((const std::vector<MR::SeparateA>::const_iterator *)_this);
}

void MR_C_std_vector_MR_SeparateA_const_iterator_DestroyArray(const MR_C_std_vector_MR_SeparateA_const_iterator *_this)
{
    delete[] ((const std::vector<MR::SeparateA>::const_iterator *)_this);
}

const MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_OffsetPtr(const MR_C_std_vector_MR_SeparateA_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_SeparateA_const_iterator *)(((const std::vector<MR::SeparateA>::const_iterator *)ptr) + i);
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)(((std::vector<MR::SeparateA>::const_iterator *)ptr) + i);
}

MR_C_std_vector_MR_SeparateA_const_iterator *MR_C_std_vector_MR_SeparateA_const_iterator_from_mutable(const MR_C_std_vector_MR_SeparateA_iterator *iter)
{
    return (MR_C_std_vector_MR_SeparateA_const_iterator *)new std::vector<MR::SeparateA>::const_iterator(std::vector<MR::SeparateA>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)iter))
    ));
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_MR_SeparateA_iterator *)new std::vector<MR::SeparateA>::iterator(std::vector<MR::SeparateA>::iterator());
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_MR_SeparateA_iterator *)(new std::vector<MR::SeparateA>::iterator[num_elems]{});
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_ConstructFromAnother(const MR_C_std_vector_MR_SeparateA_iterator *other)
{
    return (MR_C_std_vector_MR_SeparateA_iterator *)new std::vector<MR::SeparateA>::iterator(std::vector<MR::SeparateA>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)other))
    ));
}

void MR_C_std_vector_MR_SeparateA_iterator_AssignFromAnother(MR_C_std_vector_MR_SeparateA_iterator *_this, const MR_C_std_vector_MR_SeparateA_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)other))
    );
}

void MR_C_std_vector_MR_SeparateA_iterator_Destroy(const MR_C_std_vector_MR_SeparateA_iterator *_this)
{
    delete ((const std::vector<MR::SeparateA>::iterator *)_this);
}

void MR_C_std_vector_MR_SeparateA_iterator_DestroyArray(const MR_C_std_vector_MR_SeparateA_iterator *_this)
{
    delete[] ((const std::vector<MR::SeparateA>::iterator *)_this);
}

const MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_OffsetPtr(const MR_C_std_vector_MR_SeparateA_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_MR_SeparateA_iterator *)(((const std::vector<MR::SeparateA>::iterator *)ptr) + i);
}

MR_C_std_vector_MR_SeparateA_iterator *MR_C_std_vector_MR_SeparateA_iterator_OffsetMutablePtr(MR_C_std_vector_MR_SeparateA_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_MR_SeparateA_iterator *)(((std::vector<MR::SeparateA>::iterator *)ptr) + i);
}

const MR_SeparateA *MR_C_std_vector_MR_SeparateA_const_iterator_deref(const MR_C_std_vector_MR_SeparateA_const_iterator *_this)
{
    return (const MR_SeparateA *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA>::const_iterator *)(_this)));
}

void MR_C_std_vector_MR_SeparateA_const_iterator_incr(MR_C_std_vector_MR_SeparateA_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA>::const_iterator *)(_this));
}

void MR_C_std_vector_MR_SeparateA_const_iterator_decr(MR_C_std_vector_MR_SeparateA_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA>::const_iterator *)(_this));
}

void MR_C_std_vector_MR_SeparateA_const_iterator_add_assign(MR_C_std_vector_MR_SeparateA_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_SeparateA_const_iterator(const MR_C_std_vector_MR_SeparateA_const_iterator *a, const MR_C_std_vector_MR_SeparateA_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)a));
}

bool MR_C_equal_MR_C_std_vector_MR_SeparateA_const_iterator(const MR_C_std_vector_MR_SeparateA_const_iterator *a, const MR_C_std_vector_MR_SeparateA_const_iterator *b)
{
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::SeparateA>::const_iterator(*(std::vector<MR::SeparateA>::const_iterator *)b));
}

MR_SeparateA *MR_C_std_vector_MR_SeparateA_iterator_deref(const MR_C_std_vector_MR_SeparateA_iterator *_this)
{
    return (MR_SeparateA *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR::SeparateA>::iterator *)(_this)));
}

void MR_C_std_vector_MR_SeparateA_iterator_incr(MR_C_std_vector_MR_SeparateA_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA>::iterator *)(_this));
}

void MR_C_std_vector_MR_SeparateA_iterator_decr(MR_C_std_vector_MR_SeparateA_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA>::iterator *)(_this));
}

void MR_C_std_vector_MR_SeparateA_iterator_add_assign(MR_C_std_vector_MR_SeparateA_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR::SeparateA>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_vector_MR_SeparateA_iterator(const MR_C_std_vector_MR_SeparateA_iterator *a, const MR_C_std_vector_MR_SeparateA_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)a));
}

bool MR_C_equal_MR_C_std_vector_MR_SeparateA_iterator(const MR_C_std_vector_MR_SeparateA_iterator *a, const MR_C_std_vector_MR_SeparateA_iterator *b)
{
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR::SeparateA>::iterator(*(std::vector<MR::SeparateA>::iterator *)b));
}

