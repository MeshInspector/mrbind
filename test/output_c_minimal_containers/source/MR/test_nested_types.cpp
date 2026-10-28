#define MR_C_BUILD_LIBRARY
#include "MR/test_nested_types.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_nested_types.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


const MR_NestedTypes_A_B *MR_NestedTypes_A_Get_b(const MR_NestedTypes_A *_this)
{
    return (const MR_NestedTypes_A_B *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::NestedTypes::A *)(_this)).b);
}

void MR_NestedTypes_A_Set_b(MR_NestedTypes_A *_this, const MR_NestedTypes_A_B *value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::NestedTypes::A *)(_this)).b = ((value ? void() : MRBINDC_THROW("Parameter `value` can not be null.", void)), MR::NestedTypes::A::B(*(MR::NestedTypes::A::B *)value));
}

MR_NestedTypes_A_B *MR_NestedTypes_A_GetMutable_b(MR_NestedTypes_A *_this)
{
    return (MR_NestedTypes_A_B *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::NestedTypes::A *)(_this)).b);
}

const MR_NestedTypes_A_E *MR_NestedTypes_A_Get_e(const MR_NestedTypes_A *_this)
{
    return (const MR_NestedTypes_A_E *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::NestedTypes::A *)(_this)).e);
}

void MR_NestedTypes_A_Set_e(MR_NestedTypes_A *_this, MR_NestedTypes_A_E value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::NestedTypes::A *)(_this)).e = ((MR::NestedTypes::A::E)value);
}

MR_NestedTypes_A_E *MR_NestedTypes_A_GetMutable_e(MR_NestedTypes_A *_this)
{
    return (MR_NestedTypes_A_E *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::NestedTypes::A *)(_this)).e);
}

MR_NestedTypes_A *MR_NestedTypes_A_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A *)new MR::NestedTypes::A(MR::NestedTypes::A());
    ) // MRBINDC_TRY
}

MR_NestedTypes_A *MR_NestedTypes_A_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A *)(new MR::NestedTypes::A[num_elems]{});
    ) // MRBINDC_TRY
}

MR_NestedTypes_A *MR_NestedTypes_A_ConstructFrom(const MR_NestedTypes_A_B *b, MR_NestedTypes_A_E e)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A *)new MR::NestedTypes::A(MR::NestedTypes::A{
        ((b ? void() : MRBINDC_THROW("Parameter `b` can not be null.", void)), MR::NestedTypes::A::B(*(MR::NestedTypes::A::B *)b)),
        ((MR::NestedTypes::A::E)e)
    });
    ) // MRBINDC_TRY
}

const MR_NestedTypes_A *MR_NestedTypes_A_OffsetPtr(const MR_NestedTypes_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_NestedTypes_A *)(((const MR::NestedTypes::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_NestedTypes_A *MR_NestedTypes_A_OffsetMutablePtr(MR_NestedTypes_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A *)(((MR::NestedTypes::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_NestedTypes_A *MR_NestedTypes_A_ConstructFromAnother(const MR_NestedTypes_A *_other)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A *)new MR::NestedTypes::A(MR::NestedTypes::A(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::NestedTypes::A(*(MR::NestedTypes::A *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_NestedTypes_A_Destroy(const MR_NestedTypes_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::NestedTypes::A *)_this);
    ) // MRBINDC_TRY
}

void MR_NestedTypes_A_DestroyArray(const MR_NestedTypes_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::NestedTypes::A *)_this);
    ) // MRBINDC_TRY
}

MR_NestedTypes_A *MR_NestedTypes_A_AssignFromAnother(MR_NestedTypes_A *_this, const MR_NestedTypes_A *_other)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::NestedTypes::A *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::NestedTypes::A(*(MR::NestedTypes::A *)_other))
    ));
    ) // MRBINDC_TRY
}

MR_NestedTypes_A_B *MR_NestedTypes_A_B_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A_B *)new MR::NestedTypes::A::B(MR::NestedTypes::A::B());
    ) // MRBINDC_TRY
}

MR_NestedTypes_A_B *MR_NestedTypes_A_B_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A_B *)(new MR::NestedTypes::A::B[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_NestedTypes_A_B *MR_NestedTypes_A_B_OffsetPtr(const MR_NestedTypes_A_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_NestedTypes_A_B *)(((const MR::NestedTypes::A::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_NestedTypes_A_B *MR_NestedTypes_A_B_OffsetMutablePtr(MR_NestedTypes_A_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A_B *)(((MR::NestedTypes::A::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_NestedTypes_A_B *MR_NestedTypes_A_B_ConstructFromAnother(const MR_NestedTypes_A_B *_other)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A_B *)new MR::NestedTypes::A::B(MR::NestedTypes::A::B(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::NestedTypes::A::B(*(MR::NestedTypes::A::B *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_NestedTypes_A_B_Destroy(const MR_NestedTypes_A_B *_this)
{
    MRBINDC_TRY(
    delete ((const MR::NestedTypes::A::B *)_this);
    ) // MRBINDC_TRY
}

void MR_NestedTypes_A_B_DestroyArray(const MR_NestedTypes_A_B *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::NestedTypes::A::B *)_this);
    ) // MRBINDC_TRY
}

MR_NestedTypes_A_B *MR_NestedTypes_A_B_AssignFromAnother(MR_NestedTypes_A_B *_this, const MR_NestedTypes_A_B *_other)
{
    MRBINDC_TRY(
    return (MR_NestedTypes_A_B *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::NestedTypes::A::B *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::NestedTypes::A::B(*(MR::NestedTypes::A::B *)_other))
    ));
    ) // MRBINDC_TRY
}

