#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "phmap_flat_hash_map_int32_t_float.h"

#include <__mrbind_c_details.h>

#include <cstddef>
#include <cstdint>
#include <memory>
#include <parallel_hashmap/phmap.h>
#include <stdexcept>


MR_C_phmap_flat_hash_map_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_DefaultConstruct(void)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float *)new phmap::flat_hash_map<int32_t, float>(phmap::flat_hash_map<int32_t, float>());
}

MR_C_phmap_flat_hash_map_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float *)(new phmap::flat_hash_map<int32_t, float>[num_elems]{});
}

MR_C_phmap_flat_hash_map_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_ConstructFromAnother(MR_C_PassBy other_pass_by, MR_C_phmap_flat_hash_map_int32_t_float *other)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float *)new phmap::flat_hash_map<int32_t, float>(phmap::flat_hash_map<int32_t, float>(
        (MRBINDC_CLASSARG_DEF_CTOR(other, phmap::flat_hash_map<int32_t, float>) MRBINDC_CLASSARG_COPY(other, (phmap::flat_hash_map<int32_t, float>), phmap::flat_hash_map<int32_t, float>) MRBINDC_CLASSARG_MOVE(other, (phmap::flat_hash_map<int32_t, float>), phmap::flat_hash_map<int32_t, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, phmap::flat_hash_map<int32_t, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, phmap::flat_hash_map<int32_t, float>) MRBINDC_CLASSARG_END(other, phmap::flat_hash_map<int32_t, float>))
    ));
}

void MR_C_phmap_flat_hash_map_int32_t_float_AssignFromAnother(MR_C_phmap_flat_hash_map_int32_t_float *_this, MR_C_PassBy other_pass_by, MR_C_phmap_flat_hash_map_int32_t_float *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float> *)(_this)).operator=(
        (MRBINDC_CLASSARG_DEF_CTOR(other, phmap::flat_hash_map<int32_t, float>) MRBINDC_CLASSARG_COPY(other, (phmap::flat_hash_map<int32_t, float>), phmap::flat_hash_map<int32_t, float>) MRBINDC_CLASSARG_MOVE(other, (phmap::flat_hash_map<int32_t, float>), phmap::flat_hash_map<int32_t, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_DefaultArgument, phmap::flat_hash_map<int32_t, float>) MRBINDC_CLASSARG_NO_DEF_ARG(other, MR_C_PassBy_NoObject, phmap::flat_hash_map<int32_t, float>) MRBINDC_CLASSARG_END(other, phmap::flat_hash_map<int32_t, float>))
    );
}

void MR_C_phmap_flat_hash_map_int32_t_float_Destroy(const MR_C_phmap_flat_hash_map_int32_t_float *_this)
{
    delete ((const phmap::flat_hash_map<int32_t, float> *)_this);
}

void MR_C_phmap_flat_hash_map_int32_t_float_DestroyArray(const MR_C_phmap_flat_hash_map_int32_t_float *_this)
{
    delete[] ((const phmap::flat_hash_map<int32_t, float> *)_this);
}

const MR_C_phmap_flat_hash_map_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_OffsetPtr(const MR_C_phmap_flat_hash_map_int32_t_float *ptr, ptrdiff_t i)
{
    return (const MR_C_phmap_flat_hash_map_int32_t_float *)(((const phmap::flat_hash_map<int32_t, float> *)ptr) + i);
}

MR_C_phmap_flat_hash_map_int32_t_float *MR_C_phmap_flat_hash_map_int32_t_float_OffsetMutablePtr(MR_C_phmap_flat_hash_map_int32_t_float *ptr, ptrdiff_t i)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float *)(((phmap::flat_hash_map<int32_t, float> *)ptr) + i);
}

size_t MR_C_phmap_flat_hash_map_int32_t_float_Size(const MR_C_phmap_flat_hash_map_int32_t_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float> *)(_this)).size();
}

bool MR_C_phmap_flat_hash_map_int32_t_float_IsEmpty(const MR_C_phmap_flat_hash_map_int32_t_float *_this)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float> *)(_this)).empty();
}

void MR_C_phmap_flat_hash_map_int32_t_float_Clear(MR_C_phmap_flat_hash_map_int32_t_float *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float> *)(_this)).clear();
}

float *MR_C_phmap_flat_hash_map_int32_t_float_FindOrConstructElem(MR_C_phmap_flat_hash_map_int32_t_float *_this, const int32_t *key)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float> *)(_this))[((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)]);
}

bool MR_C_phmap_flat_hash_map_int32_t_float_Contains(const MR_C_phmap_flat_hash_map_int32_t_float *_this, const int32_t *key)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float> *)(_this)).contains(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    );
}

MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_Find(const MR_C_phmap_flat_hash_map_int32_t_float *_this, const int32_t *key)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *)new phmap::flat_hash_map<int32_t, float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    ));
}

MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_FindMutable(MR_C_phmap_flat_hash_map_int32_t_float *_this, const int32_t *key)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_iterator *)new phmap::flat_hash_map<int32_t, float>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float> *)(_this)).find(
        ((key ? void() : throw std::runtime_error("Parameter `key` can not be null.")), *key)
    ));
}

MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_Begin(const MR_C_phmap_flat_hash_map_int32_t_float *_this)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *)new phmap::flat_hash_map<int32_t, float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float> *)(_this)).cbegin());
}

bool MR_C_phmap_flat_hash_map_int32_t_float_IsBegin(const MR_C_phmap_flat_hash_map_int32_t_float *_this, const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float> *)(_this)).cbegin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::flat_hash_map<int32_t, float>::const_iterator *)(iter));
}

MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_MutableBegin(MR_C_phmap_flat_hash_map_int32_t_float *_this)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_iterator *)new phmap::flat_hash_map<int32_t, float>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float> *)(_this)).begin());
}

bool MR_C_phmap_flat_hash_map_int32_t_float_IsMutableBegin(MR_C_phmap_flat_hash_map_int32_t_float *_this, const MR_C_phmap_flat_hash_map_int32_t_float_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float> *)(_this)).begin() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::flat_hash_map<int32_t, float>::iterator *)(iter));
}

MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_End(const MR_C_phmap_flat_hash_map_int32_t_float *_this)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *)new phmap::flat_hash_map<int32_t, float>::const_iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float> *)(_this)).cend());
}

bool MR_C_phmap_flat_hash_map_int32_t_float_IsEnd(const MR_C_phmap_flat_hash_map_int32_t_float *_this, const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float> *)(_this)).cend() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::flat_hash_map<int32_t, float>::const_iterator *)(iter));
}

MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_MutableEnd(MR_C_phmap_flat_hash_map_int32_t_float *_this)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_iterator *)new phmap::flat_hash_map<int32_t, float>::iterator(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float> *)(_this)).end());
}

bool MR_C_phmap_flat_hash_map_int32_t_float_IsMutableEnd(MR_C_phmap_flat_hash_map_int32_t_float *_this, const MR_C_phmap_flat_hash_map_int32_t_float_iterator *iter)
{
    return ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float> *)(_this)).end() == ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), *(const phmap::flat_hash_map<int32_t, float>::iterator *)(iter));
}

MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_DefaultConstruct(void)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *)new phmap::flat_hash_map<int32_t, float>::const_iterator(phmap::flat_hash_map<int32_t, float>::const_iterator());
}

MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *)(new phmap::flat_hash_map<int32_t, float>::const_iterator[num_elems]{});
}

MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_ConstructFromAnother(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *other)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *)new phmap::flat_hash_map<int32_t, float>::const_iterator(phmap::flat_hash_map<int32_t, float>::const_iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::flat_hash_map<int32_t, float>::const_iterator(*(phmap::flat_hash_map<int32_t, float>::const_iterator *)other))
    ));
}

void MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_AssignFromAnother(MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this, const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float>::const_iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::flat_hash_map<int32_t, float>::const_iterator(*(phmap::flat_hash_map<int32_t, float>::const_iterator *)other))
    );
}

void MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_Destroy(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this)
{
    delete ((const phmap::flat_hash_map<int32_t, float>::const_iterator *)_this);
}

void MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_DestroyArray(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this)
{
    delete[] ((const phmap::flat_hash_map<int32_t, float>::const_iterator *)_this);
}

const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_OffsetPtr(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *)(((const phmap::flat_hash_map<int32_t, float>::const_iterator *)ptr) + i);
}

MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_OffsetMutablePtr(MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *)(((phmap::flat_hash_map<int32_t, float>::const_iterator *)ptr) + i);
}

MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_FromMutable(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *iter)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *)new phmap::flat_hash_map<int32_t, float>::const_iterator(phmap::flat_hash_map<int32_t, float>::iterator(
        ((iter ? void() : throw std::runtime_error("Parameter `iter` can not be null.")), phmap::flat_hash_map<int32_t, float>::iterator(*(phmap::flat_hash_map<int32_t, float>::iterator *)iter))
    ));
}

MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_iterator_DefaultConstruct(void)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_iterator *)new phmap::flat_hash_map<int32_t, float>::iterator(phmap::flat_hash_map<int32_t, float>::iterator());
}

MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_iterator_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_iterator *)(new phmap::flat_hash_map<int32_t, float>::iterator[num_elems]{});
}

MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_iterator_ConstructFromAnother(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *other)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_iterator *)new phmap::flat_hash_map<int32_t, float>::iterator(phmap::flat_hash_map<int32_t, float>::iterator(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::flat_hash_map<int32_t, float>::iterator(*(phmap::flat_hash_map<int32_t, float>::iterator *)other))
    ));
}

void MR_C_phmap_flat_hash_map_int32_t_float_iterator_AssignFromAnother(MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this, const MR_C_phmap_flat_hash_map_int32_t_float_iterator *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float>::iterator *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), phmap::flat_hash_map<int32_t, float>::iterator(*(phmap::flat_hash_map<int32_t, float>::iterator *)other))
    );
}

void MR_C_phmap_flat_hash_map_int32_t_float_iterator_Destroy(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this)
{
    delete ((const phmap::flat_hash_map<int32_t, float>::iterator *)_this);
}

void MR_C_phmap_flat_hash_map_int32_t_float_iterator_DestroyArray(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this)
{
    delete[] ((const phmap::flat_hash_map<int32_t, float>::iterator *)_this);
}

const MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_iterator_OffsetPtr(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *ptr, ptrdiff_t i)
{
    return (const MR_C_phmap_flat_hash_map_int32_t_float_iterator *)(((const phmap::flat_hash_map<int32_t, float>::iterator *)ptr) + i);
}

MR_C_phmap_flat_hash_map_int32_t_float_iterator *MR_C_phmap_flat_hash_map_int32_t_float_iterator_OffsetMutablePtr(MR_C_phmap_flat_hash_map_int32_t_float_iterator *ptr, ptrdiff_t i)
{
    return (MR_C_phmap_flat_hash_map_int32_t_float_iterator *)(((phmap::flat_hash_map<int32_t, float>::iterator *)ptr) + i);
}

const int32_t *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_DerefKey(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float>::const_iterator *)(_this))->first);
}

const float *MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_DerefValue(const MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float>::const_iterator *)(_this))->second);
}

void MR_C_phmap_flat_hash_map_int32_t_float_const_iterator_Incr(MR_C_phmap_flat_hash_map_int32_t_float_const_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float>::const_iterator *)(_this));
}

const int32_t *MR_C_phmap_flat_hash_map_int32_t_float_iterator_DerefKey(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float>::iterator *)(_this))->first);
}

float *MR_C_phmap_flat_hash_map_int32_t_float_iterator_DerefValue(const MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this)
{
    return std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const phmap::flat_hash_map<int32_t, float>::iterator *)(_this))->second);
}

void MR_C_phmap_flat_hash_map_int32_t_float_iterator_Incr(MR_C_phmap_flat_hash_map_int32_t_float_iterator *_this)
{
    ++((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(phmap::flat_hash_map<int32_t, float>::iterator *)(_this));
}

