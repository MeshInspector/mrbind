#define MR_C_BUILD_LIBRARY
#include "std_set_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <set>
#include <stdexcept>


MR_C_std_set_float *MR_C_std_set_float_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float *)new std::set<float>(std::set<float>());
    ) // MRBINDC_TRY
}

MR_C_std_set_float *MR_C_std_set_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float *)(new std::set<float>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_set_float *MR_C_std_set_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_set_float *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::set<float>);
    return (MR_C_std_set_float *)new std::set<float>(std::set<float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::set<float>) MRBINDC_CLASSARG_COPY(other, (std::set<float>), std::set<float>) MRBINDC_CLASSARG_MOVE(other, (std::set<float>), std::set<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::set<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::set<float>) MRBINDC_CLASSARG_END(other, std::set<float>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_AssignFromAnother(MR_C_std_set_float *_this, MR_C_PassBy other_pass_by, MR_C_std_set_float *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::set<float>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::set<float> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::set<float>) MRBINDC_CLASSARG_COPY(other, (std::set<float>), std::set<float>) MRBINDC_CLASSARG_MOVE(other, (std::set<float>), std::set<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::set<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::set<float>) MRBINDC_CLASSARG_END(other, std::set<float>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_Destroy(const MR_C_std_set_float *_this)
{
    MRBINDC_TRY(
    delete ((const std::set<float> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_DestroyArray(const MR_C_std_set_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::set<float> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_set_float *MR_C_std_set_float_OffsetPtr(const MR_C_std_set_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_set_float *)(((const std::set<float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_set_float *MR_C_std_set_float_OffsetMutablePtr(MR_C_std_set_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float *)(((std::set<float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_set_float *MR_C_std_set_float_ConstructFromRange(const float *ptr, size_t size)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float *)new std::set<float>(std::set<float>(ptr, ptr + size));
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_AssignFromRange(MR_C_std_set_float *_this, const float *ptr, size_t size)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::set<float> *)(_this)) = std::set<float>(ptr, ptr + size);
    ) // MRBINDC_TRY
}

size_t MR_C_std_set_float_size(const MR_C_std_set_float *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::set<float> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_set_float_empty(const MR_C_std_set_float *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::set<float> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_clear(MR_C_std_set_float *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::set<float> *)(_this)).clear();
    ) // MRBINDC_TRY
}

bool MR_C_std_set_float_contains(const MR_C_std_set_float *_this, const float *key)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::set<float> *)(_this)).contains(
        ((key ? void() : MRBINDC_THROW("Parameter `key` can not be null.", void)), *key)
    );
    ) // MRBINDC_TRY
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_find(const MR_C_std_set_float *_this, const float *key)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::set<float> *)(_this)).find(
        ((key ? void() : MRBINDC_THROW("Parameter `key` can not be null.", void)), *key)
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_insert(MR_C_std_set_float *_this, float new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::set<float> *)(_this)).insert(
        new_elem
    );
    ) // MRBINDC_TRY
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_begin(const MR_C_std_set_float *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::set<float> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_std_set_float_is_begin(const MR_C_std_set_float *_this, const MR_C_std_set_float_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::set<float> *)(_this)).cbegin() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::set<float>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_end(const MR_C_std_set_float *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::set<float> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_std_set_float_is_end(const MR_C_std_set_float *_this, const MR_C_std_set_float_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::set<float> *)(_this)).cend() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::set<float>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator(std::set<float>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float_const_iterator *)(new std::set<float>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_ConstructFromAnother(const MR_C_std_set_float_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator(std::set<float>::const_iterator(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::set<float>::const_iterator(*(std::set<float>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_const_iterator_AssignFromAnother(MR_C_std_set_float_const_iterator *_this, const MR_C_std_set_float_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::set<float>::const_iterator *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::set<float>::const_iterator(*(std::set<float>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_const_iterator_Destroy(const MR_C_std_set_float_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::set<float>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_const_iterator_DestroyArray(const MR_C_std_set_float_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::set<float>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_OffsetPtr(const MR_C_std_set_float_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_set_float_const_iterator *)(((const std::set<float>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_OffsetMutablePtr(MR_C_std_set_float_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_set_float_const_iterator *)(((std::set<float>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const float *MR_C_std_set_float_const_iterator_deref(const MR_C_std_set_float_const_iterator *_this)
{
    MRBINDC_TRY(
    return std::addressof(*((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::set<float>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_const_iterator_incr(MR_C_std_set_float_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::set<float>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

void MR_C_std_set_float_const_iterator_decr(MR_C_std_set_float_const_iterator *_this)
{
    MRBINDC_TRY(
    --((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::set<float>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_set_float_const_iterator(const MR_C_std_set_float_const_iterator *a, const MR_C_std_set_float_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::set<float>::const_iterator(*(std::set<float>::const_iterator *)a)) == ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::set<float>::const_iterator(*(std::set<float>::const_iterator *)b));
    ) // MRBINDC_TRY
}

