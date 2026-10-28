#define MR_C_BUILD_LIBRARY
#include "MR/test_declaration_order.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_declaration_order.h>

#include <stdexcept>


MR_DeclOrder_A_B MR_DeclOrder_A_c(MR_DeclOrder_A *_this)
{
    MRBINDC_TRY(
    return MRBINDC_BIT_CAST((MR_DeclOrder_A_B), ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::DeclOrder::A *)(_this)).c());
    ) // MRBINDC_TRY
}

MR_DeclOrder_A_E MR_DeclOrder_A_d(MR_DeclOrder_A *_this)
{
    MRBINDC_TRY(
    return (MR_DeclOrder_A_E)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::DeclOrder::A *)(_this)).d());
    ) // MRBINDC_TRY
}

MR_DeclOrder_A MR_DeclOrder_A_B_a(MR_DeclOrder_A_B *_this)
{
    MRBINDC_TRY(
    return MRBINDC_BIT_CAST((MR_DeclOrder_A), ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::DeclOrder::A::B *)(_this)).a());
    ) // MRBINDC_TRY
}

MR_DeclOrder_A_E MR_DeclOrder_A_B_b(MR_DeclOrder_A_B *_this)
{
    MRBINDC_TRY(
    return (MR_DeclOrder_A_E)(((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::DeclOrder::A::B *)(_this)).b());
    ) // MRBINDC_TRY
}

MR_DeclOrder_C_true MR_DeclOrder_C_false_blah(MR_DeclOrder_C_false *_this)
{
    MRBINDC_TRY(
    return MRBINDC_BIT_CAST((MR_DeclOrder_C_true), ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::DeclOrder::C<false> *)(_this)).blah());
    ) // MRBINDC_TRY
}

MR_DeclOrder_C_false MR_DeclOrder_C_true_blah(MR_DeclOrder_C_true *_this)
{
    MRBINDC_TRY(
    return MRBINDC_BIT_CAST((MR_DeclOrder_C_false), ((_this ? void() : MRBINDC_THROW("Parameter `_this` can not be null.", void)), *(MR::DeclOrder::C<true> *)(_this)).blah());
    ) // MRBINDC_TRY
}

