#define MR_C_BUILD_LIBRARY
#include "phmap_parallel_flat_hash_set_int.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <parallel_hashmap/phmap.h>
#include <stdexcept>


MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int *)new phmap::parallel_flat_hash_set<int>(phmap::parallel_flat_hash_set<int>());
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int *)(new phmap::parallel_flat_hash_set<int>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_phmap_parallel_flat_hash_set_int *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, phmap::parallel_flat_hash_set<int>);
    return (MR_C_phmap_parallel_flat_hash_set_int *)new phmap::parallel_flat_hash_set<int>(phmap::parallel_flat_hash_set<int>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_COPY(other, (phmap::parallel_flat_hash_set<int>), phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_MOVE(other, (phmap::parallel_flat_hash_set<int>), phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_END(other, phmap::parallel_flat_hash_set<int>))
    ));
    ) // MRBINDC_TRY
}

void MR_C_phmap_parallel_flat_hash_set_int_AssignFromAnother(MR_C_phmap_parallel_flat_hash_set_int *_this, MR_C_PassBy other_pass_by, MR_C_phmap_parallel_flat_hash_set_int *other)
{
    MRBINDC_TRY(
    MRBINDC_CLASSARG_GUARD(other, phmap::parallel_flat_hash_set<int>);
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(phmap::parallel_flat_hash_set<int> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_COPY(other, (phmap::parallel_flat_hash_set<int>), phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_MOVE(other, (phmap::parallel_flat_hash_set<int>), phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, phmap::parallel_flat_hash_set<int>) MRBINDC_CLASSARG_END(other, phmap::parallel_flat_hash_set<int>))
    );
    ) // MRBINDC_TRY
}

void MR_C_phmap_parallel_flat_hash_set_int_Destroy(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    MRBINDC_TRY(
    delete ((const phmap::parallel_flat_hash_set<int> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_phmap_parallel_flat_hash_set_int_DestroyArray(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    MRBINDC_TRY(
    delete[] ((const phmap::parallel_flat_hash_set<int> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_OffsetPtr(const MR_C_phmap_parallel_flat_hash_set_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_phmap_parallel_flat_hash_set_int *)(((const phmap::parallel_flat_hash_set<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_OffsetMutablePtr(MR_C_phmap_parallel_flat_hash_set_int *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int *)(((phmap::parallel_flat_hash_set<int> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int *MR_C_phmap_parallel_flat_hash_set_int_ConstructFromRange(const int *ptr, size_t size)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int *)new phmap::parallel_flat_hash_set<int>(phmap::parallel_flat_hash_set<int>(ptr, ptr + size));
    ) // MRBINDC_TRY
}

void MR_C_phmap_parallel_flat_hash_set_int_AssignFromRange(MR_C_phmap_parallel_flat_hash_set_int *_this, const int *ptr, size_t size)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(phmap::parallel_flat_hash_set<int> *)(_this)) = phmap::parallel_flat_hash_set<int>(ptr, ptr + size);
    ) // MRBINDC_TRY
}

size_t MR_C_phmap_parallel_flat_hash_set_int_size(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int> *)(_this)).size();
    ) // MRBINDC_TRY
}

bool MR_C_phmap_parallel_flat_hash_set_int_empty(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int> *)(_this)).empty();
    ) // MRBINDC_TRY
}

void MR_C_phmap_parallel_flat_hash_set_int_clear(MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(phmap::parallel_flat_hash_set<int> *)(_this)).clear();
    ) // MRBINDC_TRY
}

bool MR_C_phmap_parallel_flat_hash_set_int_contains(const MR_C_phmap_parallel_flat_hash_set_int *_this, const int *key)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int> *)(_this)).contains(
        ((key ? void() : MRBINDC_THROW("Parameter `key` can not be null.", void)), *key)
    );
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_find(const MR_C_phmap_parallel_flat_hash_set_int *_this, const int *key)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)new phmap::parallel_flat_hash_set<int>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int> *)(_this)).find(
        ((key ? void() : MRBINDC_THROW("Parameter `key` can not be null.", void)), *key)
    ));
    ) // MRBINDC_TRY
}

void MR_C_phmap_parallel_flat_hash_set_int_insert(MR_C_phmap_parallel_flat_hash_set_int *_this, int new_elem)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(phmap::parallel_flat_hash_set<int> *)(_this)).insert(
        new_elem
    );
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_begin(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)new phmap::parallel_flat_hash_set<int>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int> *)(_this)).cbegin());
    ) // MRBINDC_TRY
}

bool MR_C_phmap_parallel_flat_hash_set_int_is_begin(const MR_C_phmap_parallel_flat_hash_set_int *_this, const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int> *)(_this)).cbegin() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_end(const MR_C_phmap_parallel_flat_hash_set_int *_this)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)new phmap::parallel_flat_hash_set<int>::const_iterator(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int> *)(_this)).cend());
    ) // MRBINDC_TRY
}

bool MR_C_phmap_parallel_flat_hash_set_int_is_end(const MR_C_phmap_parallel_flat_hash_set_int *_this, const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *iter)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int> *)(_this)).cend() == ((iter ? void() : MRBINDC_THROW("Parameter `iter` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int>::const_iterator *)(iter));
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)new phmap::parallel_flat_hash_set<int>::const_iterator(phmap::parallel_flat_hash_set<int>::const_iterator());
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)(new phmap::parallel_flat_hash_set<int>::const_iterator[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_ConstructFromAnother(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *other)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)new phmap::parallel_flat_hash_set<int>::const_iterator(phmap::parallel_flat_hash_set<int>::const_iterator(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), phmap::parallel_flat_hash_set<int>::const_iterator(*(phmap::parallel_flat_hash_set<int>::const_iterator *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_phmap_parallel_flat_hash_set_int_const_iterator_AssignFromAnother(MR_C_phmap_parallel_flat_hash_set_int_const_iterator *_this, const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *other)
{
    MRBINDC_TRY(
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(phmap::parallel_flat_hash_set<int>::const_iterator *)(_this)).operator=(
        ((other ? void() : MRBINDC_THROW("Parameter `other` can not be null.", void)), phmap::parallel_flat_hash_set<int>::const_iterator(*(phmap::parallel_flat_hash_set<int>::const_iterator *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_phmap_parallel_flat_hash_set_int_const_iterator_Destroy(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *_this)
{
    MRBINDC_TRY(
    delete ((const phmap::parallel_flat_hash_set<int>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

void MR_C_phmap_parallel_flat_hash_set_int_const_iterator_DestroyArray(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *_this)
{
    MRBINDC_TRY(
    delete[] ((const phmap::parallel_flat_hash_set<int>::const_iterator *)_this);
    ) // MRBINDC_TRY
}

const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_OffsetPtr(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)(((const phmap::parallel_flat_hash_set<int>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_phmap_parallel_flat_hash_set_int_const_iterator *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_OffsetMutablePtr(MR_C_phmap_parallel_flat_hash_set_int_const_iterator *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_phmap_parallel_flat_hash_set_int_const_iterator *)(((phmap::parallel_flat_hash_set<int>::const_iterator *)ptr) + i);
    ) // MRBINDC_TRY
}

const int *MR_C_phmap_parallel_flat_hash_set_int_const_iterator_deref(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *_this)
{
    MRBINDC_TRY(
    return std::addressof(*((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const phmap::parallel_flat_hash_set<int>::const_iterator *)(_this)));
    ) // MRBINDC_TRY
}

void MR_C_phmap_parallel_flat_hash_set_int_const_iterator_incr(MR_C_phmap_parallel_flat_hash_set_int_const_iterator *_this)
{
    MRBINDC_TRY(
    ++((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(phmap::parallel_flat_hash_set<int>::const_iterator *)(_this));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_C_phmap_parallel_flat_hash_set_int_const_iterator(const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *a, const MR_C_phmap_parallel_flat_hash_set_int_const_iterator *b)
{
    MRBINDC_TRY(
    return ((a ? void() : MRBINDC_THROW("Parameter `a` can not be null.", void)), phmap::parallel_flat_hash_set<int>::const_iterator(*(phmap::parallel_flat_hash_set<int>::const_iterator *)a)) == ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), phmap::parallel_flat_hash_set<int>::const_iterator(*(phmap::parallel_flat_hash_set<int>::const_iterator *)b));
    ) // MRBINDC_TRY
}

