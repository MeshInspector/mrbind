#define MR_C_BUILD_LIBRARY
#include "std_unordered_multimap_int32_t_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <unordered_map>


MR_C_std_unordered_multimap_int32_t_float *MR_C_std_unordered_multimap_int32_t_float_DefaultConstruct(void)
{
    return (MR_C_std_unordered_multimap_int32_t_float *)new std::unordered_multimap<int32_t, float>(std::unordered_multimap<int32_t, float>());
}

MR_C_std_unordered_multimap_int32_t_float *MR_C_std_unordered_multimap_int32_t_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unordered_multimap_int32_t_float *)(new std::unordered_multimap<int32_t, float>[num_elems]{});
}

MR_C_std_unordered_multimap_int32_t_float *MR_C_std_unordered_multimap_int32_t_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_unordered_multimap_int32_t_float *other)
{
    return (MR_C_std_unordered_multimap_int32_t_float *)new std::unordered_multimap<int32_t, float>(std::unordered_multimap<int32_t, float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::unordered_multimap<int32_t, float>) MRBINDC_CLASSARG_COPY(other, (std::unordered_multimap<int32_t, float>), std::unordered_multimap<int32_t, float>) MRBINDC_CLASSARG_MOVE(other, (std::unordered_multimap<int32_t, float>), std::unordered_multimap<int32_t, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::unordered_multimap<int32_t, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::unordered_multimap<int32_t, float>) MRBINDC_CLASSARG_END(other, std::unordered_multimap<int32_t, float>))
    ));
}

void MR_C_std_unordered_multimap_int32_t_float_AssignFromAnother(MR_C_std_unordered_multimap_int32_t_float *_this, MR_C_PassBy other_pass_by, MR_C_std_unordered_multimap_int32_t_float *other)
{
    (_this ? *(std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::unordered_multimap<int32_t, float>) MRBINDC_CLASSARG_COPY(other, (std::unordered_multimap<int32_t, float>), std::unordered_multimap<int32_t, float>) MRBINDC_CLASSARG_MOVE(other, (std::unordered_multimap<int32_t, float>), std::unordered_multimap<int32_t, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::unordered_multimap<int32_t, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::unordered_multimap<int32_t, float>) MRBINDC_CLASSARG_END(other, std::unordered_multimap<int32_t, float>))
    );
}

void MR_C_std_unordered_multimap_int32_t_float_Destroy(const MR_C_std_unordered_multimap_int32_t_float *_this)
{
    delete ((const std::unordered_multimap<int32_t, float> *)_this);
}

void MR_C_std_unordered_multimap_int32_t_float_DestroyArray(const MR_C_std_unordered_multimap_int32_t_float *_this)
{
    delete[] ((const std::unordered_multimap<int32_t, float> *)_this);
}

const MR_C_std_unordered_multimap_int32_t_float *MR_C_std_unordered_multimap_int32_t_float_OffsetPtr(const MR_C_std_unordered_multimap_int32_t_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unordered_multimap_int32_t_float *)(((const std::unordered_multimap<int32_t, float> *)ptr) + i);
}

MR_C_std_unordered_multimap_int32_t_float *MR_C_std_unordered_multimap_int32_t_float_OffsetMutablePtr(MR_C_std_unordered_multimap_int32_t_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_unordered_multimap_int32_t_float *)(((std::unordered_multimap<int32_t, float> *)ptr) + i);
}

size_t MR_C_std_unordered_multimap_int32_t_float_Size(const MR_C_std_unordered_multimap_int32_t_float *_this)
{
    return (_this ? *(const std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_unordered_multimap_int32_t_float_IsEmpty(const MR_C_std_unordered_multimap_int32_t_float *_this)
{
    return (_this ? *(const std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_unordered_multimap_int32_t_float_Clear(MR_C_std_unordered_multimap_int32_t_float *_this)
{
    (_this ? *(std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

size_t MR_C_std_unordered_multimap_int32_t_float_Count(const MR_C_std_unordered_multimap_int32_t_float *_this, const int32_t *key)
{
    return (_this ? *(const std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).count(
        (key ? *key : throw std::runtime_error("Parameter `key` can not be null."))
    );
}

MR_C_std_unordered_multimap_int32_t_float_const_iterator *MR_C_std_unordered_multimap_int32_t_float_Find(const MR_C_std_unordered_multimap_int32_t_float *_this, const int32_t *key)
{
    return (MR_C_std_unordered_multimap_int32_t_float_const_iterator *)new std::unordered_multimap<int32_t, float>::const_iterator((_this ? *(const std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).find(
        (key ? *key : throw std::runtime_error("Parameter `key` can not be null."))
    ));
}

MR_C_std_unordered_multimap_int32_t_float_iterator *MR_C_std_unordered_multimap_int32_t_float_FindMutable(MR_C_std_unordered_multimap_int32_t_float *_this, const int32_t *key)
{
    return (MR_C_std_unordered_multimap_int32_t_float_iterator *)new std::unordered_multimap<int32_t, float>::iterator((_this ? *(std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).find(
        (key ? *key : throw std::runtime_error("Parameter `key` can not be null."))
    ));
}

MR_C_std_unordered_multimap_int32_t_float_const_iterator *MR_C_std_unordered_multimap_int32_t_float_Begin(const MR_C_std_unordered_multimap_int32_t_float *_this)
{
    return (MR_C_std_unordered_multimap_int32_t_float_const_iterator *)new std::unordered_multimap<int32_t, float>::const_iterator((_this ? *(const std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_unordered_multimap_int32_t_float_IsBegin(const MR_C_std_unordered_multimap_int32_t_float *_this, const MR_C_std_unordered_multimap_int32_t_float_const_iterator *iter)
{
    return (_this ? *(const std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::unordered_multimap<int32_t, float>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_unordered_multimap_int32_t_float_iterator *MR_C_std_unordered_multimap_int32_t_float_MutableBegin(MR_C_std_unordered_multimap_int32_t_float *_this)
{
    return (MR_C_std_unordered_multimap_int32_t_float_iterator *)new std::unordered_multimap<int32_t, float>::iterator((_this ? *(std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin());
}

bool MR_C_std_unordered_multimap_int32_t_float_IsMutableBegin(MR_C_std_unordered_multimap_int32_t_float *_this, const MR_C_std_unordered_multimap_int32_t_float_iterator *iter)
{
    return (_this ? *(std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).begin() == (iter ? *(const std::unordered_multimap<int32_t, float>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_unordered_multimap_int32_t_float_const_iterator *MR_C_std_unordered_multimap_int32_t_float_End(const MR_C_std_unordered_multimap_int32_t_float *_this)
{
    return (MR_C_std_unordered_multimap_int32_t_float_const_iterator *)new std::unordered_multimap<int32_t, float>::const_iterator((_this ? *(const std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_unordered_multimap_int32_t_float_IsEnd(const MR_C_std_unordered_multimap_int32_t_float *_this, const MR_C_std_unordered_multimap_int32_t_float_const_iterator *iter)
{
    return (_this ? *(const std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::unordered_multimap<int32_t, float>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_unordered_multimap_int32_t_float_iterator *MR_C_std_unordered_multimap_int32_t_float_MutableEnd(MR_C_std_unordered_multimap_int32_t_float *_this)
{
    return (MR_C_std_unordered_multimap_int32_t_float_iterator *)new std::unordered_multimap<int32_t, float>::iterator((_this ? *(std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end());
}

bool MR_C_std_unordered_multimap_int32_t_float_IsMutableEnd(MR_C_std_unordered_multimap_int32_t_float *_this, const MR_C_std_unordered_multimap_int32_t_float_iterator *iter)
{
    return (_this ? *(std::unordered_multimap<int32_t, float> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).end() == (iter ? *(const std::unordered_multimap<int32_t, float>::iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_unordered_multimap_int32_t_float_const_iterator *MR_C_std_unordered_multimap_int32_t_float_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_unordered_multimap_int32_t_float_const_iterator *)new std::unordered_multimap<int32_t, float>::const_iterator(std::unordered_multimap<int32_t, float>::const_iterator());
}

MR_C_std_unordered_multimap_int32_t_float_const_iterator *MR_C_std_unordered_multimap_int32_t_float_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unordered_multimap_int32_t_float_const_iterator *)(new std::unordered_multimap<int32_t, float>::const_iterator[num_elems]{});
}

MR_C_std_unordered_multimap_int32_t_float_const_iterator *MR_C_std_unordered_multimap_int32_t_float_const_iterator_ConstructFromAnother(const MR_C_std_unordered_multimap_int32_t_float_const_iterator *other)
{
    return (MR_C_std_unordered_multimap_int32_t_float_const_iterator *)new std::unordered_multimap<int32_t, float>::const_iterator(std::unordered_multimap<int32_t, float>::const_iterator(
        (other ? std::unordered_multimap<int32_t, float>::const_iterator(*(std::unordered_multimap<int32_t, float>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_unordered_multimap_int32_t_float_const_iterator_AssignFromAnother(MR_C_std_unordered_multimap_int32_t_float_const_iterator *_this, const MR_C_std_unordered_multimap_int32_t_float_const_iterator *other)
{
    (_this ? *(std::unordered_multimap<int32_t, float>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::unordered_multimap<int32_t, float>::const_iterator(*(std::unordered_multimap<int32_t, float>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_unordered_multimap_int32_t_float_const_iterator_Destroy(const MR_C_std_unordered_multimap_int32_t_float_const_iterator *_this)
{
    delete ((const std::unordered_multimap<int32_t, float>::const_iterator *)_this);
}

void MR_C_std_unordered_multimap_int32_t_float_const_iterator_DestroyArray(const MR_C_std_unordered_multimap_int32_t_float_const_iterator *_this)
{
    delete[] ((const std::unordered_multimap<int32_t, float>::const_iterator *)_this);
}

const MR_C_std_unordered_multimap_int32_t_float_const_iterator *MR_C_std_unordered_multimap_int32_t_float_const_iterator_OffsetPtr(const MR_C_std_unordered_multimap_int32_t_float_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unordered_multimap_int32_t_float_const_iterator *)(((const std::unordered_multimap<int32_t, float>::const_iterator *)ptr) + i);
}

MR_C_std_unordered_multimap_int32_t_float_const_iterator *MR_C_std_unordered_multimap_int32_t_float_const_iterator_OffsetMutablePtr(MR_C_std_unordered_multimap_int32_t_float_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_unordered_multimap_int32_t_float_const_iterator *)(((std::unordered_multimap<int32_t, float>::const_iterator *)ptr) + i);
}

MR_C_std_unordered_multimap_int32_t_float_const_iterator *MR_C_std_unordered_multimap_int32_t_float_const_iterator_FromMutable(const MR_C_std_unordered_multimap_int32_t_float_iterator *iter)
{
    return (MR_C_std_unordered_multimap_int32_t_float_const_iterator *)new std::unordered_multimap<int32_t, float>::const_iterator(std::unordered_multimap<int32_t, float>::iterator(
        (iter ? std::unordered_multimap<int32_t, float>::iterator(*(std::unordered_multimap<int32_t, float>::iterator *)iter) : throw std::runtime_error("Parameter `iter` can not be null."))
    ));
}

MR_C_std_unordered_multimap_int32_t_float_iterator *MR_C_std_unordered_multimap_int32_t_float_iterator_DefaultConstruct(void)
{
    return (MR_C_std_unordered_multimap_int32_t_float_iterator *)new std::unordered_multimap<int32_t, float>::iterator(std::unordered_multimap<int32_t, float>::iterator());
}

MR_C_std_unordered_multimap_int32_t_float_iterator *MR_C_std_unordered_multimap_int32_t_float_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unordered_multimap_int32_t_float_iterator *)(new std::unordered_multimap<int32_t, float>::iterator[num_elems]{});
}

MR_C_std_unordered_multimap_int32_t_float_iterator *MR_C_std_unordered_multimap_int32_t_float_iterator_ConstructFromAnother(const MR_C_std_unordered_multimap_int32_t_float_iterator *other)
{
    return (MR_C_std_unordered_multimap_int32_t_float_iterator *)new std::unordered_multimap<int32_t, float>::iterator(std::unordered_multimap<int32_t, float>::iterator(
        (other ? std::unordered_multimap<int32_t, float>::iterator(*(std::unordered_multimap<int32_t, float>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_unordered_multimap_int32_t_float_iterator_AssignFromAnother(MR_C_std_unordered_multimap_int32_t_float_iterator *_this, const MR_C_std_unordered_multimap_int32_t_float_iterator *other)
{
    (_this ? *(std::unordered_multimap<int32_t, float>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::unordered_multimap<int32_t, float>::iterator(*(std::unordered_multimap<int32_t, float>::iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_unordered_multimap_int32_t_float_iterator_Destroy(const MR_C_std_unordered_multimap_int32_t_float_iterator *_this)
{
    delete ((const std::unordered_multimap<int32_t, float>::iterator *)_this);
}

void MR_C_std_unordered_multimap_int32_t_float_iterator_DestroyArray(const MR_C_std_unordered_multimap_int32_t_float_iterator *_this)
{
    delete[] ((const std::unordered_multimap<int32_t, float>::iterator *)_this);
}

const MR_C_std_unordered_multimap_int32_t_float_iterator *MR_C_std_unordered_multimap_int32_t_float_iterator_OffsetPtr(const MR_C_std_unordered_multimap_int32_t_float_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unordered_multimap_int32_t_float_iterator *)(((const std::unordered_multimap<int32_t, float>::iterator *)ptr) + i);
}

MR_C_std_unordered_multimap_int32_t_float_iterator *MR_C_std_unordered_multimap_int32_t_float_iterator_OffsetMutablePtr(MR_C_std_unordered_multimap_int32_t_float_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_unordered_multimap_int32_t_float_iterator *)(((std::unordered_multimap<int32_t, float>::iterator *)ptr) + i);
}

const int32_t *MR_C_std_unordered_multimap_int32_t_float_const_iterator_DerefKey(const MR_C_std_unordered_multimap_int32_t_float_const_iterator *_this)
{
    return &((_this ? *(const std::unordered_multimap<int32_t, float>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))->first);
}

const float *MR_C_std_unordered_multimap_int32_t_float_const_iterator_DerefValue(const MR_C_std_unordered_multimap_int32_t_float_const_iterator *_this)
{
    return &((_this ? *(const std::unordered_multimap<int32_t, float>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))->second);
}

void MR_C_std_unordered_multimap_int32_t_float_const_iterator_Incr(MR_C_std_unordered_multimap_int32_t_float_const_iterator *_this)
{
    ++(_this ? *(std::unordered_multimap<int32_t, float>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const int32_t *MR_C_std_unordered_multimap_int32_t_float_iterator_DerefKey(const MR_C_std_unordered_multimap_int32_t_float_iterator *_this)
{
    return &((_this ? *(const std::unordered_multimap<int32_t, float>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))->first);
}

float *MR_C_std_unordered_multimap_int32_t_float_iterator_DerefValue(const MR_C_std_unordered_multimap_int32_t_float_iterator *_this)
{
    return &((_this ? *(const std::unordered_multimap<int32_t, float>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."))->second);
}

void MR_C_std_unordered_multimap_int32_t_float_iterator_Incr(MR_C_std_unordered_multimap_int32_t_float_iterator *_this)
{
    ++(_this ? *(std::unordered_multimap<int32_t, float>::iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

