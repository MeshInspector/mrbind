#pragma once

#include <cstdint>
#include <optional>
#include <string>
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
        std::string full_name;
    };

    // ---

    struct ClassField
    {
        std::optional<std::string> comment;

        // Name as a single identifier.
        std::string name;

        Type type;

        bool is_static = false;
    };

    struct ClassCtor : BasicFunc
    {
        bool is_explicit = false;
    };

    struct ClassMethod : BasicReturningClassFunc
    {
        bool is_static = false;

        // Name as a single identifier.
        std::string name;
        // Same, but for overloaded operators this instead contains its name as an identifier.
        std::string simple_name;
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
        EntityVariant variant;
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
    };
}
