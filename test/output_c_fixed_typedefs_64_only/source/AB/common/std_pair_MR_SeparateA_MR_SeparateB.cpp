#define MR_AB_BUILD_LIBRARY
#include "AB/common/std_pair_MR_SeparateA_MR_SeparateB.h"

#include <input/A/a.h>
#include <input/B/b.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <utility>


MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct(void)
{
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)new std::pair<MR::SeparateA, MR::SeparateB>(std::pair<MR::SeparateA, MR::SeparateB>());
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstructArray(size_t num_elems)
{
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(new std::pair<MR::SeparateA, MR::SeparateB>[num_elems]{});
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *other)
{
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)new std::pair<MR::SeparateA, MR::SeparateB>(std::pair<MR::SeparateA, MR::SeparateB>(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::pair<MR::SeparateA, MR::SeparateB>(*(std::pair<MR::SeparateA, MR::SeparateB> *)other))
    ));
}

void MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this, const MR_C_std_pair_MR_SeparateA_MR_SeparateB *other)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).operator=(
        ((other ? void() : throw std::runtime_error("Parameter `other` can not be null.")), std::pair<MR::SeparateA, MR::SeparateB>(*(std::pair<MR::SeparateA, MR::SeparateB> *)other))
    );
}

void MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    delete ((const std::pair<MR::SeparateA, MR::SeparateB> *)_this);
}

void MR_C_std_pair_MR_SeparateA_MR_SeparateB_DestroyArray(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    delete[] ((const std::pair<MR::SeparateA, MR::SeparateB> *)_this);
}

const MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_OffsetPtr(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *ptr, ptrdiff_t i)
{
    return (const MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(((const std::pair<MR::SeparateA, MR::SeparateB> *)ptr) + i);
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_OffsetMutablePtr(MR_C_std_pair_MR_SeparateA_MR_SeparateB *ptr, ptrdiff_t i)
{
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)(((std::pair<MR::SeparateA, MR::SeparateB> *)ptr) + i);
}

MR_C_std_pair_MR_SeparateA_MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(const MR_SeparateA *first, const MR_SeparateB *second)
{
    return (MR_C_std_pair_MR_SeparateA_MR_SeparateB *)new std::pair<MR::SeparateA, MR::SeparateB>(std::pair<MR::SeparateA, MR::SeparateB>(
        ((first ? void() : throw std::runtime_error("Parameter `first` can not be null.")), MR::SeparateA(*(MR::SeparateA *)first)),
        ((second ? void() : throw std::runtime_error("Parameter `second` can not be null.")), MR::SeparateB(*(MR::SeparateB *)second))
    ));
}

const MR_SeparateA *MR_C_std_pair_MR_SeparateA_MR_SeparateB_first(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    return (const MR_SeparateA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).first);
}

MR_SeparateA *MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    return (MR_SeparateA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).first);
}

const MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_second(const MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    return (const MR_SeparateB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(const std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).second);
}

MR_SeparateB *MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut(MR_C_std_pair_MR_SeparateA_MR_SeparateB *_this)
{
    return (MR_SeparateB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(std::pair<MR::SeparateA, MR::SeparateB> *)(_this)).second);
}

