#include "MR/test_std_expected.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_expected.h>

#include <stdexcept>


MR_C_std_expected_int_std_string *MR_StdExpected_GetExp(void)
{
    using namespace MR;
    using namespace StdExpected;
    return (MR_C_std_expected_int_std_string *)new std::expected<int, std::string>(MR::StdExpected::GetExp());
}

void MR_StdExpected_SetExp(MR_C_PassBy _1_pass_by, MR_C_std_expected_int_std_string *_1)
{
    using namespace MR;
    using namespace StdExpected;
    MR::StdExpected::SetExp(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(_1, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(_1, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_DefaultArgument, std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(_1, std::expected<int, std::string>))
    );
}

void MR_StdExpected_SetExpConstRef(const MR_C_std_expected_int_std_string *_1)
{
    using namespace MR;
    using namespace StdExpected;
    MR::StdExpected::SetExpConstRef(
        (_1 ? *(const std::expected<int, std::string> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdExpected_SetExpDefTrivial(MR_C_PassBy _1_pass_by, MR_C_std_expected_int_std_string *_1)
{
    using namespace MR;
    using namespace StdExpected;
    MR::StdExpected::SetExpDefTrivial(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(_1, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(_1, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (std::type_identity_t<std::expected<int, std::string>>{}), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(_1, std::expected<int, std::string>))
    );
}

void MR_StdExpected_SetExpDef(MR_C_PassBy _1_pass_by, MR_C_std_expected_int_std_string *_1)
{
    using namespace MR;
    using namespace StdExpected;
    MR::StdExpected::SetExpDef(
        (MRBINDC_CLASSARG_DEF_CTOR(_1, std::expected<int, std::string>) MRBINDC_CLASSARG_COPY(_1, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_MOVE(_1, (std::expected<int, std::string>), std::expected<int, std::string>) MRBINDC_CLASSARG_DEF_ARG(_1, (MR_C_PassBy_DefaultArgument), (42), std::expected<int, std::string>) MRBINDC_CLASSARG_NO_DEF_ARG(_1, MR_C_PassBy_NoObject, std::expected<int, std::string>) MRBINDC_CLASSARG_END(_1, std::expected<int, std::string>))
    );
}

MR_C_std_expected_void_float *MR_StdExpected_GetExpVoid(void)
{
    using namespace MR;
    using namespace StdExpected;
    return (MR_C_std_expected_void_float *)new std::expected<void, float>(MR::StdExpected::GetExpVoid());
}

void MR_StdExpected_SetExpVoid(const MR_C_std_expected_void_float *_1)
{
    using namespace MR;
    using namespace StdExpected;
    MR::StdExpected::SetExpVoid(
        (_1 ? std::expected<void, float>(*(std::expected<void, float> *)_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdExpected_SetExpVoidConstRef(const MR_C_std_expected_void_float *_1)
{
    using namespace MR;
    using namespace StdExpected;
    MR::StdExpected::SetExpVoidConstRef(
        (_1 ? *(const std::expected<void, float> *)(_1) : throw std::runtime_error("Parameter `_1` can not be null."))
    );
}

void MR_StdExpected_SetExpVoidDefTrivial(const MR_C_std_expected_void_float *_1)
{
    using namespace MR;
    using namespace StdExpected;
    MR::StdExpected::SetExpVoidDefTrivial(
        (_1 ? std::expected<void, float>(*(std::expected<void, float> *)_1) : static_cast<std::expected<void, float>>(std::type_identity_t<std::expected<void, float>>{}))
    );
}

void MR_StdExpected_SetExpVoidDef(const MR_C_std_expected_void_float *_1)
{
    using namespace MR;
    using namespace StdExpected;
    MR::StdExpected::SetExpVoidDef(
        (_1 ? std::expected<void, float>(*(std::expected<void, float> *)_1) : static_cast<std::expected<void, float>>(std::expected<void, float>{}))
    );
}

