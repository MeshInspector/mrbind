#define MR_C_BUILD_LIBRARY
#include "std_list_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <list>
#include <memory>
#include <stdexcept>


MR_C_std_list_int *MR_C_std_list_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int *)new std::list<int>(std::list<int>());
    ) // MRBINDC_TRY
}

MR_C_std_list_int *MR_C_std_list_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int *)(new std::list<int>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_list_int *MR_C_std_list_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_list_int *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::list<int>);
    return (MR_C_std_list_int *)new std::list<int>(std::list<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::list<int>) MRBINDC_CLASSARG_COPY(other, (std::list<int>), std::list<int>) MRBINDC_CLASSARG_MOVE(other, (std::list<int>), std::list<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::list<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::list<int>) MRBINDC_CLASSARG_END(other, std::list<int>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_AssignFromAnother(MR_C_std_list_int *_this, MR_C_PassBy other_pass_by, MR_C_std_list_int *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::list<int>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::list<int>) MRBINDC_CLASSARG_COPY(other, (std::list<int>), std::list<int>) MRBINDC_CLASSARG_MOVE(other, (std::list<int>), std::list<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::list<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::list<int>) MRBINDC_CLASSARG_END(other, std::list<int>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_Destroy(const MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    delete ((const std::list<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_DestroyArray(const MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::list<int> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_list_int *MR_C_std_list_int_OffsetPtr(const MR_C_std_list_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_list_int *)(((const std::list<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_list_int *MR_C_std_list_int_OffsetMutablePtr(MR_C_std_list_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int *)(((std::list<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_list_int *MR_C_std_list_int_ConstructFromRange(const int *ptr, size_t size)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int *)new std::list<int>(std::list<int>(ptr, ptr + size));
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_AssignFromRange(MR_C_std_list_int *_this, const int *ptr, size_t size)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)) = std::list<int>(ptr, ptr + size);
    ) // MRBINDC_TRY
}

size_t MR_C_std_list_int_size(const MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_list_int_empty(const MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_resize(MR_C_std_list_int *_this, size_t new_size)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).resize(
        new_size
    );
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_resize_with_default_value(MR_C_std_list_int *_this, size_t new_size, int value)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).resize(
        new_size,
        value
    );
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_clear(MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).clear();
    ) // MRBINDC_TRY
}

const int *MR_C_std_list_int_front(const MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).front();
    ) // MRBINDC_TRY
}

int *MR_C_std_list_int_front_mut(MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).front();
    ) // MRBINDC_TRY
}

const int *MR_C_std_list_int_back(const MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).back();
    ) // MRBINDC_TRY
}

int *MR_C_std_list_int_back_mut(MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).empty() ? nullptr : &((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).back();
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_push_back(MR_C_std_list_int *_this, int new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).push_back(
        new_elem
    );
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_pop_back(MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).pop_back();
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_push_front(MR_C_std_list_int *_this, int new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).push_front(
        new_elem
    );
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_pop_front(MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).pop_front();
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_insert_at_mutable_iter(MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *position, int new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<int>::iterator(*(std::list<int>::iterator *)position)),
        new_elem
    );
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_erase_at_mutable_iter(MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<int>::iterator(*(std::list<int>::iterator *)position))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_insert_at_iter(MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *position, int new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).insert(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<int>::const_iterator(*(std::list<int>::const_iterator *)position)),
        new_elem
    );
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_erase_at_iter(MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *position)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).erase(
        ((position ? void() : throw std::runtime_error("Parameter `position` can not be null.")), std::list<int>::const_iterator(*(std::list<int>::const_iterator *)position))
    );
    ) // MRBINDC_TRY
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_begin(const MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_const_iterator *)new std::list<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_std_list_int_is_begin(const MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<int>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_list_int_iterator *MR_C_std_list_int_begin_mut(MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_iterator *)new std::list<int>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).begin());
    ) // MRBINDC_TRY
}

bool MR_C_std_list_int_is_begin_mut(const MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<int>::iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_end(const MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_const_iterator *)new std::list<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_std_list_int_is_end(const MR_C_std_list_int *_this, const MR_C_std_list_int_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<int>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_list_int_iterator *MR_C_std_list_int_end_mut(MR_C_std_list_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_iterator *)new std::list<int>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int> *)(_this)).end());
    ) // MRBINDC_TRY
}

bool MR_C_std_list_int_is_end_mut(const MR_C_std_list_int *_this, const MR_C_std_list_int_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::list<int>::iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_const_iterator *)new std::list<int>::const_iterator(std::list<int>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_const_iterator *)(new std::list<int>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_ConstructFromAnother(const MR_C_std_list_int_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_const_iterator *)new std::list<int>::const_iterator(std::list<int>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<int>::const_iterator(*(std::list<int>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_const_iterator_AssignFromAnother(MR_C_std_list_int_const_iterator *_this, const MR_C_std_list_int_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<int>::const_iterator(*(std::list<int>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_const_iterator_Destroy(const MR_C_std_list_int_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::list<int>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_const_iterator_DestroyArray(const MR_C_std_list_int_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::list<int>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_OffsetPtr(const MR_C_std_list_int_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_list_int_const_iterator *)(((const std::list<int>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_OffsetMutablePtr(MR_C_std_list_int_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_const_iterator *)(((std::list<int>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_list_int_const_iterator *MR_C_std_list_int_const_iterator_from_mutable(const MR_C_std_list_int_iterator *iter)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_const_iterator *)new std::list<int>::const_iterator(std::list<int>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::list<int>::iterator(*(std::list<int>::iterator *)iter))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_iterator *)new std::list<int>::iterator(std::list<int>::iterator());
    ) // MRBINDC_TRY
}

MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_iterator *)(new std::list<int>::iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_ConstructFromAnother(const MR_C_std_list_int_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_iterator *)new std::list<int>::iterator(std::list<int>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<int>::iterator(*(std::list<int>::iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_iterator_AssignFromAnother(MR_C_std_list_int_iterator *_this, const MR_C_std_list_int_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::list<int>::iterator(*(std::list<int>::iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_iterator_Destroy(const MR_C_std_list_int_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::list<int>::iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_iterator_DestroyArray(const MR_C_std_list_int_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::list<int>::iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_OffsetPtr(const MR_C_std_list_int_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_list_int_iterator *)(((const std::list<int>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_list_int_iterator *MR_C_std_list_int_iterator_OffsetMutablePtr(MR_C_std_list_int_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_list_int_iterator *)(((std::list<int>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const int *MR_C_std_list_int_const_iterator_deref(const MR_C_std_list_int_const_iterator *_this)
{
    MRBINDC_TRY(
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_const_iterator_incr(MR_C_std_list_int_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_const_iterator_decr(MR_C_std_list_int_const_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_list_int_const_iterator(const MR_C_std_list_int_const_iterator *a, const MR_C_std_list_int_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::list<int>::const_iterator(*(std::list<int>::const_iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::list<int>::const_iterator(*(std::list<int>::const_iterator *)b));
    ) // MRBINDC_TRY
}

int *MR_C_std_list_int_iterator_deref(const MR_C_std_list_int_iterator *_this)
{
    MRBINDC_TRY(
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::list<int>::iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_iterator_incr(MR_C_std_list_int_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int>::iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_list_int_iterator_decr(MR_C_std_list_int_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::list<int>::iterator *)(_this));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_list_int_iterator(const MR_C_std_list_int_iterator *a, const MR_C_std_list_int_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::list<int>::iterator(*(std::list<int>::iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::list<int>::iterator(*(std::list<int>::iterator *)b));
    ) // MRBINDC_TRY
}

