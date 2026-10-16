#define MR_C_BUILD_LIBRARY
#include "MR/test_overload_suffix.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_overload_suffix.h>

#include <cstddef>
#include <memory>
#include <stdexcept>


void MR_OverloadSuffix_foo_a_1_int(int _1)
{
    ::MR::OverloadSuffix::foo_a(
        _1
    );
}

void MR_OverloadSuffix_foo_a_1_float(float _1)
{
    ::MR::OverloadSuffix::foo_a(
        _1
    );
}

void MR_OverloadSuffix_foo_a_2(int _1, int _2)
{
    ::MR::OverloadSuffix::foo_a(
        _1,
        _2
    );
}

void MR_OverloadSuffix_bar_a_int(int _1)
{
    ::MR::OverloadSuffix::bar_a(
        _1
    );
}

void MR_OverloadSuffix_bar_a_float(float _1)
{
    ::MR::OverloadSuffix::bar_a(
        _1
    );
}

void MR_OverloadSuffix_baz_a_1(int _1)
{
    ::MR::OverloadSuffix::baz_a(
        _1
    );
}

void MR_OverloadSuffix_baz_a_2(int _1, int _2)
{
    ::MR::OverloadSuffix::baz_a(
        _1,
        _2
    );
}

MR_OverloadSuffix_A *MR_OverloadSuffix_A_ConstructFromAnother(const MR_OverloadSuffix_A *_other)
{
    return (MR_OverloadSuffix_A *)new MR::OverloadSuffix::A(MR::OverloadSuffix::A(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadSuffix::A(*(MR::OverloadSuffix::A *)_other))
    ));
}

const MR_OverloadSuffix_A *MR_OverloadSuffix_A_OffsetPtr(const MR_OverloadSuffix_A *ptr, ptrdiff_t i)
{
    return (const MR_OverloadSuffix_A *)(((const MR::OverloadSuffix::A *)ptr) + i);
}

MR_OverloadSuffix_A *MR_OverloadSuffix_A_OffsetMutablePtr(MR_OverloadSuffix_A *ptr, ptrdiff_t i)
{
    return (MR_OverloadSuffix_A *)(((MR::OverloadSuffix::A *)ptr) + i);
}

MR_OverloadSuffix_A *MR_OverloadSuffix_A_Construct_1_int(int _1)
{
    return (MR_OverloadSuffix_A *)new MR::OverloadSuffix::A(MR::OverloadSuffix::A(
        _1
    ));
}

MR_OverloadSuffix_A *MR_OverloadSuffix_A_Construct_1_float(float _1)
{
    return (MR_OverloadSuffix_A *)new MR::OverloadSuffix::A(MR::OverloadSuffix::A(
        _1
    ));
}

MR_OverloadSuffix_A *MR_OverloadSuffix_A_Construct_2(int _1, int _2)
{
    return (MR_OverloadSuffix_A *)new MR::OverloadSuffix::A(MR::OverloadSuffix::A(
        _1,
        _2
    ));
}

void MR_OverloadSuffix_A_Destroy(const MR_OverloadSuffix_A *_this)
{
    delete ((const MR::OverloadSuffix::A *)_this);
}

void MR_OverloadSuffix_A_DestroyArray(const MR_OverloadSuffix_A *_this)
{
    delete[] ((const MR::OverloadSuffix::A *)_this);
}

MR_OverloadSuffix_A *MR_OverloadSuffix_A_AssignFromAnother(MR_OverloadSuffix_A *_this, const MR_OverloadSuffix_A *_other)
{
    return (MR_OverloadSuffix_A *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::A *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadSuffix::A(*(MR::OverloadSuffix::A *)_other))
    ));
}

void MR_OverloadSuffix_A_foo_1_int(MR_OverloadSuffix_A *_this, int _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::A *)(_this)).foo(
        _1
    );
}

void MR_OverloadSuffix_A_foo_1_float(MR_OverloadSuffix_A *_this, float _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::A *)(_this)).foo(
        _1
    );
}

void MR_OverloadSuffix_A_foo_2(MR_OverloadSuffix_A *_this, int _1, int _2)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::A *)(_this)).foo(
        _1,
        _2
    );
}

void MR_C_sub_MR_OverloadSuffix_A_int(MR_OverloadSuffix_A *_this, int _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::A *)(_this)).operator-(
        _1
    );
}

void MR_C_sub_MR_OverloadSuffix_A_float(MR_OverloadSuffix_A *_this, float _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::A *)(_this)).operator-(
        _1
    );
}

void MR_OverloadSuffix_A_index_int(MR_OverloadSuffix_A *_this, int _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::A *)(_this)).operator[](
        _1
    );
}

void MR_OverloadSuffix_A_index_float(MR_OverloadSuffix_A *_this, float _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::A *)(_this)).operator[](
        _1
    );
}

void MR_C_pos_MR_OverloadSuffix_A_ref(MR_OverloadSuffix_A *_1)
{
    ::MR::OverloadSuffix::operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(MR::OverloadSuffix::A *)(_1))
    );
}

void MR_C_pos_const_MR_OverloadSuffix_A_ref(const MR_OverloadSuffix_A *_1)
{
    ::MR::OverloadSuffix::operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadSuffix::A *)(_1))
    );
}

void MR_OverloadSuffix_foo_b(int _1)
{
    ::MR::OverloadSuffix::foo_b(
        _1
    );
}

void MR_OverloadSuffix_foo_b_1(float _1)
{
    ::MR::OverloadSuffix::foo_b(
        _1
    );
}

void MR_OverloadSuffix_foo_b_2(int _1, int _2)
{
    ::MR::OverloadSuffix::foo_b(
        _1,
        _2
    );
}

void MR_OverloadSuffix_bar_b(int _1)
{
    ::MR::OverloadSuffix::bar_b(
        _1
    );
}

void MR_OverloadSuffix_bar_b_float(float _1)
{
    ::MR::OverloadSuffix::bar_b(
        _1
    );
}

void MR_OverloadSuffix_baz_b(int _1)
{
    ::MR::OverloadSuffix::baz_b(
        _1
    );
}

void MR_OverloadSuffix_baz_b_int(int _1, int _2)
{
    ::MR::OverloadSuffix::baz_b(
        _1,
        _2
    );
}

MR_OverloadSuffix_B *MR_OverloadSuffix_B_ConstructFromAnother(const MR_OverloadSuffix_B *_other)
{
    return (MR_OverloadSuffix_B *)new MR::OverloadSuffix::B(MR::OverloadSuffix::B(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadSuffix::B(*(MR::OverloadSuffix::B *)_other))
    ));
}

const MR_OverloadSuffix_B *MR_OverloadSuffix_B_OffsetPtr(const MR_OverloadSuffix_B *ptr, ptrdiff_t i)
{
    return (const MR_OverloadSuffix_B *)(((const MR::OverloadSuffix::B *)ptr) + i);
}

MR_OverloadSuffix_B *MR_OverloadSuffix_B_OffsetMutablePtr(MR_OverloadSuffix_B *ptr, ptrdiff_t i)
{
    return (MR_OverloadSuffix_B *)(((MR::OverloadSuffix::B *)ptr) + i);
}

MR_OverloadSuffix_B *MR_OverloadSuffix_B_Construct(int _1)
{
    return (MR_OverloadSuffix_B *)new MR::OverloadSuffix::B(MR::OverloadSuffix::B(
        _1
    ));
}

MR_OverloadSuffix_B *MR_OverloadSuffix_B_Construct_1(float _1)
{
    return (MR_OverloadSuffix_B *)new MR::OverloadSuffix::B(MR::OverloadSuffix::B(
        _1
    ));
}

MR_OverloadSuffix_B *MR_OverloadSuffix_B_Construct_2(int _1, int _2)
{
    return (MR_OverloadSuffix_B *)new MR::OverloadSuffix::B(MR::OverloadSuffix::B(
        _1,
        _2
    ));
}

void MR_OverloadSuffix_B_Destroy(const MR_OverloadSuffix_B *_this)
{
    delete ((const MR::OverloadSuffix::B *)_this);
}

void MR_OverloadSuffix_B_DestroyArray(const MR_OverloadSuffix_B *_this)
{
    delete[] ((const MR::OverloadSuffix::B *)_this);
}

MR_OverloadSuffix_B *MR_OverloadSuffix_B_AssignFromAnother(MR_OverloadSuffix_B *_this, const MR_OverloadSuffix_B *_other)
{
    return (MR_OverloadSuffix_B *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::B *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadSuffix::B(*(MR::OverloadSuffix::B *)_other))
    ));
}

void MR_OverloadSuffix_B_foo(MR_OverloadSuffix_B *_this, int _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::B *)(_this)).foo(
        _1
    );
}

void MR_OverloadSuffix_B_foo_1(MR_OverloadSuffix_B *_this, float _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::B *)(_this)).foo(
        _1
    );
}

void MR_OverloadSuffix_B_foo_2(MR_OverloadSuffix_B *_this, int _1, int _2)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::B *)(_this)).foo(
        _1,
        _2
    );
}

void MR_C_sub_MR_OverloadSuffix_B_int(MR_OverloadSuffix_B *_this, int _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::B *)(_this)).operator-(
        _1
    );
}

void MR_C_sub_MR_OverloadSuffix_B_float(MR_OverloadSuffix_B *_this, float _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::B *)(_this)).operator-(
        _1
    );
}

void MR_OverloadSuffix_B_index(MR_OverloadSuffix_B *_this, int _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::B *)(_this)).operator[](
        _1
    );
}

void MR_OverloadSuffix_B_index_float(MR_OverloadSuffix_B *_this, float _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::B *)(_this)).operator[](
        _1
    );
}

void MR_C_pos_MR_OverloadSuffix_B_ref(MR_OverloadSuffix_B *_1)
{
    ::MR::OverloadSuffix::operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(MR::OverloadSuffix::B *)(_1))
    );
}

void MR_C_pos_const_MR_OverloadSuffix_B_ref(const MR_OverloadSuffix_B *_1)
{
    ::MR::OverloadSuffix::operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadSuffix::B *)(_1))
    );
}

void MR_OverloadSuffix_foo_c_blah(int _1)
{
    ::MR::OverloadSuffix::foo_c(
        _1
    );
}

void MR_OverloadSuffix_foo_c_1(float _1)
{
    ::MR::OverloadSuffix::foo_c(
        _1
    );
}

void MR_OverloadSuffix_foo_c_2(int _1, int _2)
{
    ::MR::OverloadSuffix::foo_c(
        _1,
        _2
    );
}

void MR_OverloadSuffix_bar_c_blah(int _1)
{
    ::MR::OverloadSuffix::bar_c(
        _1
    );
}

void MR_OverloadSuffix_bar_c(float _1)
{
    ::MR::OverloadSuffix::bar_c(
        _1
    );
}

void MR_OverloadSuffix_baz_c_blah(int _1)
{
    ::MR::OverloadSuffix::baz_c(
        _1
    );
}

void MR_OverloadSuffix_baz_c(int _1, int _2)
{
    ::MR::OverloadSuffix::baz_c(
        _1,
        _2
    );
}

MR_OverloadSuffix_C *MR_OverloadSuffix_C_ConstructFromAnother(const MR_OverloadSuffix_C *_other)
{
    return (MR_OverloadSuffix_C *)new MR::OverloadSuffix::C(MR::OverloadSuffix::C(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadSuffix::C(*(MR::OverloadSuffix::C *)_other))
    ));
}

const MR_OverloadSuffix_C *MR_OverloadSuffix_C_OffsetPtr(const MR_OverloadSuffix_C *ptr, ptrdiff_t i)
{
    return (const MR_OverloadSuffix_C *)(((const MR::OverloadSuffix::C *)ptr) + i);
}

MR_OverloadSuffix_C *MR_OverloadSuffix_C_OffsetMutablePtr(MR_OverloadSuffix_C *ptr, ptrdiff_t i)
{
    return (MR_OverloadSuffix_C *)(((MR::OverloadSuffix::C *)ptr) + i);
}

MR_OverloadSuffix_C *MR_OverloadSuffix_C_Construct_blah(int _1)
{
    return (MR_OverloadSuffix_C *)new MR::OverloadSuffix::C(MR::OverloadSuffix::C(
        _1
    ));
}

MR_OverloadSuffix_C *MR_OverloadSuffix_C_Construct_1(float _1)
{
    return (MR_OverloadSuffix_C *)new MR::OverloadSuffix::C(MR::OverloadSuffix::C(
        _1
    ));
}

MR_OverloadSuffix_C *MR_OverloadSuffix_C_Construct_2(int _1, int _2)
{
    return (MR_OverloadSuffix_C *)new MR::OverloadSuffix::C(MR::OverloadSuffix::C(
        _1,
        _2
    ));
}

void MR_OverloadSuffix_C_Destroy(const MR_OverloadSuffix_C *_this)
{
    delete ((const MR::OverloadSuffix::C *)_this);
}

void MR_OverloadSuffix_C_DestroyArray(const MR_OverloadSuffix_C *_this)
{
    delete[] ((const MR::OverloadSuffix::C *)_this);
}

MR_OverloadSuffix_C *MR_OverloadSuffix_C_AssignFromAnother(MR_OverloadSuffix_C *_this, const MR_OverloadSuffix_C *_other)
{
    return (MR_OverloadSuffix_C *)std::addressof(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::C *)(_this)).operator=(
        ((_other ? void() : MRBINDC_THROW("Parameter `_other` can not be null.", void)), MR::OverloadSuffix::C(*(MR::OverloadSuffix::C *)_other))
    ));
}

void MR_OverloadSuffix_C_foo_blah(MR_OverloadSuffix_C *_this, int _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::C *)(_this)).foo(
        _1
    );
}

void MR_OverloadSuffix_C_foo_1(MR_OverloadSuffix_C *_this, float _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::C *)(_this)).foo(
        _1
    );
}

void MR_OverloadSuffix_C_foo_2(MR_OverloadSuffix_C *_this, int _1, int _2)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::C *)(_this)).foo(
        _1,
        _2
    );
}

void MR_C_sub_MR_OverloadSuffix_C_int(MR_OverloadSuffix_C *_this, int _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::C *)(_this)).operator-(
        _1
    );
}

void MR_C_sub_MR_OverloadSuffix_C_float(MR_OverloadSuffix_C *_this, float _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::C *)(_this)).operator-(
        _1
    );
}

void MR_OverloadSuffix_C_index_blah(MR_OverloadSuffix_C *_this, int _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::C *)(_this)).operator[](
        _1
    );
}

void MR_OverloadSuffix_C_index(MR_OverloadSuffix_C *_this, float _1)
{
    ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::OverloadSuffix::C *)(_this)).operator[](
        _1
    );
}

void MR_C_pos_MR_OverloadSuffix_C_ref(MR_OverloadSuffix_C *_1)
{
    ::MR::OverloadSuffix::operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(MR::OverloadSuffix::C *)(_1))
    );
}

void MR_C_pos_const_MR_OverloadSuffix_C_ref(const MR_OverloadSuffix_C *_1)
{
    ::MR::OverloadSuffix::operator+(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *(const MR::OverloadSuffix::C *)(_1))
    );
}

