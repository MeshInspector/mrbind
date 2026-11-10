#include "generators/c/module.h"

#include <string>

namespace mrbind::C::Modules
{
    // Handles the standard ordering classes.
    // I could try to match the layout, but it's easier not to.
    // I'm also not bothering with adding parameter usage. Just return usage for now.
    struct StdThreeWayOrderings : DeriveModule<StdThreeWayOrderings>
    {
        cppdecl::Type type_strong = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("strong_ordering"));
        cppdecl::Type type_weak = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("weak_ordering"));
        cppdecl::Type type_partial = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("partial_ordering"));

        std::string c_name_partial;

        void Init(Generator &generator) override
        {
            c_name_partial = generator.MakePublicHelperName("std_partial_ordering");
        }

        Generator::OutputFile &GetOutputFile(Generator &generator)
        {
            bool is_new = false;
            Generator::OutputFile &file = *generator.GetPublicHelperFile("compare", &is_new);

            if (is_new)
            {
                generator.EmitEnum(
                    file,
                    "/// The result of a three-way comparison between values that are not necessarily ordered with respect to each other.\n",
                    type_partial.simple_type.name,
                    c_name_partial,
                    "int",
                    [](Generator::EmitEnumFunc emit_elem)
                    {
                        emit_elem("/// A < B\n", "less", std::uint64_t(-1));
                        emit_elem("/// A == B\n", "equivalent", 0); // `equal` sounds nicer, but C++ calls this `equivalent`...
                        emit_elem("/// A > B\n", "greater", 1);
                        emit_elem("/// A is not comparable to B\n", "unordered", 2); // Not sure what value to pick here. Probably doesn't matter.
                    }
                );
            }

            return file;
        }

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            // Can't easily add the non-const-or-rvalue reference versions, because we don't ensure binary compatibility.

            // Strong and weak ordering.
            if (bool is_weak = false; type == type_strong || (is_weak = type == type_weak))
            {
                Generator::BindableType &new_type = ret.emplace();

                // I consider this sugared, so not setting traits, and keeping `ret.interop_info` defaulted to `Invalid`.

                Generator::BindableType::ReturnUsage &ret = new_type.return_usage.emplace();
                ret.c_type = cppdecl::Type::FromSingleWord("int");
                ret.make_return_expr = [&generator, type](Generator::OutputFile::SpecificFileContents &file, std::string_view expr) -> std::string
                {
                    (void)file;

                    std::string ret;

                    // Apparently we don't have a way to prepend extra statements to the return at the time of writing this.
                    // Since we only need it here, it's easier to add a lambda.
                    ret += "[&]{";

                    // First, declare a variable to store the C++ result.
                    ret += generator.CppdeclToCode(type);
                    ret += " _result = ";
                    ret += expr;
                    ret += "; ";

                    ret += "return _result < 0 ? -1 : _result > 0 ? 1 : 0;";

                    ret += "}()";
                    return ret;
                };
                ret.append_to_comment = [is_weak](std::string_view callback_param_name) -> std::string
                {
                    if (callback_param_name.empty())
                        return "/// Returns -1 for `less`, +1 for `greater`, or 0 for `" + std::string(is_weak ? "equivalent" : "equal") + "`.";
                    else
                        return "/// The callback parameter `" + std::string(callback_param_name) + "` will be -1 for `less`, +1 for `greater`, or 0 for `" + std::string(is_weak ? "equivalent" : "equal") + "`.";
                };
                ret.considered_sugar_for_interop = true; // Definitely.
            }

            // Partial ordering.
            if (type == type_partial)
            {
                Generator::BindableType &new_type = ret.emplace();

                // I don't consider this sugared, so setting the traits and the type kind.
                new_type.traits = Generator::TypeTraits::Trivial{};

                // Not setting `new_type.interop_info`, since `generator.EmitEnum()` does this for us, and complains if it's already done.

                Generator::BindableType::ReturnUsage &ret = new_type.return_usage.emplace();
                ret.c_type = cppdecl::Type::FromSingleWord(c_name_partial);
                ret.make_return_expr = [&generator, type, c_name_partial = c_name_partial](Generator::OutputFile::SpecificFileContents &file, std::string_view expr) -> std::string
                {
                    (void)file;

                    std::string ret;

                    // Apparently we don't have a way to prepend extra statements to the return at the time of writing this.
                    // Since we only need it here, it's easier to add a lambda.
                    ret += "[&]{";

                    // First, declare a variable to store the C++ result.
                    ret += generator.CppdeclToCode(type);
                    ret += " _result = ";
                    ret += expr;
                    ret += "; ";

                    ret += "return _result == std::partial_ordering::less ? " + c_name_partial + "_less : _result == std::partial_ordering::greater ? " + c_name_partial + "_greater : _result == std::partial_ordering::equivalent ? " + c_name_partial + "_equivalent : " + c_name_partial + "_unordered;";

                    ret += "}()";
                    return ret;
                };

                // Only this one needs the header, since it's a enum.
                ret.extra_headers.custom_in_header_file = [this, &generator]{std::unordered_set<std::string> ret; ret.insert(GetOutputFile(generator).header.path_for_inclusion); return ret;};
            }

            return ret;
        }

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;

            if (name == type_strong.simple_type.name || name == type_weak.simple_type.name || name == type_partial.simple_type.name)
                return "compare";

            return {};
        }
    };
}
