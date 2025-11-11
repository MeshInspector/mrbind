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

        // This defaults to empty, which means no inheritance. You can assign to this manually after construction.
        // Making this `optional` and requiring to fill it manually for every class is too much hassle.
        CInterop::InheritanceInfo inheritance_info;

        // This defaults to false. This only matters for the C interop, to allow clients to call `dynamic_cast`s.
        bool mark_polymorphic = false;

        // If `new_c_type_name_base` isn't empty, it's used as the C type name (the prefix is added automatically, don't call `MakePublicHelperName()` yourself).
        // If `new_underlying_c_type_base_name` isn't empty, it's used as the true underlying canonical type name in the C code (the prefix is added automatically, don't call `MakePublicHelperName()` yourself).
        // It's not used in the method names and such, and not in the user-facing typedef for this type. Only in the struct name.
        // Don't forget to set `traits` after this, some functionality requires it.
        [[nodiscard]] static HeapAllocatedClassBinder ForCustomType(Generator &generator, cppdecl::QualifiedName new_cpp_type_name, std::string_view new_c_type_name_base = "", std::string new_underlying_c_type_base_name = "");

        // Essentially does `c_type_name + "_" + name`. Use this to generate all the member function names.
        // This is fine for "static" member functions too.
        // If `interop_var` isn't specified, the `CInterop::MethodKinds::Regular` is used, with the same `name`.
        [[nodiscard]] Generator::EmitFuncParams::Name MakeMemberFuncName(const Generator &generator, std::string name, std::optional<CInterop::MethodKindVar> interop_var = {}) const;

        // The `comment` can be empty. Otherwise it must end with a newline and must include leading slashes.
        void EmitForwardDeclaration(Generator &generator, Generator::OutputFile &file, std::string comment) const;

        // Fills most of the contents that `type` needs to have.
        // The only thing that you need to set manually in addition to this is `.bindable_with_same_address.declared_in_file`, to a lambda generating your file.
        void FillCommonParams(Generator &generator, Generator::BindableType &type);

        // Those are used internally by `FillCommonParams()`, but you can call them manually too:
        // [

        // Returns the forward declaration string.
        // `...NoReg` means this doesn't register the type in the output JSON, so prefer `EmitForwardDeclaration()`.
        [[nodiscard]] std::string MakeForwardDeclarationNoReg() const;

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
    // NOTE: Only use this for filling `TypeBindableWithSameAddress`. Don't use this for codegen, as this doesn't register types (hence `...NoReg`).
    //   Instead use `HeapAllocatedClassBinder::EmitForwardDeclaration()` or `EmitRefOnlyStructForwardDeclaration()` or something else.
    [[nodiscard]] std::string MakeStructForwardDeclarationNoReg(std::string_view c_type_name, std::string_view c_underlying_type_name = "");


    // This goes into the `BindableType::is_useless_default_argument` callback, to reject nullptr default arguments.
    // As that callback requires, returns the string describing the default argument if it wants to reject it.
    [[nodiscard]] std::optional<std::string> CheckPointerDefaultArgumentForNullptr(std::string_view default_arg);


    // This pastes the `MakeStructForwardDeclarationNoReg(...)` into the file, but also registers the type as a ref-only type.
    // Objects of those types can't be created by the C user, but pointers and references to them can still be passed around.
    // The `comment` is pasted before the declaration if not empty. Must end with a line break. Must include the leading slashes.
    void EmitRefOnlyStructForwardDeclaration(Generator &generator, Generator::OutputFile &file, std::string comment, std::string_view c_type_name, std::string_view c_underlying_type_name = "");


    // If this is a simple enough type, returns its size and alignment.
    // Works only for primitive arithmetic types, and for pointers.
    [[nodiscard]] std::optional<Generator::TypeSizeAndAlignment> GetSizeAndAlignmentForPrimitiveType(Generator &generator, const cppdecl::Type &cpp_type);


    // Predefined bindings: [

    // Make a simple direct type binding, such as those used for built-in C types.
    // This trusts you that the type is bindable in this (direct) manner.
    // `override_size_and_alignment` lets you override the size and alignment of this type (assumed to be matching between C and C++ if set).
    //   Otherwise it's guessed from the name, or unset if unknown.
    [[nodiscard]] Generator::BindableType MakeSimpleDirectTypeBinding(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::Type &c_type, std::optional<Generator::TypeSizeAndAlignment> override_size_and_alignment = {});

    // Make a simple type binding. This is mostly a superset of `MakeSimpleDirectTypeBinding()` that also allows casts. Conditionally selects the right strategy based on what the type is.
    // All parsed non-class types are handled through this.
    // Unlike `MakeSimpleDirectTypeBinding()` this analyzes the type and may refuse to bind it if it doesn't understand what it is and what strategy to apply.
    [[nodiscard]] std::optional<Generator::BindableType> MakeSimpleTypeBinding(Generator &generator, const cppdecl::Type &cpp_type);

    // This isn't very useful for user-written bindings. Prefer `HeapAllocatedClassBinder::FillCommonParams()` instead.
    // Maybe we should destroy this function altogether and leave only the `FillCommonParams()`.
    // The only difference is that `FillCommonParams()` also fills `.bindable_with_same_address`, which this one doesn't need to do,
    //   because it's for parsed classes only, and they populate `Generator::types_bindable_with_same_address` directly.
    [[nodiscard]] Generator::BindableType MakeByValueParsedClassBinding(Generator &generator, const cppdecl::QualifiedName &cpp_type, std::string_view c_type_str, const Generator::TypeTraits &traits);

    // Makes a binding that passes everything by value and uses `std::bit_cast()`. This is used for the `--expose-as-struct` structs (same-layout structs).
    // For better or wose this doesn't fill `.bindable_with_same_address`, since it's for parsed classes only, and those don't need it (as they are added
    //   to the `types_bindable_with_same_address` map independently).
    // Maybe we should change it so that the parsed classes use `.bindable_with_same_address` too.
    [[nodiscard]] Generator::BindableType MakeBitCastClassBinding(Generator &generator, const cppdecl::QualifiedName &cpp_type, std::string_view c_type_str, const Generator::TypeTraits &traits, const Generator::TypeSizeAndAlignment &size_and_alignment);

    // If `cpp_type` is one of `target_name {const &, &&, const &&}`, then generates a default binding for them `using `MakeSimpleTypeBinding()`, and then patches the parameter usage to match that of a by-value `target_name`.
    // If `cpp_type` isn't one of the listed types, returns null.
    // If `cpp_type` is one of those types, but the default binding for `cpp_type` couldn't be generated, or if there's no binding for `target_name`, throws.
    // The intent behind this is to propagate fancy custom parameter usage to those reference parameters.
    // This is only necessary if the custom parameter usage exists in the first place.
    [[nodiscard]] std::optional<Generator::BindableType> BindNonConstOrRvalueRefParamsSameAsNonRef(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::QualifiedName &target_name, const cppdecl::QualifiedName::EqualsFlags comparison_flags = {});

    // Same, but only acts on rvalue reference parameters, never on lvalue ones.
    [[nodiscard]] std::optional<Generator::BindableType> BindRvalueRefParamsSameAsNonRef(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::QualifiedName &target_name, const cppdecl::QualifiedName::EqualsFlags comparison_flags = {});

    // Create a parameter usage in the style of `std::string` and `std::string_view`.
    // If `from_one_pointer` and/or `from_two_pointers` are provided, they are used instead of calling the constructor of `cpp_type_name` with one and two pointers respectively.
    [[nodiscard]] Generator::BindableType::ParamUsageWithDefaultArg MakeStringLikeParamUsageSupportingDefaultArg(
        std::string_view cpp_type_name,
        std::function<std::string(std::string_view begin)> from_one_pointer = nullptr,
        std::function<std::string(std::string_view begin, std::string_view end)> from_two_pointers = nullptr
    );

    // ]
}
