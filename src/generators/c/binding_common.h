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

    // A simple function that returns `typedef struct X X;`, replacing `X` with the given name.
    [[nodiscard]] std::string MakeStructForwardDeclaration(std::string_view c_type_name);

    // Make a simple direct type binding, such as those used for built-in C types.
    // This trusts you that the type is bindable in this (direct) manner.
    [[nodiscard]] Generator::BindableType MakeSimpleDirectTypeBinding(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::Type &c_type);

    // Make a simple type binding. This is mostly a superset of `MakeSimpleDirectTypeBinding()` that also allows casts. Conditionally selects the right strategy based on what the type is.
    // All parsed non-class types are handled through this.
    // Unlike `MakeSimpleDirectTypeBinding()` this analyzes the type and may refuse to bind it if it doesn't understand what it is and what strategy to apply.
    [[nodiscard]] std::optional<Generator::BindableType> MakeSimpleTypeBinding(Generator &generator, const cppdecl::Type &cpp_type);

    // If `cpp_type` is one of `target_name {const &, &&, const &&}`, then generates a default binding for them `using `MakeSimpleTypeBinding()`, and then patches the parameter usage to match those of a by-value `target_name`.
    // If `cpp_type` isn't one of the listed types, returns null.
    // If `cpp_type` is one of those types, but the default binding for `cpp_type` couldn't be generated, or if there's no binding for `target_name`, throws.
    [[nodiscard]] std::optional<Generator::BindableType> BindRefParamsExceptNonConstLvalueSameAsNonRef(Generator &generator, const cppdecl::Type &cpp_type, std::string_view target_name);
}
