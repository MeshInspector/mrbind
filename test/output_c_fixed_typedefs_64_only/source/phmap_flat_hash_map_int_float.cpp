#define MR_C_BUILD_LIBRARY
#include "phmap_flat_hash_map_int_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <memory>
#include <parallel_hashmap/phmap.h>
#include <stdexcept>
#include <utility>


MR_C_phmap_flat_hash_map_int_float *MR_C_phmap_flat_hash_map_int_float_DefaultConstruct(void)
{
    return (MR_C_phmap_flat_hash_map_int_float *)new phmap::flat_hash_map<int, float>(phmap::flat_hash_map<int, float>());
}

MR_C_phmap_flat_hash_map_int_float *MR_C_phmap_flat_hash_map_int_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_phmap_flat_hash_map_int_float *)(new phmap::flat_hash_map<int, float>[num_elems]{});
}

MR_C_phmap_flat_hash_map_int_float *MR_C_phmap_flat_hash_map_int_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_phmap_flat_hash_map_int_float *other)
{
    return (MR_C_phmap_flat_hash_map_int_float *)new phmap::flat_hash_map<int, float>(phmap::flat_hash_map<int, float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, phmap::flat_hash_map<int, float>) MRBINDC_CLASSARG_COPY(other, (phmap::flat_hash_map<int, float>), phmap::flat_hash_map<int, float>) MRBINDC_CLASSARG_MOVE(other, (phmap::flat_hash_map<int, float>), phmap::flat_hash_map<int, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, phmap::flat_hash_map<int, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, phmap::flat_hash_map<int, float>) MRBINDC_CLASSARG_END(other, phmap::flat_hash_map<int, float>))
    ));
}

void MR_C_phmap_flat_hash_map_int_float_AssignFromAnother(MR_C_phmap_flat_hash_map_int_float *_this, MR_C_PassBy other_pass_by, MR_C_phmap_flat_hash_map_int_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int, float> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, phmap::flat_hash_map<int, float>) MRBINDC_CLASSARG_COPY(other, (phmap::flat_hash_map<int, float>), phmap::flat_hash_map<int, float>) MRBINDC_CLASSARG_MOVE(other, (phmap::flat_hash_map<int, float>), phmap::flat_hash_map<int, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, phmap::flat_hash_map<int, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, phmap::flat_hash_map<int, float>) MRBINDC_CLASSARG_END(other, phmap::flat_hash_map<int, float>))
    );
}

void MR_C_phmap_flat_hash_map_int_float_Destroy(const MR_C_phmap_flat_hash_map_int_float *_this)
{
    delete ((const phmap::flat_hash_map<int, float> *)_this);
}

void MR_C_phmap_flat_hash_map_int_float_DestroyArray(const MR_C_phmap_flat_hash_map_int_float *_this)
{
    delete[] ((const phmap::flat_hash_map<int, float> *)_this);
}

const MR_C_phmap_flat_hash_map_int_float *MR_C_phmap_flat_hash_map_int_float_OffsetPtr(const MR_C_phmap_flat_hash_map_int_float *ptr, ptrdiff_t i)
{
    return (const MR_C_phmap_flat_hash_map_int_float *)(((const phmap::flat_hash_map<int, float> *)ptr) + i);
}

MR_C_phmap_flat_hash_map_int_float *MR_C_phmap_flat_hash_map_int_float_OffsetMutablePtr(MR_C_phmap_flat_hash_map_int_float *ptr, ptrdiff_t i)
{
    return (MR_C_phmap_flat_hash_map_int_float *)(((phmap::flat_hash_map<int, float> *)ptr) + i);
}

size_t MR_C_phmap_flat_hash_map_int_float_size(const MR_C_phmap_flat_hash_map_int_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float> *)(_this)).size();
}

bool MR_C_phmap_flat_hash_map_int_float_empty(const MR_C_phmap_flat_hash_map_int_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float> *)(_this)).empty();
}

void MR_C_phmap_flat_hash_map_int_float_clear(MR_C_phmap_flat_hash_map_int_float *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int, float> *)(_this)).clear();
}

float *MR_C_phmap_flat_hash_map_int_float_find_or_construct_elem(MR_C_phmap_flat_hash_map_int_float *_this, const int *key)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int, float> *)(_this))[((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)]);
}

bool MR_C_phmap_flat_hash_map_int_float_contains(const MR_C_phmap_flat_hash_map_int_float *_this, const int *key)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float> *)(_this)).contains(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    );
}

MR_C_phmap_flat_hash_map_int_float_const_iterator *MR_C_phmap_flat_hash_map_int_float_find(const MR_C_phmap_flat_hash_map_int_float *_this, const int *key)
{
    return (MR_C_phmap_flat_hash_map_int_float_const_iterator *)new phmap::flat_hash_map<int, float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    ));
}

MR_C_phmap_flat_hash_map_int_float_iterator *MR_C_phmap_flat_hash_map_int_float_find_mut(MR_C_phmap_flat_hash_map_int_float *_this, const int *key)
{
    return (MR_C_phmap_flat_hash_map_int_float_iterator *)new phmap::flat_hash_map<int, float>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int, float> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    ));
}

MR_C_phmap_flat_hash_map_int_float_const_iterator *MR_C_phmap_flat_hash_map_int_float_begin(const MR_C_phmap_flat_hash_map_int_float *_this)
{
    return (MR_C_phmap_flat_hash_map_int_float_const_iterator *)new phmap::flat_hash_map<int, float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float> *)(_this)).cbegin());
}

bool MR_C_phmap_flat_hash_map_int_float_is_begin(const MR_C_phmap_flat_hash_map_int_float *_this, const MR_C_phmap_flat_hash_map_int_float_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::flat_hash_map<int, float>::const_iterator *)(iter));
}

MR_C_phmap_flat_hash_map_int_float_iterator *MR_C_phmap_flat_hash_map_int_float_begin_mut(MR_C_phmap_flat_hash_map_int_float *_this)
{
    return (MR_C_phmap_flat_hash_map_int_float_iterator *)new phmap::flat_hash_map<int, float>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int, float> *)(_this)).begin());
}

bool MR_C_phmap_flat_hash_map_int_float_is_begin_mut(const MR_C_phmap_flat_hash_map_int_float *_this, const MR_C_phmap_flat_hash_map_int_float_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::flat_hash_map<int, float>::iterator *)(iter));
}

MR_C_phmap_flat_hash_map_int_float_const_iterator *MR_C_phmap_flat_hash_map_int_float_end(const MR_C_phmap_flat_hash_map_int_float *_this)
{
    return (MR_C_phmap_flat_hash_map_int_float_const_iterator *)new phmap::flat_hash_map<int, float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float> *)(_this)).cend());
}

bool MR_C_phmap_flat_hash_map_int_float_is_end(const MR_C_phmap_flat_hash_map_int_float *_this, const MR_C_phmap_flat_hash_map_int_float_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::flat_hash_map<int, float>::const_iterator *)(iter));
}

MR_C_phmap_flat_hash_map_int_float_iterator *MR_C_phmap_flat_hash_map_int_float_end_mut(MR_C_phmap_flat_hash_map_int_float *_this)
{
    return (MR_C_phmap_flat_hash_map_int_float_iterator *)new phmap::flat_hash_map<int, float>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int, float> *)(_this)).end());
}

bool MR_C_phmap_flat_hash_map_int_float_is_end_mut(const MR_C_phmap_flat_hash_map_int_float *_this, const MR_C_phmap_flat_hash_map_int_float_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::flat_hash_map<int, float>::iterator *)(iter));
}

MR_C_phmap_flat_hash_map_int_float_const_iterator *MR_C_phmap_flat_hash_map_int_float_const_iterator_DefaultConstruct(void)
{
    return (MR_C_phmap_flat_hash_map_int_float_const_iterator *)new phmap::flat_hash_map<int, float>::const_iterator(phmap::flat_hash_map<int, float>::const_iterator());
}

MR_C_phmap_flat_hash_map_int_float_const_iterator *MR_C_phmap_flat_hash_map_int_float_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_phmap_flat_hash_map_int_float_const_iterator *)(new phmap::flat_hash_map<int, float>::const_iterator[num_elems]{});
}

MR_C_phmap_flat_hash_map_int_float_const_iterator *MR_C_phmap_flat_hash_map_int_float_const_iterator_ConstructFromAnother(const MR_C_phmap_flat_hash_map_int_float_const_iterator *other)
{
    return (MR_C_phmap_flat_hash_map_int_float_const_iterator *)new phmap::flat_hash_map<int, float>::const_iterator(phmap::flat_hash_map<int, float>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::flat_hash_map<int, float>::const_iterator(*(phmap::flat_hash_map<int, float>::const_iterator *)other))
    ));
}

void MR_C_phmap_flat_hash_map_int_float_const_iterator_AssignFromAnother(MR_C_phmap_flat_hash_map_int_float_const_iterator *_this, const MR_C_phmap_flat_hash_map_int_float_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int, float>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::flat_hash_map<int, float>::const_iterator(*(phmap::flat_hash_map<int, float>::const_iterator *)other))
    );
}

void MR_C_phmap_flat_hash_map_int_float_const_iterator_Destroy(const MR_C_phmap_flat_hash_map_int_float_const_iterator *_this)
{
    delete ((const phmap::flat_hash_map<int, float>::const_iterator *)_this);
}

void MR_C_phmap_flat_hash_map_int_float_const_iterator_DestroyArray(const MR_C_phmap_flat_hash_map_int_float_const_iterator *_this)
{
    delete[] ((const phmap::flat_hash_map<int, float>::const_iterator *)_this);
}

const MR_C_phmap_flat_hash_map_int_float_const_iterator *MR_C_phmap_flat_hash_map_int_float_const_iterator_OffsetPtr(const MR_C_phmap_flat_hash_map_int_float_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_phmap_flat_hash_map_int_float_const_iterator *)(((const phmap::flat_hash_map<int, float>::const_iterator *)ptr) + i);
}

MR_C_phmap_flat_hash_map_int_float_const_iterator *MR_C_phmap_flat_hash_map_int_float_const_iterator_OffsetMutablePtr(MR_C_phmap_flat_hash_map_int_float_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_phmap_flat_hash_map_int_float_const_iterator *)(((phmap::flat_hash_map<int, float>::const_iterator *)ptr) + i);
}

MR_C_phmap_flat_hash_map_int_float_const_iterator *MR_C_phmap_flat_hash_map_int_float_const_iterator_from_mutable(const MR_C_phmap_flat_hash_map_int_float_iterator *iter)
{
    return (MR_C_phmap_flat_hash_map_int_float_const_iterator *)new phmap::flat_hash_map<int, float>::const_iterator(phmap::flat_hash_map<int, float>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), phmap::flat_hash_map<int, float>::iterator(*(phmap::flat_hash_map<int, float>::iterator *)iter))
    ));
}

MR_C_phmap_flat_hash_map_int_float_iterator *MR_C_phmap_flat_hash_map_int_float_iterator_DefaultConstruct(void)
{
    return (MR_C_phmap_flat_hash_map_int_float_iterator *)new phmap::flat_hash_map<int, float>::iterator(phmap::flat_hash_map<int, float>::iterator());
}

MR_C_phmap_flat_hash_map_int_float_iterator *MR_C_phmap_flat_hash_map_int_float_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_phmap_flat_hash_map_int_float_iterator *)(new phmap::flat_hash_map<int, float>::iterator[num_elems]{});
}

MR_C_phmap_flat_hash_map_int_float_iterator *MR_C_phmap_flat_hash_map_int_float_iterator_ConstructFromAnother(const MR_C_phmap_flat_hash_map_int_float_iterator *other)
{
    return (MR_C_phmap_flat_hash_map_int_float_iterator *)new phmap::flat_hash_map<int, float>::iterator(phmap::flat_hash_map<int, float>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::flat_hash_map<int, float>::iterator(*(phmap::flat_hash_map<int, float>::iterator *)other))
    ));
}

void MR_C_phmap_flat_hash_map_int_float_iterator_AssignFromAnother(MR_C_phmap_flat_hash_map_int_float_iterator *_this, const MR_C_phmap_flat_hash_map_int_float_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int, float>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::flat_hash_map<int, float>::iterator(*(phmap::flat_hash_map<int, float>::iterator *)other))
    );
}

void MR_C_phmap_flat_hash_map_int_float_iterator_Destroy(const MR_C_phmap_flat_hash_map_int_float_iterator *_this)
{
    delete ((const phmap::flat_hash_map<int, float>::iterator *)_this);
}

void MR_C_phmap_flat_hash_map_int_float_iterator_DestroyArray(const MR_C_phmap_flat_hash_map_int_float_iterator *_this)
{
    delete[] ((const phmap::flat_hash_map<int, float>::iterator *)_this);
}

const MR_C_phmap_flat_hash_map_int_float_iterator *MR_C_phmap_flat_hash_map_int_float_iterator_OffsetPtr(const MR_C_phmap_flat_hash_map_int_float_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_phmap_flat_hash_map_int_float_iterator *)(((const phmap::flat_hash_map<int, float>::iterator *)ptr) + i);
}

MR_C_phmap_flat_hash_map_int_float_iterator *MR_C_phmap_flat_hash_map_int_float_iterator_OffsetMutablePtr(MR_C_phmap_flat_hash_map_int_float_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_phmap_flat_hash_map_int_float_iterator *)(((phmap::flat_hash_map<int, float>::iterator *)ptr) + i);
}

const MR_C_std_pair_const_int_float *MR_C_phmap_flat_hash_map_int_float_const_iterator_deref(const MR_C_phmap_flat_hash_map_int_float_const_iterator *_this)
{
    return (const MR_C_std_pair_const_int_float *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float>::const_iterator *)(_this)));
}

const int *MR_C_phmap_flat_hash_map_int_float_const_iterator_deref_key(const MR_C_phmap_flat_hash_map_int_float_const_iterator *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float>::const_iterator *)(_this))->first);
}

const float *MR_C_phmap_flat_hash_map_int_float_const_iterator_deref_value(const MR_C_phmap_flat_hash_map_int_float_const_iterator *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float>::const_iterator *)(_this))->second);
}

void MR_C_phmap_flat_hash_map_int_float_const_iterator_incr(MR_C_phmap_flat_hash_map_int_float_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int, float>::const_iterator *)(_this));
}

MR_C_std_pair_const_int_float *MR_C_phmap_flat_hash_map_int_float_iterator_deref(const MR_C_phmap_flat_hash_map_int_float_iterator *_this)
{
    return (MR_C_std_pair_const_int_float *)std::addressof(*((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float>::iterator *)(_this)));
}

const int *MR_C_phmap_flat_hash_map_int_float_iterator_deref_key(const MR_C_phmap_flat_hash_map_int_float_iterator *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float>::iterator *)(_this))->first);
}

float *MR_C_phmap_flat_hash_map_int_float_iterator_deref_value(const MR_C_phmap_flat_hash_map_int_float_iterator *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int, float>::iterator *)(_this))->second);
}

void MR_C_phmap_flat_hash_map_int_float_iterator_incr(MR_C_phmap_flat_hash_map_int_float_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int, float>::iterator *)(_this));
}

