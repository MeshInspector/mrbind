#define MR_C_BUILD_LIBRARY
#define MR_C_DISABLE_CONVENIENCE_INCLUDES
#include "MR/test_declaration_order.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_declaration_order.h>

#include <stdexcept>


MR_DeclOrder_A_B MR_DeclOrder_A_c(MR_DeclOrder_A *_this)
{
    return MRBINDC_BIT_CAST((MR_DeclOrder_A_B), ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::DeclOrder::A *)(_this)).c());
}

MR_DeclOrder_A_E MR_DeclOrder_A_d(MR_DeclOrder_A *_this)
{
    return (MR_DeclOrder_A_E)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::DeclOrder::A *)(_this)).d());
}

MR_DeclOrder_A MR_DeclOrder_A_B_a(MR_DeclOrder_A_B *_this)
{
    return MRBINDC_BIT_CAST((MR_DeclOrder_A), ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::DeclOrder::A::B *)(_this)).a());
}

MR_DeclOrder_A_E MR_DeclOrder_A_B_b(MR_DeclOrder_A_B *_this)
{
    return (MR_DeclOrder_A_E)(((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::DeclOrder::A::B *)(_this)).b());
}

MR_DeclOrder_C_true MR_DeclOrder_C_false_blah(MR_DeclOrder_C_false *_this)
{
    return MRBINDC_BIT_CAST((MR_DeclOrder_C_true), ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::DeclOrder::C<false> *)(_this)).blah());
}

MR_DeclOrder_C_false MR_DeclOrder_C_true_blah(MR_DeclOrder_C_true *_this)
{
    return MRBINDC_BIT_CAST((MR_DeclOrder_C_false), ((_this ? void() : throw std::runtime_error("Parameter `_this` can not be null.")), *(MR::DeclOrder::C<true> *)(_this)).blah());
}

