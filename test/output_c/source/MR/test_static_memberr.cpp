#define MR_C_BUILD_LIBRARY
#include "MR/test_static_memberr.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_static_memberr.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


const int *MR_StaticFuncs_A_Get_x(void)
{
    return std::addressof(MR::StaticFuncs::A::x);
}

void MR_StaticFuncs_A_Set_x(int value)
{
    MR::StaticFuncs::A::x = value;
}

int *MR_StaticFuncs_A_GetMutable_x(void)
{
    return std::addressof(MR::StaticFuncs::A::x);
}

MR_StaticFuncs_A *MR_StaticFuncs_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_StaticFuncs_A *)new MR::StaticFuncs::A(MR::StaticFuncs::A());
    ) // MRBINDC_TRY
}

MR_StaticFuncs_A *MR_StaticFuncs_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_StaticFuncs_A *)(new MR::StaticFuncs::A[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_StaticFuncs_A *MR_StaticFuncs_A_OffsetPtr(const MR_StaticFuncs_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_StaticFuncs_A *)(((const MR::StaticFuncs::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StaticFuncs_A *MR_StaticFuncs_A_OffsetMutablePtr(MR_StaticFuncs_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_StaticFuncs_A *)(((MR::StaticFuncs::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_StaticFuncs_A *MR_StaticFuncs_A_ConstructFromAnother(const MR_StaticFuncs_A *_other)
{
    MRBINDC_TRY(
    return (MR_StaticFuncs_A *)new MR::StaticFuncs::A(MR::StaticFuncs::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::StaticFuncs::A(*(MR::StaticFuncs::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_StaticFuncs_A_Destroy(const MR_StaticFuncs_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::StaticFuncs::A *)_this);
    ) // MRBINDC_TRY
}

void MR_StaticFuncs_A_DestroyArray(const MR_StaticFuncs_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::StaticFuncs::A *)_this);
    ) // MRBINDC_TRY
}

MR_StaticFuncs_A *MR_StaticFuncs_A_AssignFromAnother(MR_StaticFuncs_A *_this, const MR_StaticFuncs_A *_other)
{
    MRBINDC_TRY(
    return (MR_StaticFuncs_A *)std::addressof(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::StaticFuncs::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::StaticFuncs::A(*(MR::StaticFuncs::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_StaticFuncs_A_blah(void)
{
    MRBINDC_TRY(
    MR::StaticFuncs::A::blah();
    ) // MRBINDC_TRY
}

