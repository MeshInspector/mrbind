#define MR_C_BUILD_LIBRARY
#include "std_pair_MR_SeparateA_MR_SeparateB.h"

#include <__mrbind_c_details.h>
#include <input/A/a.h>
#include <input/B/b.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)new std::pair<MR::SeparateA, MR::SeparateB>(std::pair<MR::SeparateA, MR::SeparateB>());
    ) // MRBINDC_TRY
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(new std::pair<MR::SeparateA, MR::SeparateB>[num_elems]{});
    ) // MRBINDC_TRY
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *other)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)new std::pair<MR::SeparateA, MR::SeparateB>(std::pair<MR::SeparateA, MR::SeparateB>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::pair<MR::SeparateA, MR::SeparateB>(*(std::pair<MR::SeparateA, MR::SeparateB> *)other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_pair_MR_SeparateA_MR_SeparateB *other)
{
    MRBINDC_TRY(
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::pair<MR::SeparateA, MR::SeparateB>(*(std::pair<MR::SeparateA, MR::SeparateB> *)other))
    );
    ) // MRBINDC_TRY
}

void MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete ((const std::pair<MR::SeparateA, MR::SeparateB> *)_this);
    ) // MRBINDC_TRY
}

void MR_C_std_pair_MR_SeparateA_MR_SeparateB_DestroyArray(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    delete[] ((const std::pair<MR::SeparateA, MR::SeparateB> *)_this);
    ) // MRBINDC_TRY
}

const MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_OffsetPtr(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(((const std::pair<MR::SeparateA, MR::SeparateB> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_OffsetMutablePtr(MR_C_std_pair_MR_SeparateA_MR_SeparateB *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(((std::pair<MR::SeparateA, MR::SeparateB> *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(const MR_SeparateA *first, const MR_SeparateB *second)
{
    MRBINDC_TRY(
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)new std::pair<MR::SeparateA, MR::SeparateB>(std::pair<MR::SeparateA, MR::SeparateB>(
        ((first ? void() : throw std::runtime_error("Parameter `first` can not be null.")), MR::SeparateA(*(MR::SeparateA *)first)),
        ((second ? void() : throw std::runtime_error("Parameter `second` can not be null.")), MR::SeparateB(*(MR::SeparateB *)second))
    ));
    ) // MRBINDC_TRY
}

const MR_SeparateA *MR_C_std_pair_MR_SeparateA_MR_SeparateB_first(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).first);
    ) // MRBINDC_TRY
}

MR_SeparateA *MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).first);
    ) // MRBINDC_TRY
}

const MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_second(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (const MR_SeparateB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).second);
    ) // MRBINDC_TRY
}

MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    MRBINDC_TRY(
    return (MR_SeparateB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).second);
    ) // MRBINDC_TRY
}

