#include "cppdecl_helpers.h"

#include <cppdecl/declarations/parse.h>

namespace mrbind
{
    cppdecl::Type ParseTypeWithCppdecl(std::string_view input)
    {
        const std::string_view orig_input = input;
        cppdecl::ParseTypeResult result = cppdecl::ParseType(input);
        if (auto error = std::get_if<cppdecl::ParseError>(&result))
        {
            throw std::runtime_error("Our cppdecl library failed to parse type `" + std::string(orig_input) + "` at position " + std::to_string(input.data() - orig_input.data()) + " with error `" + std::string(error->message) + "`. Please report a bug to `https://github.com/MeshInspector/cppdecl` with this type name. Pass `--no-cppdecl` to try to work around this, but note that this will break most non-trivial usecases.");
        }
        if (!input.empty())
        {
            throw std::runtime_error("Our cppdecl library didn't consume a part of the type name `" + std::string(orig_input) + "` starting from position " + std::to_string(input.data() - orig_input.data()) + ". Please report a bug to `https://github.com/MeshInspector/cppdecl` with this type name. Pass `--no-cppdecl` to try to work around this, but note that this will break most non-trivial usecases.");
        }

        return std::move(std::get<cppdecl::Type>(result));
    }

    cppdecl::QualifiedName ParseQualifiedNameWithCppdecl(std::string_view input)
    {
        const std::string_view orig_input = input;
        cppdecl::ParseQualifiedNameResult result = cppdecl::ParseQualifiedName(input);
        if (auto error = std::get_if<cppdecl::ParseError>(&result))
        {
            throw std::runtime_error("Our cppdecl library failed to parse qualified name `" + std::string(orig_input) + "` at position " + std::to_string(input.data() - orig_input.data()) + " with error `" + std::string(error->message) + "`. Please report a bug to `https://github.com/MeshInspector/cppdecl` with this string. Pass `--no-cppdecl` to try to work around this, but note that this will break most non-trivial usecases.");
        }
        if (!input.empty())
        {
            throw std::runtime_error("Our cppdecl library didn't consume a part of the qualified name `" + std::string(orig_input) + "` starting from position " + std::to_string(input.data() - orig_input.data()) + ". Please report a bug to `https://github.com/MeshInspector/cppdecl` with this string. Pass `--no-cppdecl` to try to work around this, but note that this will break most non-trivial usecases.");
        }

        return std::move(std::get<cppdecl::QualifiedName>(result));
    }

    cppdecl::TemplateArgumentList ParseTemplateArgumentListWithCppdecl(std::string_view input)
    {
        const std::string_view orig_input = input;
        cppdecl::ParseTemplateArgumentListResult result = cppdecl::ParseTemplateArgumentList(input);
        if (auto error = std::get_if<cppdecl::ParseError>(&result))
        {
            throw std::runtime_error("Our cppdecl library failed to parse template argument list `" + std::string(orig_input) + "` at position " + std::to_string(input.data() - orig_input.data()) + " with error `" + std::string(error->message) + "`. Please report a bug to `https://github.com/MeshInspector/cppdecl` with this string. Pass `--no-cppdecl` to try to work around this, but note that this will break most non-trivial usecases.");
        }
        if (!input.empty())
        {
            throw std::runtime_error("Our cppdecl library didn't consume a part of the template argument list `" + std::string(orig_input) + "` starting from position " + std::to_string(input.data() - orig_input.data()) + ". Please report a bug to `https://github.com/MeshInspector/cppdecl` with this string. Pass `--no-cppdecl` to try to work around this, but note that this will break most non-trivial usecases.");
        }

        auto &opt = std::get<std::optional<cppdecl::TemplateArgumentList>>(result);
        if (!opt)
            throw std::runtime_error("Expected a template argument list in `" + std::string(input) + "` but didn't find one. Please report a bug. Pass `--no-cppdecl` to try to work around this, but note that this will break most non-trivial usecases.");

        return std::move(*opt);
    }
}
