#define MR_C_BUILD_LIBRARY
#include "std_deque_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <deque>
#include <memory>
#include <stdexcept>


MR_C_std_deque_int *MR_C_std_deque_int_DefaultConstruct(void)
{
    return (MR_C_std_deque_int *)new std::deque<int>(std::deque<int>());
}

MR_C_std_deque_int *MR_C_std_deque_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_deque_int *)(new std::deque<int>[num_elems]{});
}

MR_C_std_deque_int *MR_C_std_deque_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_deque_int *other)
{
    return (MR_C_std_deque_int *)new std::deque<int>(std::deque<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::deque<int>) MRBINDC_CLASSARG_COPY(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_MOVE(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::deque<int>) MRBINDC_CLASSARG_END(other, std::deque<int>))
    ));
}

void MR_C_std_deque_int_AssignFromAnother(MR_C_std_deque_int *_this, MR_C_PassBy other_pass_by, MR_C_std_deque_int *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::deque<int>) MRBINDC_CLASSARG_COPY(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_MOVE(other, (std::deque<int>), std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::deque<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::deque<int>) MRBINDC_CLASSARG_END(other, std::deque<int>))
    );
}

void MR_C_std_deque_int_Destroy(const MR_C_std_deque_int *_this)
{
    delete ((const std::deque<int> *)_this);
}

void MR_C_std_deque_int_DestroyArray(const MR_C_std_deque_int *_this)
{
    delete[] ((const std::deque<int> *)_this);
}

const MR_C_std_deque_int *MR_C_std_deque_int_OffsetPtr(const MR_C_std_deque_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_deque_int *)(((const std::deque<int> *)ptr) + i);
}

MR_C_std_deque_int *MR_C_std_deque_int_OffsetMutablePtr(MR_C_std_deque_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_deque_int *)(((std::deque<int> *)ptr) + i);
}

MR_C_std_deque_int *MR_C_std_deque_int_ConstructFromRange(const int *ptr, size_t size)
{
    return (MR_C_std_deque_int *)new std::deque<int>(std::deque<int>(ptr, ptr + size));
}

void MR_C_std_deque_int_AssignFromRange(MR_C_std_deque_int *_this, const int *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)) = std::deque<int>(ptr, ptr + size);
}

size_t MR_C_std_deque_int_size(const MR_C_std_deque_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).size();
}

bool MR_C_std_deque_int_empty(const MR_C_std_deque_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).empty();
}

void MR_C_std_deque_int_resize(MR_C_std_deque_int *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_deque_int_resize_with_default_value(MR_C_std_deque_int *_this, size_t new_size, int value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).resize(
        new_size,
        value
    );
}

void MR_C_std_deque_int_clear(MR_C_std_deque_int *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).clear();
}

const int *MR_C_std_deque_int_at(const MR_C_std_deque_int *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).at(
        i
    ));
}

int *MR_C_std_deque_int_at_mut(MR_C_std_deque_int *_this, size_t i)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).at(
        i
    ));
}

const int *MR_C_std_deque_int_front(const MR_C_std_deque_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).front();
}

int *MR_C_std_deque_int_front_mut(MR_C_std_deque_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).front();
}

const int *MR_C_std_deque_int_back(const MR_C_std_deque_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).back();
}

int *MR_C_std_deque_int_back_mut(MR_C_std_deque_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).back();
}

void MR_C_std_deque_int_push_back(MR_C_std_deque_int *_this, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).push_back(
        new_elem
    );
}

void MR_C_std_deque_int_pop_back(MR_C_std_deque_int *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).pop_back();
}

void MR_C_std_deque_int_push_front(MR_C_std_deque_int *_this, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).push_front(
        new_elem
    );
}

void MR_C_std_deque_int_pop_front(MR_C_std_deque_int *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).pop_front();
}

void MR_C_std_deque_int_insert(MR_C_std_deque_int *_this, size_t position, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).insert(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).begin() + ptrdiff_t(position), new_elem);
}

void MR_C_std_deque_int_erase(MR_C_std_deque_int *_this, size_t position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).erase(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).begin() + ptrdiff_t(position));
}

void MR_C_std_deque_int_insert_at_mutable_iter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *position, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::deque<int>::iterator(*(std::deque<int>::iterator *)position)),
        new_elem
    );
}

void MR_C_std_deque_int_erase_at_mutable_iter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::deque<int>::iterator(*(std::deque<int>::iterator *)position))
    );
}

void MR_C_std_deque_int_insert_at_iter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *position, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)position)),
        new_elem
    );
}

void MR_C_std_deque_int_erase_at_iter(MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)position))
    );
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_begin(const MR_C_std_deque_int *_this)
{
    return (MR_C_std_deque_int_const_iterator *)new std::deque<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).cbegin());
}

bool MR_C_std_deque_int_is_begin(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::deque<int>::const_iterator *)(iter));
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_begin_mut(MR_C_std_deque_int *_this)
{
    return (MR_C_std_deque_int_iterator *)new std::deque<int>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).begin());
}

bool MR_C_std_deque_int_is_begin_mut(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::deque<int>::iterator *)(iter));
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_end(const MR_C_std_deque_int *_this)
{
    return (MR_C_std_deque_int_const_iterator *)new std::deque<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).cend());
}

bool MR_C_std_deque_int_is_end(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::deque<int>::const_iterator *)(iter));
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_end_mut(MR_C_std_deque_int *_this)
{
    return (MR_C_std_deque_int_iterator *)new std::deque<int>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int> *)(_this)).end());
}

bool MR_C_std_deque_int_is_end_mut(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::deque<int>::iterator *)(iter));
}

ptrdiff_t MR_C_std_deque_int_to_index(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_const_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).cbegin();
}

ptrdiff_t MR_C_std_deque_int_to_index_mut(const MR_C_std_deque_int *_this, const MR_C_std_deque_int_iterator *iter)
{
    return ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::deque<int>::iterator(*(std::deque<int>::iterator *)iter)) - ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int> *)(_this)).begin();
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_deque_int_const_iterator *)new std::deque<int>::const_iterator(std::deque<int>::const_iterator());
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_deque_int_const_iterator *)(new std::deque<int>::const_iterator[num_elems]{});
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_ConstructFromAnother(const MR_C_std_deque_int_const_iterator *other)
{
    return (MR_C_std_deque_int_const_iterator *)new std::deque<int>::const_iterator(std::deque<int>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)other))
    ));
}

void MR_C_std_deque_int_const_iterator_AssignFromAnother(MR_C_std_deque_int_const_iterator *_this, const MR_C_std_deque_int_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)other))
    );
}

void MR_C_std_deque_int_const_iterator_Destroy(const MR_C_std_deque_int_const_iterator *_this)
{
    delete ((const std::deque<int>::const_iterator *)_this);
}

void MR_C_std_deque_int_const_iterator_DestroyArray(const MR_C_std_deque_int_const_iterator *_this)
{
    delete[] ((const std::deque<int>::const_iterator *)_this);
}

const MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_OffsetPtr(const MR_C_std_deque_int_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_deque_int_const_iterator *)(((const std::deque<int>::const_iterator *)ptr) + i);
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_OffsetMutablePtr(MR_C_std_deque_int_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_deque_int_const_iterator *)(((std::deque<int>::const_iterator *)ptr) + i);
}

MR_C_std_deque_int_const_iterator *MR_C_std_deque_int_const_iterator_from_mutable(const MR_C_std_deque_int_iterator *iter)
{
    return (MR_C_std_deque_int_const_iterator *)new std::deque<int>::const_iterator(std::deque<int>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::deque<int>::iterator(*(std::deque<int>::iterator *)iter))
    ));
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_DefaultConstruct(void)
{
    return (MR_C_std_deque_int_iterator *)new std::deque<int>::iterator(std::deque<int>::iterator());
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_deque_int_iterator *)(new std::deque<int>::iterator[num_elems]{});
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_ConstructFromAnother(const MR_C_std_deque_int_iterator *other)
{
    return (MR_C_std_deque_int_iterator *)new std::deque<int>::iterator(std::deque<int>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::deque<int>::iterator(*(std::deque<int>::iterator *)other))
    ));
}

void MR_C_std_deque_int_iterator_AssignFromAnother(MR_C_std_deque_int_iterator *_this, const MR_C_std_deque_int_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::deque<int>::iterator(*(std::deque<int>::iterator *)other))
    );
}

void MR_C_std_deque_int_iterator_Destroy(const MR_C_std_deque_int_iterator *_this)
{
    delete ((const std::deque<int>::iterator *)_this);
}

void MR_C_std_deque_int_iterator_DestroyArray(const MR_C_std_deque_int_iterator *_this)
{
    delete[] ((const std::deque<int>::iterator *)_this);
}

const MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_OffsetPtr(const MR_C_std_deque_int_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_deque_int_iterator *)(((const std::deque<int>::iterator *)ptr) + i);
}

MR_C_std_deque_int_iterator *MR_C_std_deque_int_iterator_OffsetMutablePtr(MR_C_std_deque_int_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_deque_int_iterator *)(((std::deque<int>::iterator *)ptr) + i);
}

const int *MR_C_std_deque_int_const_iterator_deref(const MR_C_std_deque_int_const_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int>::const_iterator *)(_this)));
}

void MR_C_std_deque_int_const_iterator_incr(MR_C_std_deque_int_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int>::const_iterator *)(_this));
}

void MR_C_std_deque_int_const_iterator_decr(MR_C_std_deque_int_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int>::const_iterator *)(_this));
}

void MR_C_std_deque_int_const_iterator_add_assign(MR_C_std_deque_int_const_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int>::const_iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_deque_int_const_iterator(const MR_C_std_deque_int_const_iterator *a, const MR_C_std_deque_int_const_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::deque<int>::const_iterator(*(std::deque<int>::const_iterator *)a));
}

int *MR_C_std_deque_int_iterator_deref(const MR_C_std_deque_int_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::deque<int>::iterator *)(_this)));
}

void MR_C_std_deque_int_iterator_incr(MR_C_std_deque_int_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int>::iterator *)(_this));
}

void MR_C_std_deque_int_iterator_decr(MR_C_std_deque_int_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int>::iterator *)(_this));
}

void MR_C_std_deque_int_iterator_add_assign(MR_C_std_deque_int_iterator *_this, ptrdiff_t delta)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::deque<int>::iterator *)(_this)) += delta;
}

ptrdiff_t MR_C_sub_MR_C_std_deque_int_iterator(const MR_C_std_deque_int_iterator *a, const MR_C_std_deque_int_iterator *b)
{
    return ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::deque<int>::iterator(*(std::deque<int>::iterator *)b)) - ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::deque<int>::iterator(*(std::deque<int>::iterator *)a));
}

