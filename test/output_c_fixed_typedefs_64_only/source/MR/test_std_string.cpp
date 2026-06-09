#define MR_C_BUILD_LIBRARY
#include "MR/test_std_string.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_string.h>

#include <stdexcept>
#include <string>


void MR_StdString_Set(const char *s, const char *s_end)
{
    ::MR::StdString::Set(
        ((s ? void() : MRBINDC_THROW("Parameter `s` can not be null.", void)), (s_end ? std::string(s, s_end) : std::string(s)))
    );
}

void MR_StdString_SetWithDefault(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdString;
    ::MR::StdString::SetWithDefault(
        (s ? (s_end ? std::string(s, s_end) : std::string(s)) : std::string("42"))
    );
}

MR_C_std_string *MR_StdString_Get(void)
{
    return (MR_C_std_string *)new std::string(::MR::StdString::Get());
}

void MR_StdString_WriteToRef(MR_C_std_string *ref)
{
    ::MR::StdString::WriteToRef(
        ((ref ? void() : MRBINDC_THROW("Parameter `ref` can not be null.", void)), *(std::string *)(ref))
    );
}

void MR_StdString_WriteToPtr(MR_C_std_string *ptr)
{
    ::MR::StdString::WriteToPtr(
        ((std::string *)ptr)
    );
}

void MR_StdString_ConstRef(const char *s, const char *s_end)
{
    ::MR::StdString::ConstRef(
        ((s ? void() : MRBINDC_THROW("Parameter `s` can not be null.", void)), (s_end ? std::string(s, s_end) : std::string(s)))
    );
}

void MR_StdString_RvalueRef(const char *s, const char *s_end)
{
    ::MR::StdString::RvalueRef(
        ((s ? void() : MRBINDC_THROW("Parameter `s` can not be null.", void)), (s_end ? std::string(s, s_end) : std::string(s)))
    );
}

void MR_StdString_ConstRvalueRef(const char *s, const char *s_end)
{
    ::MR::StdString::ConstRvalueRef(
        ((s ? void() : MRBINDC_THROW("Parameter `s` can not be null.", void)), (s_end ? std::string(s, s_end) : std::string(s)))
    );
}

