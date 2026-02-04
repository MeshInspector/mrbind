#define MR_C_BUILD_LIBRARY
#include "std_vector_int64_t.h"

#include <__mrbind_c_details.h>

#include <common.h>
#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_DefaultConstruct(void)
{
    return (MR_C_std_vector_int64_t *)new std::vector<MR_C_int64_t>(std::vector<MR_C_int64_t>());
}

MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int64_t *)(new std::vector<MR_C_int64_t>[num_elems]{});
}

MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_int64_t *other)
{
    return (MR_C_std_vector_int64_t *)new std::vector<MR_C_int64_t>(std::vector<MR_C_int64_t>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR_C_int64_t>), std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR_C_int64_t>), std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_END(other, std::vector<MR_C_int64_t>))
    ));
}

void MR_C_std_vector_int64_t_AssignFromAnother(MR_C_std_vector_int64_t *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_int64_t *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_COPY(other, (std::vector<MR_C_int64_t>), std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_MOVE(other, (std::vector<MR_C_int64_t>), std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<MR_C_int64_t>) MRBINDC_CLASSARG_END(other, std::vector<MR_C_int64_t>))
    );
}

void MR_C_std_vector_int64_t_Destroy(const MR_C_std_vector_int64_t *_this)
{
    delete ((const std::vector<MR_C_int64_t> *)_this);
}

void MR_C_std_vector_int64_t_DestroyArray(const MR_C_std_vector_int64_t *_this)
{
    delete[] ((const std::vector<MR_C_int64_t> *)_this);
}

const MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_OffsetPtr(const MR_C_std_vector_int64_t *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int64_t *)(((const std::vector<MR_C_int64_t> *)ptr) + i);
}

MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_OffsetMutablePtr(MR_C_std_vector_int64_t *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int64_t *)(((std::vector<MR_C_int64_t> *)ptr) + i);
}

MR_C_std_vector_int64_t *MR_C_std_vector_int64_t_ConstructFromRange(const MR_C_int64_t *ptr, size_t size)
{
    return (MR_C_std_vector_int64_t *)new std::vector<MR_C_int64_t>(std::vector<MR_C_int64_t>(ptr, ptr + size));
}

void MR_C_std_vector_int64_t_AssignFromRange(MR_C_std_vector_int64_t *_this, const MR_C_int64_t *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)) = std::vector<MR_C_int64_t>(ptr, ptr + size);
}

size_t MR_C_std_vector_int64_t_size(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).size();
}

bool MR_C_std_vector_int64_t_empty(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).empty();
}

void MR_C_std_vector_int64_t_resize(MR_C_std_vector_int64_t *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_int64_t_resize_with_default_value(MR_C_std_vector_int64_t *_this, size_t new_size, MR_C_int64_t value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).resize(
        new_size,
        value
    );
}

void MR_C_std_vector_int64_t_clear(MR_C_std_vector_int64_t *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).clear();
}

size_t MR_C_std_vector_int64_t_capacity(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).capacity();
}

void MR_C_std_vector_int64_t_reserve(MR_C_std_vector_int64_t *_this, size_t new_capacity)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_int64_t_shrink_to_fit(MR_C_std_vector_int64_t *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).shrink_to_fit();
}

const MR_C_int64_t *MR_C_std_vector_int64_t_at(const MR_C_std_vector_int64_t *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).at(
        i
    ));
}

MR_C_int64_t *MR_C_std_vector_int64_t_at_mut(MR_C_std_vector_int64_t *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).at(
        i
    ));
}

const MR_C_int64_t *MR_C_std_vector_int64_t_front(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).front();
}

MR_C_int64_t *MR_C_std_vector_int64_t_front_mut(MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).front();
}

const MR_C_int64_t *MR_C_std_vector_int64_t_back(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).back();
}

MR_C_int64_t *MR_C_std_vector_int64_t_back_mut(MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).back();
}

const MR_C_int64_t *MR_C_std_vector_int64_t_data(const MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).data();
}

MR_C_int64_t *MR_C_std_vector_int64_t_data_mut(MR_C_std_vector_int64_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).data();
}

void MR_C_std_vector_int64_t_push_back(MR_C_std_vector_int64_t *_this, MR_C_int64_t new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).push_back(
        new_elem
    );
}

void MR_C_std_vector_int64_t_pop_back(MR_C_std_vector_int64_t *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).pop_back();
}

void MR_C_std_vector_int64_t_insert(MR_C_std_vector_int64_t *_this, size_t position, MR_C_int64_t new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_vector_int64_t_erase(MR_C_std_vector_int64_t *_this, size_t position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_int64_t_insert_at_mutable_iter(MR_C_std_vector_int64_t *_this, const MR_C_std_vector_int64_t_iterator *position, MR_C_int64_t new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR_C_int64_t>::iterator(*(std::vector<MR_C_int64_t>::iterator *)position)),
        new_elem
    );
}

void MR_C_std_vector_int64_t_erase_at_mutable_iter(MR_C_std_vector_int64_t *_this, const MR_C_std_vector_int64_t_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR_C_int64_t>::iterator(*(std::vector<MR_C_int64_t>::iterator *)position))
    );
}

void MR_C_std_vector_int64_t_insert_at_iter(MR_C_std_vector_int64_t *_this, const MR_C_std_vector_int64_t_const_iterator *position, MR_C_int64_t new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR_C_int64_t>::const_iterator(*(std::vector<MR_C_int64_t>::const_iterator *)position)),
        new_elem
    );
}

void MR_C_std_vector_int64_t_erase_at_iter(MR_C_std_vector_int64_t *_this, const MR_C_std_vector_int64_t_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<MR_C_int64_t>::const_iterator(*(std::vector<MR_C_int64_t>::const_iterator *)position))
    );
}

MR_C_std_vector_int64_t_const_iterator *MR_C_std_vector_int64_t_begin(const MR_C_std_vector_int64_t *_this)
{
    return (MR_C_std_vector_int64_t_const_iterator *)new std::vector<MR_C_int64_t>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).cbegin());
}

bool MR_C_std_vector_int64_t_is_begin(const MR_C_std_vector_int64_t *_this, const MR_C_std_vector_int64_t_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR_C_int64_t>::const_iterator *)(iter));
}

MR_C_std_vector_int64_t_iterator *MR_C_std_vector_int64_t_begin_mut(MR_C_std_vector_int64_t *_this)
{
    return (MR_C_std_vector_int64_t_iterator *)new std::vector<MR_C_int64_t>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).begin());
}

bool MR_C_std_vector_int64_t_is_begin_mut(const MR_C_std_vector_int64_t *_this, const MR_C_std_vector_int64_t_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR_C_int64_t>::iterator *)(iter));
}

MR_C_std_vector_int64_t_const_iterator *MR_C_std_vector_int64_t_end(const MR_C_std_vector_int64_t *_this)
{
    return (MR_C_std_vector_int64_t_const_iterator *)new std::vector<MR_C_int64_t>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).cend());
}

bool MR_C_std_vector_int64_t_is_end(const MR_C_std_vector_int64_t *_this, const MR_C_std_vector_int64_t_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR_C_int64_t>::const_iterator *)(iter));
}

MR_C_std_vector_int64_t_iterator *MR_C_std_vector_int64_t_end_mut(MR_C_std_vector_int64_t *_this)
{
    return (MR_C_std_vector_int64_t_iterator *)new std::vector<MR_C_int64_t>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t> *)(_this)).end());
}

bool MR_C_std_vector_int64_t_is_end_mut(const MR_C_std_vector_int64_t *_this, const MR_C_std_vector_int64_t_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<MR_C_int64_t>::iterator *)(iter));
}

ptrdiff_t MR_C_std_vector_int64_t_to_index(const MR_C_std_vector_int64_t *_this, const MR_C_std_vector_int64_t_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR_C_int64_t>::const_iterator(*(std::vector<MR_C_int64_t>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_vector_int64_t_to_index_mut(const MR_C_std_vector_int64_t *_this, const MR_C_std_vector_int64_t_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR_C_int64_t>::iterator(*(std::vector<MR_C_int64_t>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t> *)(_this)).begin();
}

MR_C_std_vector_int64_t_const_iterator *MR_C_std_vector_int64_t_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_int64_t_const_iterator *)new std::vector<MR_C_int64_t>::const_iterator(std::vector<MR_C_int64_t>::const_iterator());
}

MR_C_std_vector_int64_t_const_iterator *MR_C_std_vector_int64_t_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int64_t_const_iterator *)(new std::vector<MR_C_int64_t>::const_iterator[num_elems]{});
}

MR_C_std_vector_int64_t_const_iterator *MR_C_std_vector_int64_t_const_iterator_ConstructFromAnother(const MR_C_std_vector_int64_t_const_iterator *other)
{
    return (MR_C_std_vector_int64_t_const_iterator *)new std::vector<MR_C_int64_t>::const_iterator(std::vector<MR_C_int64_t>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR_C_int64_t>::const_iterator(*(std::vector<MR_C_int64_t>::const_iterator *)other))
    ));
}

void MR_C_std_vector_int64_t_const_iterator_AssignFromAnother(MR_C_std_vector_int64_t_const_iterator *_this, const MR_C_std_vector_int64_t_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR_C_int64_t>::const_iterator(*(std::vector<MR_C_int64_t>::const_iterator *)other))
    );
}

void MR_C_std_vector_int64_t_const_iterator_Destroy(const MR_C_std_vector_int64_t_const_iterator *_this)
{
    delete ((const std::vector<MR_C_int64_t>::const_iterator *)_this);
}

void MR_C_std_vector_int64_t_const_iterator_DestroyArray(const MR_C_std_vector_int64_t_const_iterator *_this)
{
    delete[] ((const std::vector<MR_C_int64_t>::const_iterator *)_this);
}

const MR_C_std_vector_int64_t_const_iterator *MR_C_std_vector_int64_t_const_iterator_OffsetPtr(const MR_C_std_vector_int64_t_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int64_t_const_iterator *)(((const std::vector<MR_C_int64_t>::const_iterator *)ptr) + i);
}

MR_C_std_vector_int64_t_const_iterator *MR_C_std_vector_int64_t_const_iterator_OffsetMutablePtr(MR_C_std_vector_int64_t_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int64_t_const_iterator *)(((std::vector<MR_C_int64_t>::const_iterator *)ptr) + i);
}

MR_C_std_vector_int64_t_const_iterator *MR_C_std_vector_int64_t_const_iterator_from_mutable(const MR_C_std_vector_int64_t_iterator *iter)
{
    return (MR_C_std_vector_int64_t_const_iterator *)new std::vector<MR_C_int64_t>::const_iterator(std::vector<MR_C_int64_t>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<MR_C_int64_t>::iterator(*(std::vector<MR_C_int64_t>::iterator *)iter))
    ));
}

MR_C_std_vector_int64_t_iterator *MR_C_std_vector_int64_t_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_int64_t_iterator *)new std::vector<MR_C_int64_t>::iterator(std::vector<MR_C_int64_t>::iterator());
}

MR_C_std_vector_int64_t_iterator *MR_C_std_vector_int64_t_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_int64_t_iterator *)(new std::vector<MR_C_int64_t>::iterator[num_elems]{});
}

MR_C_std_vector_int64_t_iterator *MR_C_std_vector_int64_t_iterator_ConstructFromAnother(const MR_C_std_vector_int64_t_iterator *other)
{
    return (MR_C_std_vector_int64_t_iterator *)new std::vector<MR_C_int64_t>::iterator(std::vector<MR_C_int64_t>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR_C_int64_t>::iterator(*(std::vector<MR_C_int64_t>::iterator *)other))
    ));
}

void MR_C_std_vector_int64_t_iterator_AssignFromAnother(MR_C_std_vector_int64_t_iterator *_this, const MR_C_std_vector_int64_t_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<MR_C_int64_t>::iterator(*(std::vector<MR_C_int64_t>::iterator *)other))
    );
}

void MR_C_std_vector_int64_t_iterator_Destroy(const MR_C_std_vector_int64_t_iterator *_this)
{
    delete ((const std::vector<MR_C_int64_t>::iterator *)_this);
}

void MR_C_std_vector_int64_t_iterator_DestroyArray(const MR_C_std_vector_int64_t_iterator *_this)
{
    delete[] ((const std::vector<MR_C_int64_t>::iterator *)_this);
}

const MR_C_std_vector_int64_t_iterator *MR_C_std_vector_int64_t_iterator_OffsetPtr(const MR_C_std_vector_int64_t_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_int64_t_iterator *)(((const std::vector<MR_C_int64_t>::iterator *)ptr) + i);
}

MR_C_std_vector_int64_t_iterator *MR_C_std_vector_int64_t_iterator_OffsetMutablePtr(MR_C_std_vector_int64_t_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_int64_t_iterator *)(((std::vector<MR_C_int64_t>::iterator *)ptr) + i);
}

const MR_C_int64_t *MR_C_std_vector_int64_t_const_iterator_deref(const MR_C_std_vector_int64_t_const_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t>::const_iterator *)(_this)));
}

void MR_C_std_vector_int64_t_const_iterator_incr(MR_C_std_vector_int64_t_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t>::const_iterator *)(_this));
}

void MR_C_std_vector_int64_t_const_iterator_decr(MR_C_std_vector_int64_t_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t>::const_iterator *)(_this));
}

void MR_C_std_vector_int64_t_const_iterator_add_assign(MR_C_std_vector_int64_t_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_vector_int64_t_const_iterator(const MR_C_std_vector_int64_t_const_iterator *a, const MR_C_std_vector_int64_t_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR_C_int64_t>::const_iterator(*(std::vector<MR_C_int64_t>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR_C_int64_t>::const_iterator(*(std::vector<MR_C_int64_t>::const_iterator *)a));
}

MR_C_int64_t *MR_C_std_vector_int64_t_iterator_deref(const MR_C_std_vector_int64_t_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<MR_C_int64_t>::iterator *)(_this)));
}

void MR_C_std_vector_int64_t_iterator_incr(MR_C_std_vector_int64_t_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t>::iterator *)(_this));
}

void MR_C_std_vector_int64_t_iterator_decr(MR_C_std_vector_int64_t_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t>::iterator *)(_this));
}

void MR_C_std_vector_int64_t_iterator_add_assign(MR_C_std_vector_int64_t_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<MR_C_int64_t>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_vector_int64_t_iterator(const MR_C_std_vector_int64_t_iterator *a, const MR_C_std_vector_int64_t_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<MR_C_int64_t>::iterator(*(std::vector<MR_C_int64_t>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<MR_C_int64_t>::iterator(*(std::vector<MR_C_int64_t>::iterator *)a));
}

