#define MR_C_BUILD_LIBRARY
#include "phmap_parallel_flat_hash_set_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <parallel_hashmap/phmap.h>
#include <stdexcept>


MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_DefaultConstruct(void)
{
    return (MR_C_phmap_parallel_flat_hash_set_int *)new phmap::parallel_flat_hash_set<int>(phmap::parallel_flat_hash_set<int>());
}

MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_phmap_parallel_flat_hash_set_int *)(new phmap::parallel_flat_hash_set<int>[num_elems]{});
}

MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_phmap_parallel_flat_hash_set_int *other)
{
    return (MR_C_phmap_parallel_flat_hash_set_int *)new phmap::parallel_flat_hash_set<int>(phmap::parallel_flat_hash_set<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_COPY(other, (phmap::parallel_flat_hash_set<int>), phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_MOVE(other, (phmap::parallel_flat_hash_set<int>), phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_END(other, phmap::parallel_flat_hash_set<int>))
    ));
}

void MR_C_phmap_parallel_flat_hash_set_int_AssignFromAnother(MR_C_phmap_parallel_flat_hash_set_int *_this, MR_C_PassBy other_pass_by, MR_C_phmap_parallel_flat_hash_set_int *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::parallel_flat_hash_set<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_COPY(other, (phmap::parallel_flat_hash_set<int>), phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_MOVE(other, (phmap::parallel_flat_hash_set<int>), phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_END(other, phmap::parallel_flat_hash_set<int>))
    );
}

void MR_C_phmap_parallel_flat_hash_set_int_Destroy(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    delete ((const phmap::parallel_flat_hash_set<int> *)_this);
}

void MR_C_phmap_parallel_flat_hash_set_int_DestroyArray(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    delete[] ((const phmap::parallel_flat_hash_set<int> *)_this);
}

const MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_OffsetPtr(const MR_C_phmap_parallel_flat_hash_set_int *ptr, ptrdiff_t i)
{
    return (const MR_C_phmap_parallel_flat_hash_set_int *)(((const phmap::parallel_flat_hash_set<int> *)ptr) + i);
}

MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_OffsetMutablePtr(MR_C_phmap_parallel_flat_hash_set_int *ptr, ptrdiff_t i)
{
    return (MR_C_phmap_parallel_flat_hash_set_int *)(((phmap::parallel_flat_hash_set<int> *)ptr) + i);
}

MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_ConstructFromRange(const int *ptr, size_t size)
{
    return (MR_C_phmap_parallel_flat_hash_set_int *)new phmap::parallel_flat_hash_set<int>(phmap::parallel_flat_hash_set<int>(ptr, ptr + size));
}

void MR_C_phmap_parallel_flat_hash_set_int_AssignFromRange(MR_C_phmap_parallel_flat_hash_set_int *_this, const int *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::parallel_flat_hash_set<int> *)(_this)) = phmap::parallel_flat_hash_set<int>(ptr, ptr + size);
}

size_t MR_C_phmap_parallel_flat_hash_set_int_Size(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::parallel_flat_hash_set<int> *)(_this)).size();
}

bool MR_C_phmap_parallel_flat_hash_set_int_IsEmpty(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::parallel_flat_hash_set<int> *)(_this)).empty();
}

void MR_C_phmap_parallel_flat_hash_set_int_Clear(MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::parallel_flat_hash_set<int> *)(_this)).clear();
}

bool MR_C_phmap_parallel_flat_hash_set_int_Contains(const MR_C_phmap_parallel_flat_hash_set_int *_this, const int *key)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::parallel_flat_hash_set<int> *)(_this)).contains(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    );
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_Find(const MR_C_phmap_parallel_flat_hash_set_int *_this, const int *key)
{
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)new phmap::parallel_flat_hash_set<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::parallel_flat_hash_set<int> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    ));
}

void MR_C_phmap_parallel_flat_hash_set_int_Insert(MR_C_phmap_parallel_flat_hash_set_int *_this, int new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::parallel_flat_hash_set<int> *)(_this)).insert(
        new_elem
    );
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_Begin(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)new phmap::parallel_flat_hash_set<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::parallel_flat_hash_set<int> *)(_this)).cbegin());
}

bool MR_C_phmap_parallel_flat_hash_set_int_IsBegin(const MR_C_phmap_parallel_flat_hash_set_int *_this, const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::parallel_flat_hash_set<int> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::parallel_flat_hash_set<int>::const_iterator *)(iter));
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_End(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)new phmap::parallel_flat_hash_set<int>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::parallel_flat_hash_set<int> *)(_this)).cend());
}

bool MR_C_phmap_parallel_flat_hash_set_int_IsEnd(const MR_C_phmap_parallel_flat_hash_set_int *_this, const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::parallel_flat_hash_set<int> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::parallel_flat_hash_set<int>::const_iterator *)(iter));
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_DefaultConstruct(void)
{
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)new phmap::parallel_flat_hash_set<int>::const_iterator(phmap::parallel_flat_hash_set<int>::const_iterator());
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)(new phmap::parallel_flat_hash_set<int>::const_iterator[num_elems]{});
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_ConstructFromAnother(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *other)
{
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)new phmap::parallel_flat_hash_set<int>::const_iterator(phmap::parallel_flat_hash_set<int>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::parallel_flat_hash_set<int>::const_iterator(*(phmap::parallel_flat_hash_set<int>::const_iterator *)other))
    ));
}

void MR_C_phmap_parallel_flat_hash_set_int_const_iterator_AssignFromAnother(MR_C_phmap_parallel_flat_hash_set_int_const_iterator *_this, const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::parallel_flat_hash_set<int>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::parallel_flat_hash_set<int>::const_iterator(*(phmap::parallel_flat_hash_set<int>::const_iterator *)other))
    );
}

void MR_C_phmap_parallel_flat_hash_set_int_const_iterator_Destroy(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *_this)
{
    delete ((const phmap::parallel_flat_hash_set<int>::const_iterator *)_this);
}

void MR_C_phmap_parallel_flat_hash_set_int_const_iterator_DestroyArray(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *_this)
{
    delete[] ((const phmap::parallel_flat_hash_set<int>::const_iterator *)_this);
}

const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_OffsetPtr(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)(((const phmap::parallel_flat_hash_set<int>::const_iterator *)ptr) + i);
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_OffsetMutablePtr(MR_C_phmap_parallel_flat_hash_set_int_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)(((phmap::parallel_flat_hash_set<int>::const_iterator *)ptr) + i);
}

const int *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_Deref(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *_this)
{
    return &(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::parallel_flat_hash_set<int>::const_iterator *)(_this)));
}

void MR_C_phmap_parallel_flat_hash_set_int_const_iterator_Incr(MR_C_phmap_parallel_flat_hash_set_int_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::parallel_flat_hash_set<int>::const_iterator *)(_this));
}

