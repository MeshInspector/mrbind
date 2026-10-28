#define MR_C_BUILD_LIBRARY
#include "MR/test_member_vars.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_member_vars.h>

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <type_traits>


const int *MR_MemberVars_A_Get_z(void)
{
    return std::addressof(MR::MemberVars::A::z);
}

void MR_MemberVars_A_Set_z(int value)
{
    MR::MemberVars::A::z = value;
}

int *MR_MemberVars_A_GetMutable_z(void)
{
    return std::addressof(MR::MemberVars::A::z);
}

const int *MR_MemberVars_A_Get_w(void)
{
    return std::addressof(MR::MemberVars::A::w);
}

const int *MR_MemberVars_A_Get_x(const MR_MemberVars_A *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::MemberVars::A *)(_this)).x);
}

void MR_MemberVars_A_Set_x(MR_MemberVars_A *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::MemberVars::A *)(_this)).x = value;
}

int *MR_MemberVars_A_GetMutable_x(MR_MemberVars_A *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::MemberVars::A *)(_this)).x);
}

const int *MR_MemberVars_A_Get_y(const MR_MemberVars_A *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::MemberVars::A *)(_this)).y);
}

int *MR_MemberVars_A_Get_ref(const MR_MemberVars_A *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::MemberVars::A *)(_this)).ref);
}

const int *MR_MemberVars_A_Get_arr(const MR_MemberVars_A *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::MemberVars::A *)(_this)).arr[0]);
}

int *MR_MemberVars_A_GetMutable_arr(MR_MemberVars_A *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::MemberVars::A *)(_this)).arr[0]);
}

size_t MR_MemberVars_A_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::MemberVars::A::arr)>;
}

MR_MemberVars_A *MR_MemberVars_A_ConstructFromAnother(const MR_MemberVars_A *_other)
{
    MRBINDC_TRY(
    return (MR_MemberVars_A *)new MR::MemberVars::A(MR::MemberVars::A(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::MemberVars::A(*(MR::MemberVars::A *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_MemberVars_A *MR_MemberVars_A_OffsetPtr(const MR_MemberVars_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_MemberVars_A *)(((const MR::MemberVars::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_MemberVars_A *MR_MemberVars_A_OffsetMutablePtr(MR_MemberVars_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_MemberVars_A *)(((MR::MemberVars::A *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_MemberVars_A_Destroy(const MR_MemberVars_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::MemberVars::A *)_this);
    ) // MRBINDC_TRY
}

void MR_MemberVars_A_DestroyArray(const MR_MemberVars_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::MemberVars::A *)_this);
    ) // MRBINDC_TRY
}

