#define MR_C_BUILD_LIBRARY
#include "MR/test_std_string.h"

#include <input/MR/test_std_string.h>

#include <stdexcept>
#include <string>
#include <utility>


void MR_StdString_Set(const char *s, const char *s_end)
{
    ::MR::StdString::Set(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string(s, s_end) : std::string(s)))
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
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(std::string *)(ref))
    );
}

void MR_StdString_WriteToPtr(MR_C_std_string *ptr)
{
    ::MR::StdString::WriteToPtr(
        ((std::string *)ptr)
    );
}

void MR_StdString_ConstRef(const MR_C_std_string *s)
{
    ::MR::StdString::ConstRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), *(const std::string *)(s))
    );
}

void MR_StdString_RvalueRef(MR_C_std_string *s)
{
    ::MR::StdString::RvalueRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), std::move(*(std::string *)(s)))
    );
}

void MR_StdString_ConstRvalueRef(const MR_C_std_string *s)
{
    ::MR::StdString::ConstRvalueRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), std::move(*(const std::string *)(s)))
    );
}

