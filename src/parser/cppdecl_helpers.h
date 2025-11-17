#pragma once

#include <cppdecl/declarations/data.h>

namespace mrbind
{
    // Parses the type using the cppdecl library. Throws on failure.
    [[nodiscard]] cppdecl::Type ParseTypeWithCppdecl(std::string_view input);

    // Same, but for qualified names.
    [[nodiscard]] cppdecl::QualifiedName ParseQualifiedNameWithCppdecl(std::string_view input);

    // Same, but for template argument lists.
    [[nodiscard]] cppdecl::TemplateArgumentList ParseTemplateArgumentListWithCppdecl(std::string_view input);
}
