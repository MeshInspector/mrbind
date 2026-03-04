#define MR_C_BUILD_LIBRARY
#include "std_multiset_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <set>
#include <stdexcept>


MR_C_std_multiset_float *MR_C_std_multiset_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float *)new std::multiset<float>(std::multiset<float>());
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float *MR_C_std_multiset_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float *)(new std::multiset<float>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float *MR_C_std_multiset_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_multiset_float *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::multiset<float>);
    return (MR_C_std_multiset_float *)new std::multiset<float>(std::multiset<float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::multiset<float>) MRBINDC_CLASSARG_COPY(other, (std::multiset<float>), std::multiset<float>) MRBINDC_CLASSARG_MOVE(other, (std::multiset<float>), std::multiset<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::multiset<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::multiset<float>) MRBINDC_CLASSARG_END(other, std::multiset<float>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_AssignFromAnother(MR_C_std_multiset_float *_this, MR_C_PassBy other_pass_by, MR_C_std_multiset_float *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::multiset<float>);
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::multiset<float>) MRBINDC_CLASSARG_COPY(other, (std::multiset<float>), std::multiset<float>) MRBINDC_CLASSARG_MOVE(other, (std::multiset<float>), std::multiset<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::multiset<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::multiset<float>) MRBINDC_CLASSARG_END(other, std::multiset<float>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_Destroy(const MR_C_std_multiset_float *_this)
{
    MRBINDC_TRY(
    delete ((const std::multiset<float> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_DestroyArray(const MR_C_std_multiset_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::multiset<float> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_multiset_float *MR_C_std_multiset_float_OffsetPtr(const MR_C_std_multiset_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_multiset_float *)(((const std::multiset<float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float *MR_C_std_multiset_float_OffsetMutablePtr(MR_C_std_multiset_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float *)(((std::multiset<float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float *MR_C_std_multiset_float_ConstructFromRange(const float *ptr, size_t size)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float *)new std::multiset<float>(std::multiset<float>(ptr, ptr + size));
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_AssignFromRange(MR_C_std_multiset_float *_this, const float *ptr, size_t size)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float> *)(_this)) = std::multiset<float>(ptr, ptr + size);
    ) // MRBINDC_TRY
}

size_t MR_C_std_multiset_float_size(const MR_C_std_multiset_float *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_multiset_float_empty(const MR_C_std_multiset_float *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_clear(MR_C_std_multiset_float *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float> *)(_this)).clear();
    ) // MRBINDC_TRY
}

size_t MR_C_std_multiset_float_count(const MR_C_std_multiset_float *_this, const float *key)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).count(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    );
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_find(const MR_C_std_multiset_float *_this, const float *key)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float_const_iterator *)new std::multiset<float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_insert(MR_C_std_multiset_float *_this, float new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float> *)(_this)).insert(
        new_elem
    );
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_begin(const MR_C_std_multiset_float *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float_const_iterator *)new std::multiset<float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_std_multiset_float_is_begin(const MR_C_std_multiset_float *_this, const MR_C_std_multiset_float_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::multiset<float>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_end(const MR_C_std_multiset_float *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float_const_iterator *)new std::multiset<float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_std_multiset_float_is_end(const MR_C_std_multiset_float *_this, const MR_C_std_multiset_float_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::multiset<float>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float_const_iterator *)new std::multiset<float>::const_iterator(std::multiset<float>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float_const_iterator *)(new std::multiset<float>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_ConstructFromAnother(const MR_C_std_multiset_float_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float_const_iterator *)new std::multiset<float>::const_iterator(std::multiset<float>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::multiset<float>::const_iterator(*(std::multiset<float>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_const_iterator_AssignFromAnother(MR_C_std_multiset_float_const_iterator *_this, const MR_C_std_multiset_float_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::multiset<float>::const_iterator(*(std::multiset<float>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_const_iterator_Destroy(const MR_C_std_multiset_float_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::multiset<float>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_const_iterator_DestroyArray(const MR_C_std_multiset_float_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::multiset<float>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_OffsetPtr(const MR_C_std_multiset_float_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_multiset_float_const_iterator *)(((const std::multiset<float>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_multiset_float_const_iterator *MR_C_std_multiset_float_const_iterator_OffsetMutablePtr(MR_C_std_multiset_float_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_multiset_float_const_iterator *)(((std::multiset<float>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const float *MR_C_std_multiset_float_const_iterator_deref(const MR_C_std_multiset_float_const_iterator *_this)
{
    MRBINDC_TRY(
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::multiset<float>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_const_iterator_incr(MR_C_std_multiset_float_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_multiset_float_const_iterator_decr(MR_C_std_multiset_float_const_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::multiset<float>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_multiset_float_const_iterator(const MR_C_std_multiset_float_const_iterator *a, const MR_C_std_multiset_float_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::multiset<float>::const_iterator(*(std::multiset<float>::const_iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::multiset<float>::const_iterator(*(std::multiset<float>::const_iterator *)b));
    ) // MRBINDC_TRY
}

