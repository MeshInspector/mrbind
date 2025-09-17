#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_adjusting_names.h"

#include <input/MR/test_adjusting_names.h>

#include <common.h>
#include <cstddef>
#include <stdexcept>


void MR_AdjustingNames_foo(void)
{
    ::MR::AdjustingNames::foo<MR_C_uint64_t>();
}

void MR_AdjustingNames_bar(void)
{
    ::MR::AdjustingNames::bar();
}

const MR_C_uint64_t *MR_AdjustingNames_A_Get_var_uint64_t(void)
{
    return &(MR::AdjustingNames::A::var<MR_C_uint64_t>);
}

void MR_AdjustingNames_A_Set_var_uint64_t(MR_C_uint64_t value)
{
    MR::AdjustingNames::A::var<MR_C_uint64_t> = value;
}

MR_C_uint64_t *MR_AdjustingNames_A_GetMutable_var_uint64_t(void)
{
    return &(MR::AdjustingNames::A::var<MR_C_uint64_t>);
}

MR_AdjustingNames_A *MR_AdjustingNames_A_DefaultConstruct(void)
{
    return (MR_AdjustingNames_A *)new MR::AdjustingNames::A(MR::AdjustingNames::A());
}

MR_AdjustingNames_A *MR_AdjustingNames_A_DefaultConstructArray(size_t num_elems)
{
    return (MR_AdjustingNames_A *)(new MR::AdjustingNames::A[num_elems]{});
}

const MR_AdjustingNames_A *MR_AdjustingNames_A_OffsetPtr(const MR_AdjustingNames_A *ptr, ptrdiff_t i)
{
    return (const MR_AdjustingNames_A *)(((const MR::AdjustingNames::A *)ptr) + i);
}

MR_AdjustingNames_A *MR_AdjustingNames_A_OffsetMutablePtr(MR_AdjustingNames_A *ptr, ptrdiff_t i)
{
    return (MR_AdjustingNames_A *)(((MR::AdjustingNames::A *)ptr) + i);
}

MR_AdjustingNames_A *MR_AdjustingNames_A_ConstructFromAnother(const MR_AdjustingNames_A *_other)
{
    return (MR_AdjustingNames_A *)new MR::AdjustingNames::A(MR::AdjustingNames::A(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::AdjustingNames::A(*(MR::AdjustingNames::A *)_other))
    ));
}

void MR_AdjustingNames_A_Destroy(const MR_AdjustingNames_A *_this)
{
    delete ((const MR::AdjustingNames::A *)_this);
}

void MR_AdjustingNames_A_DestroyArray(const MR_AdjustingNames_A *_this)
{
    delete[] ((const MR::AdjustingNames::A *)_this);
}

MR_C_uint64_t MR_AdjustingNames_A_ConvertTo_uint64_t(MR_AdjustingNames_A *_this)
{
    return (MR_C_uint64_t)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::AdjustingNames::A *)(_this)));
}

MR_AdjustingNames_A *MR_AdjustingNames_A_AssignFromAnother(MR_AdjustingNames_A *_this, const MR_AdjustingNames_A *_other)
{
    return (MR_AdjustingNames_A *)&(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::AdjustingNames::A *)(_this)).operator=(
        ((_other ? void() : throw std::runtime_error("Parameter `_other` can not be null.")), MR::AdjustingNames::A(*(MR::AdjustingNames::A *)_other))
    ));
}

void MR_AdjustingNames_A_foo(MR_AdjustingNames_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::AdjustingNames::A *)(_this)).foo<MR_C_uint64_t>();
}

void MR_AdjustingNames_A_bar(MR_AdjustingNames_A *_this)
{
    ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::AdjustingNames::A *)(_this)).bar();
}

