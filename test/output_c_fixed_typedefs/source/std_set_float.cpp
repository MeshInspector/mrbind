#define MR_C_BUILD_LIBRARY
#include "std_set_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <set>
#include <stdexcept>


MR_C_std_set_float *MR_C_std_set_float_DefaultConstruct(void)
{
    return (MR_C_std_set_float *)new std::set<float>(std::set<float>());
}

MR_C_std_set_float *MR_C_std_set_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_set_float *)(new std::set<float>[num_elems]{});
}

MR_C_std_set_float *MR_C_std_set_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_set_float *other)
{
    return (MR_C_std_set_float *)new std::set<float>(std::set<float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::set<float>) MRBINDC_CLASSARG_COPY(other, (std::set<float>), std::set<float>) MRBINDC_CLASSARG_MOVE(other, (std::set<float>), std::set<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::set<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::set<float>) MRBINDC_CLASSARG_END(other, std::set<float>))
    ));
}

void MR_C_std_set_float_AssignFromAnother(MR_C_std_set_float *_this, MR_C_PassBy other_pass_by, MR_C_std_set_float *other)
{
    (_this ? *(std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::set<float>) MRBINDC_CLASSARG_COPY(other, (std::set<float>), std::set<float>) MRBINDC_CLASSARG_MOVE(other, (std::set<float>), std::set<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::set<float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::set<float>) MRBINDC_CLASSARG_END(other, std::set<float>))
    );
}

void MR_C_std_set_float_Destroy(const MR_C_std_set_float *_this)
{
    delete ((const std::set<float> *)_this);
}

void MR_C_std_set_float_DestroyArray(const MR_C_std_set_float *_this)
{
    delete[] ((const std::set<float> *)_this);
}

const MR_C_std_set_float *MR_C_std_set_float_OffsetPtr(const MR_C_std_set_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_set_float *)(((const std::set<float> *)ptr) + i);
}

MR_C_std_set_float *MR_C_std_set_float_OffsetMutablePtr(MR_C_std_set_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_set_float *)(((std::set<float> *)ptr) + i);
}

MR_C_std_set_float *MR_C_std_set_float_ConstructFromRange(const float *ptr, size_t size)
{
    return (MR_C_std_set_float *)new std::set<float>(std::set<float>(ptr, ptr + size));
}

void MR_C_std_set_float_AssignFromRange(MR_C_std_set_float *_this, const float *ptr, size_t size)
{
    (_this ? *(std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = std::set<float>(ptr, ptr + size);
}

size_t MR_C_std_set_float_Size(const MR_C_std_set_float *_this)
{
    return (_this ? *(const std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_set_float_IsEmpty(const MR_C_std_set_float *_this)
{
    return (_this ? *(const std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_set_float_Clear(MR_C_std_set_float *_this)
{
    (_this ? *(std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

bool MR_C_std_set_float_Contains(const MR_C_std_set_float *_this, const float *key)
{
    return (_this ? *(const std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).contains(
        (key ? *key : throw std::runtime_error("Parameter `key` can not be null."))
    );
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_Find(const MR_C_std_set_float *_this, const float *key)
{
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator((_this ? *(const std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).find(
        (key ? *key : throw std::runtime_error("Parameter `key` can not be null."))
    ));
}

void MR_C_std_set_float_Insert(MR_C_std_set_float *_this, float new_elem)
{
    (_this ? *(std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        new_elem
    );
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_Begin(const MR_C_std_set_float *_this)
{
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator((_this ? *(const std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_set_float_IsBegin(const MR_C_std_set_float *_this, const MR_C_std_set_float_const_iterator *iter)
{
    return (_this ? *(const std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::set<float>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_End(const MR_C_std_set_float *_this)
{
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator((_this ? *(const std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_set_float_IsEnd(const MR_C_std_set_float *_this, const MR_C_std_set_float_const_iterator *iter)
{
    return (_this ? *(const std::set<float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::set<float>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator(std::set<float>::const_iterator());
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_set_float_const_iterator *)(new std::set<float>::const_iterator[num_elems]{});
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_ConstructFromAnother(const MR_C_std_set_float_const_iterator *other)
{
    return (MR_C_std_set_float_const_iterator *)new std::set<float>::const_iterator(std::set<float>::const_iterator(
        (other ? std::set<float>::const_iterator(*(std::set<float>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_set_float_const_iterator_AssignFromAnother(MR_C_std_set_float_const_iterator *_this, const MR_C_std_set_float_const_iterator *other)
{
    (_this ? *(std::set<float>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::set<float>::const_iterator(*(std::set<float>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_set_float_const_iterator_Destroy(const MR_C_std_set_float_const_iterator *_this)
{
    delete ((const std::set<float>::const_iterator *)_this);
}

void MR_C_std_set_float_const_iterator_DestroyArray(const MR_C_std_set_float_const_iterator *_this)
{
    delete[] ((const std::set<float>::const_iterator *)_this);
}

const MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_OffsetPtr(const MR_C_std_set_float_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_set_float_const_iterator *)(((const std::set<float>::const_iterator *)ptr) + i);
}

MR_C_std_set_float_const_iterator *MR_C_std_set_float_const_iterator_OffsetMutablePtr(MR_C_std_set_float_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_set_float_const_iterator *)(((std::set<float>::const_iterator *)ptr) + i);
}

const float *MR_C_std_set_float_const_iterator_Deref(const MR_C_std_set_float_const_iterator *_this)
{
    return &(*(_this ? *(const std::set<float>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_set_float_const_iterator_Incr(MR_C_std_set_float_const_iterator *_this)
{
    ++(_this ? *(std::set<float>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_set_float_const_iterator_Decr(MR_C_std_set_float_const_iterator *_this)
{
    --(_this ? *(std::set<float>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

