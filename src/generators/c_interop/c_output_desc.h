#pragma once

#include "common/reflection.h"

#include <cppdecl/declarations/data.h>

#include <map>
#include <string>
#include <variant>
#include <vector>

#error since everything can be generated, we can't cooperate with the parser output json AT ALL.
#error need to think about it a bit more

namespace mrbind::CInterop
{
    // Describes a single class field.
    struct ClassField
    {
        MBREFL_STRUCT(
            // Use this to loop up the field in the `.members` of the class.
            (std::size_t)(index_in_class, std::size_t(-1))

            // Those will be null if the corresponding function isn't generated: [
            (std::optional<std::string>)(const_getter_return_type)
            (std::optional<std::string>)(mutable_getter_return_type)
            (std::optional<std::string>)(setter_param_type)
            // ]

            // Is this field a plain C-style array? The getters then return pointers.
            // This is a shorthand for parsing the field type and checking if it's an array or not.
            (bool)(is_plain_array, false)

            // If true, this will have no getters and setters because it's exposed directly, because the C struct has the same layout as in C++.
            (bool)(exposed_with_same_layout, false)
        )
    };

    // Some select type traits.
    struct TypeTraits
    {
        MBREFL_STRUCT(
            (bool)(is_default_constructible, false)
            (bool)(is_copy_constructible, false)
            (bool)(is_move_constructible, false)
            (bool)(is_copy_assignable, false)
            (bool)(is_move_assignable, false)
            (bool)(is_destructible, false)

            (bool)(is_trivially_default_constructible, false)
            (bool)(is_trivially_copy_constructible, false)
            (bool)(is_trivially_move_constructible, false)
            (bool)(is_trivially_copy_assignable, false)
            (bool)(is_trivially_move_assignable, false)
            (bool)(is_trivially_destructible, false)
        )
    };

    // Uniquely describes a C++ namespace.
    struct NamespaceScope
    {
        MBREFL_STRUCT(
            // Which C++ namespaces to enter. Relative names only, no `::` in those strings.
            // Empty if none.
            (std::vector<std::string>)(namespaces)
        )
    };

    // Uniquely describes a C++ namespace or class scope.
    struct NamespaceOrClassScope : NamespaceScope
    {
        MBREFL_STRUCT(
            // Which C++ classes to enter.
            // Empty if none.
            (std::vector<std::string>)(classes)
        , // Bases:
            (NamespaceScope)
        )
    };

    namespace TypeKinds
    {
        // Literally `void`.
        // Not valid as a parameter.
        struct Void {MBREFL_STRUCT()};

        // An empty tag struct. Doesn't need any codegen in C#.
        struct EmptyTag {MBREFL_STRUCT()};

        // C arithmetic types, including bool and `[u]int??_t` typedefs.
        struct Arithmetic {MBREFL_STRUCT()};

        // A base class for things that live at namespace or class scopes.
        struct BasicScoped
        {
            MBREFL_STRUCT(
                (NamespaceOrClassScope)(scope)
            )
        };

        // C enum.
        struct Enum : BasicScoped
        {
            MBREFL_STRUCT(
                // How is this enum called in C?
                (std::string)(c_name)
            , // Bases:
                (BasicScoped)
            )
        };

        // A class, either parsed or invented.
        struct Class : BasicScoped
        {
            MBREFL_ENUM_IN_CLASS( Kind,
                // Uses an opaque heap pointer, the parameters are accompanied by the pass-by enum.
                (uses_pass_by_enum)
                // Trivial enough to be passed in parameters as a pointer, the contents of which can always be copied.
                (trivial_via_ptr)
                // Has same layout in C and C++, can be passed by value in C.
                (has_same_layout)
            )

            MBREFL_STRUCT(
                // How is this class called in C?
                (std::string)(c_name)

                // What kind of a class is this?
                (Kind)(kind, Class::Kind::uses_pass_by_enum)

                // The extra information about the fields.
                // The size of this should match the number of fields in the parsed class.
                (std::vector<ClassField>)(fields)
            , // Bases:
                (BasicScoped)
            )
        };

        // A non-owning pointer.
        struct PointerNonOwning {MBREFL_STRUCT()};

        // A non-owning pointer.
        struct ReferenceNonOwning {MBREFL_STRUCT()};

        // When this a parameter, it takes ownership of the raw pointer.
        // When this a return value, it releases ownership of the raw pointer.
        struct PointerTransferingOwnership
        {
            MBREFL_STRUCT(
                (std::string)(deleter_func) // Which C function should be called to free this pointer.
            )
        };
    }

    using TypeKindVar = std::variant<
        std::monostate, // Unknown. This shouldn't happen.
        TypeKinds::Void,
        TypeKinds::EmptyTag,
        TypeKinds::Arithmetic,
        TypeKinds::Enum,
        TypeKinds::Class,
        TypeKinds::PointerNonOwning,
        TypeKinds::ReferenceNonOwning,
        TypeKinds::PointerTransferingOwnership
    >;

    struct TypeDesc
    {
        MBREFL_STRUCT(
            (TypeKindVar)(var)

            // This is an incremental index that represents the original declaration order.
            // This is unique among types.
            (int)(original_type_order, 0)

            (TypeTraits)(traits)
        )
    };

    struct FuncDesc
    {
        struct Param
        {
            MBREFL_STRUCT(
                // If this is set, the default argument on this parameter should be ignored, because it's considered useless.
                // The string explains what the default argument is (why it's useless).
                // This affects the parameter passing style, forcing the default-arg-less style.
                (std::optional<std::string>)(useless_default_argument_desc)
            )
        };

        MBREFL_STRUCT(
            // The class or namespace where this function is declared.
            (NamespaceOrClassScope)(scope)

            // The index of this function in its class or namespace.
            // In a class this is an index into `ClassEntity::members` (cast that to one of: `ClassCtor`, `ClassDtor`, `ClassConvOp`, `ClassMethod`),
            //   and for a namespace this is an index into `NamespaceEntity::EntityContainer::nested` (cast that to `FuncEntity`).
            (std::size_t)(index_in_scope, std::size_t(-1))

            // The size of this should match the size of the function parameter list.
            (std::vector<Param>)(params)

            // This is an incremental index that represents the original declaration order.
            // This is unique among all C functions.
            (int)(original_func_order, 0)
        )
    };

    // The combined description of the C generator output.
    struct OutputDesc
    {
        MBREFL_STRUCT(
            // Maps C++ type names to additional information about them.
            // Using a plain `map` to get a consistent serialization order, just in case.
            (std::map<std::string, TypeDesc>)(cpp_types)

            // Maps C function names to their descriptions.
            // Using a plain `map` to get a consistent serialization order, just in case.
            (std::map<std::string, FuncDesc>)(functions)
        )
    };
}
