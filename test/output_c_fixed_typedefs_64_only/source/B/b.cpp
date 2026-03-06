#define MR_AB_BUILD_LIBRARY
#include "B/b.h"

#include <input/B/b.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_SeparateB *MR_SeparateB_DefaultConstruct(void)
{
    return (MR_SeparateB *)new MR::SeparateB(MR::SeparateB());
}

MR_SeparateB *MR_SeparateB_DefaultConstructArray(size_t num_elems)
{
    return (MR_SeparateB *)(new MR::SeparateB[num_elems]{});
}

const MR_SeparateB *MR_SeparateB_OffsetPtr(const MR_SeparateB *ptr, ptrdiff_t i)
{
    return (const MR_SeparateB *)(((const MR::SeparateB *)ptr) + i);
}

MR_SeparateB *MR_SeparateB_OffsetMutablePtr(MR_SeparateB *ptr, ptrdiff_t i)
{
    return (MR_SeparateB *)(((MR::SeparateB *)ptr) + i);
}

MR_SeparateB *MR_SeparateB_ConstructFromAnother(const MR_SeparateB *_other)
{
    return (MR_SeparateB *)new MR::SeparateB(MR::SeparateB(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::SeparateB(*(MR::SeparateB *)_other))
    ));
}

void MR_SeparateB_Destroy(const MR_SeparateB *_this)
{
    delete ((const MR::SeparateB *)_this);
}

void MR_SeparateB_DestroyArray(const MR_SeparateB *_this)
{
    delete[] ((const MR::SeparateB *)_this);
}

MR_SeparateB *MR_SeparateB_AssignFromAnother(MR_SeparateB *_this, const MR_SeparateB *_other)
{
    return (MR_SeparateB *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::SeparateB *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::SeparateB(*(MR::SeparateB *)_other))
    ));
}

MR_C_std_vector_MR_SeparateB *MR_GetSeparateVecB(void)
{
    return (MR_C_std_vector_MR_SeparateB *)new std::vector<MR::SeparateB>(::MR::GetSeparateVecB());
}

