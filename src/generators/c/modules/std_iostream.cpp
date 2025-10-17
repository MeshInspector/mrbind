#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdIostream : DeriveModule<StdIostream>
    {
        std::string c_name_istream;
        std::string c_name_ostream;

        void Init(Generator &generator) override
        {
            c_name_istream = generator.MakePublicHelperName("std_istream");
            c_name_ostream = generator.MakePublicHelperName("std_ostream");
        }

        // Those are only same-address bindable, which makes them a bit wonly.
        std::optional<Generator::TypeBindableWithSameAddress> GetTypeBindableWithSameAddress(Generator &generator, const cppdecl::QualifiedName &type_name, const std::string &type_name_str) override
        {
            (void)type_name;

            std::optional<Generator::TypeBindableWithSameAddress> ret;

            bool is_output_stream = false;
            if (!(type_name_str == "std::istream" || (is_output_stream = type_name_str == "std::ostream")))
                return ret;

            auto get_output_file = [
                c_name_istream = c_name_istream,
                c_name_ostream = c_name_ostream
            ](Generator &generator) -> Generator::OutputFile &
            {
                bool is_new = false;
                Generator::OutputFile &file = *generator.GetPublicHelperFile("iostream", &is_new);

                if (is_new)
                {
                    EmitRefOnlyStructForwardDeclaration(generator, file, "/// A C++ output stream.\n", c_name_ostream);
                    EmitRefOnlyStructForwardDeclaration(generator, file, "/// A C++ input stream.\n", c_name_istream);

                    { // cout
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the `stdout` stream.";
                        emit.name = generator.MakeFreeFuncName("GetStdCout");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("ostream")).AddModifier(cppdecl::Reference{});
                        emit.cpp_called_func = "std::cout";
                        emit.cpp_called_func_parens = {};
                        generator.EmitFunction(file, emit);
                    }

                    { // cerr
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the `stderr` stream, buffered.";
                        emit.name = generator.MakeFreeFuncName("GetStdCerr");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("ostream")).AddModifier(cppdecl::Reference{});
                        emit.cpp_called_func = "std::cerr";
                        emit.cpp_called_func_parens = {};
                        generator.EmitFunction(file, emit);
                    }

                    { // clog
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the `stderr` stream, unbuffered.";
                        emit.name = generator.MakeFreeFuncName("GetStdClog");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("ostream")).AddModifier(cppdecl::Reference{});
                        emit.cpp_called_func = "std::clog";
                        emit.cpp_called_func_parens = {};
                        generator.EmitFunction(file, emit);
                    }

                    { // cin
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the `stdin` stream.";
                        emit.name = generator.MakeFreeFuncName("GetStdCin");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("istream")).AddModifier(cppdecl::Reference{});
                        emit.cpp_called_func = "std::cin";
                        emit.cpp_called_func_parens = {};
                        generator.EmitFunction(file, emit);
                    }
                }

                return file;
            };

            Generator::TypeBindableWithSameAddress &binding = ret.emplace();

            binding.declared_in_file = [&generator, get_output_file]() -> auto & {return get_output_file(generator);};
            binding.forward_declaration = MakeStructForwardDeclarationNoReg(is_output_stream ? c_name_ostream : c_name_istream);
            binding.custom_c_type_name = is_output_stream ? c_name_ostream : c_name_istream; // Need to customize this because we add a prefix.

            return ret;
        }

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;
            if (name.parts.size() == 2 && name.parts.front().AsSingleWord() == "std")
            {
                const std::string_view word = name.parts.back().AsSingleWord();
                if (word == "istream" || word == "ostream")
                    return "iostream";
            }
            return {};
        }
    };
}
