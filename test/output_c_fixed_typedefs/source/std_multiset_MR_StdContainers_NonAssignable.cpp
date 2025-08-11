#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "std_multiset_MR_StdContainers_NonAssignable.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_containers.h>

#include <cstddef>
#include <set>
#include <stdexcept>


MR_C_std_multiset_MR_StdContainers_NonAssignable *MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstruct(void)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable *)new std::multiset<MR::StdContainers::NonAssignable>(std::multiset<MR::StdContainers::NonAssignable>());
}

MR_C_std_multiset_MR_StdContainers_NonAssignable *MR_C_std_multiset_MR_StdContainers_NonAssignable_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable *)(new std::multiset<MR::StdContainers::NonAssignable>[num_elems]{});
}

MR_C_std_multiset_MR_StdContainers_NonAssignable *MR_C_std_multiset_MR_StdContainers_NonAssignable_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_multiset_MR_StdContainers_NonAssignable *other)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable *)new std::multiset<MR::StdContainers::NonAssignable>(std::multiset<MR::StdContainers::NonAssignable>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::multiset<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::multiset<MR::StdContainers::NonAssignable>), std::multiset<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::multiset<MR::StdContainers::NonAssignable>), std::multiset<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::multiset<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::multiset<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::multiset<MR::StdContainers::NonAssignable>))
    ));
}

void MR_C_std_multiset_MR_StdContainers_NonAssignable_AssignFromAnother(MR_C_std_multiset_MR_StdContainers_NonAssignable *_this, MR_C_PassBy other_pass_by, MR_C_std_multiset_MR_StdContainers_NonAssignable *other)
{
    (_this ? *(std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::multiset<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_COPY(other, (std::multiset<MR::StdContainers::NonAssignable>), std::multiset<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_MOVE(other, (std::multiset<MR::StdContainers::NonAssignable>), std::multiset<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::multiset<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::multiset<MR::StdContainers::NonAssignable>) MRBINDC_CLASSARG_END(other, std::multiset<MR::StdContainers::NonAssignable>))
    );
}

void MR_C_std_multiset_MR_StdContainers_NonAssignable_Destroy(const MR_C_std_multiset_MR_StdContainers_NonAssignable *_this)
{
    delete ((const std::multiset<MR::StdContainers::NonAssignable> *)_this);
}

void MR_C_std_multiset_MR_StdContainers_NonAssignable_DestroyArray(const MR_C_std_multiset_MR_StdContainers_NonAssignable *_this)
{
    delete[] ((const std::multiset<MR::StdContainers::NonAssignable> *)_this);
}

const MR_C_std_multiset_MR_StdContainers_NonAssignable *MR_C_std_multiset_MR_StdContainers_NonAssignable_OffsetPtr(const MR_C_std_multiset_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    return (const MR_C_std_multiset_MR_StdContainers_NonAssignable *)(((const std::multiset<MR::StdContainers::NonAssignable> *)ptr) + i);
}

MR_C_std_multiset_MR_StdContainers_NonAssignable *MR_C_std_multiset_MR_StdContainers_NonAssignable_OffsetMutablePtr(MR_C_std_multiset_MR_StdContainers_NonAssignable *ptr, ptrdiff_t i)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable *)(((std::multiset<MR::StdContainers::NonAssignable> *)ptr) + i);
}

size_t MR_C_std_multiset_MR_StdContainers_NonAssignable_Size(const MR_C_std_multiset_MR_StdContainers_NonAssignable *_this)
{
    return (_this ? *(const std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_multiset_MR_StdContainers_NonAssignable_IsEmpty(const MR_C_std_multiset_MR_StdContainers_NonAssignable *_this)
{
    return (_this ? *(const std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_multiset_MR_StdContainers_NonAssignable_Clear(MR_C_std_multiset_MR_StdContainers_NonAssignable *_this)
{
    (_this ? *(std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

size_t MR_C_std_multiset_MR_StdContainers_NonAssignable_Count(const MR_C_std_multiset_MR_StdContainers_NonAssignable *_this, const MR_StdContainers_NonAssignable *key)
{
    return (_this ? *(const std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).count(
        (key ? *(const MR::StdContainers::NonAssignable *)(key) : throw std::runtime_error("Parameter `key` can not be null."))
    );
}

MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_multiset_MR_StdContainers_NonAssignable_Find(const MR_C_std_multiset_MR_StdContainers_NonAssignable *_this, const MR_StdContainers_NonAssignable *key)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *)new std::multiset<MR::StdContainers::NonAssignable>::const_iterator((_this ? *(const std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).find(
        (key ? *(const MR::StdContainers::NonAssignable *)(key) : throw std::runtime_error("Parameter `key` can not be null."))
    ));
}

void MR_C_std_multiset_MR_StdContainers_NonAssignable_Insert(MR_C_std_multiset_MR_StdContainers_NonAssignable *_this, MR_C_PassBy new_elem_pass_by, MR_StdContainers_NonAssignable *new_elem)
{
    (_this ? *(std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        (MRBINDC_CLASSARG_DEF_CTOR(new_elem, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_COPY(new_elem, (MR::StdContainers::NonAssignable), MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_DefaultArgument, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_NO_DEF_ARG(new_elem, MR_C_PassBy_NoObject, MR::StdContainers::NonAssignable) MRBINDC_CLASSARG_END(new_elem, MR::StdContainers::NonAssignable))
    );
}

MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_multiset_MR_StdContainers_NonAssignable_Begin(const MR_C_std_multiset_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *)new std::multiset<MR::StdContainers::NonAssignable>::const_iterator((_this ? *(const std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_multiset_MR_StdContainers_NonAssignable_IsBegin(const MR_C_std_multiset_MR_StdContainers_NonAssignable *_this, const MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return (_this ? *(const std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_multiset_MR_StdContainers_NonAssignable_End(const MR_C_std_multiset_MR_StdContainers_NonAssignable *_this)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *)new std::multiset<MR::StdContainers::NonAssignable>::const_iterator((_this ? *(const std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_multiset_MR_StdContainers_NonAssignable_IsEnd(const MR_C_std_multiset_MR_StdContainers_NonAssignable *_this, const MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *iter)
{
    return (_this ? *(const std::multiset<MR::StdContainers::NonAssignable> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *)new std::multiset<MR::StdContainers::NonAssignable>::const_iterator(std::multiset<MR::StdContainers::NonAssignable>::const_iterator());
}

MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *)(new std::multiset<MR::StdContainers::NonAssignable>::const_iterator[num_elems]{});
}

MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_ConstructFromAnother(const MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *other)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *)new std::multiset<MR::StdContainers::NonAssignable>::const_iterator(std::multiset<MR::StdContainers::NonAssignable>::const_iterator(
        (other ? std::multiset<MR::StdContainers::NonAssignable>::const_iterator(*(std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_AssignFromAnother(MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *_this, const MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *other)
{
    (_this ? *(std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::multiset<MR::StdContainers::NonAssignable>::const_iterator(*(std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Destroy(const MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    delete ((const std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)_this);
}

void MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_DestroyArray(const MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    delete[] ((const std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)_this);
}

const MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_OffsetPtr(const MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *)(((const std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)ptr) + i);
}

MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_OffsetMutablePtr(MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *)(((std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)ptr) + i);
}

const MR_StdContainers_NonAssignable *MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Deref(const MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    return (const MR_StdContainers_NonAssignable *)&(*(_this ? *(const std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Incr(MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    ++(_this ? *(std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator_Decr(MR_C_std_multiset_MR_StdContainers_NonAssignable_const_iterator *_this)
{
    --(_this ? *(std::multiset<MR::StdContainers::NonAssignable>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

