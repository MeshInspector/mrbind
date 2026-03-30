#define MR_C_BUILD_LIBRARY
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
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)new std::unordered_map<MR::StdContainers::NonAssignable, float>(std::unordered_map<MR::StdContainers::NonAssignable, float>());
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)(new std::unordered_map<MR::StdContainers::NonAssignable, float>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::unordered_map<MR::StdContainers::NonAssignable, float>);
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)new std::unordered_map<MR::StdContainers::NonAssignable, float>(std::unordered_map<MR::StdContainers::NonAssignable, float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_COPY(other, (std::unordered_map<MR::StdContainers::NonAssignable, float>), std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_MOVE(other, (std::unordered_map<MR::StdContainers::NonAssignable, float>), std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_END(other, std::unordered_map<MR::StdContainers::NonAssignable, float>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_AssignFromAnother(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, MR_C_PassBy other_pass_by, MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, std::unordered_map<MR::StdContainers::NonAssignable, float>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_COPY(other, (std::unordered_map<MR::StdContainers::NonAssignable, float>), std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_MOVE(other, (std::unordered_map<MR::StdContainers::NonAssignable, float>), std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::unordered_map<MR::StdContainers::NonAssignable, float>) MRBINDC_CLASSARG_END(other, std::unordered_map<MR::StdContainers::NonAssignable, float>))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_Destroy(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    delete ((const std::unordered_map<MR::StdContainers::NonAssignable, float> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_DestroyArray(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::unordered_map<MR::StdContainers::NonAssignable, float> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_OffsetPtr(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)(((const std::unordered_map<MR::StdContainers::NonAssignable, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_OffsetMutablePtr(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *)(((std::unordered_map<MR::StdContainers::NonAssignable, float> *)ptr) + i);
    ) // MRBINDC_TRY
}

size_t MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_size(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_empty(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_clear(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).clear();
    ) // MRBINDC_TRY
}

float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find_or_construct_elem(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_StdContainers_NonAssignable *key)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this))[((key ? void() : MRBINDC_THROW("Parameter `key` can not be null.", void)), *(const MR::StdContainers::NonAssignable *)(key))]);
    ) // MRBINDC_TRY
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_contains(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_StdContainers_NonAssignable *key)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).contains(
        ((key ? void() : MRBINDC_THROW("Parameter `key` can not be null.", void)), *(const MR::StdContainers::NonAssignable *)(key))
    );
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_StdContainers_NonAssignable *key)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).find(
        ((key ? void() : MRBINDC_THROW("Parameter `key` can not be null.", void)), *(const MR::StdContainers::NonAssignable *)(key))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_find_mut(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_StdContainers_NonAssignable *key)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).find(
        ((key ? void() : MRBINDC_THROW("Parameter `key` can not be null.", void)), *(const MR::StdContainers::NonAssignable *)(key))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_begin(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_begin(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).cbegin() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_begin_mut(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).begin());
    ) // MRBINDC_TRY
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_begin_mut(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).begin() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_end(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_end(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).cend() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_end_mut(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).end());
    ) // MRBINDC_TRY
}

bool MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_is_end_mut(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float> *)(_this)).end() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)(new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_ConstructFromAnother(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_AssignFromAnother(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_Destroy(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_DestroyArray(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_OffsetPtr(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)(((const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_OffsetMutablePtr(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)(((std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_from_mutable(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *iter)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(
        ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)iter))
    ));
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator());
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)(new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_ConstructFromAnother(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)new std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_AssignFromAnother(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_Destroy(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_DestroyArray(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_OffsetPtr(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)(((const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_OffsetMutablePtr(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *)(((std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)std::addressof(*((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_key(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(_this))->first);
    ) // MRBINDC_TRY
}

const float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_deref_value(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(_this))->second);
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator_incr(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *a, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)a)) == ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::const_iterator *)b));
    ) // MRBINDC_TRY
}

MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_const_MR_StdContainers_NonAssignable_float *)std::addressof(*((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(_this)));
    ) // MRBINDC_TRY
}

const MR_StdContainers_NonAssignable *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref_key(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    MRBINDC_TRY(
    return (const MR_StdContainers_NonAssignable *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(_this))->first);
    ) // MRBINDC_TRY
}

float *MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_deref_value(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    MRBINDC_TRY(
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(_this))->second);
    ) // MRBINDC_TRY
}

void MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator_incr(MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)(_this));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator(const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *a, const MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)a)) == ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator(*(std::unordered_map<MR::StdContainers::NonAssignable, float>::iterator *)b));
    ) // MRBINDC_TRY
}

