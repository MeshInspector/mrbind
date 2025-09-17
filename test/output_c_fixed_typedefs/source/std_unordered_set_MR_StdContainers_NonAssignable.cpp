#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_unordered_set_MR_StdContainers_NonAssignable.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <stdexcept>
#include <unordered_set>


MR_C_std_unordered_set_MR_StdContainers_NonAssignable *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstruct(void)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable *)new std::unordered_set<MR::StdContainers::NonAssignable>(std::unordered_set<MR::StdContainers::NonAssignable>());
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable *)(new std::unordered_set<MR::StdContainers::NonAssignable>[num_elems]{});
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_unordered_set_MR_StdContainers_NonAssignable *other)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable *)new std::unordered_set<MR::StdContainers::NonAssignable>(std::unordered_set<MR::StdContainers::NonAssignable>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::unordered_set<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::unordered_set<MR::StdContainers::NonAssignable>), std::unordered_set<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::unordered_set<MR::StdContainers::NonAssignable>), std::unordered_set<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::unordered_set<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::unordered_set<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::unordered_set<MR::StdContainers::NonAssignable>))
    ));
}

void MR_C_std_unordered_set_MR_StdContainers_NonAssignable_AssignFromAnother(MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this, MR_C_PassBy other_pass_by, MR_C_std_unordered_set_MR_StdContainers_NonAssignable *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_set<MR::StdContainers::NonAssignable> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::unordered_set<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::unordered_set<MR::StdContainers::NonAssignable>), std::unordered_set<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::unordered_set<MR::StdContainers::NonAssignable>), std::unordered_set<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::unordered_set<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::unordered_set<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::unordered_set<MR::StdContainers::NonAssignable>))
    );
}

void MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Destroy(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this)
{
    delete ((const std::unordered_set<MR::StdContainers::NonAssignable> *)_this);
}

void MR_C_std_unordered_set_MR_StdContainers_NonAssignable_DestroyArray(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this)
{
    delete[] ((const std::unordered_set<MR::StdContainers::NonAssignable> *)_this);
}

const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_OffsetPtr(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *)(((const std::unordered_set<MR::StdContainers::NonAssignable> *)ptr) + i);
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_OffsetMutablePtr(MR_C_std_unordered_set_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable *)(((std::unordered_set<MR::StdContainers::NonAssignable> *)ptr) + i);
}

size_t MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Size(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable> *)(_this)).size();
}

bool MR_C_std_unordered_set_MR_StdContainers_NonAssignable_IsEmpty(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable> *)(_this)).empty();
}

void MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Clear(MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_set<MR::StdContainers::NonAssignable> *)(_this)).clear();
}

bool MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Contains(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this, const MR_StdContainers_NonAssignable *key)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable> *)(_this)).contains(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *(const MR::StdContainers::NonAssignable *)(key))
    );
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Find(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this, const MR_StdContainers_NonAssignable *key)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *)new std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *(const MR::StdContainers::NonAssignable *)(key))
    ));
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_Begin(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *)new std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable> *)(_this)).cbegin());
}

bool MR_C_std_unordered_set_MR_StdContainers_NonAssignable_IsBegin(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this, const MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)(iter));
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_End(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *)new std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable> *)(_this)).cend());
}

bool MR_C_std_unordered_set_MR_StdContainers_NonAssignable_IsEnd(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable *_this, const MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)(iter));
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *)new std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator(std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator());
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *)(new std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator[num_elems]{});
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *other)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *)new std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator(std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator(*(std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)other))
    ));
}

void MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *_this, const MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator(*(std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)other))
    );
}

void MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_Destroy(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    delete ((const std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)_this);
}

void MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_DestroyArray(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    delete[] ((const std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)_this);
}

const MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_OffsetPtr(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *)(((const std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)ptr) + i);
}

MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_OffsetMutablePtr(MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *)(((std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)ptr) + i);
}

const MR_StdContainers_NonAssignable *MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_Deref(const MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    return (const MR_StdContainers_NonAssignable *)&(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)(_this)));
}

void MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator_Incr(MR_C_std_unordered_set_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::unordered_set<MR::StdContainers::NonAssignable>::const_iterator *)(_this));
}

