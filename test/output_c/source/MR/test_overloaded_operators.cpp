#define MR_C_BUILD_LIBRARY
#include "MR/test_overloaded_operators.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_overloaded_operators.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


MR_OverloadedOps_A *MR_OverloadedOps_A_ConstructFromAnother(const MR_OverloadedOps_A *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_A *)new MR::OverloadedOps::A(MR::OverloadedOps::A(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_other))
    ));
    ) // MRBINDC_TRY
}

const MR_OverloadedOps_A *MR_OverloadedOps_A_OffsetPtr(const MR_OverloadedOps_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OverloadedOps_A *)(((const MR::OverloadedOps::A *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_A *MR_OverloadedOps_A_OffsetMutablePtr(MR_OverloadedOps_A *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_A *)(((MR::OverloadedOps::A *)ptr) + i);
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_A_Destroy(const MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OverloadedOps::A *)_this);
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_A_DestroyArray(const MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OverloadedOps::A *)_this);
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_AssignFromAnother(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_other)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_other))
    );
    ) // MRBINDC_TRY
}

int MR_C_pos_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator+();
    ) // MRBINDC_TRY
}

int MR_C_add_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_neg_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator-();
    ) // MRBINDC_TRY
}

int MR_C_sub_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator-(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_deref_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator*();
    ) // MRBINDC_TRY
}

int MR_C_mul_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator*(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_div_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator/(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_mod_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator%(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_xor_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator^(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_bitand_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator&(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_bitor_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator|(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_compl_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator~();
    ) // MRBINDC_TRY
}

int MR_C_not_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator!();
    ) // MRBINDC_TRY
}

int MR_C_less_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator<(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_greater_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator>(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_add_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator+=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_sub_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator-=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_mul_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator*=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_div_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator/=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_mod_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator%=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_xor_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator^=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_bitand_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator&=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_bitor_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator|=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_lshift_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator<<(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_rshift_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator>>(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_lshift_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator<<=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_rshift_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator>>=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator==(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_not_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator!=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_less_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator<=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_greater_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator>=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_compare_three_way_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator<=>(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_and_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator&&(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_or_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator||(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_incr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator++();
    ) // MRBINDC_TRY
}

int MR_C_post_incr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator++(
        0
    );
    ) // MRBINDC_TRY
}

int MR_C_decr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator--();
    ) // MRBINDC_TRY
}

int MR_C_post_decr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator--(
        0
    );
    ) // MRBINDC_TRY
}

int MR_C_comma_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator,(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_arrow_star(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator->*(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_arrow(MR_OverloadedOps_A *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator->();
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_call(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator()(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_OverloadedOps_A_index(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::A *)(_this)).operator[](
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1))
    );
    ) // MRBINDC_TRY
}

MR_OverloadedOps_B *MR_OverloadedOps_B_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_B *)new MR::OverloadedOps::B(MR::OverloadedOps::B());
    ) // MRBINDC_TRY
}

MR_OverloadedOps_B *MR_OverloadedOps_B_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_B *)(new MR::OverloadedOps::B[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_OverloadedOps_B *MR_OverloadedOps_B_OffsetPtr(const MR_OverloadedOps_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OverloadedOps_B *)(((const MR::OverloadedOps::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_B *MR_OverloadedOps_B_OffsetMutablePtr(MR_OverloadedOps_B *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_B *)(((MR::OverloadedOps::B *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_B *MR_OverloadedOps_B_ConstructFromAnother(const MR_OverloadedOps_B *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_B *)new MR::OverloadedOps::B(MR::OverloadedOps::B(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_B_Destroy(const MR_OverloadedOps_B *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OverloadedOps::B *)_this);
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_B_DestroyArray(const MR_OverloadedOps_B *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OverloadedOps::B *)_this);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_B *MR_OverloadedOps_B_AssignFromAnother(MR_OverloadedOps_B *_this, const MR_OverloadedOps_B *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_B *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::B *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_C_pos_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    MRBINDC_TRY(
    return operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_add_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_neg_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    MRBINDC_TRY(
    return operator-(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_sub_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator-(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_deref_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    MRBINDC_TRY(
    return operator*(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_mul_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator*(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_div_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator/(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_mod_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator%(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_xor_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator^(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_bitand_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator&(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_bitor_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator|(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_compl_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    MRBINDC_TRY(
    return operator~(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_not_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    MRBINDC_TRY(
    return operator!(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_less_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator<(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_greater_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator>(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_add_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator+=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_sub_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator-=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_mul_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator*=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_div_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator/=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_mod_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator%=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_xor_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator^=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_bitand_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator&=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_bitor_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator|=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_lshift_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator<<(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_rshift_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator>>(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_lshift_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator<<=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_rshift_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator>>=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator==(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_not_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator!=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_less_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator<=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_greater_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator>=(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_compare_three_way_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator<=>(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_and_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator&&(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_or_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator||(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_incr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    MRBINDC_TRY(
    return operator++(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_post_incr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    MRBINDC_TRY(
    return operator++(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        0
    );
    ) // MRBINDC_TRY
}

int MR_C_decr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    MRBINDC_TRY(
    return operator--(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_post_decr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    MRBINDC_TRY(
    return operator--(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        0
    );
    ) // MRBINDC_TRY
}

int MR_C_comma_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator,(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

int MR_C_arrow_star_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    return operator->*(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2))
    );
    ) // MRBINDC_TRY
}

MR_OverloadedOps_C *MR_OverloadedOps_C_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_C *)new MR::OverloadedOps::C(MR::OverloadedOps::C());
    ) // MRBINDC_TRY
}

MR_OverloadedOps_C *MR_OverloadedOps_C_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_C *)(new MR::OverloadedOps::C[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_OverloadedOps_C *MR_OverloadedOps_C_OffsetPtr(const MR_OverloadedOps_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OverloadedOps_C *)(((const MR::OverloadedOps::C *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_C *MR_OverloadedOps_C_OffsetMutablePtr(MR_OverloadedOps_C *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_C *)(((MR::OverloadedOps::C *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_C *MR_OverloadedOps_C_ConstructFromAnother(const MR_OverloadedOps_C *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_C *)new MR::OverloadedOps::C(MR::OverloadedOps::C(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::C(*(MR::OverloadedOps::C *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_C_Destroy(const MR_OverloadedOps_C *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OverloadedOps::C *)_this);
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_C_DestroyArray(const MR_OverloadedOps_C *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OverloadedOps::C *)_this);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_C *MR_OverloadedOps_C_AssignFromAnother(MR_OverloadedOps_C *_this, const MR_OverloadedOps_C *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_C *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::C *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::C(*(MR::OverloadedOps::C *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_C_add_MR_OverloadedOps_C(const MR_OverloadedOps_C *_1, const MR_OverloadedOps_C *_2)
{
    MRBINDC_TRY(
    operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::C *)(_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), MR::OverloadedOps::C(*(MR::OverloadedOps::C *)_2))
    );
    ) // MRBINDC_TRY
}

void MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(const MR_OverloadedOps_C *_1, const MR_OverloadedOps_B *_2)
{
    MRBINDC_TRY(
    operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::C *)(_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), *(const MR::OverloadedOps::B *)(_2))
    );
    ) // MRBINDC_TRY
}

MR_OverloadedOps_D *MR_OverloadedOps_D_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_D *)new MR::OverloadedOps::D(MR::OverloadedOps::D());
    ) // MRBINDC_TRY
}

MR_OverloadedOps_D *MR_OverloadedOps_D_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_D *)(new MR::OverloadedOps::D[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_OverloadedOps_D *MR_OverloadedOps_D_OffsetPtr(const MR_OverloadedOps_D *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OverloadedOps_D *)(((const MR::OverloadedOps::D *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_D *MR_OverloadedOps_D_OffsetMutablePtr(MR_OverloadedOps_D *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_D *)(((MR::OverloadedOps::D *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_D *MR_OverloadedOps_D_ConstructFromAnother(const MR_OverloadedOps_D *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_D *)new MR::OverloadedOps::D(MR::OverloadedOps::D(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::D(*(MR::OverloadedOps::D *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_D_Destroy(const MR_OverloadedOps_D *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OverloadedOps::D *)_this);
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_D_DestroyArray(const MR_OverloadedOps_D *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OverloadedOps::D *)_this);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_D *MR_OverloadedOps_D_AssignFromAnother(MR_OverloadedOps_D *_this, const MR_OverloadedOps_D *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_D *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::D *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::D(*(MR::OverloadedOps::D *)_other))
    ));
    ) // MRBINDC_TRY
}

int MR_C_deref_MR_OverloadedOps_D_ref(MR_OverloadedOps_D *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::D *)(_this)).operator*();
    ) // MRBINDC_TRY
}

int MR_C_deref_const_MR_OverloadedOps_D_ref(const MR_OverloadedOps_D *_this)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::D *)(_this)).operator*();
    ) // MRBINDC_TRY
}

int MR_C_pos_MR_OverloadedOps_D_ref(MR_OverloadedOps_D *_1)
{
    MRBINDC_TRY(
    return operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(MR::OverloadedOps::D *)(_1))
    );
    ) // MRBINDC_TRY
}

int MR_C_pos_const_MR_OverloadedOps_D_ref(const MR_OverloadedOps_D *_1)
{
    MRBINDC_TRY(
    return operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::D *)(_1))
    );
    ) // MRBINDC_TRY
}

const int *MR_OverloadedOps_E_Get_x(const MR_OverloadedOps_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::E *)(_this)).x);
}

void MR_OverloadedOps_E_Set_x(MR_OverloadedOps_E *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::E *)(_this)).x = value;
}

int *MR_OverloadedOps_E_GetMutable_x(MR_OverloadedOps_E *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::E *)(_this)).x);
}

MR_OverloadedOps_E *MR_OverloadedOps_E_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_E *)new MR::OverloadedOps::E(MR::OverloadedOps::E());
    ) // MRBINDC_TRY
}

MR_OverloadedOps_E *MR_OverloadedOps_E_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_E *)(new MR::OverloadedOps::E[num_elems]{});
    ) // MRBINDC_TRY
}

MR_OverloadedOps_E *MR_OverloadedOps_E_ConstructFrom(int x)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_E *)new MR::OverloadedOps::E(MR::OverloadedOps::E{
        x
    });
    ) // MRBINDC_TRY
}

const MR_OverloadedOps_E *MR_OverloadedOps_E_OffsetPtr(const MR_OverloadedOps_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OverloadedOps_E *)(((const MR::OverloadedOps::E *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_E *MR_OverloadedOps_E_OffsetMutablePtr(MR_OverloadedOps_E *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_E *)(((MR::OverloadedOps::E *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_E *MR_OverloadedOps_E_ConstructFromAnother(const MR_OverloadedOps_E *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_E *)new MR::OverloadedOps::E(MR::OverloadedOps::E(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::E(*(MR::OverloadedOps::E *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_E_Destroy(const MR_OverloadedOps_E *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OverloadedOps::E *)_this);
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_E_DestroyArray(const MR_OverloadedOps_E *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OverloadedOps::E *)_this);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_E *MR_OverloadedOps_E_AssignFromAnother(MR_OverloadedOps_E *_this, const MR_OverloadedOps_E *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_E *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::E *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::E(*(MR::OverloadedOps::E *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_OverloadedOps_E(const MR_OverloadedOps_E *_this, const MR_OverloadedOps_E *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::E *)(_this)).operator==(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::E *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_not_equal_MR_OverloadedOps_E(const MR_OverloadedOps_E *_this, const MR_OverloadedOps_E *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::E *)(_this)) != ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::E *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_OverloadedOps_E(const MR_OverloadedOps_E *_this, const MR_OverloadedOps_E *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::E *)(_this)) < ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::E *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_greater_MR_OverloadedOps_E(const MR_OverloadedOps_E *_this, const MR_OverloadedOps_E *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::E *)(_this)) > ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::E *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_less_equal_MR_OverloadedOps_E(const MR_OverloadedOps_E *_this, const MR_OverloadedOps_E *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::E *)(_this)) <= ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::E *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_greater_equal_MR_OverloadedOps_E(const MR_OverloadedOps_E *_this, const MR_OverloadedOps_E *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::E *)(_this)) >= ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::E *)(_1));
    ) // MRBINDC_TRY
}

const int *MR_OverloadedOps_F_Get_x(const MR_OverloadedOps_F *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::F *)(_this)).x);
}

void MR_OverloadedOps_F_Set_x(MR_OverloadedOps_F *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::F *)(_this)).x = value;
}

int *MR_OverloadedOps_F_GetMutable_x(MR_OverloadedOps_F *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::F *)(_this)).x);
}

MR_OverloadedOps_F *MR_OverloadedOps_F_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_F *)new MR::OverloadedOps::F(MR::OverloadedOps::F());
    ) // MRBINDC_TRY
}

MR_OverloadedOps_F *MR_OverloadedOps_F_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_F *)(new MR::OverloadedOps::F[num_elems]{});
    ) // MRBINDC_TRY
}

MR_OverloadedOps_F *MR_OverloadedOps_F_ConstructFrom(int x)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_F *)new MR::OverloadedOps::F(MR::OverloadedOps::F{
        x
    });
    ) // MRBINDC_TRY
}

const MR_OverloadedOps_F *MR_OverloadedOps_F_OffsetPtr(const MR_OverloadedOps_F *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OverloadedOps_F *)(((const MR::OverloadedOps::F *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_F *MR_OverloadedOps_F_OffsetMutablePtr(MR_OverloadedOps_F *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_F *)(((MR::OverloadedOps::F *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_F *MR_OverloadedOps_F_ConstructFromAnother(const MR_OverloadedOps_F *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_F *)new MR::OverloadedOps::F(MR::OverloadedOps::F(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::F(*(MR::OverloadedOps::F *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_F_Destroy(const MR_OverloadedOps_F *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OverloadedOps::F *)_this);
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_F_DestroyArray(const MR_OverloadedOps_F *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OverloadedOps::F *)_this);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_F *MR_OverloadedOps_F_AssignFromAnother(MR_OverloadedOps_F *_this, const MR_OverloadedOps_F *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_F *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::F *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::F(*(MR::OverloadedOps::F *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_OverloadedOps_F(const MR_OverloadedOps_F *_this, const MR_OverloadedOps_F *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::F *)(_this)).operator==(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::F *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_not_equal_MR_OverloadedOps_F(const MR_OverloadedOps_F *_this, const MR_OverloadedOps_F *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::F *)(_this)) != ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::F *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_greater_MR_OverloadedOps_F(const MR_OverloadedOps_F *_this, const MR_OverloadedOps_F *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::F *)(_this)) > ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::F *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_less_equal_MR_OverloadedOps_F(const MR_OverloadedOps_F *_this, const MR_OverloadedOps_F *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::F *)(_this)) <= ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::F *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_greater_equal_MR_OverloadedOps_F(const MR_OverloadedOps_F *_this, const MR_OverloadedOps_F *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::F *)(_this)) >= ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::F *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_OverloadedOps_F(const MR_OverloadedOps_F *_this, const MR_OverloadedOps_F *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::F *)(_this)).operator<(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::F *)(_1))
    );
    ) // MRBINDC_TRY
}

const int *MR_OverloadedOps_G_Get_x(const MR_OverloadedOps_G *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::G *)(_this)).x);
}

void MR_OverloadedOps_G_Set_x(MR_OverloadedOps_G *_this, int value)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::G *)(_this)).x = value;
}

int *MR_OverloadedOps_G_GetMutable_x(MR_OverloadedOps_G *_this)
{
    return std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::G *)(_this)).x);
}

MR_OverloadedOps_G *MR_OverloadedOps_G_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_G *)new MR::OverloadedOps::G(MR::OverloadedOps::G());
    ) // MRBINDC_TRY
}

MR_OverloadedOps_G *MR_OverloadedOps_G_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_G *)(new MR::OverloadedOps::G[num_elems]{});
    ) // MRBINDC_TRY
}

MR_OverloadedOps_G *MR_OverloadedOps_G_ConstructFrom(int x)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_G *)new MR::OverloadedOps::G(MR::OverloadedOps::G{
        x
    });
    ) // MRBINDC_TRY
}

const MR_OverloadedOps_G *MR_OverloadedOps_G_OffsetPtr(const MR_OverloadedOps_G *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OverloadedOps_G *)(((const MR::OverloadedOps::G *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_G *MR_OverloadedOps_G_OffsetMutablePtr(MR_OverloadedOps_G *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_G *)(((MR::OverloadedOps::G *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_G *MR_OverloadedOps_G_ConstructFromAnother(const MR_OverloadedOps_G *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_G *)new MR::OverloadedOps::G(MR::OverloadedOps::G(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::G(*(MR::OverloadedOps::G *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_G_Destroy(const MR_OverloadedOps_G *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OverloadedOps::G *)_this);
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_G_DestroyArray(const MR_OverloadedOps_G *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OverloadedOps::G *)_this);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_G *MR_OverloadedOps_G_AssignFromAnother(MR_OverloadedOps_G *_this, const MR_OverloadedOps_G *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_G *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::G *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::G(*(MR::OverloadedOps::G *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_less_MR_OverloadedOps_G(const MR_OverloadedOps_G *_this, const MR_OverloadedOps_G *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::G *)(_this)) < ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::G *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_greater_MR_OverloadedOps_G(const MR_OverloadedOps_G *_this, const MR_OverloadedOps_G *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::G *)(_this)) > ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::G *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_less_equal_MR_OverloadedOps_G(const MR_OverloadedOps_G *_this, const MR_OverloadedOps_G *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::G *)(_this)) <= ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::G *)(_1));
    ) // MRBINDC_TRY
}

bool MR_C_greater_equal_MR_OverloadedOps_G(const MR_OverloadedOps_G *_this, const MR_OverloadedOps_G *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::G *)(_this)) >= ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::G *)(_1));
    ) // MRBINDC_TRY
}

MR_OverloadedOps_H *MR_OverloadedOps_H_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_H *)new MR::OverloadedOps::H(MR::OverloadedOps::H());
    ) // MRBINDC_TRY
}

MR_OverloadedOps_H *MR_OverloadedOps_H_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_H *)(new MR::OverloadedOps::H[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_OverloadedOps_H *MR_OverloadedOps_H_OffsetPtr(const MR_OverloadedOps_H *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OverloadedOps_H *)(((const MR::OverloadedOps::H *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_H *MR_OverloadedOps_H_OffsetMutablePtr(MR_OverloadedOps_H *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_H *)(((MR::OverloadedOps::H *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_H *MR_OverloadedOps_H_ConstructFromAnother(const MR_OverloadedOps_H *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_H *)new MR::OverloadedOps::H(MR::OverloadedOps::H(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::H(*(MR::OverloadedOps::H *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_H_Destroy(const MR_OverloadedOps_H *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OverloadedOps::H *)_this);
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_H_DestroyArray(const MR_OverloadedOps_H *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OverloadedOps::H *)_this);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_H *MR_OverloadedOps_H_AssignFromAnother(MR_OverloadedOps_H *_this, const MR_OverloadedOps_H *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_H *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::H *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::H(*(MR::OverloadedOps::H *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_OverloadedOps_H(const MR_OverloadedOps_H *_this, const MR_OverloadedOps_H *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::H *)(_this)).operator==(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::H *)(_1))
    );
    ) // MRBINDC_TRY
}

bool MR_C_not_equal_MR_OverloadedOps_H(const MR_OverloadedOps_H *_this, const MR_OverloadedOps_H *_1)
{
    MRBINDC_TRY(
    return ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(const MR::OverloadedOps::H *)(_this)) != ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::H *)(_1));
    ) // MRBINDC_TRY
}

MR_OverloadedOps_I *MR_OverloadedOps_I_DefaultConstruct(void)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_I *)new MR::OverloadedOps::I(MR::OverloadedOps::I());
    ) // MRBINDC_TRY
}

MR_OverloadedOps_I *MR_OverloadedOps_I_DefaultConstructArray(size_t num_elems)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_I *)(new MR::OverloadedOps::I[num_elems]{});
    ) // MRBINDC_TRY
}

const MR_OverloadedOps_I *MR_OverloadedOps_I_OffsetPtr(const MR_OverloadedOps_I *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (const MR_OverloadedOps_I *)(((const MR::OverloadedOps::I *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_I *MR_OverloadedOps_I_OffsetMutablePtr(MR_OverloadedOps_I *ptr, ptrdiff_t i)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_I *)(((MR::OverloadedOps::I *)ptr) + i);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_I *MR_OverloadedOps_I_ConstructFromAnother(const MR_OverloadedOps_I *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_I *)new MR::OverloadedOps::I(MR::OverloadedOps::I(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::I(*(MR::OverloadedOps::I *)_other))
    ));
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_I_Destroy(const MR_OverloadedOps_I *_this)
{
    MRBINDC_TRY(
    delete ((const MR::OverloadedOps::I *)_this);
    ) // MRBINDC_TRY
}

void MR_OverloadedOps_I_DestroyArray(const MR_OverloadedOps_I *_this)
{
    MRBINDC_TRY(
    delete[] ((const MR::OverloadedOps::I *)_this);
    ) // MRBINDC_TRY
}

MR_OverloadedOps_I *MR_OverloadedOps_I_AssignFromAnother(MR_OverloadedOps_I *_this, const MR_OverloadedOps_I *_other)
{
    MRBINDC_TRY(
    return (MR_OverloadedOps_I *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadedOps::I *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadedOps::I(*(MR::OverloadedOps::I *)_other))
    ));
    ) // MRBINDC_TRY
}

bool MR_C_equal_MR_OverloadedOps_I(const MR_OverloadedOps_I *_1, const MR_OverloadedOps_I *_2)
{
    MRBINDC_TRY(
    return operator==(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::I *)(_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), *(const MR::OverloadedOps::I *)(_2))
    );
    ) // MRBINDC_TRY
}

bool MR_C_not_equal_MR_OverloadedOps_I(const MR_OverloadedOps_I *_1, const MR_OverloadedOps_I *_2)
{
    MRBINDC_TRY(
    return ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadedOps::I *)(_1)) != ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), *(const MR::OverloadedOps::I *)(_2));
    ) // MRBINDC_TRY
}

