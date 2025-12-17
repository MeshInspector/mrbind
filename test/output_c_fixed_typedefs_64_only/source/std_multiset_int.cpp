#define MR_C_BUILD_LIBRARY
#include "std_multiset_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <set>
#include <stdexcept>


MR_C_std_multiset_int *MR_C_std_multiset_int_DefaultConstruct(void)
{
    return (MR_C_std_multiset_int *)new std::multiset<int>(std::multiset<int>());
}

MR_C_std_multiset_int *MR_C_std_multiset_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_multiset_int *)(new std::multiset<int>[num_elems]{});
}

MR_C_std_multiset_int *MR_C_std_multiset_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_multiset_int *other)
{
    return (MR_C_std_multiset_int *)new std::multiset<int>(std::multiset<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::multiset<int>) MRBINDC_CLASSARG_COPY(other, (std::multiset<int>), std::multiset<int>) MRBINDC_CLASSARG_MOVE(other, (std::multiset<int>), std::multiset<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::multiset<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::multiset<int>) MRBINDC_CLASSARG_END(other, std::multiset<int>))
    ));
}

void MR_C_std_multiset_int_AssignFromAnother(MR_C_std_multiset_int *_this, MR_C_PassBy other_pass_by, MR_C_std_multiset_int *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::multiset<int>) MRBINDC_CLASSARG_COPY(other, (std::multiset<int>), std::multiset<int>) MRBINDC_CLASSARG_MOVE(other, (std::multiset<int>), std::multiset<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::multiset<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::multiset<int>) MRBINDC_CLASSARG_END(other, std::multiset<int>))
    );
}

void MR_C_std_multiset_int_Destroy(const MR_C_std_multiset_int *_this)
{
    delete ((const std::multiset<int> *)_this);
}

void MR_C_std_multiset_int_DestroyArray(const MR_C_std_multiset_int *_this)
{
    delete[] ((const std::multiset<int> *)_this);
}

const MR_C_std_multiset_int *MR_C_std_multiset_int_OffsetPtr(const MR_C_std_multiset_int *ptr, ptrdiff_t i)
{
    return (const MR_C_std_multiset_int *)(((const std::multiset<int> *)ptr) + i);
}

MR_C_std_multiset_int *MR_C_std_multiset_int_OffsetMutablePtr(MR_C_std_multiset_int *ptr, ptrdiff_t i)
{
    return (MR_C_std_multiset_int *)(((std::multiset<int> *)ptr) + i);
}

MR_C_std_multiset_int *MR_C_std_multiset_int_ConstructFromRange(const int *ptr, size_t size)
{
    return (MR_C_std_multiset_int *)new std::multiset<int>(std::multiset<int>(ptr, ptr + size));
}

void MR_C_std_multiset_int_AssignFromRange(MR_C_std_multiset_int *_this, const int *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<int> *)(_this)) = std::multiset<int>(ptr, ptr + size);
}

size_t MR_C_std_multiset_int_Size(const MR_C_std_multiset_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<int> *)(_this)).size();
}

bool MR_C_std_multiset_int_IsEmpty(const MR_C_std_multiset_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<int> *)(_this)).empty();
}

void MR_C_std_multiset_int_Clear(MR_C_std_multiset_int *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<int> *)(_this)).clear();
}

size_t MR_C_std_multiset_int_Count(const MR_C_std_multiset_int *_this, const int *key)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<int> *)(_this)).count(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    );
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_Find(const MR_C_std_multiset_int *_this, const int *key)
{
    return (MR_C_std_multiset_int_const_iterator *)new std::multiset<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<int> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    ));
}

void MR_C_std_multiset_int_Insert(MR_C_std_multiset_int *_this, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<int> *)(_this)).insert(
        new_elem
    );
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_Begin(const MR_C_std_multiset_int *_this)
{
    return (MR_C_std_multiset_int_const_iterator *)new std::multiset<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<int> *)(_this)).cbegin());
}

bool MR_C_std_multiset_int_IsBegin(const MR_C_std_multiset_int *_this, const MR_C_std_multiset_int_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<int> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::multiset<int>::const_iterator *)(iter));
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_End(const MR_C_std_multiset_int *_this)
{
    return (MR_C_std_multiset_int_const_iterator *)new std::multiset<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<int> *)(_this)).cend());
}

bool MR_C_std_multiset_int_IsEnd(const MR_C_std_multiset_int *_this, const MR_C_std_multiset_int_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<int> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::multiset<int>::const_iterator *)(iter));
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_multiset_int_const_iterator *)new std::multiset<int>::const_iterator(std::multiset<int>::const_iterator());
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_multiset_int_const_iterator *)(new std::multiset<int>::const_iterator[num_elems]{});
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_const_iterator_ConstructFromAnother(const MR_C_std_multiset_int_const_iterator *other)
{
    return (MR_C_std_multiset_int_const_iterator *)new std::multiset<int>::const_iterator(std::multiset<int>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::multiset<int>::const_iterator(*(std::multiset<int>::const_iterator *)other))
    ));
}

void MR_C_std_multiset_int_const_iterator_AssignFromAnother(MR_C_std_multiset_int_const_iterator *_this, const MR_C_std_multiset_int_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<int>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::multiset<int>::const_iterator(*(std::multiset<int>::const_iterator *)other))
    );
}

void MR_C_std_multiset_int_const_iterator_Destroy(const MR_C_std_multiset_int_const_iterator *_this)
{
    delete ((const std::multiset<int>::const_iterator *)_this);
}

void MR_C_std_multiset_int_const_iterator_DestroyArray(const MR_C_std_multiset_int_const_iterator *_this)
{
    delete[] ((const std::multiset<int>::const_iterator *)_this);
}

const MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_const_iterator_OffsetPtr(const MR_C_std_multiset_int_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_multiset_int_const_iterator *)(((const std::multiset<int>::const_iterator *)ptr) + i);
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_const_iterator_OffsetMutablePtr(MR_C_std_multiset_int_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_multiset_int_const_iterator *)(((std::multiset<int>::const_iterator *)ptr) + i);
}

const int *MR_C_std_multiset_int_const_iterator_Deref(const MR_C_std_multiset_int_const_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<int>::const_iterator *)(_this)));
}

void MR_C_std_multiset_int_const_iterator_Incr(MR_C_std_multiset_int_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<int>::const_iterator *)(_this));
}

void MR_C_std_multiset_int_const_iterator_Decr(MR_C_std_multiset_int_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<int>::const_iterator *)(_this));
}

