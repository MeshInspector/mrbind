#define MR_C_BUILD_LIBRARY
#include "MR/test_variant.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_variant.h>

#include <stdexcept>
#include <string>
#include <variant>


MR_C_std_variant_int_float *MR_StdVariant_foo(void)
{
    return (MR_C_std_variant_int_float *)new std::variant<int, float>(::MR::StdVariant::foo());
}

void MR_StdVariant_bar(const MR_C_std_variant_int_float_float *_1)
{
    ::MR::StdVariant::bar(
        (_1 ? std::variant<int, float, float>(*(std::variant<int, float, float> *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdVariant_baz(MR_C_PassBy _1_pass_by, MR_C_std_variant_int_float_std_string *_1)
{
    ::MR::StdVariant::baz(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::variant<int, float, std::string>) MRBINDC_CLASSARG_COPY(_1, (std::variant<int, float, std::string>), std::variant<int, float, std::string>) MRBINDC_CLASSARG_MOVE(_1, (std::variant<int, float, std::string>), std::variant<int, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::variant<int, float, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::variant<int, float, std::string>) MRBINDC_CLASSARG_END(_1, std::variant<int, float, std::string>))
    );
}

MR_C_std_variant_std_monostate_int_float *MR_StdVariant_blah(void)
{
    return (MR_C_std_variant_std_monostate_int_float *)new std::variant<std::monostate, int, float>(::MR::StdVariant::blah());
}

