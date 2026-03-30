#define MR_C_BUILD_LIBRARY
#include "MR/test_overloads.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_overloads.h>

#include <stdexcept>
#include <utility>


void MR_Overloads_a_1(int _1)
{
    MRBINDC_TRY(
    ::MR::Overloads::a(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_a_2(int _1, int _2)
{
    MRBINDC_TRY(
    ::MR::Overloads::a(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_b_int(void)
{
    MRBINDC_TRY(
    ::MR::Overloads::b<int>();
    ) // MRBINDC_TRY
}

void MR_Overloads_b_float(void)
{
    MRBINDC_TRY(
    ::MR::Overloads::b<float>();
    ) // MRBINDC_TRY
}

void MR_Overloads_c_int(int _1)
{
    MRBINDC_TRY(
    ::MR::Overloads::c(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_c_float(float _1)
{
    MRBINDC_TRY(
    ::MR::Overloads::c(
        _1
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_d_int(char _1, int _2, char _3)
{
    MRBINDC_TRY(
    ::MR::Overloads::d(
        _1,
        _2,
        _3
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_d_float(char _1, float _2, char _3)
{
    MRBINDC_TRY(
    ::MR::Overloads::d(
        _1,
        _2,
        _3
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_e_const_int_ref(const int *_1, int *_2)
{
    MRBINDC_TRY(
    ::MR::Overloads::e(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *_1),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), std::move(*_2))
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_e_int_rvalue_ref_int(int *_1, int *_2)
{
    MRBINDC_TRY(
    ::MR::Overloads::e(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::move(*_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), std::move(*_2))
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_e_int_rvalue_ref_float(int *_1, float *_2)
{
    MRBINDC_TRY(
    ::MR::Overloads::e(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::move(*_1)),
        ((_2 ? void() : MRBINDC_THROW("Parameter `_2` can not be null.", void)), std::move(*_2))
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_f_float(float _1, int _2)
{
    MRBINDC_TRY(
    ::MR::Overloads::f(
        _1,
        _2
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_f_int_rvalue_ref(int *_1, float _2)
{
    MRBINDC_TRY(
    ::MR::Overloads::f(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), std::move(*_1)),
        _2
    );
    ) // MRBINDC_TRY
}

void MR_Overloads_f_const_int_ref(const int *_1, float _2)
{
    MRBINDC_TRY(
    ::MR::Overloads::f(
        ((_1 ? void() : MRBINDC_THROW("Parameter `_1` can not be null.", void)), *_1),
        _2
    );
    ) // MRBINDC_TRY
}

