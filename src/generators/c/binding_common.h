#pragma once

#include "generators/c/generator.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/to_string.h>

namespace mrbind::CBindings
{
    struct HeapAllocatedClassBinder
    {
        cppdecl::QualifiedName cpp_type_name;

        // The user-facing type name.
        std::string c_type_name;

        // If not empty, then `c_type_name` becomes a typedef to a struct with this name, instead of a struct with the same name as `c_type_name`.
        std::string c_underlying_type_name;

        // This is required by a lot of things. Making it `std::optional` solely to make it easier to catch forgetting to set it.
        std::optional<Generator::TypeTraits> traits;

        // If `new_underlying_c_type_base_name` isn't empty, it's used as the true underlying canonical type name in the C code (the prefix is added automatically, don't call `MakePublicHelperName()` yourself).
        // It's not used in the method names and such, and not in the user-facing typedef for this type. Only in the struct name.
        // Don't forget to set `traits` after this, some functionality requires it.
        [[nodiscard]] static HeapAllocatedClassBinder ForCustomType(Generator &generator, cppdecl::QualifiedName new_cpp_type_name, std::string new_underlying_c_type_base_name = "");

        // Does `c_type_name + "_" + name`. Use this to generate all the member function names.
        // This is fine for "static" member functions too.
        [[nodiscard]] std::string MakeMemberFuncName(std::string_view name) const;

        void EmitForwardDeclaration(Generator &generator, Generator::OutputFile &file) const;

        // Fills most of the contents that `type` needs to have.
        // The only thing that you need to set manually in addition to this is `.bindable_with_same_address.declared_in_file`, to a lambda generating your file.
        void FillCommonParams(Generator &generator, Generator::BindableType &type);

        // Those are used internally by `FillCommonParams()`, but you can call them manually too:
        // [

        [[nodiscard]] std::string MakeForwardDeclaration() const;

        [[nodiscard]] Generator::BindableType::ReturnUsage MakeReturnUsage(Generator &generator) const;

        // This goes to `param_usage_with_default_arg`. `param_usage` should stay empty, since `param_usage_with_default_arg` alone can handle
        //   both parameters with default arguments and without.
        [[nodiscard]] std::optional<Generator::BindableType::ParamUsageWithDefaultArg> MakeParamUsageSupportingDefaultArg(Generator &generator) const;

        // ]

        // Emit all the member functions enabled in `traits`.
        // If you pass `with_param_sugar == true`, will additionally emit the versions of the combined copy/move ctor and assignment with the sugared parameters.
        // Set `with_param_sugar` to true for classes with fancy parameter usages, such as `std::string` (that gets rewritten into `const char *` pointers in parameters).
        void EmitSpecialMemberFunctions(Generator &generator, Generator::OutputFile &file, bool with_param_sugar = false) const;

        // Those are used internally by `EmitSpecialMemberFunctions()`, but you can call them manually too:
        // [

        [[nodiscard]] Generator::EmitFuncParams PrepareFuncDefaultCtor(Generator &generator) const;

        // This `new`s an array of a runtime size.
        // This exists solely for consistence with array delete, which we need to support `std::unique_ptr<T[]>`.
        [[nodiscard]] Generator::EmitFuncParams PrepareFuncDefaultCtorArray(Generator &generator) const;

        // We use combined copy-move constructors and assignments.
        // Making a second version of the constructor with `with_param_sugar == true` only makes sense if your class has custom
        //   parameter usage (such as `std::string` being rewritten into `const char *` pointers).
        [[nodiscard]] Generator::EmitFuncParams PrepareFuncCopyMoveCtor(Generator &generator, bool with_param_sugar = false) const;

        // We use combined copy-move constructors and assignments.
        // See above for `with_param_sugar`.
        [[nodiscard]] Generator::EmitFuncParams PrepareFuncCopyMoveAssignment(Generator &generator, bool with_param_sugar = false) const;

        [[nodiscard]] Generator::EmitFuncParams PrepareFuncDestroy(Generator &generator) const;

        // This `delete[]`s an array of objects.
        [[nodiscard]] Generator::EmitFuncParams PrepareFuncDestroyArray(Generator &generator) const;

        // Adds an offset to a `T *` pointer.
        [[nodiscard]] Generator::EmitFuncParams PrepareFuncOffsetPtr(Generator &generator, bool is_const) const;

        // ]
    };

    // A simple function that returns `typedef struct c_[underlying_]type_name c_type_name;`.
    // `c_underlying_type_name` is only used if it's not empty. Otherwise we use `c_type_name`.
    [[nodiscard]] std::string MakeStructForwardDeclaration(std::string_view c_type_name, std::string_view c_underlying_type_name = "");

    // Tries to include the rights headers in `file.source` to get `type` to work.
    // Will silently skip the type or some of its parts if we don't know what headers they need.
    void TryIncludeHeadersForCppTypeInSourceFile(Generator &generator, Generator::OutputFile &file, const cppdecl::Type &type);


    // This goes into the `BindableType::is_useless_default_argument` callback, to reject nullptr default arguments.
    // As that callback requires, returns the string describing the default argument if it wants to reject it.
    [[nodiscard]] std::string CheckPointerDefaultArgumentForNullptr(std::string_view default_arg);


    // Predefined bindings: [

    // Make a simple direct type binding, such as those used for built-in C types.
    // This trusts you that the type is bindable in this (direct) manner.
    [[nodiscard]] Generator::BindableType MakeSimpleDirectTypeBinding(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::Type &c_type);

    // Make a simple type binding. This is mostly a superset of `MakeSimpleDirectTypeBinding()` that also allows casts. Conditionally selects the right strategy based on what the type is.
    // All parsed non-class types are handled through this.
    // Unlike `MakeSimpleDirectTypeBinding()` this analyzes the type and may refuse to bind it if it doesn't understand what it is and what strategy to apply.
    [[nodiscard]] std::optional<Generator::BindableType> MakeSimpleTypeBinding(Generator &generator, const cppdecl::Type &cpp_type);

    // This isn't very useful for user-written bindings. Prefer `HeapAllocatedClassBinder::FillCommonParams()` instead.
    // Maybe we should destroy this function altogether and leave only the `FillCommonParams()`.
    // The only difference is that `FillCommonParams()` also fills `.bindable_with_same_address`, which this one doesn't need to do,
    //   because it's for parsed classes only, and they populate `Generator::types_bindable_with_same_address` directly.
    [[nodiscard]] Generator::BindableType MakeByValueClassBinding(Generator &generator, const cppdecl::QualifiedName &cpp_type, std::string_view c_type, const Generator::TypeTraits &traits);

    // If `cpp_type` is one of `target_name {const &, &&, const &&}`, then generates a default binding for them `using `MakeSimpleTypeBinding()`, and then patches the parameter usage to match that of a by-value `target_name`.
    // If `cpp_type` isn't one of the listed types, returns null.
    // If `cpp_type` is one of those types, but the default binding for `cpp_type` couldn't be generated, or if there's no binding for `target_name`, throws.
    // The intent behind this is to propagate fancy custom parameter usage to those reference parameters.
    // This is only necessary if the custom parameter usage exists in the first place.
    [[nodiscard]] std::optional<Generator::BindableType> BindNonConstOrRvalueRefParamsSameAsNonRef(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::QualifiedName &target_name, const cppdecl::QualifiedName::EqualsFlags comparison_flags = {});

    // Same, but only acts on rvalue reference parameters, never on lvalue ones.
    [[nodiscard]] std::optional<Generator::BindableType> BindRvalueRefParamsSameAsNonRef(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::QualifiedName &target_name, const cppdecl::QualifiedName::EqualsFlags comparison_flags = {});

    // ]
}
