#include "MR/test_declaration_order.h"

#include <input/MR/test_declaration_order.h>

#include <bit>
#include <stdexcept>


MR_DeclOrder_A_B MR_DeclOrder_A_c(MR_DeclOrder_A *_this)
{
    return std::bit_cast<MR_DeclOrder_A_B>((_this ? *(MR::DeclOrder::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).c());
}

MR_DeclOrder_A_E MR_DeclOrder_A_d(MR_DeclOrder_A *_this)
{
    return (MR_DeclOrder_A_E)((_this ? *(MR::DeclOrder::A *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).d());
}

MR_DeclOrder_A MR_DeclOrder_A_B_a(MR_DeclOrder_A_B *_this)
{
    return std::bit_cast<MR_DeclOrder_A>((_this ? *(MR::DeclOrder::A::B *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).a());
}

MR_DeclOrder_A_E MR_DeclOrder_A_B_b(MR_DeclOrder_A_B *_this)
{
    return (MR_DeclOrder_A_E)((_this ? *(MR::DeclOrder::A::B *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).b());
}

MR_DeclOrder_C_true MR_DeclOrder_C_false_blah(MR_DeclOrder_C_false *_this)
{
    return std::bit_cast<MR_DeclOrder_C_true>((_this ? *(MR::DeclOrder::C<false> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).blah());
}

MR_DeclOrder_C_false MR_DeclOrder_C_true_blah(MR_DeclOrder_C_true *_this)
{
    return std::bit_cast<MR_DeclOrder_C_false>((_this ? *(MR::DeclOrder::C<true> *)(_this) : throw std::runtime_error("Parameter `_this` can not be null.")).blah());
}

