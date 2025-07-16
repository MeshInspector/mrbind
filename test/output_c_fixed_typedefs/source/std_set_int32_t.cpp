#include "std_set_int32_t.h"

#include <__mrbind_c_details.h>

#include <set>
#include <stdexcept>


MR_C_std_set_int32_t *MR_C_std_set_int32_t_DefaultConstruct(void)
{
    return (MR_C_std_set_int32_t *)new std::set<int32_t>(std::set<int32_t>());
}

MR_C_std_set_int32_t *MR_C_std_set_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_set_int32_t *)(new std::set<int32_t>[num_elems]{});
}

MR_C_std_set_int32_t *MR_C_std_set_int32_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_set_int32_t *other)
{
    return (MR_C_std_set_int32_t *)new std::set<int32_t>(std::set<int32_t>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::set<int32_t>) MRBINDC_CLASSARG_COPY(other, (std::set<int32_t>), std::set<int32_t>) MRBINDC_CLASSARG_MOVE(other, (std::set<int32_t>), std::set<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::set<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::set<int32_t>) MRBINDC_CLASSARG_END(other, std::set<int32_t>))
    ));
}

void MR_C_std_set_int32_t_AssignFromAnother(MR_C_std_set_int32_t *_this, MR_C_PassBy other_pass_by, MR_C_std_set_int32_t *other)
{
    (_this ? *(std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::set<int32_t>) MRBINDC_CLASSARG_COPY(other, (std::set<int32_t>), std::set<int32_t>) MRBINDC_CLASSARG_MOVE(other, (std::set<int32_t>), std::set<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, std::set<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, std::set<int32_t>) MRBINDC_CLASSARG_END(other, std::set<int32_t>))
    );
}

void MR_C_std_set_int32_t_Destroy(const MR_C_std_set_int32_t *_this)
{
    delete ((const std::set<int32_t> *)_this);
}

void MR_C_std_set_int32_t_DestroyArray(const MR_C_std_set_int32_t *_this)
{
    delete[] ((const std::set<int32_t> *)_this);
}

const MR_C_std_set_int32_t *MR_C_std_set_int32_t_OffsetPtr(const MR_C_std_set_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_C_std_set_int32_t *)(((const std::set<int32_t> *)ptr) + i);
}

MR_C_std_set_int32_t *MR_C_std_set_int32_t_OffsetMutablePtr(MR_C_std_set_int32_t *ptr, ptrdiff_t i)
{
    return (MR_C_std_set_int32_t *)(((std::set<int32_t> *)ptr) + i);
}

MR_C_std_set_int32_t *MR_C_std_set_int32_t_ConstructFromRange(const int32_t *ptr, size_t size)
{
    return (MR_C_std_set_int32_t *)new std::set<int32_t>(std::set<int32_t>(ptr, ptr + size));
}

void MR_C_std_set_int32_t_AssignFromRange(MR_C_std_set_int32_t *_this, const int32_t *ptr, size_t size)
{
    (_this ? *(std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")) = std::set<int32_t>(ptr, ptr + size);
}

size_t MR_C_std_set_int32_t_Size(const MR_C_std_set_int32_t *_this)
{
    return (_this ? *(const std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_set_int32_t_IsEmpty(const MR_C_std_set_int32_t *_this)
{
    return (_this ? *(const std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_set_int32_t_Clear(MR_C_std_set_int32_t *_this)
{
    (_this ? *(std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

bool MR_C_std_set_int32_t_Contains(const MR_C_std_set_int32_t *_this, const int32_t *key)
{
    return (_this ? *(const std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).contains(
        (key ? *key : throw std::runtime_error("Parameter `key` can not be null."))
    );
}

MR_C_std_set_int32_t_const_iterator *MR_C_std_set_int32_t_Find(const MR_C_std_set_int32_t *_this, const int32_t *key)
{
    return (MR_C_std_set_int32_t_const_iterator *)new std::set<int32_t>::const_iterator((_this ? *(const std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).find(
        (key ? *key : throw std::runtime_error("Parameter `key` can not be null."))
    ));
}

void MR_C_std_set_int32_t_Insert(MR_C_std_set_int32_t *_this, int32_t new_elem)
{
    (_this ? *(std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        new_elem
    );
}

MR_C_std_set_int32_t_const_iterator *MR_C_std_set_int32_t_Begin(const MR_C_std_set_int32_t *_this)
{
    return (MR_C_std_set_int32_t_const_iterator *)new std::set<int32_t>::const_iterator((_this ? *(const std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_set_int32_t_IsBegin(const MR_C_std_set_int32_t *_this, const MR_C_std_set_int32_t_const_iterator *iter)
{
    return (_this ? *(const std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::set<int32_t>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_set_int32_t_const_iterator *MR_C_std_set_int32_t_End(const MR_C_std_set_int32_t *_this)
{
    return (MR_C_std_set_int32_t_const_iterator *)new std::set<int32_t>::const_iterator((_this ? *(const std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_set_int32_t_IsEnd(const MR_C_std_set_int32_t *_this, const MR_C_std_set_int32_t_const_iterator *iter)
{
    return (_this ? *(const std::set<int32_t> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::set<int32_t>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_set_int32_t_const_iterator *MR_C_std_set_int32_t_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_set_int32_t_const_iterator *)new std::set<int32_t>::const_iterator(std::set<int32_t>::const_iterator());
}

MR_C_std_set_int32_t_const_iterator *MR_C_std_set_int32_t_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_set_int32_t_const_iterator *)(new std::set<int32_t>::const_iterator[num_elems]{});
}

MR_C_std_set_int32_t_const_iterator *MR_C_std_set_int32_t_const_iterator_ConstructFromAnother(const MR_C_std_set_int32_t_const_iterator *other)
{
    return (MR_C_std_set_int32_t_const_iterator *)new std::set<int32_t>::const_iterator(std::set<int32_t>::const_iterator(
        (other ? std::set<int32_t>::const_iterator(*(std::set<int32_t>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_set_int32_t_const_iterator_AssignFromAnother(MR_C_std_set_int32_t_const_iterator *_this, const MR_C_std_set_int32_t_const_iterator *other)
{
    (_this ? *(std::set<int32_t>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::set<int32_t>::const_iterator(*(std::set<int32_t>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_set_int32_t_const_iterator_Destroy(const MR_C_std_set_int32_t_const_iterator *_this)
{
    delete ((const std::set<int32_t>::const_iterator *)_this);
}

void MR_C_std_set_int32_t_const_iterator_DestroyArray(const MR_C_std_set_int32_t_const_iterator *_this)
{
    delete[] ((const std::set<int32_t>::const_iterator *)_this);
}

const MR_C_std_set_int32_t_const_iterator *MR_C_std_set_int32_t_const_iterator_OffsetPtr(const MR_C_std_set_int32_t_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_std_set_int32_t_const_iterator *)(((const std::set<int32_t>::const_iterator *)ptr) + i);
}

MR_C_std_set_int32_t_const_iterator *MR_C_std_set_int32_t_const_iterator_OffsetMutablePtr(MR_C_std_set_int32_t_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_std_set_int32_t_const_iterator *)(((std::set<int32_t>::const_iterator *)ptr) + i);
}

const int32_t *MR_C_std_set_int32_t_const_iterator_Deref(const MR_C_std_set_int32_t_const_iterator *_this)
{
    return &(*(_this ? *(const std::set<int32_t>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_set_int32_t_const_iterator_Incr(MR_C_std_set_int32_t_const_iterator *_this)
{
    ++(_this ? *(std::set<int32_t>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_set_int32_t_const_iterator_Decr(MR_C_std_set_int32_t_const_iterator *_this)
{
    --(_this ? *(std::set<int32_t>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

