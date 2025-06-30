#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdIostream : DeriveModule<StdIostream>
    {
        std::string c_name_istream;
        std::string c_name_ostream;

        void Init(Generator &generator)
        {
            c_name_istream = generator.MakePublicHelperName("std_istream");
            c_name_ostream = generator.MakePublicHelperName("std_ostream");
        }

        // Those are only same-address bindable, which makes them a bit wonly.
        std::optional<Generator::TypeBindableWithSameAddress> GetTypeBindableWithSameAddress(Generator &generator, const cppdecl::QualifiedName &type_name, const std::string &type_name_str)
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
                Generator::OutputFile &file = generator.GetPublicHelperFile("iostream", &is_new);

                if (is_new)
                {
                    file.source.stdlib_headers.insert("iostream"); // For `std::iostream`.

                    file.header.contents += "\n/// A C++ output stream.\n";
                    file.header.contents += MakeStructForwardDeclaration(c_name_ostream) + '\n';
                    file.header.contents += "\n/// A C++ input stream.\n";
                    file.header.contents += MakeStructForwardDeclaration(c_name_istream) + '\n';

                    { // cout
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the `stdout` stream.";
                        emit.c_name = generator.MakePublicHelperName("GetStdCout");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("ostream")).AddModifier(cppdecl::Reference{});
                        emit.cpp_called_func = "std::cout";
                        emit.cpp_called_func_parens = {};
                        generator.EmitFunction(file, emit);
                    }

                    { // cerr
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the `stderr` stream, buffered.";
                        emit.c_name = generator.MakePublicHelperName("GetStdCerr");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("ostream")).AddModifier(cppdecl::Reference{});
                        emit.cpp_called_func = "std::cerr";
                        emit.cpp_called_func_parens = {};
                        generator.EmitFunction(file, emit);
                    }

                    { // clog
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the `stderr` stream, unbuffered.";
                        emit.c_name = generator.MakePublicHelperName("GetStdClog");
                        emit.cpp_return_type = cppdecl::Type::FromQualifiedName(cppdecl::QualifiedName{}.AddPart("std").AddPart("ostream")).AddModifier(cppdecl::Reference{});
                        emit.cpp_called_func = "std::clog";
                        emit.cpp_called_func_parens = {};
                        generator.EmitFunction(file, emit);
                    }

                    { // cin
                        Generator::EmitFuncParams emit;
                        emit.c_comment = "/// Returns the `stdin` stream.";
                        emit.c_name = generator.MakePublicHelperName("GetStdCin");
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
            binding.forward_declaration = MakeStructForwardDeclaration(is_output_stream ? c_name_ostream : c_name_istream);
            binding.custom_c_type_name = is_output_stream ? c_name_ostream : c_name_istream; // Need to customize this because we add a prefix.

            return ret;
        }
    };
}
