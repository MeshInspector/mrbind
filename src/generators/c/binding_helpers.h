#pragma once

#include "generators/c/generator.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/to_string.h>

namespace mrbind::CBindings
{
    struct ClassBinder
    {
        // This class doesn't set this for anything. This is `c_type_name` without the prefix.
        // You can use this to generate new custom identifiers using `generator.MakePublicHelperName(c_type_name + "...")`.
        std::string basic_c_name;

        cppdecl::QualifiedName cpp_type_name;
        std::string c_type_name;

        bool returning_by_value_includes_header = false;

        // You don't need to assign to all those if you don't use them.
        std::string c_func_name_default_ctor;
        std::string c_func_name_copy_ctor;
        std::string c_func_name_move_ctor;
        std::string c_func_name_copy_assign;
        std::string c_func_name_move_assign;
        std::string c_func_name_destroy;

        [[nodiscard]] static ClassBinder ForCustomType(Generator &generator, cppdecl::QualifiedName new_cpp_type_name);

        [[nodiscard]] std::string MakeForwardDeclaration() const;

        [[nodiscard]] Generator::BindableType::ReturnUsage MakeReturnUsage() const;

        [[nodiscard]] Generator::EmitFuncParams PrepareFuncDefaultCtor() const;
        [[nodiscard]] Generator::EmitFuncParams PrepareFuncCopyCtor() const;
        [[nodiscard]] Generator::EmitFuncParams PrepareFuncMoveCtor() const;
        [[nodiscard]] Generator::EmitFuncParams PrepareFuncCopyAssignment() const;
        [[nodiscard]] Generator::EmitFuncParams PrepareFuncMoveAssignment() const;
        [[nodiscard]] Generator::EmitFuncParams PrepareFuncDestroy() const;
    };

    // Makes a simple direct type binding, such as those used for built-in C types.
    [[nodiscard]] Generator::BindableType MakeDirectTypeBinding(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::Type &c_type);
}
