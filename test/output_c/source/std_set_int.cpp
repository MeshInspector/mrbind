#define MR_C_BUILD_LIBRARY
#include "std_set_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <set>
#include <stdexcept>


MR_C_std_set_int *MR_C_std_set_int_DefaultConstruct(void)
{
    return (MR_C_std_set_int *)new std::set<int>(std::set<int>());
}

MR_C_std_set_int *MR_C_std_set_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_set_int *)(new std::set<int>[num_elems]{});
}

MR_C_std_set_int *MR_C_std_set_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_set_int *other)
{
    return (MR_C_std_set_int *)new std::set<int>(std::set<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::set<int>) MRBINDC_CLASSARG_COPY(other, (std::set<int>), std::set<int>) MRBINDC_CLASSARG_MOVE(other, (std::set<int>), std::set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::set<int>) MRBINDC_CLASSARG_END(other, std::set<int>))
    ));
}

void MR_C_std_set_int_AssignFromAnother(MR_C_std_set_int *_this, MR_C_PassBy other_pass_by, MR_C_std_set_int *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::set<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::set<int>) MRBINDC_CLASSARG_COPY(other, (std::set<int>), std::set<int>) MRBINDC_CLASSARG_MOVE(other, (std::set<int>), std::set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::set<int>) MRBINDC_CLASSARG_END(other, std::set<int>))
    );
}

void MR_C_std_set_int_Destroy(const MR_C_std_set_int *_this)
{
    delete ((const std::set<int> *)_this);
}

void MR_C_std_set_int_DestroyArray(const MR_C_std_set_int *_this)
{
    delete[] ((const std::set<int> *)_this);
}

const MR_C_std_set_int *MR_C_std_set_int_OffsetPtr(const MR_C_std_set_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_set_int *)(((const std::set<int> *)ptr) + i);
}

MR_C_std_set_int *MR_C_std_set_int_OffsetMutablePtr(MR_C_std_set_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_set_int *)(((std::set<int> *)ptr) + i);
}

MR_C_std_set_int *MR_C_std_set_int_ConstructFromRange(const int *ptr, size_t size)
{
    return (MR_C_std_set_int *)new std::set<int>(std::set<int>(ptr, ptr + size));
}

void MR_C_std_set_int_AssignFromRange(MR_C_std_set_int *_this, const int *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::set<int> *)(_this)) = std::set<int>(ptr, ptr + size);
}

size_t MR_C_std_set_int_size(const MR_C_std_set_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::set<int> *)(_this)).size();
}

bool MR_C_std_set_int_empty(const MR_C_std_set_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::set<int> *)(_this)).empty();
}

void MR_C_std_set_int_clear(MR_C_std_set_int *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::set<int> *)(_this)).clear();
}

bool MR_C_std_set_int_contains(const MR_C_std_set_int *_this, const int *key)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::set<int> *)(_this)).contains(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    );
}

MR_C_std_set_int_const_iterator *MR_C_std_set_int_find(const MR_C_std_set_int *_this, const int *key)
{
    return (MR_C_std_set_int_const_iterator *)new std::set<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::set<int> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    ));
}

void MR_C_std_set_int_insert(MR_C_std_set_int *_this, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::set<int> *)(_this)).insert(
        new_elem
    );
}

MR_C_std_set_int_const_iterator *MR_C_std_set_int_begin(const MR_C_std_set_int *_this)
{
    return (MR_C_std_set_int_const_iterator *)new std::set<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::set<int> *)(_this)).cbegin());
}

bool MR_C_std_set_int_is_begin(const MR_C_std_set_int *_this, const MR_C_std_set_int_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::set<int> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::set<int>::const_iterator *)(iter));
}

MR_C_std_set_int_const_iterator *MR_C_std_set_int_end(const MR_C_std_set_int *_this)
{
    return (MR_C_std_set_int_const_iterator *)new std::set<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::set<int> *)(_this)).cend());
}

bool MR_C_std_set_int_is_end(const MR_C_std_set_int *_this, const MR_C_std_set_int_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::set<int> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::set<int>::const_iterator *)(iter));
}

MR_C_std_set_int_const_iterator *MR_C_std_set_int_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_set_int_const_iterator *)new std::set<int>::const_iterator(std::set<int>::const_iterator());
}

MR_C_std_set_int_const_iterator *MR_C_std_set_int_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_set_int_const_iterator *)(new std::set<int>::const_iterator[num_elems]{});
}

MR_C_std_set_int_const_iterator *MR_C_std_set_int_const_iterator_ConstructFromAnother(const MR_C_std_set_int_const_iterator *other)
{
    return (MR_C_std_set_int_const_iterator *)new std::set<int>::const_iterator(std::set<int>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::set<int>::const_iterator(*(std::set<int>::const_iterator *)other))
    ));
}

void MR_C_std_set_int_const_iterator_AssignFromAnother(MR_C_std_set_int_const_iterator *_this, const MR_C_std_set_int_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::set<int>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::set<int>::const_iterator(*(std::set<int>::const_iterator *)other))
    );
}

void MR_C_std_set_int_const_iterator_Destroy(const MR_C_std_set_int_const_iterator *_this)
{
    delete ((const std::set<int>::const_iterator *)_this);
}

void MR_C_std_set_int_const_iterator_DestroyArray(const MR_C_std_set_int_const_iterator *_this)
{
    delete[] ((const std::set<int>::const_iterator *)_this);
}

const MR_C_std_set_int_const_iterator *MR_C_std_set_int_const_iterator_OffsetPtr(const MR_C_std_set_int_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_set_int_const_iterator *)(((const std::set<int>::const_iterator *)ptr) + i);
}

MR_C_std_set_int_const_iterator *MR_C_std_set_int_const_iterator_OffsetMutablePtr(MR_C_std_set_int_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_set_int_const_iterator *)(((std::set<int>::const_iterator *)ptr) + i);
}

const int *MR_C_std_set_int_const_iterator_deref(const MR_C_std_set_int_const_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::set<int>::const_iterator *)(_this)));
}

void MR_C_std_set_int_const_iterator_incr(MR_C_std_set_int_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::set<int>::const_iterator *)(_this));
}

void MR_C_std_set_int_const_iterator_decr(MR_C_std_set_int_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::set<int>::const_iterator *)(_this));
}

