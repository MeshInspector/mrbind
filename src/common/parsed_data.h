#pragma once

#include "mrbind/helpers/enum_flag_ops.h"
#include "reflection.h"

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace mrbind
{
    struct Entity;
    struct Type;

    // A base class for classes and namespaces, as those can have nested things in them.
    struct EntityContainer
    {
        MBREFL_STRUCT(
            (std::vector<Entity>)(nested,) // Empty initializer to avoid a Clang error.
        )

        // Argh! And those have to be defined out of line too!
        EntityContainer();
        EntityContainer(const EntityContainer &);
        EntityContainer(EntityContainer &&);
        EntityContainer &operator=(const EntityContainer &);
        EntityContainer &operator=(EntityContainer &&);
        virtual ~EntityContainer();

        // Must define this out of line, after `Entity` is defined.
        // Note `Virtual`! We need to override this in `ClassEntity`.
        virtual void VisitTypes(const std::function<void(Type &type)> &func);
    };

    // Similar to `EntityContainer`, but reflects directly to a vector, to look nicer in the JSON.
    struct EntityList : EntityContainer
    {
        friend auto &reflect_as(EntityList &e)
        {
            return e.nested;
        }
    };

    struct DeclFileName
    {
        std::string canonical;
        friend auto &reflect_as(DeclFileName &self) {return self.canonical;}
    };

    // ---

    struct Type
    {
        MBREFL_STRUCT(
            // As written, but with all scope qualifiers added.
            (std::string)(pretty)
            // With all typedefs expanded, and with all scope qualifiers added.
            (std::string)(canonical)
        )
    };

    // ---

    struct DefaultArgument
    {
        MBREFL_STRUCT(
            // The default argument or empty if none.
            (std::string)(original_spelling)
            // Same, but adjusted to be viable as a C++ expression. (Primarily `{...}` have a type prepended to them.)
            (std::string)(as_cpp_expression)
        )
    };

    struct Comment
    {
        MBREFL_STRUCT(
            // Without leading slashes.
            (std::string)(text)
            // With leading slashes, but with whitespace before then stripped.
            (std::string)(text_with_slashes)
        )
    };

    struct FuncParam
    {
        MBREFL_STRUCT(
            // Name or empty if none.
            (std::optional<std::string>)(name)
            (Type)(type)
            (std::optional<DefaultArgument>)(default_argument)
        )

        void VisitTypes(const std::function<void(Type &type)> &func)
        {
            func(type);
        }
    };

    struct BasicFunc
    {
        BasicFunc() = default;
        BasicFunc(const BasicFunc &) = default;
        BasicFunc(BasicFunc &&) = default;
        BasicFunc &operator=(const BasicFunc &) = default;
        BasicFunc &operator=(BasicFunc &&) = default;
        virtual ~BasicFunc() = default; // This is useful.

        MBREFL_STRUCT(
            (std::optional<Comment>)(comment)
            (std::vector<FuncParam>)(params)
        )

        // Respecting the default arguments, is this callable with `n` arguments?
        [[nodiscard]] bool IsCallableWithNumArgs(std::size_t n) const
        {
            if (params.size() < n)
                return false;

            for (std::size_t i = n; i < params.size(); i++)
            {
                if (!params[i].default_argument)
                    return false;
            }

            return true;
        }

        void VisitTypes(const std::function<void(Type &type)> &func)
        {
            for (FuncParam &param : params)
                param.VisitTypes(func);
        }
    };

    struct BasicReturningFunc : BasicFunc
    {
        MBREFL_STRUCT(
            (Type)(return_type)
        , // Bases:
            (BasicFunc)
        )

        void VisitTypes(const std::function<void(Type &type)> &func)
        {
            BasicFunc::VisitTypes(func);
            func(return_type);
        }
    };

    MBREFL_ENUM( RefQualifier,
        (none)
        (lvalue)
        (rvalue)
    )

    struct BasicReturningClassFunc : BasicReturningFunc
    {
        MBREFL_STRUCT(
            (bool)(is_const, false)
            (RefQualifier)(ref_qualifier, RefQualifier::none)
        , // Bases:
            (BasicReturningFunc)
        )
    };

    // ---

    struct EnumElem
    {
        MBREFL_STRUCT(
            (std::optional<Comment>)(comment)

            // The name, without any scope qualifiers.
            (std::string)(name)
            // The value, even if not specified manually.
            // If `EnumEntity::is_signed == true`, must cast this to `std::int64_t`!
            (std::uint64_t)(unsigned_value, 0)
        )
    };

    struct EnumEntity
    {
        static constexpr std::string_view name_in_variant = "enum";

        MBREFL_STRUCT(
            (std::optional<Comment>)(comment)

            // The name, without any scope qualifiers.
            (std::string)(name)
            // The name with full scope qualifiers.
            (std::string)(full_type)
            // The underlying type (as in `enum E : unsigned short`), even if not manually specified.
            // This is always canonical, i.e. all typedefs are expanded.
            (std::string)(canonical_underlying_type)

            // Whether this is a `enum class`.
            (bool)(is_scoped, false)

            // Whether the underlying type is signed.
            (bool)(is_signed, false)

            (std::vector<EnumElem>)(elems)

            // A path to the file where this is defined.
            (DeclFileName)(declared_in_file)
        )

        void VisitTypes(const std::function<void(Type &type)> &func)
        {
            (void)func;

            // Not visiting `canonical_underlying_type` right now. Since it'll always be a boring-ass integral type, it's probably fine?
        }
    };

    // ---

    struct FuncEntity : BasicReturningFunc
    {
        static constexpr std::string_view name_in_variant = "function";

        MBREFL_STRUCT(
            // Name as a single identifier.
            (std::string)(name)
            // Same, but for overloaded operators this instead contains its name as an identifier.
            (std::string)(simple_name)
            // Name with all scope qualifiers added.
            (std::string)(qual_name)
            // Name with all scope qualifiers and template arguments added.
            (std::string)(full_qual_name)

            // A path to the file where this is defined.
            (DeclFileName)(declared_in_file)
        , // Bases:
            (BasicReturningFunc)
        )

        [[nodiscard]] bool IsOverloadedOperator() const
        {
            return name != simple_name;
        }
    };

    // ---

    struct ClassField
    {
        static constexpr std::string_view name_in_variant = "field";

        MBREFL_STRUCT(
            (std::optional<Comment>)(comment)

            // Name as a single identifier.
            (std::string)(name)
            // Usually same as `name`, but for variable templates also includes the template arguments.
            (std::string)(full_name)

            (Type)(type)

            (bool)(is_static, false)
        )

        void VisitTypes(const std::function<void(Type &type)> &func)
        {
            func(type);
        }
    };

    MBREFL_ENUM( CopyMoveKind,
        (none)
        (copy) // Copy ctor or copy assignment. Copy&swap assignments happens to go here too.
        (move) // Move ctor or move assignment.

        // Only for assignment. This is when the parameter is a non-reference of the same type. This probably means it's a copy-and-swap assignment.
        // Note that those can never be trivial.
        (by_value_assignment)
    )

    struct ClassCtor : BasicFunc
    {
        static constexpr std::string_view name_in_variant = "constructor";

        MBREFL_STRUCT(
            (bool)(is_explicit, false)
            // This can only be true for defauly/copy/move constructors.
            (bool)(is_trivial, false)
            (CopyMoveKind)(kind, CopyMoveKind::none)
            // Template argument list including the `<...>`, or null if none.
            // Other kinds of functions don't have this, because for them we store the name with and without the template arguments,
            //   and for them you just take a substring on the name with arguments.
            (std::optional<std::string>)(template_args)
        , // Bases:
            (BasicFunc)
        )
    };

    struct ClassMethod : BasicReturningClassFunc
    {
        static constexpr std::string_view name_in_variant = "method";

        MBREFL_STRUCT(
            (bool)(is_static, false)

            // Name as a single identifier.
            (std::string)(name)
            // Same, but for overloaded operators this instead contains a placeholder name without punctuation (such as `_Plus` instead of `operator+`).
            (std::string)(simple_name)
            // Same as `name`, but also includes template arguments, if any.
            (std::string)(full_name)

            // This isn't `none` only if this is a copy/move assignment.
            (CopyMoveKind)(assignment_kind, CopyMoveKind::none)
            // This can only be true for copy/move assignments.
            (bool)(is_trivial_assignment, false)
        , // Bases:
            (BasicReturningClassFunc)
        )

        [[nodiscard]] bool IsOverloadedOperator() const
        {
            return name != simple_name;
        }

        // Do we have template arguments?
        [[nodiscard]] bool HasTemplateArguments() const
        {
            return !TemplateArguments().empty();
        }

        // Template arguments if any, or empty.
        [[nodiscard]] std::string_view TemplateArguments() const
        {
            return std::string_view(full_name).substr(name.size());
        }
    };

    struct ClassConvOp : BasicReturningClassFunc
    {
        static constexpr std::string_view name_in_variant = "conversion_operator";

        MBREFL_STRUCT(
            (bool)(is_explicit, false)
        , // Bases:
            (BasicReturningClassFunc)
        )
    };

    struct ClassDtor
    {
        static constexpr std::string_view name_in_variant = "destructor";

        MBREFL_STRUCT(
            (std::optional<Comment>)(comment)
            (bool)(is_trivial, false)
        )

        void VisitTypes(const std::function<void(Type &type)> &func)
        {
            (void)func;
        }
    };

    using ClassMemberVariant = std::variant<ClassField, ClassCtor, ClassMethod, ClassConvOp, ClassDtor>;

    struct ClassBase
    {
        MBREFL_STRUCT(
            (Type)(type)
            (bool)(is_virtual, false)
        )

        void VisitTypes(const std::function<void(Type &type)> &func)
        {
            func(type);
        }
    };

    MBREFL_ENUM( ClassKind,
        (struct_)
        (class_)
        (union_)
    )

    struct ClassEntity : EntityContainer
    {
        static constexpr std::string_view name_in_variant = "class";

        MBREFL_STRUCT(
            (std::optional<Comment>)(comment)

            (ClassKind)(kind, ClassKind::struct_)

            // Name as a single identifier.
            (std::string)(name)

            // Name with all scope qualifiers added.
            (std::string)(full_type)

            (std::vector<ClassBase>)(bases)

            (std::vector<ClassMemberVariant>)(members)

            (bool)(is_aggregate, false)

            // A path to the file where this is defined.
            (DeclFileName)(declared_in_file)
        , // Bases:
            (EntityContainer)
        )

        void VisitTypes(const std::function<void(Type &type)> &func) override
        {
            EntityContainer::VisitTypes(func);

            for (auto &base : bases)
                base.VisitTypes(func);

            for (auto &member : members)
                std::visit([&](auto &elem){elem.VisitTypes(func);}, member);
        }
    };

    // ---

    struct TypedefEntity
    {
        static constexpr std::string_view name_in_variant = "typedef";

        MBREFL_STRUCT(
            (std::optional<Comment>)(comment)

            // Name as a single identifier.
            (std::string)(name)

            // Name with all scope qualifiers added.
            (std::string)(full_name)

            // Target type.
            (Type)(type)

            // A path to the file where this is defined.
            (DeclFileName)(declared_in_file)
        )

        void VisitTypes(const std::function<void(Type &type)> &func)
        {
            func(type);
        }
    };

    // ---

    struct NamespaceEntity : EntityContainer
    {
        static constexpr std::string_view name_in_variant = "namespace";

        MBREFL_STRUCT(
            (std::optional<Comment>)(comment)

            // Name as a single word. Empty if anonymous.
            (std::optional<std::string>)(name)

            (bool)(is_inline, false)

            // A path to the file where this is defined.
            (DeclFileName)(declared_in_file)
        , // Bases:
            (EntityContainer)
        )
    };

    // ---

    using EntityVariant = std::variant<EnumEntity, FuncEntity, ClassEntity, TypedefEntity, NamespaceEntity>;

    struct Entity
    {
        // Using `unique_ptr` here to stabilize the address.
        // We need this because we add methods to classes late, because that's how things are.
        std::unique_ptr<EntityVariant> variant;

        friend auto &reflect_as(Entity &e)
        {
            if (!e.variant)
                e.variant = std::make_unique<EntityVariant>();
            return *e.variant;
        }

        template <typename T, typename ...P>
        T &emplace(P &&... params)
        {
            if (!variant)
            {
                variant = std::make_unique<EntityVariant>(std::in_place_type<T>, std::forward<P>(params)...);
                return std::get<T>(*variant);
            }
            else
            {
                return variant->emplace<T>(std::forward<P>(params)...);
            }
        }

        Entity() = default;
        Entity(const Entity &other) : variant(std::make_unique<EntityVariant>(*other.variant)) {}
        Entity(Entity &&other) : variant(std::make_unique<EntityVariant>(std::move(*other.variant))) {}
        Entity &operator=(const Entity &other) {variant = std::make_unique<EntityVariant>(*other.variant); return *this;}
        Entity &operator=(Entity &&other) {variant = std::make_unique<EntityVariant>(std::move(*other.variant)); return *this;}

        void VisitTypes(const std::function<void(Type &type)> &func)
        {
            if (variant)
                std::visit([&](auto &elem){elem.VisitTypes(func);}, *variant);
        }
    };

    MBREFL_ENUM( TypeUses,
        // Those bits are valid in all cases:

        // Some function returns this.
        (returned, = 1 << 0)
        // Some function uses this as a parameter.
        (parameter, = 1 << 1)
        // This is a parsed class or enum.
        (parsed, = 1 << 2)
        // This is a base class.
        (base, = 1 << 3)
        // This is a non-static data member.
        (nonstatic_data_member, = 1 << 4)
        // This is a static data member.
        (static_data_member, = 1 << 5)
        // Some typedef refers to this type.
        (typedef_target, = 1 << 6)

        (_valid_bits, [[maybe_unused]] = (1 << 7) - 1)

        // Those bits are valid only for type SPELLINGS:

        // This spelling is a typedef name (not its target).
        (typedef_name, = 1 << 7)

        (_valid_bits_spelling, [[maybe_unused]] = (1 << 8) - 1)

    , // Internal stuff: (hidden from reflection)

        // This is used internally but should never be set in `struct TypeAltSpellingInfo`.
        _poisoned = 1 << 8,
    )
    MRBIND_FLAG_OPERATORS(TypeUses)

    struct TypeAltSpellingInfo
    {
        MBREFL_STRUCT(
            // This will never contain the `_poisoned` bit.
            (TypeUses)(uses)
        )

        // If this bit is set, the type won't be emitted. So you should never see this in the parser output.
        // This is set by typedefs that have the `mrbind::ignore` attribute, to make sure the spelling doesn't get emitted even if
        //   it later appears in a different context. (E.g. if a function parameter uses this typedef as the spelling, it would normally
        //   get emitted despite the typedef itself being ignored. But the fact that the typedef sets this bit lets us destroy the unwanted spelling.)
        bool poisoned = false;

        void MergeFrom(TypeAltSpellingInfo &&other)
        {
            uses |= other.uses;
            poisoned |= other.poisoned;
        }
    };

    struct TypeInformation
    {
        MBREFL_STRUCT(
            // This is an OR of all `alt_spellings[...].uses`. Neither will ever contain the `_poisoned` bit.
            (TypeUses)(uses)

            // This is a template specialization that got its name from a `preferred_name` attribute.
            // This has the same value in every submap of `type_info` (which can have more than one element when `--combine-types` is used).
            (bool)(has_custom_canonical_name, false)

            // Alternative names for this type.
            // Using the regular `std::map` to ensure a consistent order.
            (std::map<std::string, TypeAltSpellingInfo, std::less<>>)(alt_spellings)
        )

        void MergeFrom(TypeInformation &&other)
        {
            uses |= other.uses;
            has_custom_canonical_name |= other.has_custom_canonical_name; // Hmm.

            alt_spellings.merge(std::move(other.alt_spellings));

            // Merge the remaining alt spellings:
            for (auto &other_elem : other.alt_spellings)
            {
                alt_spellings.at(other_elem.first).MergeFrom(std::move(other_elem.second));
            }
        }
    };

    // ---

    struct ParsedFile
    {
        MBREFL_STRUCT(
            // The name of the file that was parsed.
            (std::string)(original_file)

            // When parsing a header, this is the guessed name of the respective `.cpp` file.
            (std::string)(guessed_impl_file)

            // The preprocessor definitions from the .cpp file corresponding to the parsed header, or a comment with an error message.
            (std::string)(impl_file_preprocessor_directives)

            // ---

            // When splitting data using `MultiplexData()`, this is the part index.
            (int)(fragment_index, 0)
            // ...And this is the total number of parts.
            (int)(num_fragments, 1)

            // ---

            // The contents of this file.
            (EntityList)(entities)

            // ---

            // Information about the types.
            // Using the regular `std::map` to ensure a consistent order.
            // Normally the nested maps only have one key, with the same value as the enclosing key.
            // This stops being true when similar types are combined, then the outer map will only contain simplified type names, and the inner maps will contain all the original variant spellings of it.
            (std::map<std::string, std::map<std::string, TypeInformation, std::less<>>, std::less<>>)(type_info)
        )
    };


    // --- Definitions:

    inline EntityContainer::EntityContainer() = default;
    inline EntityContainer::EntityContainer(const EntityContainer &) = default;
    inline EntityContainer::EntityContainer(EntityContainer &&) = default;
    inline EntityContainer &EntityContainer::operator=(const EntityContainer &) = default;
    inline EntityContainer &EntityContainer::operator=(EntityContainer &&) = default;
    inline EntityContainer::~EntityContainer() = default;

    inline void EntityContainer::VisitTypes(const std::function<void(Type &type)> &func)
    {
        for (Entity &e : nested)
            e.VisitTypes(func);
    }
}
