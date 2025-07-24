#define MR_C_BUILD_LIBRARY
#include "MR/test_overloaded_operators.h"

#include <input/MR/test_overloaded_operators.h>

#include <cstddef>
#include <stdexcept>


void MR_OverloadedOps_A_Destroy(const MR_OverloadedOps_A *_this)
{
    delete ((const MR::OverloadedOps::A *)_this);
}

void MR_OverloadedOps_A_DestroyArray(const MR_OverloadedOps_A *_this)
{
    delete[] ((const MR::OverloadedOps::A *)_this);
}

int MR_OverloadedOps_A_AssignFromAnother(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_other)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    );
}

int MR_C_pos_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator+();
}

int MR_C_add_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator+(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_neg_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator-();
}

int MR_C_sub_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator-(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_deref_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator*();
}

int MR_C_mul_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator*(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_div_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator/(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_mod_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator%(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_xor_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator^(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_bitand_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator&(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_bitor_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator|(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_compl_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator~();
}

int MR_C_not_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator!();
}

int MR_C_less_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator<(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_greater_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator>(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_add_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator+=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_sub_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator-=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_mul_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator*=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_div_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator/=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_mod_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator%=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_xor_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator^=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_bitand_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator&=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_bitor_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator|=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_lshift_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator<<(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_rshift_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator>>(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_lshift_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator<<=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_rshift_assign(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator>>=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator==(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_not_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator!=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_less_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator<=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_greater_equal_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator>=(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_compare_three_way_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator<=>(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_and_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator&&(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_or_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator||(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_incr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator++();
}

int MR_C_post_incr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator++(
        0
    );
}

int MR_C_decr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator--();
}

int MR_C_post_decr_MR_OverloadedOps_A(MR_OverloadedOps_A *_this)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator--(
        0
    );
}

int MR_C_comma_MR_OverloadedOps_A(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator,(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_arrow_star(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator->*(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_arrow(MR_OverloadedOps_A *_this)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator->();
}

int MR_OverloadedOps_A_call(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator()(
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_OverloadedOps_A_index(MR_OverloadedOps_A *_this, const MR_OverloadedOps_A *_1)
{
    return (_this ? *(MR::OverloadedOps::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator[](
        (_1 ? MR::OverloadedOps::A(*(MR::OverloadedOps::A *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

const MR_OverloadedOps_A *MR_OverloadedOps_A_OffsetPtr(const MR_OverloadedOps_A *ptr, ptrdiff_t i)
{
    return (const MR_OverloadedOps_A *)(((const MR::OverloadedOps::A *)ptr) + i);
}

MR_OverloadedOps_A *MR_OverloadedOps_A_OffsetMutablePtr(MR_OverloadedOps_A *ptr, ptrdiff_t i)
{
    return (MR_OverloadedOps_A *)(((MR::OverloadedOps::A *)ptr) + i);
}

MR_OverloadedOps_B *MR_OverloadedOps_B_DefaultConstruct(void)
{
    return (MR_OverloadedOps_B *)new MR::OverloadedOps::B(MR::OverloadedOps::B());
}

MR_OverloadedOps_B *MR_OverloadedOps_B_DefaultConstructArray(size_t num_elems)
{
    return (MR_OverloadedOps_B *)(new MR::OverloadedOps::B[num_elems]{});
}

const MR_OverloadedOps_B *MR_OverloadedOps_B_OffsetPtr(const MR_OverloadedOps_B *ptr, ptrdiff_t i)
{
    return (const MR_OverloadedOps_B *)(((const MR::OverloadedOps::B *)ptr) + i);
}

MR_OverloadedOps_B *MR_OverloadedOps_B_OffsetMutablePtr(MR_OverloadedOps_B *ptr, ptrdiff_t i)
{
    return (MR_OverloadedOps_B *)(((MR::OverloadedOps::B *)ptr) + i);
}

MR_OverloadedOps_B *MR_OverloadedOps_B_ConstructFromAnother(const MR_OverloadedOps_B *_other)
{
    return (MR_OverloadedOps_B *)new MR::OverloadedOps::B(MR::OverloadedOps::B(
        (_other ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_OverloadedOps_B_Destroy(const MR_OverloadedOps_B *_this)
{
    delete ((const MR::OverloadedOps::B *)_this);
}

void MR_OverloadedOps_B_DestroyArray(const MR_OverloadedOps_B *_this)
{
    delete[] ((const MR::OverloadedOps::B *)_this);
}

MR_OverloadedOps_B *MR_OverloadedOps_B_AssignFromAnother(MR_OverloadedOps_B *_this, const MR_OverloadedOps_B *_other)
{
    return (MR_OverloadedOps_B *)&((_this ? *(MR::OverloadedOps::B *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

int MR_C_pos_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    return operator+(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_add_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator+(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_neg_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    return operator-(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_sub_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator-(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_deref_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    return operator*(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_mul_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator*(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_div_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator/(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_mod_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator%(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_xor_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator^(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_bitand_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator&(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_bitor_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator|(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_compl_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    return operator~(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_not_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    return operator!(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_less_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator<(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_greater_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator>(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_add_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator+=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_sub_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator-=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_mul_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator*=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_div_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator/=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_mod_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator%=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_xor_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator^=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_bitand_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator&=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_bitor_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator|=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_lshift_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator<<(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_rshift_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator>>(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_lshift_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator<<=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_rshift_assign_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator>>=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator==(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_not_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator!=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_less_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator<=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_greater_equal_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator>=(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_compare_three_way_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator<=>(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_and_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator&&(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_or_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator||(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_incr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    return operator++(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_post_incr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    return operator++(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        0
    );
}

int MR_C_decr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    return operator--(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_post_decr_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1)
{
    return operator--(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        0
    );
}

int MR_C_comma_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator,(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

int MR_C_arrow_star_MR_OverloadedOps_B(const MR_OverloadedOps_B *_1, const MR_OverloadedOps_B *_2)
{
    return operator->*(
        (_1 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::B(*(MR::OverloadedOps::B *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

MR_OverloadedOps_C *MR_OverloadedOps_C_DefaultConstruct(void)
{
    return (MR_OverloadedOps_C *)new MR::OverloadedOps::C(MR::OverloadedOps::C());
}

MR_OverloadedOps_C *MR_OverloadedOps_C_DefaultConstructArray(size_t num_elems)
{
    return (MR_OverloadedOps_C *)(new MR::OverloadedOps::C[num_elems]{});
}

const MR_OverloadedOps_C *MR_OverloadedOps_C_OffsetPtr(const MR_OverloadedOps_C *ptr, ptrdiff_t i)
{
    return (const MR_OverloadedOps_C *)(((const MR::OverloadedOps::C *)ptr) + i);
}

MR_OverloadedOps_C *MR_OverloadedOps_C_OffsetMutablePtr(MR_OverloadedOps_C *ptr, ptrdiff_t i)
{
    return (MR_OverloadedOps_C *)(((MR::OverloadedOps::C *)ptr) + i);
}

MR_OverloadedOps_C *MR_OverloadedOps_C_ConstructFromAnother(const MR_OverloadedOps_C *_other)
{
    return (MR_OverloadedOps_C *)new MR::OverloadedOps::C(MR::OverloadedOps::C(
        (_other ? MR::OverloadedOps::C(*(MR::OverloadedOps::C *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_OverloadedOps_C_Destroy(const MR_OverloadedOps_C *_this)
{
    delete ((const MR::OverloadedOps::C *)_this);
}

void MR_OverloadedOps_C_DestroyArray(const MR_OverloadedOps_C *_this)
{
    delete[] ((const MR::OverloadedOps::C *)_this);
}

MR_OverloadedOps_C *MR_OverloadedOps_C_AssignFromAnother(MR_OverloadedOps_C *_this, const MR_OverloadedOps_C *_other)
{
    return (MR_OverloadedOps_C *)&((_this ? *(MR::OverloadedOps::C *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::OverloadedOps::C(*(MR::OverloadedOps::C *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_C_add_MR_OverloadedOps_C(const MR_OverloadedOps_C *_1, const MR_OverloadedOps_C *_2)
{
    operator+(
        (_1 ? *(const MR::OverloadedOps::C *)(_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? MR::OverloadedOps::C(*(MR::OverloadedOps::C *)_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

void MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(const MR_OverloadedOps_C *_1, const MR_OverloadedOps_B *_2)
{
    operator+(
        (_1 ? *(const MR::OverloadedOps::C *)(_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? *(const MR::OverloadedOps::B *)(_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

MR_OverloadedOps_D *MR_OverloadedOps_D_DefaultConstruct(void)
{
    return (MR_OverloadedOps_D *)new MR::OverloadedOps::D(MR::OverloadedOps::D());
}

MR_OverloadedOps_D *MR_OverloadedOps_D_DefaultConstructArray(size_t num_elems)
{
    return (MR_OverloadedOps_D *)(new MR::OverloadedOps::D[num_elems]{});
}

const MR_OverloadedOps_D *MR_OverloadedOps_D_OffsetPtr(const MR_OverloadedOps_D *ptr, ptrdiff_t i)
{
    return (const MR_OverloadedOps_D *)(((const MR::OverloadedOps::D *)ptr) + i);
}

MR_OverloadedOps_D *MR_OverloadedOps_D_OffsetMutablePtr(MR_OverloadedOps_D *ptr, ptrdiff_t i)
{
    return (MR_OverloadedOps_D *)(((MR::OverloadedOps::D *)ptr) + i);
}

MR_OverloadedOps_D *MR_OverloadedOps_D_ConstructFromAnother(const MR_OverloadedOps_D *_other)
{
    return (MR_OverloadedOps_D *)new MR::OverloadedOps::D(MR::OverloadedOps::D(
        (_other ? MR::OverloadedOps::D(*(MR::OverloadedOps::D *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

void MR_OverloadedOps_D_Destroy(const MR_OverloadedOps_D *_this)
{
    delete ((const MR::OverloadedOps::D *)_this);
}

void MR_OverloadedOps_D_DestroyArray(const MR_OverloadedOps_D *_this)
{
    delete[] ((const MR::OverloadedOps::D *)_this);
}

MR_OverloadedOps_D *MR_OverloadedOps_D_AssignFromAnother(MR_OverloadedOps_D *_this, const MR_OverloadedOps_D *_other)
{
    return (MR_OverloadedOps_D *)&((_this ? *(MR::OverloadedOps::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator=(
        (_other ? MR::OverloadedOps::D(*(MR::OverloadedOps::D *)_other) : throw std::runtime_error("Parameter `_other` can not be null."))
    ));
}

int MR_C_deref_MR_OverloadedOps_D_ref(MR_OverloadedOps_D *_this)
{
    return (_this ? *(MR::OverloadedOps::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator*();
}

int MR_C_deref_const_MR_OverloadedOps_D_ref(const MR_OverloadedOps_D *_this)
{
    return (_this ? *(const MR::OverloadedOps::D *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).operator*();
}

int MR_C_pos_MR_OverloadedOps_D_ref(MR_OverloadedOps_D *_1)
{
    return operator+(
        (_1 ? *(MR::OverloadedOps::D *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

int MR_C_pos_const_MR_OverloadedOps_D_ref(const MR_OverloadedOps_D *_1)
{
    return operator+(
        (_1 ? *(const MR::OverloadedOps::D *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

