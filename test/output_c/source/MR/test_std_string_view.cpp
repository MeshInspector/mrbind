#define MR_C_BUILD_LIBRARY
#include "MR/test_std_string_view.h"

#include <__mrbind_c_details.h>
#include <input/MR/test_std_string_view.h>

#include <stdexcept>
#include <string_view>


void MR_StdStringView_Set(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    ::MR::StdStringView::Set(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string_view(s, s_end) : std::string_view(s)))
    );
    ) // MRBINDC_TRY
}

void MR_StdStringView_SetWithDefault(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    using namespace MR;
    using namespace StdStringView;
    ::MR::StdStringView::SetWithDefault(
        (s ? (s_end ? std::string_view(s, s_end) : std::string_view(s)) : std::string_view("42"))
    );
    ) // MRBINDC_TRY
}

MR_C_std_string_view *MR_StdStringView_Get(void)
{
    MRBINDC_TRY(
    return (MR_C_std_string_view *)new std::string_view(::MR::StdStringView::Get());
    ) // MRBINDC_TRY
}

void MR_StdStringView_WriteToRef(MR_C_std_string_view *ref)
{
    MRBINDC_TRY(
    ::MR::StdStringView::WriteToRef(
        ((ref ? void() : throw std::runtime_error("Parameter `ref` can not be null.")), *(std::string_view *)(ref))
    );
    ) // MRBINDC_TRY
}

void MR_StdStringView_WriteToPtr(MR_C_std_string_view *ptr)
{
    MRBINDC_TRY(
    ::MR::StdStringView::WriteToPtr(
        ((std::string_view *)ptr)
    );
    ) // MRBINDC_TRY
}

void MR_StdStringView_ConstRef(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    ::MR::StdStringView::ConstRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string_view(s, s_end) : std::string_view(s)))
    );
    ) // MRBINDC_TRY
}

void MR_StdStringView_RvalueRef(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    ::MR::StdStringView::RvalueRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string_view(s, s_end) : std::string_view(s)))
    );
    ) // MRBINDC_TRY
}

void MR_StdStringView_ConstRvalueRef(const char *s, const char *s_end)
{
    MRBINDC_TRY(
    ::MR::StdStringView::ConstRvalueRef(
        ((s ? void() : throw std::runtime_error("Parameter `s` can not be null.")), (s_end ? std::string_view(s, s_end) : std::string_view(s)))
    );
    ) // MRBINDC_TRY
}

