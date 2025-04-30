#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdString : Module
    {
        // Those are initialized when `GetPublicHeader_StdString()` is first called: [

        // The C struct name for strings.
        std::string c_str_struct;
        // The name of a C function that destroys strings.
        std::string c_str_destroy_func;

        // ]

        Generator::OutputFile &GetPublicHeader_StdString(Generator &generator)
        {
            bool is_new = false;
            Generator::OutputFile &file = generator.GetPublicHelperFile("std_string", &is_new);

            if (is_new)
            {
                c_str_struct = generator.MakeHelperName("std_string");
                c_str_destroy_func = generator.MakeHelperName("Destroy_std_string");

                file.header.stdlib_headers.insert("stdint.h"); // For `size_t`.

                file.header.contents += "struct ";
                file.header.contents += c_str_struct;
                file.header.contents += "\n{\n";
                file.header.contents += "    char *str; // Always null-terminated.\n";
                file.header.contents += "    size_t size;\n";
                file.header.contents += "    void *_owner; // For internal use.\n";
                file.header.contents += "};\n";

                { // Emit the destroy func.
                    Generator::EmitFuncParams emit_params;
                    emit_params.c_name = c_str_destroy_func,
                    emit_params.cpp_return_type = cppdecl::Type::FromSingleWord("void"),
                    emit_params.cpp_extra_statements = "delete reinterpret_cast<std::string *>(str._owner);\nstr = {};",
                    emit_params.cpp_called_func_begin = "",
                    emit_params.c_comment = "// Destroys the memory owned by a `" + c_str_struct + "` and zeroes the internal pointers.",
                    emit_params.params.push_back({
                        .name = "str",
                        .cpp_type = cppdecl::Type::FromSingleWord(c_str_struct),
                        .emit_as_is = true,
                    });
                    generator.EmitFunction(file, emit_params);
                }
            }
        }

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type) override
        {
            std::optional<Generator::BindableType> ret;

            if (type.AsSingleWord() == "std::string")
            {
                Generator::BindableType &new_type = ret.emplace();

                Generator::BindableType::ReturnUsage &return_usage = new_type.return_usage.emplace();
                return_usage.
                #error we need to write all this (return and param usage), but the main question is where do we put the C++ details?
                #error probably the `OutputFile` needs a new `SpecificFile` for a details header, that we'd call `Foo.mrbind_detail.h`.
            }

            return ret;
        }
    };
}
