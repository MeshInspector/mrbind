#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdFilesystem : DeriveModule<StdFilesystem>
    {
        cppdecl::QualifiedName target_name = cppdecl::QualifiedName{}.AddPart("std").AddPart("filesystem").AddPart("path");

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type_str;

            std::optional<Generator::BindableType> ret;

            if ((ret = BindNonConstOrRvalueRefParamsSameAsNonRef(generator, type, target_name)))
                return ret;

            if (!type.IsOnlyQualifiedName() || type.simple_type.name != target_name)
                return ret;

            HeapAllocatedClassBinder binder = HeapAllocatedClassBinder::ForCustomType(generator, type.simple_type.name);
            binder.traits = Generator::TypeTraits::CopyableNonTrivial{};

            auto get_output_file = [
                type,
                type_str,
                binder
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = *generator.GetPublicHelperFile(generator.CppdeclToIdentifier(type), &is_new);

                if (is_new)
                {
                    binder.EmitForwardDeclaration(generator, file, "/// Stores a filesystem path.\n");

                    // The special member functions.
                    binder.EmitSpecialMemberFunctions(generator, file, true);


                    // Some custom functions:

                    { // Get as a string.
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Get the contents as a UTF8-encoded string.";
                        emit.name = binder.MakeMemberFuncName(generator, "GetString");

                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("string"));

                        emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);

                        emit.cpp_extra_statements = "auto ret = @this@.u8string();";
                        emit.cpp_called_func = "std::string(reinterpret_cast<const char *>(ret.c_str()), ret.size())"; // Cast from `std::u8string` to `std::string`.

                        generator.EmitFunction(file, emit);
                    }
                }

                return file;
            };

            Generator::BindableType &new_type = ret.emplace();

            binder.FillCommonParams(generator, new_type);
            new_type.bindable_with_same_address.declared_in_file = [&generator, get_output_file]() -> auto & {return get_output_file(generator);};

            // Don't need this one.
            new_type.param_usage.reset();

            // Replace the parameter callback.
            new_type.param_usage_with_default_arg = MakeStringLikeParamUsageSupportingDefaultArg(
                type_str,
                [](std::string_view begin) -> std::string
                {
                    return "std::filesystem::u8path(" + std::string(begin) + ")";
                },
                [](std::string_view begin, std::string_view end) -> std::string
                {
                    return "std::filesystem::u8path(" + std::string(begin) + ", " + std::string(end) + ")";
                }
            );
            // `std::filesystem::u8path()` is deprecated, so we need to silence the warning! Duh.
            new_type.param_usage_with_default_arg->silence_deprecation = true;
            // Expand the comment to say that this is a UTF-8 encoded path.
            new_type.param_usage_with_default_arg->append_to_comment =
                [next = std::move(new_type.param_usage_with_default_arg->append_to_comment)](std::string_view cpp_param_name, bool has_default_arg, bool is_output_param) -> std::string
                {
                    std::string ret;

                    if (is_output_param)
                        return "/// Callback return value is a UTF-8 encoded filesystem path.";
                    else
                        return "/// Parameter `" + std::string(cpp_param_name) + "` is a UTF-8 encoded filesystem path.";

                    if (next)
                    {
                        std::string next_str = next(cpp_param_name, has_default_arg, is_output_param);
                        if (!next_str.empty())
                        {
                            ret += '\n';
                            ret += next_str;
                        }
                    }

                    return ret;
                };

            return ret;
        }

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;
            if (name.Equals(target_name, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target))
                return "filesystem";
            return {};
        }
    };
}
