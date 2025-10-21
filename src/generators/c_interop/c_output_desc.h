#pragma once

#include "common/ordered_set_and_map.h"
#include "common/parsed_data.h"
#include "common/reflection.h"

#include <cppdecl/declarations/data.h>

#include <map>
#include <string>
#include <variant>
#include <vector>

namespace mrbind::CInterop
{
    // Lists bases and derived classes for a single class.
    struct InheritanceInfo
    {
        MBREFL_ENUM_IN_CLASS( Kind,
            (non_virt) // Non-virtual, possibly indirect.
            (true_virt) // True virtual base.
            (virt_path) // A non-virtual base inherited along a virtual path.
            (ambiguous)
        )

        // Using ordered containers to sort everything automatically.
        // All strings here are pre-baked with `cppdecl`.

        MBREFL_STRUCT(
            // Only direct virtual and non-virtual bases. This isn't very useful for virtual bases, but that's what the parser emits.
            // The `true` value means that the base is virtual.
            (OrderedMap<std::string, bool>)(bases_direct_combined)

            // Classes directly derived from this one, non-virtually.
            // This is the reverse mapping for a part of `bases_direct_combined` (with `false` values).
            (std::set<std::string, std::less<>>)(derived_direct_nonvirtual)

            // All virtual bases of this class, including indirect ones, but excluding non-virtual bases inherited through a virtual path.
            (OrderedSet<std::string>)(bases_indirect_true_virtual)

            // Both direct and indirect. This does include the non-virtual bases of virtual bases, which isn't listed anywhere else.
            (OrderedMap<std::string, Kind>)(bases_indirect)
            // The reverse mapping for `bases_indirect`. This is sorted instead of being ordered, because there's no meaningful order to maintain here.
            (std::map<std::string, Kind, std::less<>>)(derived_indirect)
        )


        // Queries `bases_indirect` or `derived_indirect`, returns true if it's not empty.
        [[nodiscard]] bool HaveAnyIndirect(bool derived) const;

        // Queries `bases_indirect` or `derived_indirect`, returns true if we have at least one base/derived with the specified `kind`.
        [[nodiscard]] bool HaveIndirectOfKind(bool derived, Kind kind) const;

        // Do we have a direct base/derived with this name?
        [[nodiscard]] bool HaveDirectNonVirtualNamed(bool derived, std::string_view name) const;

        void ForEachIndirect(bool derived, auto &&func) const
        {
            if (derived)
            {
                for (const auto &elem : derived_indirect)
                    func(elem);
            }
            else
            {
                for (const auto &elem : bases_indirect.Vec())
                    func(*bases_indirect.Map().find(elem));
            }
        }
    };


    struct Comment
    {
        MBREFL_STRUCT(
            // The comment, or empty if none. Has a trailing newline if not empty. Includes `//` and/or `/**/` (possibly multiple blocks).
            (std::string)(c_style)
        )
    };

    struct OutputFile
    {
        MBREFL_STRUCT(
            // This is the relative name of the output header and source declaring this entity, minus the extension (which are the same).
            // Forward slashes are used as separators.
            (std::string)(relative_name)
        )
    };

    struct EnumElem
    {
        MBREFL_STRUCT(
            (Comment)(comment)
            (std::string)(name)

            // The value of this element, cast to `uint64_t`.
            // If the enum itself is marked as signed, you must cast this back to `int64_t`.
            (std::uint64_t)(unsigned_value)
        )
    };

    // Describes a single class field.
    struct ClassField
    {
        // Describes the location of this field in an exposed struct.
        struct Layout
        {
            MBREFL_STRUCT(
                (std::size_t)(byte_size, std::size_t(-1))
                (std::size_t)(byte_alignment, std::size_t(-1))
                (std::size_t)(byte_offset, std::size_t(-1))
            )

            Layout() {} // Ugh.
        };

        struct Accessor
        {
            MBREFL_STRUCT(
                // Either the return type or the parameter type, depending on what function this is.
                (std::string)(type)

                // The C name of this function.
                (std::string)(c_name)
            )
        };

        MBREFL_STRUCT(
            (Comment)(comment)

            (bool)(is_static, false)
            (std::string)(type)

            (std::string)(name)
            // Only matters for static variable templates, where it includes template arguments. Otherwise it's equal to `name`.
            (std::string)(full_name)

            // Those will be null if the corresponding function isn't generated: [
            (std::optional<Accessor>)(getter_const)
            (std::optional<Accessor>)(getter_mutable)
            (std::optional<Accessor>)(setter)
            (std::optional<Accessor>)(getter_array_size) // If the field is an array, this function returns its size.
            // ]

            // Describes the location of this field in an exposed struct.
            // This is set for all non-static members of classes with `kind == ClassKind::exposed_struct`, and only for those.
            (std::optional<Layout>)(layout)
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

    // Describes a single parameter of a free function or of a method.
    struct FuncParam
    {
        // This additional information is added to the `this` parameter, if any.
        struct This
        {
            MBREFL_STRUCT(
                // If true, this is a static member function. If false, a non-static one.
                (bool)(is_static, false)
            )

            This() {} // Need this to make `std::optional` below happy.
        };

        MBREFL_STRUCT(
            // The C++ type of this parameter.
            (std::string)(cpp_type)

            // The parameter name, or null if unnamed.
            (std::optional<std::string>)(name)
            // The parameter name, or some unique placeholder name if unnamed.
            (std::string)(name_or_placeholder)

            // The C++ spelling of the default argument of this parameter, if any.
            // If this is set, we have a default argument.
            (std::optional<std::string>)(default_arg_spelling)
            // If this is true, then `default_arg_spelling` will also be set.
            // This being true indicates that the default argument affects the parameter passing style.
            // If this is false, you should pass the parameter with the same ABI as if there was no default argument,
            //   typically by passing a null pointer.
            (bool)(default_arg_affects_parameter_passing, false)

            // Modifies how the parameter is passed.
            // If this is true, you must know the sugared parameter passing style for this specific type,
            //   or you won't be able to call the function correctly.
            (bool)(uses_sugar, false)

            // If set, this is the `this` parameter of a class method. Otherwise the method is static.
            // Only the first parameter can have this set.
            (std::optional<This>)(this_param)
        )
    };

    // Describes the return type and related proeprties of a free function or a method.
    struct FuncReturn
    {
        MBREFL_STRUCT(
            // The returned C++ type.
            (std::string)(cpp_type)

            // Modifies how the parameter is passed.
            // If this is true, you must know the sugared returning style for this specific type,
            //   or you won't be able to call the function correctly.
            (bool)(uses_sugar, false)
        )
    };

    namespace FuncKinds
    {
        // A regular member function. Not an overloaded operator, not a conversion operator, not a constructor, not a destructor.
        struct Regular
        {
            static constexpr std::string_view name_in_variant = "regular";

            MBREFL_STRUCT(
                // The name with all qualifiers.
                (std::string)(name)
                // The name with all qualifiers and with template arguments, if any. Otherwise equal to `name`.
                (std::string)(full_name)

                // No `is_static` because that can be guessed from the parameters.
            )
        };

        // An overload operator.
        // Copy/move assignment is skipped and doesn't arrive here at all. It's only visible in `traits`.
        struct Operator
        {
            static constexpr std::string_view name_in_variant = "operator";

            MBREFL_STRUCT(
                // Which operator this is.
                (std::string)(token)
            )
        };
    }

    using FuncKindVar = std::variant<FuncKinds::Regular, FuncKinds::Operator>;

    struct BasicFuncLike
    {
        MBREFL_STRUCT(
            (Comment)(comment)

            // The C function name.
            (std::string)(c_name)

            // The return type.
            (FuncReturn)(ret)
            // The parameters.
            (std::vector<FuncParam>)(params)

            // Was this marked as `[[deprecated]]`?
            // Can hold a deprecation message. If holds an empty string, it was deprecated without a message.
            (std::optional<std::string>)(is_deprecated)
        )
    };

    // A free function.
    struct Function : BasicFuncLike
    {
        MBREFL_STRUCT(
            (OutputFile)(output_file)
            (FuncKindVar)(var)
        , // Bases:
            (BasicFuncLike)
        )
    };

    namespace MethodKinds
    {
        // A regular member function. Not an overloaded operator, not a conversion operator, not a constructor, not a destructor.
        struct Regular
        {
            static constexpr std::string_view name_in_variant = "regular";

            MBREFL_STRUCT(
                // The name without (!) qualifiers.
                (std::string)(name)
                // The name without (!) qualifiers and with template arguments, if any. Otherwise equal to `name`.
                (std::string)(full_name)

                // No `is_static` because that can be guessed from the parameters.
            )
        };

        // A constructor. For most purposes this is similar to a static member function.
        struct Constructor
        {
            static constexpr std::string_view name_in_variant = "constructor";
            MBREFL_STRUCT(
                // The template arguments including `<...>`, or empty if none.
                (std::string)(template_args)
            )
        };

        // An overload operator.
        // Copy/move assignment is skipped and doesn't arrive here at all. It's only visible in `traits`.
        struct Operator
        {
            static constexpr std::string_view name_in_variant = "operator";

            MBREFL_STRUCT(
                // Which operator this is.
                (std::string)(token)
            )
        };

        // A conversion operator. The parameter list is always empty.
        struct ConversionOperator
        {
            static constexpr std::string_view name_in_variant = "conversion";
            MBREFL_STRUCT()
        };
    }

    using MethodKindVar = std::variant<MethodKinds::Regular, MethodKinds::Constructor, MethodKinds::Operator, MethodKinds::ConversionOperator>;

    // Describes a single class method.
    struct ClassMethod : BasicFuncLike
    {
        MBREFL_STRUCT(
            (MethodKindVar)(var)
        , // Bases:
            (BasicFuncLike)
        )
    };

    MBREFL_ENUM( ClassKind,
        // Instances of this class can't be created by user, and it can't be passed by value.
        // Only opaque references to the class can be used.
        (ref_only)
        // Uses an opaque heap pointer, the parameters are accompanied by the pass-by enum.
        (uses_pass_by_enum)
        // Trivial enough to be passed in parameters as a pointer, the contents of which can always be copied.
        (trivial_via_ptr)
        // An exposed C struct. If this was parsed from C++ rather than invented, then the C++ struct will have the same layout as well.
        (exposed_struct)
    )

    namespace TypeKinds
    {
        // This shouldn't appear in the output.
        struct Invalid
        {
            static constexpr std::string_view name_in_variant = "invalid";
            MBREFL_STRUCT()
        };

        // Literally `void`.
        // Not valid as a parameter.
        struct Void
        {
            static constexpr std::string_view name_in_variant = "void";
            MBREFL_STRUCT()
        };

        // An empty tag struct. Doesn't need any codegen in C#.
        struct EmptyTag
        {
            static constexpr std::string_view name_in_variant = "empty_tag";
            MBREFL_STRUCT()
        };

        // C arithmetic types, including bool and `[u]int??_t` typedefs.
        struct Arithmetic
        {
            static constexpr std::string_view name_in_variant = "arithmetic";
            MBREFL_STRUCT()
        };

        // C enum, either parsed or invented.
        struct Enum
        {
            static constexpr std::string_view name_in_variant = "enum";

            MBREFL_STRUCT(
                (OutputFile)(output_file)

                (Comment)(comment)

                // How is this enum called in C?
                (std::string)(c_name)

                // The underlying C++ type. This is always specified, even when it's implicit.
                // Look this up in `OutputDesc::platform_info`, it's guaranteed to be specified there.
                // That's how you determine the enum signedness.
                (std::string)(underlying_type)

                // The member elements.
                (std::vector<EnumElem>)(elems)
            )
        };

        // A class, either parsed or invented.
        struct Class
        {
            static constexpr std::string_view name_in_variant = "class";

            struct SizeAndAlignment
            {
                MBREFL_STRUCT(
                    (std::size_t)(size, std::size_t(-1))
                    (std::size_t)(alignment, std::size_t(-1))
                )

                SizeAndAlignment() {} // Ugh!
            };

            MBREFL_STRUCT(
                (OutputFile)(output_file)

                (Comment)(comment)

                // How is this class called in C?
                (std::string)(c_name)

                // What kind of a class is this?
                (ClassKind)(kind, ClassKind::uses_pass_by_enum)

                // The class fields.
                (std::vector<ClassField>)(fields)

                // The class methods.
                (std::vector<ClassMethod>)(methods)

                // Everything about the bases and the derived classes.
                (InheritanceInfo)(inheritance_info)

                // Currently this is only set if `kind == exposed_struct`.
                (std::optional<SizeAndAlignment>)(size_and_alignment)
            )
        };

        // A non-owning pointer.
        struct PointerNonOwning
        {
            static constexpr std::string_view name_in_variant = "pointer_non_owning";
            MBREFL_STRUCT()
        };

        // A non-owning pointer.
        struct ReferenceNonOwning
        {
            static constexpr std::string_view name_in_variant = "reference_non_owning";
            MBREFL_STRUCT()
        };

        // When this a parameter, it takes ownership of the raw pointer.
        // When this a return value, it releases ownership of the raw pointer.
        struct PointerTransferingOwnership
        {
            static constexpr std::string_view name_in_variant = "pointer_transfering_ownership";
            MBREFL_STRUCT(
                (std::string)(deleter_func) // Which C function should be called to free this pointer.
            )
        };
    }

    using TypeKindVar = std::variant<
        TypeKinds::Invalid, // Must be first.
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

            (TypeTraits)(traits)
        )
    };

    // The combined description of the C generator output.
    struct OutputDesc
    {
        MBREFL_STRUCT(
            // Maps C++ type names to their descriptions.
            // The C generator fills it at the end for the `BindableType`s, so don't write to this manually for your specific types.
            (OrderedMap<std::string, TypeDesc>)(cpp_types)

            // The list of free functions.
            (std::vector<Function>)(functions)

            // The platform information, propagated as is from the parser output.
            (PlatformInfo)(platform_info)
        )
    };
}
