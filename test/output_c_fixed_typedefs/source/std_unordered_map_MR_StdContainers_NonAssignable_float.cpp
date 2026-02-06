#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_unordered_map_MR_StdContainers_NonAssignable_float.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <unordered_map>
#include <utility>


MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstruct(void)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)new std::unordered_map<MR::StdContainers::NonAssignable, float>(std::unordered_map<MR::StdContainers::NonAssignable, float>());
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)(new std::unordered_map<MR::StdContainers::NonAssignable, float>[num_elems]{});
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *other)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)new std::unordered_map<MR::StdContainers::NonAssignable, float>(std::unordered_map<MR::StdContainers::NonAssignable, float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_COPY(other, (std::unordered_map<MR::StdContainers::NonAssignable, float>), std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_MOVE(other, (std::unordered_map<MR::StdContainers::NonAssignable, float>), std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_END(other, std::unordered_map<MR::StdContainers::NonAssignable, float>))
    ));
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_AssignFromAnother(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, MR_C_PassBy other_pass_by, MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_COPY(other, (std::unordered_map<MR::StdContainers::NonAssignable, float>), std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_MOVE(other, (std::unordered_map<MR::StdContainers::NonAssignable, float>), std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_END(other, std::unordered_map<MR::StdContainers::NonAssignable, float>))
    );
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Destroy(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    delete ((const std::unordered_map<MR::StdContainers::NonAssignable, float> *)_this);
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DestroyArray(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    delete[] ((const std::unordered_map<MR::StdContainers::NonAssignable, float> *)_this);
}

const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_OffsetPtr(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)(((const std::unordered_map<MR::StdContainers::NonAssignable, float> *)ptr) + i);
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_OffsetMutablePtr(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *ptr, ptrdiff_t i)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)(((std::unordered_map<MR::StdContainers::NonAssignable, float> *)ptr) + i);
}

size_t MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_size(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).size();
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_empty(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).empty();
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_clear(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).clear();
}

float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find_or_construct_elem(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_StdContainers_NonAssignable *key)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this))[((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *(const MR::StdContainers::NonAssignable *)(key))]);
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_contains(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_StdContainers_NonAssignable *key)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).contains(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *(const MR::StdContainers::NonAssignable *)(key))
    );
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_StdContainers_NonAssignable *key)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *(const MR::StdContainers::NonAssignable *)(key))
    ));
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find_mut(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_StdContainers_NonAssignable *key)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *(const MR::StdContainers::NonAssignable *)(key))
    ));
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_begin(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).cbegin());
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_begin(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(iter));
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_begin_mut(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).begin());
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_begin_mut(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(iter));
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_end(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).cend());
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_end(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(iter));
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_end_mut(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).end());
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_end_mut(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(iter));
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator());
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)(new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator[num_elems]{});
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *other)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)other))
    ));
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)other))
    );
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Destroy(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    delete ((const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)_this);
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DestroyArray(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    delete[] ((const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)_this);
}

const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_OffsetPtr(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)(((const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)ptr) + i);
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_OffsetMutablePtr(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)(((std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)ptr) + i);
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *iter)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)iter))
    ));
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct(void)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator());
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)(new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator[num_elems]{});
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *other)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)other))
    ));
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)other))
    );
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Destroy(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    delete ((const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)_this);
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DestroyArray(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    delete[] ((const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)_this);
}

const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_OffsetPtr(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)(((const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)ptr) + i);
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_OffsetMutablePtr(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)(((std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)ptr) + i);
}

const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    return (const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(_this)));
}

const MR_StdContainers_NonAssignable *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_key(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    return (const MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(_this))->first);
}

const float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_value(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(_this))->second);
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_incr(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(_this));
}

bool MR_C_equal_MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *a, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *b)
{
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)b));
}

MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    return (MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(_this)));
}

const MR_StdContainers_NonAssignable *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref_key(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    return (const MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(_this))->first);
}

float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref_value(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(_this))->second);
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_incr(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(_this));
}

bool MR_C_equal_MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *a, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *b)
{
    return ((a ? void() : throw std::runtime_error("Parameter `a` can not be null.")), std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)a)) == ((b ? void() : throw std::runtime_error("Parameter `b` can not be null.")), std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)b));
}

