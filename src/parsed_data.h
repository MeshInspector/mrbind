#pragma once

#include "mrbind/helpers/enum_flag_ops.h"

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>

namespace mrbind
{
    struct Entity;

    // A base class for classes and namespaces, as those can have nested things in them.
    struct EntityContainer
    {
        std::vector<Entity> nested;
    };

    // ---

    struct Type
    {
        // As written, but with all scope qualifiers added.
        std::string pretty;
        // With all typedefs expanded, and with all scope qualifiers added.
        std::string canonical;
    };

    // ---

    struct FuncParam
    {
        // Name or empty if none.
        std::string name;

        Type type;

        // The default argument or empty if none.
        std::string default_argument;
        // Same, but adjusted to be viable as a C++ expression. (Primarily `{...}` have a type prepended to them.)
        std::string default_argument_cpp;
    };

    struct BasicFunc
    {
        std::optional<std::string> comment;
        std::vector<FuncParam> params;
    };

    struct BasicReturningFunc : BasicFunc
    {
        Type return_type;
    };

    struct BasicReturningClassFunc : BasicReturningFunc
    {
        bool is_const = false;
    };

    // ---

    struct EnumElem
    {
        std::optional<std::string> comment;

        // The name, without any scope qualifiers.
        std::string name;
        // The value, even if not specified manually.
        // If `EnumEntity::is_signed == true`, must cast this to `std::int64_t`!
        std::uint64_t raw_value = 0;
    };

    struct EnumEntity
    {
        std::optional<std::string> comment;

        // The name, without any scope qualifiers.
        std::string name;
        // The name with full scope qualifiers.
        std::string full_type;
        // The underlying type (as in `enum E : unsigned short`), even if not manually specified.
        // This is always canonical, i.e. all typedefs are expanded.
        std::string canonical_underlying_type;

        // Whether this is a `enum class`.
        bool is_scoped = false;

        // Whether the underlying type is signed.
        bool is_signed = false;

        std::vector<EnumElem> elems;
    };

    // ---

    struct FuncEntity : BasicReturningFunc
    {
        // Name as a single identifier.
        std::string name;
        // Same, but for overloaded operators this instead contains its name as an identifier.
        std::string simple_name;
        // Name with all scope qualifiers added.
        std::string qual_name;
        // Name with all scope qualifiers and template arguments added.
        std::string full_qual_name;
    };

    // ---

    struct ClassField
    {
        std::optional<std::string> comment;

        // Name as a single identifier.
        std::string name;
        // Usually same as `name`, but for variable templates also includes the template arguments.
        std::string full_name;

        Type type;

        bool is_static = false;
    };

    enum class CopyMoveKind
    {
        none,
        copy, // Copy ctor or copy assignment. Copy&swap assignments happens to go here too.
        move, // Move ctor or move assignment.
    };

    struct ClassCtor : BasicFunc
    {
        bool is_explicit = false;

        CopyMoveKind kind = CopyMoveKind::none;
    };

    struct ClassMethod : BasicReturningClassFunc
    {
        bool is_static = false;

        // Name as a single identifier.
        std::string name;
        // Same, but for overloaded operators this instead contains a placeholder name without punctuation (such as `_Plus` instead of `operator+`).
        std::string simple_name;
        // Same as `name`, but also includes template arguments, if any.
        std::string full_name;

        // This isn't `none` only if this is a copy/move assignment.
        CopyMoveKind assignment_kind = CopyMoveKind::none;
    };

    struct ClassConvOp : BasicReturningClassFunc {};

    using ClassMemberVariant = std::variant<ClassField, ClassCtor, ClassMethod, ClassConvOp>;

    struct ClassBase
    {
        Type type;
        bool is_virtual = false;
    };

    enum ClassKind {struct_, class_, union_};

    struct ClassEntity : EntityContainer
    {
        std::optional<std::string> comment;

        ClassKind kind = ClassKind::struct_;

        // Name as a single identifier.
        std::string name;

        // Name with all scope qualifiers added.
        std::string full_type;

        std::vector<ClassBase> bases;

        std::vector<ClassMemberVariant> members;

        bool is_aggregate = false;
    };

    // ---

    struct TypedefEntity
    {
        std::optional<std::string> comment;

        // Name as a single identifier.
        std::string name;

        // Name with all scope qualifiers added.
        std::string full_name;

        // Target type.
        Type type;
    };

    // ---

    struct NamespaceEntity : EntityContainer
    {
        std::optional<std::string> comment;

        // Name as a single word.
        std::string name;

        bool is_inline = false;
    };

    // ---

    using EntityVariant = std::variant<EnumEntity, FuncEntity, ClassEntity, TypedefEntity, NamespaceEntity>;

    struct Entity
    {
        // Using `unique_ptr` here to stabilize the address.
        // We need this because we add methods to classes late, because that's how things are.
        std::unique_ptr<EntityVariant> variant;

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
    };

    enum class TypeUses
    {
        // Those bits are valid in all cases:

        // Some function returns this.
        returned = 1 << 0,
        // Some function uses this as a parameter.
        parameter = 1 << 1,
        // This is a parsed class or enum.
        parsed = 1 << 2,
        // This is a base class.
        base = 1 << 3,
        // This is a non-static data member.
        nonstatic_data_member = 1 << 4,
        // This is a static data member.
        static_data_member = 1 << 5,
        // Some typedef refers to this type.
        typedef_target = 1 << 6,

        _valid_bits [[maybe_unused]] = (1 << 7) - 1,

        // Those bits are valid only for type SPELLINGS:

        // This spelling is a typedef name (not its target).
        typedef_name = 1 << 7,

        _valid_bits_spelling [[maybe_unused]] = (1 << 8) - 1,

        // Internal stuff:

        // This is used internally but should never be set in the parser output.
        // Unlike `TypeAltSpellingInfo::poisoned` below, use that instead.
        _poisoned = 1 << 8,
    };
    MRBIND_FLAG_OPERATORS(TypeUses)

    struct TypeAltSpellingInfo
    {
        // This will never contain the `_poisoned` bit.
        TypeUses uses{};

        // If this bit is set, the type won't be emitted.
        // This is set by typedefs that have the `mrbind::ignore` attribute, to make sure the spelling doesn't get emitted even if
        //   it later appears in a different context. (E.g. if a function parameter uses this typedef as the spelling, it would normally
        //   get emitted despite the typedef itself being ignored. But the fact that the typedef sets this bit lets us destroy the unwanted spelling.)
        bool poisoned = false;
    };

    struct TypeInformation
    {
        // This is an OR of all `alt_spellings[...].uses`. Neither will ever contain the `_poisoned` bit.
        TypeUses uses{};

        // This is a template specialization that got its name from a `preferred_name` attribute.
        // This has the same value in every submap of `type_info` (which can have more than one element when `--combine-types` is used).
        bool has_custom_canonical_name = false;

        // Alternative names for this type.
        std::unordered_map<std::string, TypeAltSpellingInfo> alt_spellings;
    };

    // ---

    struct ParsedFile
    {
        // The name of the file that was parsed.
        std::string original_file;

        // When parsing a header, this is the guessed name of the respective `.cpp` file.
        std::string guessed_impl_file;

        // The preprocessor definitions from the .cpp file corresponding to the parsed header, or a comment with an error message.
        std::string impl_file_preprocessor_directives;

        // ---

        // When splitting data using `MultiplexData()`, this is the part index.
        int fragment_index = 0;
        // ...And this is the total number of parts.
        int num_fragments = 1;

        // ---

        // The contents of this file.
        EntityContainer entities;

        // ---

        // Information about the types.
        // Normally the nested maps only have one key, with the same value as the enclosing key.
        // This stops being true when similar types are combined, then the outer map will only contain simplified type names, and the inner maps will contain all the original variant spellings of it.
        std::unordered_map<std::string, std::unordered_map<std::string, TypeInformation>> type_info;
    };
}
