#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_list_int32_t.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <list>
#include <memory>
#include <stdexcept>


MR_C_std_list_int32_t *MR_C_std_list_int32_t_DefaultConstruct(void)
{
    return (MR_C_std_list_int32_t *)new std::list<int32_t>(std::list<int32_t>());
}

MR_C_std_list_int32_t *MR_C_std_list_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_list_int32_t *)(new std::list<int32_t>[num_elems]{});
}

MR_C_std_list_int32_t *MR_C_std_list_int32_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_list_int32_t *other)
{
    return (MR_C_std_list_int32_t *)new std::list<int32_t>(std::list<int32_t>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::list<int32_t>) MRBINDC_CLASSARG_COPY(other, (std::list<int32_t>), std::list<int32_t>) MRBINDC_CLASSARG_MOVE(other, (std::list<int32_t>), std::list<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::list<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::list<int32_t>) MRBINDC_CLASSARG_END(other, std::list<int32_t>))
    ));
}

void MR_C_std_list_int32_t_AssignFromAnother(MR_C_std_list_int32_t *_this, MR_C_PassBy other_pass_by, MR_C_std_list_int32_t *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::list<int32_t>) MRBINDC_CLASSARG_COPY(other, (std::list<int32_t>), std::list<int32_t>) MRBINDC_CLASSARG_MOVE(other, (std::list<int32_t>), std::list<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::list<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::list<int32_t>) MRBINDC_CLASSARG_END(other, std::list<int32_t>))
    );
}

void MR_C_std_list_int32_t_Destroy(const MR_C_std_list_int32_t *_this)
{
    delete ((const std::list<int32_t> *)_this);
}

void MR_C_std_list_int32_t_DestroyArray(const MR_C_std_list_int32_t *_this)
{
    delete[] ((const std::list<int32_t> *)_this);
}

const MR_C_std_list_int32_t *MR_C_std_list_int32_t_OffsetPtr(const MR_C_std_list_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_C_std_list_int32_t *)(((const std::list<int32_t> *)ptr) + i);
}

MR_C_std_list_int32_t *MR_C_std_list_int32_t_OffsetMutablePtr(MR_C_std_list_int32_t *ptr, ptrdiff_t i)
{
    return (MR_C_std_list_int32_t *)(((std::list<int32_t> *)ptr) + i);
}

MR_C_std_list_int32_t *MR_C_std_list_int32_t_ConstructFromRange(const int32_t *ptr, size_t size)
{
    return (MR_C_std_list_int32_t *)new std::list<int32_t>(std::list<int32_t>(ptr, ptr + size));
}

void MR_C_std_list_int32_t_AssignFromRange(MR_C_std_list_int32_t *_this, const int32_t *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)) = std::list<int32_t>(ptr, ptr + size);
}

size_t MR_C_std_list_int32_t_size(const MR_C_std_list_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).size();
}

bool MR_C_std_list_int32_t_empty(const MR_C_std_list_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).empty();
}

void MR_C_std_list_int32_t_resize(MR_C_std_list_int32_t *_this, size_t new_size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).resize(
        new_size
    );
}

void MR_C_std_list_int32_t_resize_with_default_value(MR_C_std_list_int32_t *_this, size_t new_size, int32_t value)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).resize(
        new_size,
        value
    );
}

void MR_C_std_list_int32_t_clear(MR_C_std_list_int32_t *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).clear();
}

const int32_t *MR_C_std_list_int32_t_front(const MR_C_std_list_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).front();
}

int32_t *MR_C_std_list_int32_t_front_mut(MR_C_std_list_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).front();
}

const int32_t *MR_C_std_list_int32_t_back(const MR_C_std_list_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).back();
}

int32_t *MR_C_std_list_int32_t_back_mut(MR_C_std_list_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).back();
}

void MR_C_std_list_int32_t_push_back(MR_C_std_list_int32_t *_this, int32_t new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).push_back(
        new_elem
    );
}

void MR_C_std_list_int32_t_pop_back(MR_C_std_list_int32_t *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).pop_back();
}

void MR_C_std_list_int32_t_push_front(MR_C_std_list_int32_t *_this, int32_t new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).push_front(
        new_elem
    );
}

void MR_C_std_list_int32_t_pop_front(MR_C_std_list_int32_t *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).pop_front();
}

void MR_C_std_list_int32_t_insert_at_mutable_iter(MR_C_std_list_int32_t *_this, const MR_C_std_list_int32_t_iterator *position, int32_t new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<int32_t>::iterator(*(std::list<int32_t>::iterator *)position)),
        new_elem
    );
}

void MR_C_std_list_int32_t_erase_at_mutable_iter(MR_C_std_list_int32_t *_this, const MR_C_std_list_int32_t_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<int32_t>::iterator(*(std::list<int32_t>::iterator *)position))
    );
}

void MR_C_std_list_int32_t_insert_at_iter(MR_C_std_list_int32_t *_this, const MR_C_std_list_int32_t_const_iterator *position, int32_t new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<int32_t>::const_iterator(*(std::list<int32_t>::const_iterator *)position)),
        new_elem
    );
}

void MR_C_std_list_int32_t_erase_at_iter(MR_C_std_list_int32_t *_this, const MR_C_std_list_int32_t_const_iterator *position)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<int32_t>::const_iterator(*(std::list<int32_t>::const_iterator *)position))
    );
}

MR_C_std_list_int32_t_const_iterator *MR_C_std_list_int32_t_begin(const MR_C_std_list_int32_t *_this)
{
    return (MR_C_std_list_int32_t_const_iterator *)new std::list<int32_t>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).cbegin());
}

bool MR_C_std_list_int32_t_is_begin(const MR_C_std_list_int32_t *_this, const MR_C_std_list_int32_t_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<int32_t>::const_iterator *)(iter));
}

MR_C_std_list_int32_t_iterator *MR_C_std_list_int32_t_begin_mut(MR_C_std_list_int32_t *_this)
{
    return (MR_C_std_list_int32_t_iterator *)new std::list<int32_t>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).begin());
}

bool MR_C_std_list_int32_t_is_begin_mut(const MR_C_std_list_int32_t *_this, const MR_C_std_list_int32_t_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<int32_t>::iterator *)(iter));
}

MR_C_std_list_int32_t_const_iterator *MR_C_std_list_int32_t_end(const MR_C_std_list_int32_t *_this)
{
    return (MR_C_std_list_int32_t_const_iterator *)new std::list<int32_t>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).cend());
}

bool MR_C_std_list_int32_t_is_end(const MR_C_std_list_int32_t *_this, const MR_C_std_list_int32_t_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<int32_t>::const_iterator *)(iter));
}

MR_C_std_list_int32_t_iterator *MR_C_std_list_int32_t_end_mut(MR_C_std_list_int32_t *_this)
{
    return (MR_C_std_list_int32_t_iterator *)new std::list<int32_t>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t> *)(_this)).end());
}

bool MR_C_std_list_int32_t_is_end_mut(const MR_C_std_list_int32_t *_this, const MR_C_std_list_int32_t_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<int32_t>::iterator *)(iter));
}

MR_C_std_list_int32_t_const_iterator *MR_C_std_list_int32_t_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_list_int32_t_const_iterator *)new std::list<int32_t>::const_iterator(std::list<int32_t>::const_iterator());
}

MR_C_std_list_int32_t_const_iterator *MR_C_std_list_int32_t_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_list_int32_t_const_iterator *)(new std::list<int32_t>::const_iterator[num_elems]{});
}

MR_C_std_list_int32_t_const_iterator *MR_C_std_list_int32_t_const_iterator_ConstructFromAnother(const MR_C_std_list_int32_t_const_iterator *other)
{
    return (MR_C_std_list_int32_t_const_iterator *)new std::list<int32_t>::const_iterator(std::list<int32_t>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<int32_t>::const_iterator(*(std::list<int32_t>::const_iterator *)other))
    ));
}

void MR_C_std_list_int32_t_const_iterator_AssignFromAnother(MR_C_std_list_int32_t_const_iterator *_this, const MR_C_std_list_int32_t_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<int32_t>::const_iterator(*(std::list<int32_t>::const_iterator *)other))
    );
}

void MR_C_std_list_int32_t_const_iterator_Destroy(const MR_C_std_list_int32_t_const_iterator *_this)
{
    delete ((const std::list<int32_t>::const_iterator *)_this);
}

void MR_C_std_list_int32_t_const_iterator_DestroyArray(const MR_C_std_list_int32_t_const_iterator *_this)
{
    delete[] ((const std::list<int32_t>::const_iterator *)_this);
}

const MR_C_std_list_int32_t_const_iterator *MR_C_std_list_int32_t_const_iterator_OffsetPtr(const MR_C_std_list_int32_t_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_list_int32_t_const_iterator *)(((const std::list<int32_t>::const_iterator *)ptr) + i);
}

MR_C_std_list_int32_t_const_iterator *MR_C_std_list_int32_t_const_iterator_OffsetMutablePtr(MR_C_std_list_int32_t_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_list_int32_t_const_iterator *)(((std::list<int32_t>::const_iterator *)ptr) + i);
}

MR_C_std_list_int32_t_const_iterator *MR_C_std_list_int32_t_const_iterator_from_mutable(const MR_C_std_list_int32_t_iterator *iter)
{
    return (MR_C_std_list_int32_t_const_iterator *)new std::list<int32_t>::const_iterator(std::list<int32_t>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::list<int32_t>::iterator(*(std::list<int32_t>::iterator *)iter))
    ));
}

MR_C_std_list_int32_t_iterator *MR_C_std_list_int32_t_iterator_DefaultConstruct(void)
{
    return (MR_C_std_list_int32_t_iterator *)new std::list<int32_t>::iterator(std::list<int32_t>::iterator());
}

MR_C_std_list_int32_t_iterator *MR_C_std_list_int32_t_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_list_int32_t_iterator *)(new std::list<int32_t>::iterator[num_elems]{});
}

MR_C_std_list_int32_t_iterator *MR_C_std_list_int32_t_iterator_ConstructFromAnother(const MR_C_std_list_int32_t_iterator *other)
{
    return (MR_C_std_list_int32_t_iterator *)new std::list<int32_t>::iterator(std::list<int32_t>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<int32_t>::iterator(*(std::list<int32_t>::iterator *)other))
    ));
}

void MR_C_std_list_int32_t_iterator_AssignFromAnother(MR_C_std_list_int32_t_iterator *_this, const MR_C_std_list_int32_t_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<int32_t>::iterator(*(std::list<int32_t>::iterator *)other))
    );
}

void MR_C_std_list_int32_t_iterator_Destroy(const MR_C_std_list_int32_t_iterator *_this)
{
    delete ((const std::list<int32_t>::iterator *)_this);
}

void MR_C_std_list_int32_t_iterator_DestroyArray(const MR_C_std_list_int32_t_iterator *_this)
{
    delete[] ((const std::list<int32_t>::iterator *)_this);
}

const MR_C_std_list_int32_t_iterator *MR_C_std_list_int32_t_iterator_OffsetPtr(const MR_C_std_list_int32_t_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_list_int32_t_iterator *)(((const std::list<int32_t>::iterator *)ptr) + i);
}

MR_C_std_list_int32_t_iterator *MR_C_std_list_int32_t_iterator_OffsetMutablePtr(MR_C_std_list_int32_t_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_list_int32_t_iterator *)(((std::list<int32_t>::iterator *)ptr) + i);
}

const int32_t *MR_C_std_list_int32_t_const_iterator_deref(const MR_C_std_list_int32_t_const_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t>::const_iterator *)(_this)));
}

void MR_C_std_list_int32_t_const_iterator_incr(MR_C_std_list_int32_t_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t>::const_iterator *)(_this));
}

void MR_C_std_list_int32_t_const_iterator_decr(MR_C_std_list_int32_t_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t>::const_iterator *)(_this));
}

int32_t *MR_C_std_list_int32_t_iterator_deref(const MR_C_std_list_int32_t_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int32_t>::iterator *)(_this)));
}

void MR_C_std_list_int32_t_iterator_incr(MR_C_std_list_int32_t_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t>::iterator *)(_this));
}

void MR_C_std_list_int32_t_iterator_decr(MR_C_std_list_int32_t_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int32_t>::iterator *)(_this));
}

