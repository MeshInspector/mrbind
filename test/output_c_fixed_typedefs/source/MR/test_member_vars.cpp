#define MR_C_BUILD_LIBRARY
#include "MR/test_member_vars.h"

#include <input/MR/test_member_vars.h>

#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <type_traits>


const int32_t *MR_MemberVars_A_Get_z(void)
{
    return &(MR::MemberVars::A::z);
}

void MR_MemberVars_A_Set_z(int32_t value)
{
    MR::MemberVars::A::z = value;
}

int32_t *MR_MemberVars_A_GetMutable_z(void)
{
    return &(MR::MemberVars::A::z);
}

const int32_t *MR_MemberVars_A_Get_w(void)
{
    return &(MR::MemberVars::A::w);
}

const int32_t *MR_MemberVars_A_Get_x(const MR_MemberVars_A *_this)
{
    return &((_this ? *(const MR::MemberVars::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).x);
}

void MR_MemberVars_A_Set_x(MR_MemberVars_A *_this, int32_t value)
{
    (_this ? *(MR::MemberVars::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).x = value;
}

int32_t *MR_MemberVars_A_GetMutable_x(MR_MemberVars_A *_this)
{
    return &((_this ? *(MR::MemberVars::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).x);
}

const int32_t *MR_MemberVars_A_Get_y(const MR_MemberVars_A *_this)
{
    return &((_this ? *(const MR::MemberVars::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).y);
}

int32_t *MR_MemberVars_A_Get_ref(const MR_MemberVars_A *_this)
{
    return &((_this ? *(const MR::MemberVars::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).ref);
}

const int32_t *MR_MemberVars_A_Get_arr(const MR_MemberVars_A *_this)
{
    return &((_this ? *(const MR::MemberVars::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).arr[0]);
}

int32_t *MR_MemberVars_A_GetMutable_arr(MR_MemberVars_A *_this)
{
    return &((_this ? *(MR::MemberVars::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).arr[0]);
}

size_t MR_MemberVars_A_GetSize_arr(void)
{
    return std::extent_v<decltype(MR::MemberVars::A::arr)>;
}

MR_MemberVars_A *MR_MemberVars_A_ConstructFromAnother(const MR_MemberVars_A *_other)
{
    return (MR_MemberVars_A *)new MR::MemberVars::A(MR::MemberVars::A(
        (_other ? MR::MemberVars::A(*(MR::MemberVars::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

const MR_MemberVars_A *MR_MemberVars_A_OffsetPtr(const MR_MemberVars_A *ptr, ptrdiff_t i)
{
    return (const MR_MemberVars_A *)(((const MR::MemberVars::A *)ptr) + i);
}

MR_MemberVars_A *MR_MemberVars_A_OffsetMutablePtr(MR_MemberVars_A *ptr, ptrdiff_t i)
{
    return (MR_MemberVars_A *)(((MR::MemberVars::A *)ptr) + i);
}

void MR_MemberVars_A_Destroy(const MR_MemberVars_A *_this)
{
    delete ((const MR::MemberVars::A *)_this);
}

void MR_MemberVars_A_DestroyArray(const MR_MemberVars_A *_this)
{
    delete[] ((const MR::MemberVars::A *)_this);
}

