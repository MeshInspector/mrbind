#define MR_C_BUILD_LIBRARY
#include "MR/test_overloads.h"

#include <input/MR/test_overloads.h>

#include <cstdint>
#include <stdexcept>
#include <utility>


void MR_Overloads_a_1(int32_t _1)
{
    ::MR::Overloads::a(
        _1
    );
}

void MR_Overloads_a_2(int32_t _1, int32_t _2)
{
    ::MR::Overloads::a(
        _1,
        _2
    );
}

void MR_Overloads_b_int32_t(void)
{
    ::MR::Overloads::b<int32_t>();
}

void MR_Overloads_b_float(void)
{
    ::MR::Overloads::b<float>();
}

void MR_Overloads_c_int32_t(int32_t _1)
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

void MR_Overloads_d_int32_t(char _1, int32_t _2, char _3)
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

void MR_Overloads_e_const_int32_t_ref(const int32_t *_1, int32_t *_2)
{
    ::MR::Overloads::e(
        (_1 ? *_1 : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? std::move(*_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

void MR_Overloads_e_int32_t_rvalue_ref_int32_t(int32_t *_1, int32_t *_2)
{
    ::MR::Overloads::e(
        (_1 ? std::move(*_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? std::move(*_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

void MR_Overloads_e_int32_t_rvalue_ref_float(int32_t *_1, float *_2)
{
    ::MR::Overloads::e(
        (_1 ? std::move(*_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        (_2 ? std::move(*_2) : throw std::runtime_error("Parameter `_2` can not be null."))
    );
}

void MR_Overloads_f_float(float _1, int32_t _2)
{
    ::MR::Overloads::f(
        _1,
        _2
    );
}

void MR_Overloads_f_int32_t_rvalue_ref(int32_t *_1, float _2)
{
    ::MR::Overloads::f(
        (_1 ? std::move(*_1) : throw std::runtime_error("Parameter `_1` can not be null.")),
        _2
    );
}

void MR_Overloads_f_const_int32_t_ref(const int32_t *_1, float _2)
{
    ::MR::Overloads::f(
        (_1 ? *_1 : throw std::runtime_error("Parameter `_1` can not be null.")),
        _2
    );
}

