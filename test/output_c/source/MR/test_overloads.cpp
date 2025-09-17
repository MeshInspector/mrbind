#define MR_C_BUILD_LIBRARY
#include "MR/test_overloads.h"

#include <input/MR/test_overloads.h>

#include <stdexcept>
#include <utility>


void MR_Overloads_a_1(int _1)
{
    ::MR::Overloads::a(
        _1
    );
}

void MR_Overloads_a_2(int _1, int _2)
{
    ::MR::Overloads::a(
        _1,
        _2
    );
}

void MR_Overloads_b_int(void)
{
    ::MR::Overloads::b<int>();
}

void MR_Overloads_b_float(void)
{
    ::MR::Overloads::b<float>();
}

void MR_Overloads_c_int(int _1)
{
    ::MR::Overloads::c(
        _1
    );
}

void MR_Overloads_c_float(float _1)
{
    ::MR::Overloads::c(
        _1
    );
}

void MR_Overloads_d_int(char _1, int _2, char _3)
{
    ::MR::Overloads::d(
        _1,
        _2,
        _3
    );
}

void MR_Overloads_d_float(char _1, float _2, char _3)
{
    ::MR::Overloads::d(
        _1,
        _2,
        _3
    );
}

void MR_Overloads_e_const_int_ref(const int *_1, int *_2)
{
    ::MR::Overloads::e(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *_1),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), std::move(*_2))
    );
}

void MR_Overloads_e_int_rvalue_ref_int(int *_1, int *_2)
{
    ::MR::Overloads::e(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), std::move(*_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), std::move(*_2))
    );
}

void MR_Overloads_e_int_rvalue_ref_float(int *_1, float *_2)
{
    ::MR::Overloads::e(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), std::move(*_1)),
        ((_2 ? void() : throw std::runtime_error("Parameter `_2` can not be null.")), std::move(*_2))
    );
}

void MR_Overloads_f_float(float _1, int _2)
{
    ::MR::Overloads::f(
        _1,
        _2
    );
}

void MR_Overloads_f_int_rvalue_ref(int *_1, float _2)
{
    ::MR::Overloads::f(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), std::move(*_1)),
        _2
    );
}

void MR_Overloads_f_const_int_ref(const int *_1, float _2)
{
    ::MR::Overloads::f(
        ((_1 ? void() : throw std::runtime_error("Parameter `_1` can not be null.")), *_1),
        _2
    );
}

