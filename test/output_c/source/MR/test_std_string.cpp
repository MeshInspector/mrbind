#include "MR/test_std_string.h"

#include <input/MR/test_std_string.h>

#include <stdexcept>


void MR_StdString_Set(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdString;
    MR::StdString::Set(
        (s ? (s_end ? std::string(s, s_end) : std::string(s)) : throw std::runtime_error("Parameter `s` can not be null."))
    );
}

void MR_StdString_SetWithDefault(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdString;
    MR::StdString::SetWithDefault(
        (s ? (s_end ? std::string(s, s_end) : std::string(s)) : std::string("42"))
    );
}

MR_C_std_string *MR_StdString_Get(void)
{
    using namespace MR;
    using namespace StdString;
    return (MR_C_std_string *)new std::string(MR::StdString::Get());
}

void MR_StdString_WriteToRef(MR_C_std_string *ref)
{
    using namespace MR;
    using namespace StdString;
    MR::StdString::WriteToRef(
        (ref ? *(std::string *)(ref) : throw std::runtime_error("Parameter `ref` can not be null."))
    );
}

void MR_StdString_WriteToPtr(MR_C_std_string *ptr)
{
    using namespace MR;
    using namespace StdString;
    MR::StdString::WriteToPtr(
        ((std::string *)ptr)
    );
}

void MR_StdString_ConstRef(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdString;
    MR::StdString::ConstRef(
        (s ? (s_end ? std::string(s, s_end) : std::string(s)) : throw std::runtime_error("Parameter `s` can not be null."))
    );
}

void MR_StdString_RvalueRef(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdString;
    MR::StdString::RvalueRef(
        (s ? (s_end ? std::string(s, s_end) : std::string(s)) : throw std::runtime_error("Parameter `s` can not be null."))
    );
}

void MR_StdString_ConstRvalueRef(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdString;
    MR::StdString::ConstRvalueRef(
        (s ? (s_end ? std::string(s, s_end) : std::string(s)) : throw std::runtime_error("Parameter `s` can not be null."))
    );
}

