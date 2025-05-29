#include "MR/test_std_string_view.h"

#include <input/MR/test_std_string_view.h>

#include <cstddef>
#include <stdexcept>


void MR_StdStringView_Set(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdStringView;
    MR::StdStringView::Set(
        (s ? (s_end ? std::string_view(s, std::size_t(s_end - s)) : std::string_view(s)) : throw std::runtime_error("Parameter `s` can not be null."))
    );
}

void MR_StdStringView_SetWithDefault(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdStringView;
    MR::StdStringView::SetWithDefault(
        (s ? (s_end ? std::string_view(s, std::size_t(s_end - s)) : std::string_view(s)) : std::string_view("42"))
    );
}

MR_C_std_string_view MR_StdStringView_Get(void)
{
    using namespace MR;
    using namespace StdStringView;
    auto _ret = MR::StdStringView::Get(); return {_ret.data(), _ret.data() + _ret.size()};
}

void MR_StdStringView_WriteToRef(MR_C_std_string_view *ref)
{
    using namespace MR;
    using namespace StdStringView;
    MR::StdStringView::WriteToRef(
        (ref ? *(std::string_view *)(ref) : throw std::runtime_error("Parameter `ref` can not be null."))
    );
}

void MR_StdStringView_WriteToPtr(MR_C_std_string_view *ptr)
{
    using namespace MR;
    using namespace StdStringView;
    MR::StdStringView::WriteToPtr(
        ((std::string_view *)ptr)
    );
}

void MR_StdStringView_ConstRef(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdStringView;
    MR::StdStringView::ConstRef(
        (s ? (s_end ? std::string_view(s, std::size_t(s_end - s)) : std::string_view(s)) : throw std::runtime_error("Parameter `s` can not be null."))
    );
}

void MR_StdStringView_RvalueRef(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdStringView;
    MR::StdStringView::RvalueRef(
        (s ? (s_end ? std::string_view(s, std::size_t(s_end - s)) : std::string_view(s)) : throw std::runtime_error("Parameter `s` can not be null."))
    );
}

void MR_StdStringView_ConstRvalueRef(const char *s, const char *s_end)
{
    using namespace MR;
    using namespace StdStringView;
    MR::StdStringView::ConstRvalueRef(
        (s ? (s_end ? std::string_view(s, std::size_t(s_end - s)) : std::string_view(s)) : throw std::runtime_error("Parameter `s` can not be null."))
    );
}

