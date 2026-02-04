#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "phmap_btree_set_int32_t.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <memory>
#include <parallel_hashmap/btree.h>
#include <stdexcept>


MR_C_phmap_btree_set_int32_t *MR_C_phmap_btree_set_int32_t_DefaultConstruct(void)
{
    return (MR_C_phmap_btree_set_int32_t *)new phmap::btree_set<int32_t>(phmap::btree_set<int32_t>());
}

MR_C_phmap_btree_set_int32_t *MR_C_phmap_btree_set_int32_t_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_phmap_btree_set_int32_t *)(new phmap::btree_set<int32_t>[num_elems]{});
}

MR_C_phmap_btree_set_int32_t *MR_C_phmap_btree_set_int32_t_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_phmap_btree_set_int32_t *other)
{
    return (MR_C_phmap_btree_set_int32_t *)new phmap::btree_set<int32_t>(phmap::btree_set<int32_t>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, phmap::btree_set<int32_t>) MRBINDC_CLASSARG_COPY(other, (phmap::btree_set<int32_t>), phmap::btree_set<int32_t>) MRBINDC_CLASSARG_MOVE(other, (phmap::btree_set<int32_t>), phmap::btree_set<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, phmap::btree_set<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, phmap::btree_set<int32_t>) MRBINDC_CLASSARG_END(other, phmap::btree_set<int32_t>))
    ));
}

void MR_C_phmap_btree_set_int32_t_AssignFromAnother(MR_C_phmap_btree_set_int32_t *_this, MR_C_PassBy other_pass_by, MR_C_phmap_btree_set_int32_t *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::btree_set<int32_t> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, phmap::btree_set<int32_t>) MRBINDC_CLASSARG_COPY(other, (phmap::btree_set<int32_t>), phmap::btree_set<int32_t>) MRBINDC_CLASSARG_MOVE(other, (phmap::btree_set<int32_t>), phmap::btree_set<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, phmap::btree_set<int32_t>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, phmap::btree_set<int32_t>) MRBINDC_CLASSARG_END(other, phmap::btree_set<int32_t>))
    );
}

void MR_C_phmap_btree_set_int32_t_Destroy(const MR_C_phmap_btree_set_int32_t *_this)
{
    delete ((const phmap::btree_set<int32_t> *)_this);
}

void MR_C_phmap_btree_set_int32_t_DestroyArray(const MR_C_phmap_btree_set_int32_t *_this)
{
    delete[] ((const phmap::btree_set<int32_t> *)_this);
}

const MR_C_phmap_btree_set_int32_t *MR_C_phmap_btree_set_int32_t_OffsetPtr(const MR_C_phmap_btree_set_int32_t *ptr, ptrdiff_t i)
{
    return (const MR_C_phmap_btree_set_int32_t *)(((const phmap::btree_set<int32_t> *)ptr) + i);
}

MR_C_phmap_btree_set_int32_t *MR_C_phmap_btree_set_int32_t_OffsetMutablePtr(MR_C_phmap_btree_set_int32_t *ptr, ptrdiff_t i)
{
    return (MR_C_phmap_btree_set_int32_t *)(((phmap::btree_set<int32_t> *)ptr) + i);
}

MR_C_phmap_btree_set_int32_t *MR_C_phmap_btree_set_int32_t_ConstructFromRange(const int32_t *ptr, size_t size)
{
    return (MR_C_phmap_btree_set_int32_t *)new phmap::btree_set<int32_t>(phmap::btree_set<int32_t>(ptr, ptr + size));
}

void MR_C_phmap_btree_set_int32_t_AssignFromRange(MR_C_phmap_btree_set_int32_t *_this, const int32_t *ptr, size_t size)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::btree_set<int32_t> *)(_this)) = phmap::btree_set<int32_t>(ptr, ptr + size);
}

size_t MR_C_phmap_btree_set_int32_t_size(const MR_C_phmap_btree_set_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::btree_set<int32_t> *)(_this)).size();
}

bool MR_C_phmap_btree_set_int32_t_empty(const MR_C_phmap_btree_set_int32_t *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::btree_set<int32_t> *)(_this)).empty();
}

void MR_C_phmap_btree_set_int32_t_clear(MR_C_phmap_btree_set_int32_t *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::btree_set<int32_t> *)(_this)).clear();
}

bool MR_C_phmap_btree_set_int32_t_contains(const MR_C_phmap_btree_set_int32_t *_this, const int32_t *key)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::btree_set<int32_t> *)(_this)).contains(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    );
}

MR_C_phmap_btree_set_int32_t_const_iterator *MR_C_phmap_btree_set_int32_t_find(const MR_C_phmap_btree_set_int32_t *_this, const int32_t *key)
{
    return (MR_C_phmap_btree_set_int32_t_const_iterator *)new phmap::btree_set<int32_t>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::btree_set<int32_t> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    ));
}

void MR_C_phmap_btree_set_int32_t_insert(MR_C_phmap_btree_set_int32_t *_this, int32_t new_elem)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::btree_set<int32_t> *)(_this)).insert(
        new_elem
    );
}

MR_C_phmap_btree_set_int32_t_const_iterator *MR_C_phmap_btree_set_int32_t_begin(const MR_C_phmap_btree_set_int32_t *_this)
{
    return (MR_C_phmap_btree_set_int32_t_const_iterator *)new phmap::btree_set<int32_t>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::btree_set<int32_t> *)(_this)).cbegin());
}

bool MR_C_phmap_btree_set_int32_t_is_begin(const MR_C_phmap_btree_set_int32_t *_this, const MR_C_phmap_btree_set_int32_t_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::btree_set<int32_t> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::btree_set<int32_t>::const_iterator *)(iter));
}

MR_C_phmap_btree_set_int32_t_const_iterator *MR_C_phmap_btree_set_int32_t_end(const MR_C_phmap_btree_set_int32_t *_this)
{
    return (MR_C_phmap_btree_set_int32_t_const_iterator *)new phmap::btree_set<int32_t>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::btree_set<int32_t> *)(_this)).cend());
}

bool MR_C_phmap_btree_set_int32_t_is_end(const MR_C_phmap_btree_set_int32_t *_this, const MR_C_phmap_btree_set_int32_t_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::btree_set<int32_t> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::btree_set<int32_t>::const_iterator *)(iter));
}

MR_C_phmap_btree_set_int32_t_const_iterator *MR_C_phmap_btree_set_int32_t_const_iterator_DefaultConstruct(void)
{
    return (MR_C_phmap_btree_set_int32_t_const_iterator *)new phmap::btree_set<int32_t>::const_iterator(phmap::btree_set<int32_t>::const_iterator());
}

MR_C_phmap_btree_set_int32_t_const_iterator *MR_C_phmap_btree_set_int32_t_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_phmap_btree_set_int32_t_const_iterator *)(new phmap::btree_set<int32_t>::const_iterator[num_elems]{});
}

MR_C_phmap_btree_set_int32_t_const_iterator *MR_C_phmap_btree_set_int32_t_const_iterator_ConstructFromAnother(const MR_C_phmap_btree_set_int32_t_const_iterator *other)
{
    return (MR_C_phmap_btree_set_int32_t_const_iterator *)new phmap::btree_set<int32_t>::const_iterator(phmap::btree_set<int32_t>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::btree_set<int32_t>::const_iterator(*(phmap::btree_set<int32_t>::const_iterator *)other))
    ));
}

void MR_C_phmap_btree_set_int32_t_const_iterator_AssignFromAnother(MR_C_phmap_btree_set_int32_t_const_iterator *_this, const MR_C_phmap_btree_set_int32_t_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::btree_set<int32_t>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::btree_set<int32_t>::const_iterator(*(phmap::btree_set<int32_t>::const_iterator *)other))
    );
}

void MR_C_phmap_btree_set_int32_t_const_iterator_Destroy(const MR_C_phmap_btree_set_int32_t_const_iterator *_this)
{
    delete ((const phmap::btree_set<int32_t>::const_iterator *)_this);
}

void MR_C_phmap_btree_set_int32_t_const_iterator_DestroyArray(const MR_C_phmap_btree_set_int32_t_const_iterator *_this)
{
    delete[] ((const phmap::btree_set<int32_t>::const_iterator *)_this);
}

const MR_C_phmap_btree_set_int32_t_const_iterator *MR_C_phmap_btree_set_int32_t_const_iterator_OffsetPtr(const MR_C_phmap_btree_set_int32_t_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_phmap_btree_set_int32_t_const_iterator *)(((const phmap::btree_set<int32_t>::const_iterator *)ptr) + i);
}

MR_C_phmap_btree_set_int32_t_const_iterator *MR_C_phmap_btree_set_int32_t_const_iterator_OffsetMutablePtr(MR_C_phmap_btree_set_int32_t_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_phmap_btree_set_int32_t_const_iterator *)(((phmap::btree_set<int32_t>::const_iterator *)ptr) + i);
}

const int32_t *MR_C_phmap_btree_set_int32_t_const_iterator_deref(const MR_C_phmap_btree_set_int32_t_const_iterator *_this)
{
    return std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::btree_set<int32_t>::const_iterator *)(_this)));
}

void MR_C_phmap_btree_set_int32_t_const_iterator_incr(MR_C_phmap_btree_set_int32_t_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::btree_set<int32_t>::const_iterator *)(_this));
}

void MR_C_phmap_btree_set_int32_t_const_iterator_decr(MR_C_phmap_btree_set_int32_t_const_iterator *_this)
{
    --((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::btree_set<int32_t>::const_iterator *)(_this));
}

