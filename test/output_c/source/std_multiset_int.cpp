#include "std_multiset_int.h"

#include <__mrbind_c_details.h>

#include <set>
#include <stdexcept>


MR_C_std_multiset_int *MR_C_std_multiset_int_DefaultConstruct(void)
{
    return (MR_C_std_multiset_int *)new std::multiset<int>(std::multiset<int>());
}

MR_C_std_multiset_int *MR_C_std_multiset_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_std_multiset_int *other)
{
    return (MR_C_std_multiset_int *)new std::multiset<int>(std::multiset<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::multiset<int>) MRBINDC_CLASSARG_COPY(other, (std::multiset<int>), std::multiset<int>) MRBINDC_CLASSARG_MOVE(other, (std::multiset<int>), std::multiset<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::multiset<int>) MRBINDC_CLASSARG_END(other, std::multiset<int>))
    ));
}

void MR_C_std_multiset_int_AssignFromAnother(MR_C_std_multiset_int *_this, MR_C_PassBy other_pass_by, MR_C_std_multiset_int *other)
{
    (_this ? *(std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, std::multiset<int>) MRBINDC_CLASSARG_COPY(other, (std::multiset<int>), std::multiset<int>) MRBINDC_CLASSARG_MOVE(other, (std::multiset<int>), std::multiset<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, std::multiset<int>) MRBINDC_CLASSARG_END(other, std::multiset<int>))
    );
}

void MR_C_std_multiset_int_Destroy(MR_C_std_multiset_int *_this)
{
    delete &(_this ? *(std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

size_t MR_C_std_multiset_int_Size(const MR_C_std_multiset_int *_this)
{
    return (_this ? *(const std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).size();
}

bool MR_C_std_multiset_int_IsEmpty(const MR_C_std_multiset_int *_this)
{
    return (_this ? *(const std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).empty();
}

void MR_C_std_multiset_int_Clear(MR_C_std_multiset_int *_this)
{
    (_this ? *(std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).clear();
}

size_t MR_C_std_multiset_int_Count(const MR_C_std_multiset_int *_this, const int *key)
{
    return (_this ? *(const std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).count(
        (key ? *key : throw std::runtime_error("Parameter `key` can not be null."))
    );
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_Find(const MR_C_std_multiset_int *_this, const int *key)
{
    return (MR_C_std_multiset_int_const_iterator *)new std::multiset<int>::const_iterator((_this ? *(const std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).find(
        (key ? *key : throw std::runtime_error("Parameter `key` can not be null."))
    ));
}

void MR_C_std_multiset_int_Insert(MR_C_std_multiset_int *_this, int new_elem)
{
    (_this ? *(std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).insert(
        new_elem
    );
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_Begin(const MR_C_std_multiset_int *_this)
{
    return (MR_C_std_multiset_int_const_iterator *)new std::multiset<int>::const_iterator((_this ? *(const std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin());
}

bool MR_C_std_multiset_int_IsBegin(const MR_C_std_multiset_int *_this, const MR_C_std_multiset_int_const_iterator *iter)
{
    return (_this ? *(const std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cbegin() == (iter ? *(const std::multiset<int>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_End(const MR_C_std_multiset_int *_this)
{
    return (MR_C_std_multiset_int_const_iterator *)new std::multiset<int>::const_iterator((_this ? *(const std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend());
}

bool MR_C_std_multiset_int_IsEnd(const MR_C_std_multiset_int *_this, const MR_C_std_multiset_int_const_iterator *iter)
{
    return (_this ? *(const std::multiset<int>*)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).cend() == (iter ? *(const std::multiset<int>::const_iterator *)(iter) : throw std::runtime_error("Parameter `iter` can not be null."));
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_const_iterator_DefaultConstruct(void)
{
    return (MR_C_std_multiset_int_const_iterator *)new std::multiset<int>::const_iterator(std::multiset<int>::const_iterator());
}

MR_C_std_multiset_int_const_iterator *MR_C_std_multiset_int_const_iterator_ConstructFromAnother(const MR_C_std_multiset_int_const_iterator *other)
{
    return (MR_C_std_multiset_int_const_iterator *)new std::multiset<int>::const_iterator(std::multiset<int>::const_iterator(
        (other ? std::multiset<int>::const_iterator(*(std::multiset<int>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    ));
}

void MR_C_std_multiset_int_const_iterator_AssignFromAnother(MR_C_std_multiset_int_const_iterator *_this, const MR_C_std_multiset_int_const_iterator *other)
{
    (_this ? *(std::multiset<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (other ? std::multiset<int>::const_iterator(*(std::multiset<int>::const_iterator *)other) : throw std::runtime_error("Parameter `other` can not be null."))
    );
}

void MR_C_std_multiset_int_const_iterator_Destroy(MR_C_std_multiset_int_const_iterator *_this)
{
    delete &(_this ? *(std::multiset<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

const int *MR_C_std_multiset_int_const_iterator_Deref(const MR_C_std_multiset_int_const_iterator *_this)
{
    return &(*(_this ? *(const std::multiset<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")));
}

void MR_C_std_multiset_int_const_iterator_Incr(MR_C_std_multiset_int_const_iterator *_this)
{
    ++(_this ? *(std::multiset<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

void MR_C_std_multiset_int_const_iterator_Decr(MR_C_std_multiset_int_const_iterator *_this)
{
    --(_this ? *(std::multiset<int>::const_iterator *)(_this) : throw std::runtime_error("Parameter `_this` can not be null."));
}

