#define MR_C_BUILD_LIBRARY
#include "MR/test_std_string_view.h"

#include <input/MR/test_std_string_view.h>

#include <stdexcept>
#include <string_view>


void MR_StdStringView_Set(const char *s, const char *s_end)
{
    ::MR::StdStringView::Set(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string_view(s, s_end) : std::string_view(s)))
    );
}

void MR_StdStringView_SetWithDefault(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdStringView;
    ::MR::StdStringView::SetWithDefault(
        (s ? (s_end ? std::string_view(s, s_end) : std::string_view(s)) : std::string_view("42"))
    );
}

MR_C_std_string_view *MR_StdStringView_Get(void)
{
    return (MR_C_std_string_view *)new std::string_view(::MR::StdStringView::Get());
}

void MR_StdStringView_WriteToRef(MR_C_std_string_view *ref)
{
    ::MR::StdStringView::WriteToRef(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(std::string_view *)(ref))
    );
}

void MR_StdStringView_WriteToPtr(MR_C_std_string_view *ptr)
{
    ::MR::StdStringView::WriteToPtr(
        ((std::string_view *)ptr)
    );
}

void MR_StdStringView_ConstRef(const char *s, const char *s_end)
{
    ::MR::StdStringView::ConstRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string_view(s, s_end) : std::string_view(s)))
    );
}

void MR_StdStringView_RvalueRef(const char *s, const char *s_end)
{
    ::MR::StdStringView::RvalueRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string_view(s, s_end) : std::string_view(s)))
    );
}

void MR_StdStringView_ConstRvalueRef(const char *s, const char *s_end)
{
    ::MR::StdStringView::ConstRvalueRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string_view(s, s_end) : std::string_view(s)))
    );
}

