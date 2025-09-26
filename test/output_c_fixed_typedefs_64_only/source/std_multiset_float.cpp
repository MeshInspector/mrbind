#define MR_C_BUILD_LIBRARY
#include "std_multiset_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <set>
#include <stdexcept>


MR_C_std_multiset_float *MR_C_std_multiset_float_DefaultConstruct(void)
{
    return (MR_C_std_multiset_float *)new std::multiset<float>(std::multiset<float>());
}

MR_C_std_multiset_float *MR_C_std_multiset_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_multiset_float *)(new std::multiset<float>[num_elems]{});
}

MR_C_std_multiset_float *MR_C_std_multiset_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_multiset_float *other)
{
    return (MR_C_std_multiset_float *)new std::multiset<float>(std::multiset<float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::multiset<float>) MRBINDC_CLASSARG_COPY(other, (std::multiset<float>), std::multiset<float>) MRBINDC_CLASSARG_MOVE(other, (std::multiset<float>), std::multiset<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::multiset<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::multiset<float>) MRBINDC_CLASSARG_END(other, std::multiset<float>))
    ));
}

void MR_C_std_multiset_float_AssignFromAnother(MR_C_std_multiset_float *_this, MR_C_PassBy other_pass_by, MR_C_std_multiset_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::multiset<float>) MRBINDC_CLASSARG_COPY(other, (std::multiset<float>), std::multiset<float>) MRBINDC_CLASSARG_MOVE(other, (std::multiset<float>), std::multiset<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::multiset<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::multiset<float>) MRBINDC_CLASSARG_END(other, std::multiset<float>))
    );
}

void MR_C_std_multiset_float_Destroy(const MR_C_std_multiset_float *_this)
{
    delete ((const std::multiset<float> *)_this);
}

void MR_C_std_multiset_float_DestroyArray(const MR_C_std_multiset_float *_this)
{
    delete[] ((const std::multiset<float> *)_this);
}

const MR_C_std_multiset_float *MR_C_std_multiset_float_OffsetPtr(const MR_C_std_multiset_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_multiset_float *)(((const std::multiset<float> *)ptr) + i);
}

MR_C_std_multiset_float *MR_C_std_multiset_float_OffsetMutablePtr(MR_C_std_multiset_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_multiset_float *)(((std::multiset<float> *)ptr) + i);
}

MR_C_std_multiset_float *MR_C_std_multiset_float_ConstructFromRange(const float *ptr, size_t size)
{
    return (MR_C_std_multiset_float *)new std::multiset<float>(std::multiset<float>(ptr, ptr + size));
}

void MR_C_std_multiset_float_AssignFromRange(MR_C_std_multiset_float *_this, const float *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float> *)(_this)) = std::multiset<float>(ptr, ptr + size);
}

size_t MR_C_std_multiset_float_Size(const MR_C_std_multiset_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).size();
}

bool MR_C_std_multiset_float_IsEmpty(const MR_C_std_multiset_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).empty();
}

void MR_C_std_multiset_float_Clear(MR_C_std_multiset_float *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float> *)(_this)).clear();
}

size_t MR_C_std_multiset_float_Count(const MR_C_std_multiset_float *_this, const float *key)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).count(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    );
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_Find(const MR_C_std_multiset_float *_this, const float *key)
{
    return (MR_C_std_multiset_float_const_iterator *)new std::multiset<float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    ));
}

void MR_C_std_multiset_float_Insert(MR_C_std_multiset_float *_this, float new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float> *)(_this)).insert(
        new_elem
    );
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_Begin(const MR_C_std_multiset_float *_this)
{
    return (MR_C_std_multiset_float_const_iterator *)new std::multiset<float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).cbegin());
}

bool MR_C_std_multiset_float_IsBegin(const MR_C_std_multiset_float *_this, const MR_C_std_multiset_float_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::multiset<float>::const_iterator *)(iter));
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_End(const MR_C_std_multiset_float *_this)
{
    return (MR_C_std_multiset_float_const_iterator *)new std::multiset<float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).cend());
}

bool MR_C_std_multiset_float_IsEnd(const MR_C_std_multiset_float *_this, const MR_C_std_multiset_float_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::multiset<float>::const_iterator *)(iter));
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_multiset_float_const_iterator *)new std::multiset<float>::const_iterator(std::multiset<float>::const_iterator());
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_multiset_float_const_iterator *)(new std::multiset<float>::const_iterator[num_elems]{});
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_ConstructFromAnother(const MR_C_std_multiset_float_const_iterator *other)
{
    return (MR_C_std_multiset_float_const_iterator *)new std::multiset<float>::const_iterator(std::multiset<float>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::multiset<float>::const_iterator(*(std::multiset<float>::const_iterator *)other))
    ));
}

void MR_C_std_multiset_float_const_iterator_AssignFromAnother(MR_C_std_multiset_float_const_iterator *_this, const MR_C_std_multiset_float_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::multiset<float>::const_iterator(*(std::multiset<float>::const_iterator *)other))
    );
}

void MR_C_std_multiset_float_const_iterator_Destroy(const MR_C_std_multiset_float_const_iterator *_this)
{
    delete ((const std::multiset<float>::const_iterator *)_this);
}

void MR_C_std_multiset_float_const_iterator_DestroyArray(const MR_C_std_multiset_float_const_iterator *_this)
{
    delete[] ((const std::multiset<float>::const_iterator *)_this);
}

const MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_OffsetPtr(const MR_C_std_multiset_float_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_multiset_float_const_iterator *)(((const std::multiset<float>::const_iterator *)ptr) + i);
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_OffsetMutablePtr(MR_C_std_multiset_float_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_multiset_float_const_iterator *)(((std::multiset<float>::const_iterator *)ptr) + i);
}

const float *MR_C_std_multiset_float_const_iterator_Deref(const MR_C_std_multiset_float_const_iterator *_this)
{
    return &(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float>::const_iterator *)(_this)));
}

void MR_C_std_multiset_float_const_iterator_Incr(MR_C_std_multiset_float_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float>::const_iterator *)(_this));
}

void MR_C_std_multiset_float_const_iterator_Decr(MR_C_std_multiset_float_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float>::const_iterator *)(_this));
}

