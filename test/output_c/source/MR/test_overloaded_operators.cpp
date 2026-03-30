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

