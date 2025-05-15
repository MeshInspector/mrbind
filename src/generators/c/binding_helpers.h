#pragma once

#include "generators/c/generator.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/to_string.h>

namespace mrbind::CBindings
{
    struct ClassBinder
    {
        ClassBinder() {}

        cppdecl::QualifiedName cpp_type_name;
        std::string c_type_name;

        std::string c_destroy_func_name;

        ClassBinder(Generator &generator, cppdecl::QualifiedName new_cpp_type_name)
            : cpp_type_name(std::move(new_cpp_type_name))
        {
            std::string base_c_name = generator.StringToCIdentifier(cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style));
            c_type_name = generator.MakePublicHelperName(base_c_name);

            c_destroy_func_name = generator.MakePublicHelperName(base_c_name + "_Destroy");
        }

        [[nodiscard]] std::string MakeForwardDeclaration() const
        {
            return "typedef struct " + c_type_name + " " + c_type_name + ";";
        }

        [[nodiscard]] Generator::BindableType::ReturnUsage MakeReturnUsage() const
        {
            Generator::BindableType::ReturnUsage ret;

            std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

            ret.c_type = cppdecl::Type::FromSingleWord(c_type_name).AddTopLevelModifier(cppdecl::Pointer{});
            ret.same_addr_bindable_type_dependencies.try_emplace(cpp_type_str); // Only the forward declaration is needed.

            assert(!c_destroy_func_name.empty());
            ret.append_to_comment = "/// Returns an instance allocated on the heap! Must call `" + c_destroy_func_name + "()` to free it when you're done using it.";

            ret.make_return_statement = [c_type_name = c_type_name, cpp_type_str = std::move(cpp_type_str)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
            {
                (void)file;
                return "return (" + c_type_name + " *)new " + cpp_type_str + "(" + std::string(expr) + ");";
            };

            return ret;
        }

        [[nodiscard]] Generator::EmitFuncParams PrepareDestroyFunc() const
        {
            assert(!c_destroy_func_name.empty());

            std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

            Generator::EmitFuncParams ret;

            ret.c_name = c_destroy_func_name;

            ret.AddThisParam(cppdecl::Type::FromQualifiedName(cpp_type_name), false);
            ret.params.front().add_to_call = true; // Force add `this` to the call expression.

            ret.cpp_return_type = cppdecl::Type::FromSingleWord("void");

            ret.cpp_called_func_begin = "delete ";
            ret.cpp_called_func_end = "";

            ret.c_comment += "/// Destroys a heap-allocated instance of `" + cpp_type_str + "`.";

            return ret;
        }
    };
}
