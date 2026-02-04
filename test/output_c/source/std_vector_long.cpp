#define MR_C_BUILD_LIBRARY
#include "std_vector_long.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_C_std_vector_long *MR_C_std_vector_long_DefaultConstruct(void)
{
    return (MR_C_std_vector_long *)new std::vector<long>(std::vector<long>());
}

MR_C_std_vector_long *MR_C_std_vector_long_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_long *)(new std::vector<long>[num_elems]{});
}

MR_C_std_vector_long *MR_C_std_vector_long_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_vector_long *other)
{
    return (MR_C_std_vector_long *)new std::vector<long>(std::vector<long>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<long>) MRBINDC_CLASSARG_COPY(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_MOVE(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<long>) MRBINDC_CLASSARG_END(other, std::vector<long>))
    ));
}

void MR_C_std_vector_long_AssignFromAnother(MR_C_std_vector_long *_this, MR_C_PassBy other_pass_by, MR_C_std_vector_long *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::vector<long>) MRBINDC_CLASSARG_COPY(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_MOVE(other, (std::vector<long>), std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::vector<long>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::vector<long>) MRBINDC_CLASSARG_END(other, std::vector<long>))
    );
}

void MR_C_std_vector_long_Destroy(const MR_C_std_vector_long *_this)
{
    delete ((const std::vector<long> *)_this);
}

void MR_C_std_vector_long_DestroyArray(const MR_C_std_vector_long *_this)
{
    delete[] ((const std::vector<long> *)_this);
}

const MR_C_std_vector_long *MR_C_std_vector_long_OffsetPtr(const MR_C_std_vector_long *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_long *)(((const std::vector<long> *)ptr) + i);
}

MR_C_std_vector_long *MR_C_std_vector_long_OffsetMutablePtr(MR_C_std_vector_long *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_long *)(((std::vector<long> *)ptr) + i);
}

MR_C_std_vector_long *MR_C_std_vector_long_ConstructFromRange(const long *ptr, size_t size)
{
    return (MR_C_std_vector_long *)new std::vector<long>(std::vector<long>(ptr, ptr + size));
}

void MR_C_std_vector_long_AssignFromRange(MR_C_std_vector_long *_this, const long *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)) = std::vector<long>(ptr, ptr + size);
}

size_t MR_C_std_vector_long_size(const MR_C_std_vector_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).size();
}

bool MR_C_std_vector_long_empty(const MR_C_std_vector_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).empty();
}

void MR_C_std_vector_long_resize(MR_C_std_vector_long *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_vector_long_resize_with_default_value(MR_C_std_vector_long *_this, size_t new_size, long value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).resize(
        new_size,
        value
    );
}

void MR_C_std_vector_long_clear(MR_C_std_vector_long *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).clear();
}

size_t MR_C_std_vector_long_capacity(const MR_C_std_vector_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).capacity();
}

void MR_C_std_vector_long_reserve(MR_C_std_vector_long *_this, size_t new_capacity)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).reserve(
        new_capacity
    );
}

void MR_C_std_vector_long_shrink_to_fit(MR_C_std_vector_long *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).shrink_to_fit();
}

const long *MR_C_std_vector_long_at(const MR_C_std_vector_long *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).at(
        i
    ));
}

long *MR_C_std_vector_long_at_mut(MR_C_std_vector_long *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).at(
        i
    ));
}

const long *MR_C_std_vector_long_front(const MR_C_std_vector_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).front();
}

long *MR_C_std_vector_long_front_mut(MR_C_std_vector_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).front();
}

const long *MR_C_std_vector_long_back(const MR_C_std_vector_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).back();
}

long *MR_C_std_vector_long_back_mut(MR_C_std_vector_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).back();
}

const long *MR_C_std_vector_long_data(const MR_C_std_vector_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).data();
}

long *MR_C_std_vector_long_data_mut(MR_C_std_vector_long *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).data();
}

void MR_C_std_vector_long_push_back(MR_C_std_vector_long *_this, long new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).push_back(
        new_elem
    );
}

void MR_C_std_vector_long_pop_back(MR_C_std_vector_long *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).pop_back();
}

void MR_C_std_vector_long_insert(MR_C_std_vector_long *_this, size_t position, long new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_vector_long_erase(MR_C_std_vector_long *_this, size_t position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).begin() + ptrdiff_t(position));
}

void MR_C_std_vector_long_insert_at_mutable_iter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *position, long new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<long>::iterator(*(std::vector<long>::iterator *)position)),
        new_elem
    );
}

void MR_C_std_vector_long_erase_at_mutable_iter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<long>::iterator(*(std::vector<long>::iterator *)position))
    );
}

void MR_C_std_vector_long_insert_at_iter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *position, long new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)position)),
        new_elem
    );
}

void MR_C_std_vector_long_erase_at_iter(MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)position))
    );
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_begin(const MR_C_std_vector_long *_this)
{
    return (MR_C_std_vector_long_const_iterator *)new std::vector<long>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).cbegin());
}

bool MR_C_std_vector_long_is_begin(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<long>::const_iterator *)(iter));
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_begin_mut(MR_C_std_vector_long *_this)
{
    return (MR_C_std_vector_long_iterator *)new std::vector<long>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).begin());
}

bool MR_C_std_vector_long_is_begin_mut(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<long>::iterator *)(iter));
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_end(const MR_C_std_vector_long *_this)
{
    return (MR_C_std_vector_long_const_iterator *)new std::vector<long>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).cend());
}

bool MR_C_std_vector_long_is_end(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<long>::const_iterator *)(iter));
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_end_mut(MR_C_std_vector_long *_this)
{
    return (MR_C_std_vector_long_iterator *)new std::vector<long>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long> *)(_this)).end());
}

bool MR_C_std_vector_long_is_end_mut(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::vector<long>::iterator *)(iter));
}

ptrdiff_t MR_C_std_vector_long_to_index(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_vector_long_to_index_mut(const MR_C_std_vector_long *_this, const MR_C_std_vector_long_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<long>::iterator(*(std::vector<long>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long> *)(_this)).begin();
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_long_const_iterator *)new std::vector<long>::const_iterator(std::vector<long>::const_iterator());
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_long_const_iterator *)(new std::vector<long>::const_iterator[num_elems]{});
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_ConstructFromAnother(const MR_C_std_vector_long_const_iterator *other)
{
    return (MR_C_std_vector_long_const_iterator *)new std::vector<long>::const_iterator(std::vector<long>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)other))
    ));
}

void MR_C_std_vector_long_const_iterator_AssignFromAnother(MR_C_std_vector_long_const_iterator *_this, const MR_C_std_vector_long_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)other))
    );
}

void MR_C_std_vector_long_const_iterator_Destroy(const MR_C_std_vector_long_const_iterator *_this)
{
    delete ((const std::vector<long>::const_iterator *)_this);
}

void MR_C_std_vector_long_const_iterator_DestroyArray(const MR_C_std_vector_long_const_iterator *_this)
{
    delete[] ((const std::vector<long>::const_iterator *)_this);
}

const MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_OffsetPtr(const MR_C_std_vector_long_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_long_const_iterator *)(((const std::vector<long>::const_iterator *)ptr) + i);
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_OffsetMutablePtr(MR_C_std_vector_long_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_long_const_iterator *)(((std::vector<long>::const_iterator *)ptr) + i);
}

MR_C_std_vector_long_const_iterator *MR_C_std_vector_long_const_iterator_from_mutable(const MR_C_std_vector_long_iterator *iter)
{
    return (MR_C_std_vector_long_const_iterator *)new std::vector<long>::const_iterator(std::vector<long>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::vector<long>::iterator(*(std::vector<long>::iterator *)iter))
    ));
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_DefaultConstruct(void)
{
    return (MR_C_std_vector_long_iterator *)new std::vector<long>::iterator(std::vector<long>::iterator());
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_vector_long_iterator *)(new std::vector<long>::iterator[num_elems]{});
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_ConstructFromAnother(const MR_C_std_vector_long_iterator *other)
{
    return (MR_C_std_vector_long_iterator *)new std::vector<long>::iterator(std::vector<long>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<long>::iterator(*(std::vector<long>::iterator *)other))
    ));
}

void MR_C_std_vector_long_iterator_AssignFromAnother(MR_C_std_vector_long_iterator *_this, const MR_C_std_vector_long_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::vector<long>::iterator(*(std::vector<long>::iterator *)other))
    );
}

void MR_C_std_vector_long_iterator_Destroy(const MR_C_std_vector_long_iterator *_this)
{
    delete ((const std::vector<long>::iterator *)_this);
}

void MR_C_std_vector_long_iterator_DestroyArray(const MR_C_std_vector_long_iterator *_this)
{
    delete[] ((const std::vector<long>::iterator *)_this);
}

const MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_OffsetPtr(const MR_C_std_vector_long_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_vector_long_iterator *)(((const std::vector<long>::iterator *)ptr) + i);
}

MR_C_std_vector_long_iterator *MR_C_std_vector_long_iterator_OffsetMutablePtr(MR_C_std_vector_long_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_vector_long_iterator *)(((std::vector<long>::iterator *)ptr) + i);
}

const long *MR_C_std_vector_long_const_iterator_deref(const MR_C_std_vector_long_const_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long>::const_iterator *)(_this)));
}

void MR_C_std_vector_long_const_iterator_incr(MR_C_std_vector_long_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long>::const_iterator *)(_this));
}

void MR_C_std_vector_long_const_iterator_decr(MR_C_std_vector_long_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long>::const_iterator *)(_this));
}

void MR_C_std_vector_long_const_iterator_add_assign(MR_C_std_vector_long_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_vector_long_const_iterator(const MR_C_std_vector_long_const_iterator *a, const MR_C_std_vector_long_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<long>::const_iterator(*(std::vector<long>::const_iterator *)a));
}

long *MR_C_std_vector_long_iterator_deref(const MR_C_std_vector_long_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::vector<long>::iterator *)(_this)));
}

void MR_C_std_vector_long_iterator_incr(MR_C_std_vector_long_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long>::iterator *)(_this));
}

void MR_C_std_vector_long_iterator_decr(MR_C_std_vector_long_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long>::iterator *)(_this));
}

void MR_C_std_vector_long_iterator_add_assign(MR_C_std_vector_long_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::vector<long>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_vector_long_iterator(const MR_C_std_vector_long_iterator *a, const MR_C_std_vector_long_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::vector<long>::iterator(*(std::vector<long>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::vector<long>::iterator(*(std::vector<long>::iterator *)a));
}

