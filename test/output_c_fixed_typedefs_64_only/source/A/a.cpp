#define MR_AB_BUILD_LIBRARY
#include "A/a.h"

#include <input/A/a.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <vector>


MR_SeparateA *MR_SeparateA_DefaultConstruct(void)
{
    return (MR_SeparateA *)new MR::SeparateA(MR::SeparateA());
}

MR_SeparateA *MR_SeparateA_DefaultConstructArray(size_t num_elems)
{
    return (MR_SeparateA *)(new MR::SeparateA[num_elems]{});
}

const MR_SeparateA *MR_SeparateA_OffsetPtr(const MR_SeparateA *ptr, ptrdiff_t i)
{
    return (const MR_SeparateA *)(((const MR::SeparateA *)ptr) + i);
}

MR_SeparateA *MR_SeparateA_OffsetMutablePtr(MR_SeparateA *ptr, ptrdiff_t i)
{
    return (MR_SeparateA *)(((MR::SeparateA *)ptr) + i);
}

MR_SeparateA *MR_SeparateA_ConstructFromAnother(const MR_SeparateA *_other)
{
    return (MR_SeparateA *)new MR::SeparateA(MR::SeparateA(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::SeparateA(*(MR::SeparateA *)_other))
    ));
}

void MR_SeparateA_Destroy(const MR_SeparateA *_this)
{
    delete ((const MR::SeparateA *)_this);
}

void MR_SeparateA_DestroyArray(const MR_SeparateA *_this)
{
    delete[] ((const MR::SeparateA *)_this);
}

MR_SeparateA *MR_SeparateA_AssignFromAnother(MR_SeparateA *_this, const MR_SeparateA *_other)
{
    return (MR_SeparateA *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::SeparateA *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::SeparateA(*(MR::SeparateA *)_other))
    ));
}

MR_C_std_vector_MR_SeparateA *MR_GetSeparateVecA(void)
{
    return (MR_C_std_vector_MR_SeparateA *)new std::vector<MR::SeparateA>(::MR::GetSeparateVecA());
}

