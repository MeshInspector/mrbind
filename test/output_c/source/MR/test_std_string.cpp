#define MR_C_BUILD_LIBRARY
#include "MR/test_std_string.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_string.h>

#include <stdexcept>
#include <string>


void MR_StdString_Set(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    ::MR::StdString::Set(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string(s, s_end) : std::string(s)))
    );
    ) // MRBINDC_TRY
}

void MR_StdString_SetWithDefault(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdString;
    ::MR::StdString::SetWithDefault(
        (s ? (s_end ? std::string(s, s_end) : std::string(s)) : std::string("42"))
    );
    ) // MRBINDC_TRY
}

MR_C_std_string *MR_StdString_Get(void)
{
    MRBINDC_TRY(
    return (MR_C_std_string *)new std::string(::MR::StdString::Get());
    ) // MRBINDC_TRY
}

void MR_StdString_WriteToRef(MR_C_std_string *ref)
{
    MRBINDC_TRY(
    ::MR::StdString::WriteToRef(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(std::string *)(ref))
    );
    ) // MRBINDC_TRY
}

void MR_StdString_WriteToPtr(MR_C_std_string *ptr)
{
    MRBINDC_TRY(
    ::MR::StdString::WriteToPtr(
        ((std::string *)ptr)
    );
    ) // MRBINDC_TRY
}

void MR_StdString_ConstRef(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    ::MR::StdString::ConstRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string(s, s_end) : std::string(s)))
    );
    ) // MRBINDC_TRY
}

void MR_StdString_RvalueRef(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    ::MR::StdString::RvalueRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string(s, s_end) : std::string(s)))
    );
    ) // MRBINDC_TRY
}

void MR_StdString_ConstRvalueRef(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    ::MR::StdString::ConstRvalueRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string(s, s_end) : std::string(s)))
    );
    ) // MRBINDC_TRY
}

