#pragma once

#include "common/parsed_data.h"
#include "common/polyfill/std_filesystem_path_hash.h" // IWYU pragma: keep

#include <cppdecl/declarations/data.h>

#include <filesystem>
#include <functional>
#include <map>
#include <set>
#include <span>
#include <string_view>
#include <string>
#include <unordered_set>

namespace mrbind::CBindings
{
    struct Module;

    struct Generator
    {
        Generator();

        // This needs a stable address, at least because some `forward_declare_or_include_header` callbacks store a pointer to it.
        Generator(const Generator &) = delete;
        Generator &operator=(const Generator &) = delete;

        // This needs to be implemented in the `.cpp` because we don't see the definition of `Module` at this point.
        ~Generator();

        // Input: [

        // We rely on the contents having stable addresses (see `ParsedTypeInfo`), so don't mess with this too much.
        ParsedFile data;

        std::string output_header_dir;
        std::filesystem::path output_header_dir_path;

        std::string output_source_dir;
        std::filesystem::path output_source_dir_path;

        // Keys are canonicalized filenames.
        // We amend this to include all filenames we see.
        std::unordered_map<std::string, std::string> path_mappings;

        // Known input file extensions that we should strip.
        std::unordered_set<std::string> known_input_exts_to_strip = {".h", ".hpp", ".cpp"};

        // Additional helper headers are generated here. This is relative to `output_header_dir_path`. Defaults to that directory as is.
        std::filesystem::path helper_header_relative_dir = ".";

        // The prefix to add to the names that we generate, as opposed to parsing (since the parsed names naturally use the namespace prefix).
        // Do not access directly! Use `MakePublicHelperName()` instead. That throws if this is not specified.
        std::string helper_name_prefix_opt;

        // ]

        // Constants: [
        std::string extension_header = ".h";
        std::string extension_source = ".cpp";
        std::string extension_internal_header = ".detail.hpp";

        // This is added after `helper_name_prefix_opt` to internal names.
        std::string detail_helper_name_extra_prefix = "DETAIL_";
        // ]


        // This is based on the information in `data`.
        // Maps known type names in the input file to their canonical forms as reported by libclang.
        // The keys are roundtripped through `cppdecl::ToCode(..., canonical_c_style)`.
        std::unordered_map<std::string, cppdecl::Type> type_alt_spelling_to_canonical;


        struct InheritanceInfo
        {
            enum class Kind
            {
                non_virt, // Non-virtual, possibly indirect.
                virt, // Either virtual, or indirect through a virtual base.
                ambiguous,
            };

            // Using ordered containers to sort everything automatically.
            // All strings here are pre-baked with `cppdecl`.

            std::set<std::string> bases_direct_nonvirtual;
            // The reverse mapping for `bases_direct_nonvirtual`.
            std::set<std::string> derived_direct_nonvirtual;

            // Both direct and indirect. The virtual bases are always in a flat list.
            std::set<std::string> bases_indirect_virtual;

            // Both direct and indirect. `true` means this base is ambiguous.
            std::map<std::string, bool> bases_indirect_nonvirtual;

            // Both direct and indirect.
            std::map<std::string, Kind, std::less<>> bases_indirect;
            // The reverse mapping for `bases_indirect`.
            std::map<std::string, Kind, std::less<>> derived_indirect;

            // Queries `bases_indirect` or `derived_indirect`, returns true if we have at least one base/derived with the specified `kind`.
            [[nodiscard]] bool HaveAny(bool derived, Kind kind) const;
        };
        // Inheritance information for parsed classes.
        // The map keys are pre-baked with `cppdecl`, and so are all strings inside.
        std::map<std::string, InheritanceInfo, std::less<>> parsed_class_inheritance_info;


        // The extra modules that were loaded.
        std::vector<std::unique_ptr<Module>> modules;


        // Prefixes the name with whatever was passed to `--custom-name-prefix`.
        // This is for the custom names, as opposed to the parsed ones.
        [[nodiscard]] std::string MakePublicHelperName(std::string_view name)
        {
            std::string ret = helper_name_prefix_opt;
            ret += name;
            return ret;
        }
        [[nodiscard]] std::string MakeDetailHelperName(std::string_view name)
        {
            std::string ret = helper_name_prefix_opt;
            ret += detail_helper_name_extra_prefix;
            ret += name;
            return ret;
        }


        // Describes one header and its source file that we're generating.
        struct OutputFile
        {
            // The identifier of this file. Basically a relative path without an extension.
            std::string relative_name;

            // This sets `relative_name` and all the fields above.
            void InitRelativeName(CBindings::Generator &self, std::string new_relative_name, bool is_public);


            struct SpecificFileContents
            {
                // Where the file will be written.
                std::string full_output_path;

                // If this is a header, this is a file name to be used to include it.
                // This is empty for `.source` (the source file).
                std::string path_for_inclusion;

                // The contents are pasted in this order: [

                // This is pasted before the rest of the contents. It's in a separate variable to simplify generation.
                // `#pragma once` goes here. And for `.cpp` files, the inclusion of the respective header (and only that header).
                std::string preamble;

                // The headers from `forward_declarations_and_inclusions` are appended to this.
                // Prefer that variable instead of adding things here.
                // This stores header names without `#include <...>`, which is added automatically.
                // Harcoded standard library can also go in `preamble`.
                std::set<std::string> custom_headers;

                // The header names from the standard library. Those are separate just for the cooler looks.
                std::set<std::string> stdlib_headers;

                // `extern "C" {` goes here (the brace is closed in the footer). Maybe something else.
                std::string after_includes;

                // The forward declarations from `forward_declarations_and_inclusions` are appended to this.
                // Prefer that variable instead of adding things here.
                std::set<std::string> custom_forward_declarations;

                // This is the primary content.
                std::string contents;
                // This is pasted after everything else.
                // The closing brace of `extern "C"` goes here.
                std::string footer;

                // ]

                struct ForwardDeclarationOrInclusion
                {
                    // If false we'll just forward-declare.
                    bool need_header = false;

                    // If true, the type is declared in this very file.
                    // If true, we ignore `need_header`.
                    bool declared_in_same_file = false;
                };
                // Lists all type names that are needed here, and whether we should include headers for them for forward-decare them.
                // Those are keys for `FindTypeBindableWithSameAddress()`. That is, C++ types canonicalized by cppdecl.
                std::unordered_map<std::string, ForwardDeclarationOrInclusion> forward_declarations_and_inclusions;


                // If this is true, we will write this file.
                [[nodiscard]] bool HasUsefulContents() const {return !contents.empty();}
            };

            SpecificFileContents header;
            SpecificFileContents source;

            // An internal C++ header.
            // Like all other files, this gets created only if it has non-empty contents.
            // This is automatically included into `source` only if it's non-empty.
            SpecificFileContents internal_header;

            enum class InitFlags
            {
                no_extern_c = 1 << 0,
            };
            MRBIND_FLAG_OPERATORS_IN_CLASS(InitFlags)

            void InitDefaultContents(InitFlags flags = {});
        };
        // The output file contents. This is what we're generating. The keys are the paths as reported by the parser (which canonicalizes them automatically).
        // We rely on those having stable addresses.
        std::unordered_map<std::string, OutputFile> outputs;

        // What directories we need to create in the output.
        std::unordered_set<std::filesystem::path> directories_to_create;


        // Which directories are expected added via the `-I` flags. We use this to decide what filenames to pass to `#include`.
        // This is solely for the parsed files. Not for the generated files.
        // All of those are already canonicalized. Those are set from the `--assume-include-dir` flags.
        std::unordered_set<std::filesystem::path> assumed_include_directories;

        // Figures out how to properly include a parsed file.
        // Returns one or more names that you should include, not the entire include directive.
        [[nodiscard]] std::set<std::string, std::less<>> ParsedFilenameToRelativeNamesForInclusion(const DeclFileName &input);


        // Returns the output file (which includes both header and source) for the given input file.
        // Initializes it on the first access.
        [[nodiscard]] OutputFile &GetOutputFile(const DeclFileName &source);

        // Returns a special output file that holds the internal implementation details.
        // It is created lazily only if this is called.
        // It is a C++-only header in the source directory. It doesn't appear in the include directory.
        [[nodiscard]] OutputFile &GetInternalDetailsFile();

        // Returns the C name of the `PassBy` enum, which is used when passing classes to functions by value.
        [[nodiscard]] std::string GetPassByEnumName();

        // Returns the C name of a function that's used to free memory without calling destructors.
        // There is a separate version for arrays because ASAN complains about alloc-dealloc mismatch otherwise.
        // `file` is optional. If specific, the include gets added to it that declares this function.
        [[nodiscard]] std::string GetMemoryDeallocFuncName(bool is_array, OutputFile *file);
        // Returns the C name of a function that's used to allocate memory without calling constructors.
        // Not particualry useful by itself, but added for consistency with `GetMemoryDeallocFuncName()`.
        // `file` is optional. If specific, the include gets added to it that declares this function.
        [[nodiscard]] std::string GetMemoryAllocFuncName(bool is_array, OutputFile *file);

        // Returns the public C header that declares the `PassBy` enum, and some other public helpers.
        [[nodiscard]] OutputFile &GetCommonPublicHelpersFile();

        // Returns a public helper header with this name. It gets created on the first use.
        [[nodiscard]] OutputFile &GetPublicHelperFile(std::string_view name, bool *is_new = nullptr, OutputFile::InitFlags init_flags = {});

        // Returns the appropriate export macro for the specified output file.
        // Also modifies that file to include the header where the macro is declared, and creates that header on the first use too.
        // If `for_internal_header` is false, acts on the public C header. If true, acts on the internal C++ header.
        [[nodiscard]] std::string GetExportMacroForFile(OutputFile &target_file, bool for_internal_header);

        // Returns true if this is a built-in C type.
        [[nodiscard]] bool TypeNameIsCBuiltIn(const cppdecl::QualifiedName &name, cppdecl::IsBuiltInTypeNameFlags flags = cppdecl::IsBuiltInTypeNameFlags::allow_all) const;

        // The destroy function name for parsed and custom classes. It calls `delete`.
        // We have a separate function for destroying arrays (`is_array == true`) which corresponds to C++'s `delete[]`.
        [[nodiscard]] std::string GetClassDestroyFuncName(std::string_view c_type_name, bool is_array = false) const;

        // The name for the functions that add an offset to a pointer. We need this because the pointers themselves are typically opaque on the C side.
        [[nodiscard]] std::string GetClassPtrOffsetFuncName(std::string_view c_type_name, bool is_const) const;


        // Those types are a subset of `IsSimplyBindableIndirectReinterpret()` for pure qualified names (without cvref/ptr-qualifiers).
        // That is, thoses are bindable by passing their address, possibly with a cast.
        // All parsed types (classes and enums) go here, and SOME of the custom types as well.
        struct TypeBindableWithSameAddress
        {
            // At least one of those two must not be null in your custom types.
            // All of those are null only in built-in types, which indicates that they don't need any forward-declarations or headers.
            // [

            // In what header this type is declared. Can be null if none.
            // This a function to allow the header be created lazily.
            // Note, using a redundant initializer here and below to make Clang not warn when skipping members in designated initializers.
            std::function<OutputFile &()> declared_in_file = nullptr;

            // An alterantive to `declared_in_file` for standard library types. Don't set both at the same time.
            // You can only put the C standard library headers here, not C++ ones, since this will be included in the generated C headers.
            std::optional<std::string> declared_in_c_stdlib_file{};

            // If specified, this type can be forward-declared by pasting this string. Otherwise the only option is to include the header `declared_in_file`.
            // Don't include the trailing newline here.
            std::optional<std::string> forward_declaration{};

            // ]

            // This is optional. If null, we instead get the name by applying `cppdecl::ToString(..., cppdecl::ToStringFlags::identifier)` to the original C++ type name.
            std::string custom_c_type_name{};

            [[nodiscard]] bool KnowHeaderOrForwardDeclaration() const {return declared_in_file || declared_in_c_stdlib_file || forward_declaration;}
        };
        // The keys are strings produced by `cppdecl` from C++ types. Don't feed the input type names to this directly.
        // This is initially populated with the parsed types, and then the custom types are added lazily by `FindTypeBindableWithSameAddress[Opt]`.
        // Call that function instead of reading this directly.
        // NOTE: Must not read/write this directly. Use the functions below.
        std::unordered_map<std::string, TypeBindableWithSameAddress> types_bindable_with_same_address;

        // Add a new type to `types_bindable_with_same_address{,_c_to_cpp}`. Throws if the name is already used.
        // Returns the freshly inserted binding. (Not making it non-const, in case we'll decide to add some extra logic based on `desc`,
        //   which requires it to be completely filled right when passed.)
        const TypeBindableWithSameAddress &AddNewTypeBindableWithSameAddress(const cppdecl::QualifiedName &cpp_type_name, TypeBindableWithSameAddress desc);

        [[nodiscard]] const TypeBindableWithSameAddress &FindTypeBindableWithSameAddress(const cppdecl::QualifiedName &type_name);
        [[nodiscard]] const TypeBindableWithSameAddress *FindTypeBindableWithSameAddressOpt(const cppdecl::QualifiedName &type_name);
        // The name must come from `cppdecl::ToCode(..., canonical_c_style)`.
        [[nodiscard]] const TypeBindableWithSameAddress &FindTypeBindableWithSameAddress(const std::string &type_name_str);
        [[nodiscard]] const TypeBindableWithSameAddress *FindTypeBindableWithSameAddressOpt(const std::string &type_name_str);


        // Some information about parsed and custom types.
        struct TypeTraits
        {
            // Note that those don't have to 100% match true C++ traits. We can adjust them for our sanity.

            bool is_default_constructible = false;
            bool is_copy_constructible = false;
            bool is_move_constructible = false;
            bool is_copy_assignable = false;
            bool is_move_assignable = false;
            bool is_destructible = false;

            // Those require the respective bits above to be set.
            // We sometimes set this to true even if the operation isn't formally trivial, but is effectively trivial in practice.
            bool is_trivially_default_constructible = false;
            bool is_trivially_copy_constructible = false;
            bool is_trivially_move_constructible = false;
            bool is_trivially_copy_assignable = false;
            bool is_trivially_move_assignable = false;
            bool is_trivially_destructible = false;

            // This includes custom constructors in addition to default/copy/move.
            bool is_any_constructible = false;

            // If true, the copy constructor has the form `T(T &)` instead of `T(const T &)`.
            bool copy_constructor_takes_nonconst_ref = false;

            // The type size is known in C, and is the same in C and C++.
            bool same_size_in_c_and_cpp = false;

            // Set to true to indicate that the pass-by-value is dirt cheap and should always copy, instead of offering the pass-by enum.
            // This already happens by default if `is_trivially_copy_constructible || is_trivially_move_constructible`, and this variable is a way to explicitly opt into this despite not being trivial.
            bool assume_copying_is_cheap = false;

            // If you add new fields here, you might need to update `CombineCommonProperties()`.


            TypeTraits() {}

            struct TrivialAndSameSizeInCAndCpp {explicit TrivialAndSameSizeInCAndCpp() = default;};
            // This is for types that are copyable and have all their operations trivial.
            TypeTraits(TrivialAndSameSizeInCAndCpp) : TypeTraits(TrivialButDifferentSizeInCAndCpp{})
            {
                is_default_constructible = true;
                is_copy_constructible = true;
                is_move_constructible = true;
                is_copy_assignable = true;
                is_move_assignable = true;
                is_destructible = true;

                is_trivially_default_constructible = true;
                is_trivially_copy_constructible = true;
                is_trivially_move_constructible = true;
                is_trivially_copy_assignable = true;
                is_trivially_move_assignable = true;
                is_trivially_destructible = true;

                is_any_constructible = true;

                same_size_in_c_and_cpp = true;
            }

            struct TrivialButDifferentSizeInCAndCpp {explicit TrivialButDifferentSizeInCAndCpp() = default;};
            // This is for types that are copyable and have all their operations trivial.
            TypeTraits(TrivialButDifferentSizeInCAndCpp)
            {
                is_default_constructible = true;
                is_copy_constructible = true;
                is_move_constructible = true;
                is_copy_assignable = true;
                is_move_assignable = true;
                is_destructible = true;

                is_trivially_default_constructible = true;
                is_trivially_copy_constructible = true;
                is_trivially_move_constructible = true;
                is_trivially_copy_assignable = true;
                is_trivially_move_assignable = true;
                is_trivially_destructible = true;

                is_any_constructible = true;
            }

            struct CopyableNonTrivial {explicit CopyableNonTrivial() = default;};
            // This is for copyable types that don't have any trivial operations.
            TypeTraits(CopyableNonTrivial)
            {
                is_default_constructible = true;
                is_copy_constructible = true;
                is_move_constructible = true;
                is_copy_assignable = true;
                is_move_assignable = true;
                is_destructible = true;

                is_any_constructible = true;
            }

            struct CopyableNonTrivialButCheap {explicit CopyableNonTrivialButCheap() = default;};
            // This is for copyable types that don't have any trivial operations.
            TypeTraits(CopyableNonTrivialButCheap)
            {
                is_default_constructible = true;
                is_copy_constructible = true;
                is_move_constructible = true;
                is_copy_assignable = true;
                is_move_assignable = true;
                is_destructible = true;

                is_any_constructible = true;

                assume_copying_is_cheap = true;
            }

            struct CopyableAndTrivialExceptForDefaultCtor {explicit CopyableAndTrivialExceptForDefaultCtor() = default;};
            // This is for copyable types that are mostly trivial, but don't have a trivial default constructor.
            TypeTraits(CopyableAndTrivialExceptForDefaultCtor)
            {
                is_default_constructible = true;
                is_copy_constructible = true;
                is_move_constructible = true;
                is_copy_assignable = true;
                is_move_assignable = true;
                is_destructible = true;

                is_trivially_default_constructible = false; // !!
                is_trivially_copy_constructible = true;
                is_trivially_move_constructible = true;
                is_trivially_copy_assignable = true;
                is_trivially_move_assignable = true;
                is_trivially_destructible = true;

                is_any_constructible = true;
            }

            struct MoveOnlyAndTrivialExceptForDefaultCtorAndDtor {explicit MoveOnlyAndTrivialExceptForDefaultCtorAndDtor() = default;};
            // E.g. `std::unique_ptr` goes here, even if not technically trivial.
            TypeTraits(MoveOnlyAndTrivialExceptForDefaultCtorAndDtor)
            {
                is_default_constructible = true;
                is_move_constructible = true;
                is_move_assignable = true;
                is_destructible = true;

                is_trivially_default_constructible = false; // !!
                is_trivially_move_constructible = true;
                is_trivially_move_assignable = true;
                is_trivially_destructible = false; // !!

                is_any_constructible = true;
            }

            struct ReferenceType {explicit ReferenceType() = default;};
            // No idea why would one query this for references, but still have to set it.
            TypeTraits(ReferenceType, bool const_, bool rvalue_)
            {
                is_default_constructible = false; // !!
                is_copy_constructible = !rvalue_;
                is_move_constructible = rvalue_ || const_; // Hmm.
                is_copy_assignable = false; // !! Inconsistent with standard traits, but helps our sanity a lot.
                is_move_assignable = false; // Same.
                is_destructible = true;

                is_trivially_default_constructible = false; // Because the respective bit above is false too.
                is_trivially_copy_constructible = is_copy_constructible;
                is_trivially_move_constructible = is_move_constructible;
                is_trivially_copy_assignable = false; // Because the respective bit above is false too.
                is_trivially_move_assignable = false; // Because the respective bit above is false too.
                is_trivially_destructible = true;

                is_any_constructible = true;
            }

            [[nodiscard]] bool IsDefaultOrCopyOrMoveConstructible() const
            {
                return is_default_constructible || is_copy_constructible || is_move_constructible;
            }

            // If true, passing by value should always copy, instead of offering the pass-by enum.
            [[nodiscard]] bool UnconditionallyCopyOnPassByValue() const
            {
                return is_trivially_copy_constructible || is_trivially_move_constructible || assume_copying_is_cheap;
            }

            [[nodiscard]] bool NeedsPassByEnum() const
            {
                return !UnconditionallyCopyOnPassByValue() && IsDefaultOrCopyOrMoveConstructible();
            }


            void MakeNonAssignable()
            {
                is_copy_assignable = false;
                is_move_assignable = false;
                is_trivially_copy_assignable = false;
                is_trivially_move_assignable = false;
            }

            // Merges some properties of `other` with `this`, mostly via AND (such as constructability, destructability, assignability, etc).
            // This is intended for `std::pair`, `std::tuple`, etc. Start with `CopyableNonTrivialButCheap{}` and stack the member traits on top.
            void CombineCommonProperties(const TypeTraits &other)
            {
                #define DETAIL_MRBIND_MERGE_TRAIT_AND(name_) name_ &= other.name_;
                #define DETAIL_MRBIND_MERGE_TRAIT_OR(name_) name_ |= other.name_;

                #define DETAIL_MRBIND_MERGE_SMF_TRAIT(name_) \
                    is_##name_ &= other.is_##name_; \
                    is_trivially_##name_ &= other.is_trivially_##name_ && is_##name_; /* Note, this gets zeroed if the base non-trivial set became false. */

                DETAIL_MRBIND_MERGE_SMF_TRAIT(default_constructible)
                DETAIL_MRBIND_MERGE_SMF_TRAIT(copy_constructible)
                DETAIL_MRBIND_MERGE_SMF_TRAIT(move_constructible)
                DETAIL_MRBIND_MERGE_SMF_TRAIT(copy_assignable)
                DETAIL_MRBIND_MERGE_SMF_TRAIT(move_assignable)
                DETAIL_MRBIND_MERGE_SMF_TRAIT(destructible)

                DETAIL_MRBIND_MERGE_TRAIT_AND(is_any_constructible)
                DETAIL_MRBIND_MERGE_TRAIT_OR(copy_constructor_takes_nonconst_ref)

                // Note this trick.
                // This is important, because naively `&`-ing just the `assume_copying_is_cheap` causes issues in some cases.
                // E.g. if you start with `CopyableNonTrivialButCheap{}` and then `Combine` a trivial trait on top of it (that has `assume_copying_is_cheap == false`, because it's not needed when copying/moving is trivial),
                //   then doing this naively would cause BOTH triviality and `assume_copying_is_cheap` be false, so `UnconditionallyCopyOnPassByValue()` would incorrectly return false in the resulting traits, which isn't what we want.
                assume_copying_is_cheap &= other.UnconditionallyCopyOnPassByValue();

                #undef DETAIL_MRBIND_MERGE_TRAIT_AND
                #undef DETAIL_MRBIND_MERGE_TRAIT_OR
                #undef DETAIL_MRBIND_MERGE_SMF_TRAIT
            }
        };


        struct ParsedTypeInfo
        {
            struct EnumDesc
            {
                const EnumEntity *parsed = nullptr;

                // Need this for the variant to realize this is default-constructible, because this is a nested class.
                EnumDesc() {}
            };

            struct ClassDesc
            {
                const ClassEntity *parsed = nullptr;

                TypeTraits traits;

                bool is_polymorphic = false;

                // For consistency with `EnumDesc`. This one doesn't seem to be strictly necessary.
                ClassDesc() {}
            };

            using InputTypeVariant = std::variant<EnumDesc, ClassDesc>;
            InputTypeVariant input_type;

            // The type name for our C bindings.
            cppdecl::Type c_type;
            std::string c_type_str;

            [[nodiscard]] const DeclFileName &GetParsedFileName() const {return std::visit([](const auto &desc) -> auto & {return desc.parsed->declared_in_file;}, input_type);}

            [[nodiscard]] bool IsEnum() const {return std::holds_alternative<EnumDesc>(input_type);}
            [[nodiscard]] bool IsClass() const {return std::holds_alternative<ClassDesc>(input_type);}
        };
        // The keys are strings produced by `cppdecl` from C++ types. Don't feed the input type names to this directly.
        std::unordered_map<std::string, ParsedTypeInfo> parsed_type_info;


        // Given a type, iterates over every non-builtin type dependency that it has (which will have zero modifiers, and no `SimpleTypeFlags`,
        //   so no signedness and such).
        // This is the default behavior, `BindableType` entries can customize it.
        void ForEachNonBuiltInQualNameInTypeName(const cppdecl::Type &type, const std::function<void(const cppdecl::QualifiedName &cpp_type_name)> func);


        // Type classification: [

        // The arrows mean implication (they point towards supersets).
        //                                                                                  ---
        //       IsSimplyBindableIndirectReinterpret   <---   IsSimplyBindableIndirect            Can by passed by pointer.
        //                    ^                                         ^                   ---
        //                    : ?                                        |
        //                    :                                         |                   ---
        //       IsSimplyBindableDirectCast            <---   IsSimplyBindableDirect              Can be passed by value (and by pointer).
        //                                                                                  ---
        //
        //    | Passing requires a cast (reinterpret |   | Can be passed without a cast. |
        //    |   or C-style respectively)           |   |                               |
        //
        // Here technically you could imagine a type that is `IsSimplyBindableDirectCast()` but not `IsSimplyBindableIndirectReinterpret()` (e.g. a enum that has different sizes in C and C++).
        // But we avoid having to worry about that by replacing those weird enums with typedefs for their underlying types. So this problem should never come up.

        // Pointers and refs to those can be passed freely with only a `reinterpret_cast`.
        [[nodiscard]] bool IsSimplyBindableIndirectReinterpret(const cppdecl::Type &type);

        // Pointers and refs to those can be passed freely.
        [[nodiscard]] bool IsSimplyBindableIndirect(const cppdecl::Type &type);

        // Those can be passed by value with only a C-style cast.
        [[nodiscard]] bool IsSimplyBindableDirectCast(const cppdecl::Type &type);

        // Those can be passed by value with only a `static_cast`.
        [[nodiscard]] bool IsSimplyBindableDirect(const cppdecl::Type &type);

        // ]


        struct ExtraHeaders
        {
            // Separately the entirely custom ones and stdlib ones, which currently is purely decorative.

            std::unordered_set<std::string> stdlib_in_source_file;
            std::unordered_set<std::string> stdlib_in_header_file;

            // Those are functions to allow them to be lazy (to avoid generating unneeded custom headers).
            std::function<std::unordered_set<std::string>()> custom_in_source_file;
            std::function<std::unordered_set<std::string>()> custom_in_header_file;

            void InsertToFile(OutputFile &file) const;

            void MergeFrom(const ExtraHeaders &other);
        };

        struct BindableType
        {
            // This is normally NOT optional. Using `std::optional` here to catch forgetting to set this.
            // You don't need this if this is a `remove_sugar == true` desugared binding.
            std::optional<TypeTraits> traits;

            // Only makes sense if the type is a pure qualified name without cvref/ptr-qualifiers and if `remove_sugar == false`.
            // Setting any field in this to non-null indicates that pointers to this type can be passed freely between C and C++ with at most a cast.
            // This is equivalent to inserting this type into `types_bindable_with_same_address`, and indeed it will be automatically inserted there
            //   the first time `FindTypeBindableWithSameAddress()` is called on it.
            // Note, this is WRITE-ONLY (because there are other ways of achieving this). Read using `FindTypeBindableWithSameAddress()`.
            TypeBindableWithSameAddress bindable_with_same_address;

            [[nodiscard]] bool IsBindableWithSameAddress() const {return bindable_with_same_address.KnowHeaderOrForwardDeclaration();}


            // Setting this to true only makes sense for by-value classes that are stored on the heap.
            // This automatically generates a binding with `remove_sugar == true` that uses the pass-by enum.
            // This requires `bindable_with_same_address.c_type_name` to be set.
            bool is_heap_allocated_class = false;


            struct SameAddrBindableTypeDependency
            {
                // If false, then will forward-declare this type if possible, instead of including its header.
                // If true, will always include the header.
                bool need_header = false;
            };

            struct ParamUsage
            {
                struct CParam
                {
                    cppdecl::Type c_type;

                    // This is only needed if `param_usage.size() > 1` (see below). This gets added to the name of the function parameter.
                    // Typically this should be empty for at exactly one of the parameters,
                    //   since e.g. the generated default argument comment will refer to the parameter without the suffix.
                    // Adding `""` to mark this as optional for Clang's designated init.
                    std::string name_suffix = "";
                };

                // Should not be empty. Usually this will have size 1.
                // If this has more than one element, then the C function will have MORE THAN ONE parameter per this single C++ parameter.
                std::vector<CParam> c_params;


                struct DefaultArgNone {};
                struct DefaultArgWrapper
                {
                    std::string_view wrapper_cpp_type;
                    std::string_view wrapper_null;
                    std::string_view actual_default_arg;
                };
                // See `.c_params_to_cpp` below for the explanation.
                using DefaultArgVar = std::variant<DefaultArgNone, std::string_view, DefaultArgWrapper>;

                // Defaults to returning `cpp_param_name` if null.
                // Given a C++ parameter name (which normally matches the C name, but see `CParam::name_suffix` above), generates the argument for it.
                // NOTE: The return value must be correctly parenthesized if necessary (so that e.g. `"&" + result` compiles correctly).
                // The implementation .cpp file (`source_file`) is also provided to allow inserting additional includes and what not, but normally you shouldn't touch it. Prefer
                //   `same_addr_bindable_type_dependencies` or `extra_headers` for that purpose. This parameter is convenient if your includes are conditional, depending on the presence of the default arg, for example.
                // `default_arg` is the default argument if any.
                //   Note that if this `ParamUsage` is `BindableType::param_usage` as opposed to `BindableType::param_usage_with_default_arg`, then you'll never receive default arguments (will always receive `DefaultArgNone{}`).
                //   If this is `DefaultArgNone`, there is no default argument.
                //   If this is `std::string_view`, then that's your default argument. Don't forget to cast it to your type, just in case.
                //   `DefaultArgWrapper` is a special case. You're expected to produce an expression of type `.wrapper_cpp_type` instead of just `T`. And instead of the default argument, you must produce `.wrapper_null`.
                //   This is typically used for `std::optional`, where `.wrapper_cpp_type` would be `std::optional<T>` and `.wrapper_null` would be `std::nullopt`.
                //   (Note that you MUST NOT need to include `<optional>` yourself here, because firstly it's done automatically, and secondly this isn't only for optionals.)
                //   If you're using the pass-by enum for your type, then you must switch to `PassBy_NoObject` for wrappers, as opposed to the `PassBy_DefaultArgument` that you'd normally use for default arguments.
                //   `actual_default_arg` can only be non-empty if you opted in via `BindableType::supports_default_arguments_in_wrappers = true`.
                //     If you opted in and got a non-empty `actual_default_arg`, you must handle BOTH `PassBy_NoObject` (return `wrapper_null` as usual) AND `PassBy_DefaultArg` (return `actual_default_arg`).
                std::function<std::string(OutputFile::SpecificFileContents &source_file, std::string_view cpp_param_name, DefaultArgVar default_arg)> c_params_to_cpp;

                // Which types-bindable-with-same-address do we need to include or forward-declare? The keys are C++ type names.
                // By default you can fill this using `ForEachNonBuiltInQualNameInTypeName()`.
                std::unordered_map<std::string, SameAddrBindableTypeDependency> same_addr_bindable_type_dependencies;

                // The additional headers to include.
                // This is for custom and stdlib headers, not for those generated from parsing. Use `same_addr_bindable_type_dependencies` for those.
                ExtraHeaders extra_headers;

                // When this type is returned, this string is appended to the comment.
                // Don't include line breaks before and after, we add them automatically.
                // Do include the leading slashes, normally `///`.
                // This receives a flag on whether we have a default argument or not, but not the default argument itself,
                //   because we automatically generate another comment line stating its value, and don't want to accidentally do it here.
                // NOTE: DON'T explain how to trigger the default argument here. Use `explanation_how_to_use_default_arg` for that.
                //   But the flag is passed here because it's sometimes useful to add additional remarks that depend on the presence of the default argument.
                // NOTE: If `is_output_param` is true, you must adjust your wording to talk about the "callback return value" instead of a parameter.
                //   This is used when binding C callbacks. In that case `has_default_arg` will always be null.
                //   In that case you'd typically ignore `cpp_param_name`. Except that when you `.c_params` has more than one element.
                //   In that case all those C parameters with a non-empty `name_suffix` must be documented mostly as usual, using `cpp_param_name`,
                //     but call them "callback output parameters". Only the main C parameter with the empty suffix must be called the return value.
                //     Also when referring to them, prepend `*` to their names, because they are pointer output parameters.
                std::function<std::string(std::string_view cpp_param_name, bool has_default_arg, bool is_output_param)> append_to_comment;

                // Calls `c_params_to_cpp` if not null, otherwise returns the string unchanged.
                // `default_arg` should be empty if there's no default argument.
                // NOTE: This will always produce correctly parenthesized strings. If the custom `c_params_to_cpp` is specified, it's its job to ensure that the result is correctly parenthesized.
                [[nodiscard]] std::string CParamsToCpp(OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, DefaultArgVar default_arg) const
                {
                    if (c_params_to_cpp)
                        return c_params_to_cpp(file, cpp_param_name, default_arg);
                    else
                        return std::string(cpp_param_name);
                }
            };

            struct ParamUsageWithDefaultArg : ParamUsage
            {
                // Additional default argument settings:

                // This is mandatory.
                // This MUST start with a lowercase letter, and MUST NOT end with a period. E.g. `pass a null pointer`.
                // This will be inserted into a comment along the lines of `To use the default argument, X.` or `Blah blah, X to use the default argument.`
                // Most of the time you SHOULD NOT use `cpp_param_name` in the returned string. It's only useful if `c_params.size() > 1`,
                //   in which case you migth return e.g. `"pass null both to it and to `" + cpp_param_name + "_end`"`, where `_end` would match your non-empty `CParam::name_suffix`.
                // `use_wrapper` will be true if this is not a real default argument, but a wrapper (typically `std::optional`) being generated.
                //   Typically `use_wrapper == true` corresponds to using `PassBy_NoObject` instead of `Pass_DefaultArgument`.
                //   If you didn't enable `supports_default_arguments_in_wrappers, then you most likely should ignore `use_wrapper`.
                // If `is_output_param == true`, say "return" instead of "pass". This is for callback return values (which use parameter-like bindings).
                //   Note that in callbacks, only the suffix-less parameter from `c_params` is returned. The rest are used as output parameters.
                std::function<std::string(std::string_view cpp_param_name, bool use_wrapper, bool is_returned_from_callback)> explanation_how_to_use_default_arg;

                // Typically should be false. Set this to true if you're using the `PassBy` enum, which gives you two different ways of passing default arguments: `PassBy_DefaultArgument` and `PassBy_NoObject`.
                // Opting in by setting this to true means you're able to handle both in your `ParamUsage::c_params_to_cpp`, with different behavior.
                // When not opted in, we assume you only have ONE syntax for default arguments, so we'll find an alternative syntax for the second variant.
                bool supports_default_arguments_in_wrappers = false;

                // Make Clang happy (otherwise `std::optional<ParamUsageWithDefaultArg>` below bakes `is_default_constructible == false`).
                // We aren't gonna designated-initialize this anyway.
                ParamUsageWithDefaultArg() {}
            };

            // One of those must be non-null for this type to be usable as a parameter: [

            // If only this one is set, the type can't handle default arguments.
            // If both are set, this one is used only when there's no default argument.
            // Either way, `.c_params_to_cpp` in this one never receives the default arguments.
            // (Note that this selection logic is used not only in the generator itself, but also in the binding of `std::function`,
            //   so if this logic changes, don't forget to update that.)
            std::optional<ParamUsage> param_usage;

            // If only this one is set, this is used for params both with default arguments and without.
            // If `param_usage` is also set, then this one handles only the parameters with default arguments.
            std::optional<ParamUsageWithDefaultArg> param_usage_with_default_arg;
            // ]

            // Optional. If set, all default arguments are checked with this function, and if it returns non-null, that default argument is ignored.
            // The returned string is pasted into a sentence of the form `Defaults to X in C++.`, so you should return a string that DOES NOT start with a capital letter,
            //   and DOES NOT end with a period.
            // You can return an empty string too, then the default is ignored, but no comment is added.
            // NOTE: This sits here instead of in `param_usage_with_default_arg`, because in some cases we might not support any ACTUAL default arguments,
            //   but still support the useless ones, which detected by this callback, while `param_usage_with_default_arg` would be null.
            std::function<std::optional<std::string>(std::string_view default_arg)> is_useless_default_argument;


            struct ReturnUsage
            {
                cppdecl::Type c_type;

                // Generates a return statement to return a value of this type.
                // If null, defaults to `"return " + expr + ";"`.
                // You can generate more than one statement here.
                // Providing the source `file` so you can add some extra headers or whatever. Note that this is intentionally redundant, as we also have `extra_headers` below.
                // Note that `expr` can be insufficiently parenthesized. Don't forget to add your own parentheses if you do anything funny with it.
                std::function<std::string(OutputFile::SpecificFileContents &file, std::string_view expr)> make_return_expr;

                // Which types-bindable-with-same-address do we need to include or forward-declare?
                // By default you can fill this using `ForEachNonBuiltInQualNameInTypeName()`.
                std::unordered_map<std::string, SameAddrBindableTypeDependency> same_addr_bindable_type_dependencies;

                // The additional headers to include.
                // This is for custom and stdlib headers, not for those generated from parsing. Use `same_addr_bindable_type_dependencies` for those.
                ExtraHeaders extra_headers;

                // When this type is returned, this string is appended to the comment.
                // Don't include line breaks before and after, we add them automatically.
                // Do include the leading slashes, normally `///`.
                // `param_name` is typically empty. If it's not empty, your message must talk about a "callback parameter" with this name, as opposed to a return value.
                //   This is when binding C callbacks, for their parameters.
                std::function<std::string(std::string_view callback_param_name)> append_to_comment;

                // Calls `make_return_expr` if not null, otherwise returns just `expr`.
                // Note that `expr` can be insufficiently parenthesized. Don't forget to add your own parentheses if you do anything funny with it.
                [[nodiscard]] std::string MakeReturnExpr(OutputFile::SpecificFileContents &file, std::string_view expr) const
                {
                    if (make_return_expr)
                        return make_return_expr(file, expr);
                    else
                        return std::string(expr);
                }
            };
            // If this is null, this type is unusable as a return type.
            std::optional<ReturnUsage> return_usage;


            BindableType() {}
        };
        // The types that we know how to bind.
        // Don't access this directly! Use `FindBindableType` because that will lazily insert the missing types here.
        std::unordered_map<std::string, BindableType> bindable_cpp_types;
        // An alternative version of the map above for the desugared cases. See `FindBindableType()` and its parameter `remove_sugar`.
        std::unordered_map<std::string, BindableType> bindable_cpp_types_nosugar;

        // Finds a type in `bindable_cpp_types`. If no such type, tries to generate the binding information for it (and inserts it into the map), or throws on failure.
        // If `remove_sugar == true`, avoid the fancy rewrites like replacing `const std::string &` with char pointers. This is useful e.g. for `this` parameters.
        // This among other things disallows passing classes by value.
        [[nodiscard]] const BindableType &FindBindableType(const cppdecl::Type &type, bool remove_sugar = false);
        // This version returns null on failure.
        [[nodiscard]] const BindableType *FindBindableTypeOpt(const cppdecl::Type &type, bool remove_sugar = false);

        // Uses `ForEachNonBuiltInQualNameInTypeName()` to populate `same_addr_bindable_type_dependencies` in the type.
        void FillDefaultTypeDependencies(const cppdecl::Type &source, BindableType &target);

        // This is for `BindableType::{Return,Param}Usage::same_addr_bindable_type_dependencies`.
        // Applies all headers and/or forward declarations from it to the specified file.
        void ApplyTypeDependenciesToFile(OutputFile &file, const std::unordered_map<std::string, BindableType::SameAddrBindableTypeDependency> &deps);


        // This acts as a cache when parsing C++ types.
        mutable std::unordered_map<std::string, cppdecl::Type> cached_parsed_types;

        // Parses a cppdecl type from `str`, throws on failure or if there was unparsed junk at the end of input.
        // Pass the CANONICAL types to this.
        [[nodiscard]] const cppdecl::Type &ParseTypeOrThrow(const std::string &str) const;

        mutable std::unordered_map<std::string, cppdecl::QualifiedName> cached_parsed_qual_names;
        [[nodiscard]] const cppdecl::QualifiedName &ParseQualNameOrThrow(const std::string &str) const;

        // Maps a C++ type name to a C type name, by consulting `FindTypeBindableWithSameAddress()`.
        // This only handles the types that are already known. DON'T use when writing new bindings.
        // Throws if the type is unknown.
        [[nodiscard]] std::string CppTypeNameToCTypeName(const cppdecl::QualifiedName &cpp_name);
        // Same, but returns null on failure instead of throwing.
        [[nodiscard]] std::optional<std::string> CppTypeNameToCTypeNameOpt(const cppdecl::QualifiedName &cpp_name);

        // Replaces every `cppdecl::QualifierName` in the type with its C equivalent, by applying `CppTypeNameToCTypeName()` recursively.
        // Throws if some qualified name in the input is unknown.
        void ReplaceAllNamesInTypeWithCNames(cppdecl::Type &type);

        // Indents a string by the number of `levels` (each is currently 4 whitespaces).
        // Inserts them after each `\n`, and additionally, if `indent_first_line`, at the very beginning.
        [[nodiscard]] static std::string IndentString(std::string_view str, int levels, bool indent_first_line);


        // Deduplicating overload names: [
        struct OverloadedName
        {
            // The resulting C name. Initially can have duplicates, but we modify it to make the names unique.
            std::string name;

            // This is the fallback C name. If the original one is ambiguous, we replace `name` with this one and make this empty.
            // If that fails, we then proceed to adding `params` to the name.
            std::string fallback_name;

            // How many parameter types we already added to the `name`.
            std::size_t num_params_consumed = 0;

            struct Param
            {
                // We could use C types here, but C++ types are easier to obtain, and I THINK will look better in the names.
                // But who knows, we can change this later.
                cppdecl::Type cpp_type;
            };
            std::vector<Param> params;

            void AddParams(CBindings::Generator &self, const std::vector<FuncParam> &new_params)
            {
                params.reserve(params.size() + new_params.size());

                for (const FuncParam &new_param : new_params)
                    params.push_back({.cpp_type = self.ParseTypeOrThrow(new_param.type.canonical)});
            }
        };
        // Points to various parsed
        std::unordered_map<const BasicFunc *, OverloadedName> overloaded_names;

        // ] -- Deduplicating overload names


        struct EmitFuncParams
        {
            // The C name of this function.
            std::string c_name;

            // The C++ return type. We'll translate it to C automatically.
            cppdecl::Type cpp_return_type = cppdecl::Type::FromSingleWord("void");

            // If true, disable some clever return type rewrites.
            // This isn't very useful compared to the `Param::remove_sugar` below. See that for more details.
            bool remove_return_type_sugar = false;

            // Use the return type as is, don't attempt to translate it from C++ to C.
            bool use_return_type_as_is = false;

            // Most often this will be null.
            // If null, this defaults to `"return "+expr+";"`, except that for `void` the `return ` is omitted by default.
            std::function<std::string(std::string_view expr)> make_return_expr = nullptr;


            // Additional statements before `return`, if any. Accepts the same placeholders as `cpp_called_func`.
            // Do not add trailing newline. Do not add indentation.
            std::string cpp_extra_statements;

            // What function are we calling on the C++ side. Or any arbitrary expression.
            // If this is empty, the return statement isn't generated at all, the arguments are ignored, and `cpp_called_func_parens` is also ignored.
            // The arguments are typically pasted after this, enclosed in `cpp_called_func_parens`.
            // But if this string contains a placeholder for this argument: `@1@`, `@2@`, etc, or `@this@` for the `this` argument if any (which a reference rather than a pointer, to support rvalues),
            //   then all instances of the placeholder are replaced with the argument, instead of adding it to the parenthesized list at the end.
            // If all arguments use placeholders (and there is at least one placeholder), then the empty `cpp_called_func_parens` are NOT appended after the call.
            //   But if there were no arguments and no placeholders, they are still appended.
            // If this is a member function and `@this@` placeholder wasn't used, then the `this` argument are prepended to the call, with `.` (or `::` for static functions) added automatically.
            //   But when the `@this@` placeholder IS used, the `.` and `::` are NOT inserted automatically.
            std::string cpp_called_func;

            struct Parens
            {
                std::string begin;
                std::string end;
            };

            // The arguments are pasted after `cpp_called_func`, enclosed in those. Those can be empty, they are still pasted in that case.
            // It's almost never necessary to adjust those. Most things that you might want to do can be done via the careful use of placeholders in `cpp_called_func` (and sometimes in `cpp_extra_statements`).
            Parens cpp_called_func_parens = {"(", ")"};

            // Additional arguments to pass to the `cpp_called_func`, before and after the regular ones.
            std::vector<std::string> extra_args_before;
            std::vector<std::string> extra_args_after;

            // Comment to add on the C side. This is added before the generated part of the comment.
            // Do add leading slashes. Don't add the trailing newline.
            // Leave empty for no comment.
            std::string c_comment;

            // Like `c_comment`, but added after the generated part of the comment, not before.
            std::string c_comment_trailing;

            // The current stack of namespaces to emit as a bunch of `using namespace ...;` inside of the function body.
            // This is only useful for parsed default arguments, because I don't know how to canonicalize them to include the full namespace qualifiers.
            std::span<const NamespaceEntity *const> using_namespace_stack;

            // The extra header files to include.
            ExtraHeaders extra_headers;

            struct Param
            {
                // Empty if unnamed.
                std::string name;

                // Normally null. If non-null, this is used to generate the argument spelling instead of the normall process.
                // This works even with `use_type_as_is`.
                // The parameter name has to be a parameter because it receives a proper adjusted name even if `.name` in this struct is empty.
                std::function<std::string(std::string_view param_name)> custom_argument_spelling = nullptr;

                enum class Kind
                {
                    normal, // Nothing unusual about this parameter.
                    not_added_to_call, // This parameter shouldn't be added as an argument to the function call. Typically you'll want to manually mention it in `cpp_called_func`.
                    this_ref, // This is the a `*this` parameter. Must be a reference (possibly rvalue). See `cpp_called_func` for how those parameters get used.
                    static_, // This is a static method, and this C++ parameter is only used for its type. The C parameter isn't emitted at all.
                };

                // At most one function parameter can have this set to anything other than `normal` and `not_added_to_call`.
                Kind kind = Kind::normal;

                // If true, disable the fancy rewrites like replacing `std::string` with `const char *` pointers.
                // This is useful e.g. for `this` parameters. Can't be used when passing class types by value.
                bool remove_sugar = false;

                // We translate this to C types automatically.
                cppdecl::Type cpp_type;

                // If true, do not attempt to translate the type to C, paste it as is.
                // This conflicts with `default_arg` (will trigger an internal error when emitting).
                // If this is true, `remove_sugar` be ignored.
                bool use_type_as_is = false;


                struct DefaultArg
                {
                    std::string cpp_expr; // Spelled as a C++ expression.
                    std::string original_spelling; // Spelled in a user-friendly manner (as originally written in the C++ source).
                };
                std::optional<DefaultArg> default_arg{}; // Adding `{}` to avoid Clang warning when this field is omitted in designated init.
            };
            std::vector<Param> params;

            // Appends the parsed parameters to this function.
            // Appends to the existing parameters, doesn't remove them.
            void AddParamsFromParsedFunc(const CBindings::Generator &self, const std::vector<FuncParam> &new_params);

            // A helper class used as a parameter of `AddThisParam()` below.
            struct ThisParamKind
            {
                bool is_const = false;
                bool is_rvalue = false;
                Param::Kind kind{};

                ThisParamKind(bool is_const, bool is_rvalue = false, bool is_static = false)
                    : is_const(is_const && !is_static), is_rvalue(is_rvalue && !is_static), kind(is_static ? Param::Kind::static_ : Param::Kind::this_ref)
                {}

                struct Static {explicit Static() = default;};
                ThisParamKind(Static)
                    : kind(Param::Kind::static_)
                {}
            };

            void AddThisParam(cppdecl::Type new_class, ThisParamKind kind);
            void AddThisParamFromParsedClass(const CBindings::Generator &self, const ClassEntity &new_class, ThisParamKind kind);

            void SetReturnTypeFromParsedFunc(const CBindings::Generator &self, const BasicReturningFunc &new_func);

            void SetFromParsedFunc(const CBindings::Generator &self, const FuncEntity &new_func, bool is_class_friend, std::span<const NamespaceEntity *const> new_using_namespace_stack);
            void SetFromParsedClassCtor(const CBindings::Generator &self, const ClassEntity &new_class, const ClassCtor &new_ctor, std::span<const NamespaceEntity *const> new_using_namespace_stack);
            void SetFromParsedClassMethod(const CBindings::Generator &self, const ClassEntity &new_class, const ClassMethod &new_method, std::span<const NamespaceEntity *const> new_using_namespace_stack);
            void SetFromParsedClassConvOp(const CBindings::Generator &self, const ClassEntity &new_class, const ClassConvOp &new_conv_op, std::span<const NamespaceEntity *const> new_using_namespace_stack);

            // Makes a const or mutable getter (depending on `is_const`).
            // Returns false if the getter can't be generated (if it's mutable and the member is read-only).
            bool SetAsFieldGetter(CBindings::Generator &self, const ClassEntity &new_class, const ClassField &new_field, bool is_const);
        };
        void EmitFunction(OutputFile &file, const EmitFuncParams &params);

        struct EmittedFunctionStrings
        {
            // With leading backslashes. This one unusually has a trailing newline.
            std::string comment;

            // The function declaration (C style, of course).
            cppdecl::Decl decl;

            // Wrapped in braces. No trailing newline.
            std::string body;
        };
        // Like `EmitFunction()`, but doesn't write the function directly to the file. Instead returns the strings composing it.
        // But the includes and such get written directly to the file.
        [[nodiscard]] EmittedFunctionStrings EmitFunctionAsStrings(OutputFile &file, const EmitFuncParams &params);

        void EmitClassMemberAccessors(OutputFile &file, const ClassEntity &new_class, const ClassField &new_field);


        struct Visitor
        {
            virtual ~Visitor() = default;

            virtual void Visit(const ClassEntity &cl) {(void)cl;}
            virtual void Visit(const FuncEntity &func) {(void)func;}
            virtual void Visit(const EnumEntity &en) {(void)en;}
            virtual void Visit(const TypedefEntity &td) {(void)td;}

            void Process(const ClassEntity &cl)
            {
                class_stack.push_back(&cl);
                struct Guard
                {
                    Visitor &self;
                    ~Guard()
                    {
                        self.class_stack.pop_back();
                    }
                };
                Guard guard{*this};

                // Here we have to recurse first, and THEN visit.
                // This matters e.g. if we have a enum inside of a class. We want the enum to be declared first (that's why we recurse),
                //   before we start emitting the class members, which might rely on this enum.
                // We could also just move all enum definitions (not declarations!) to the top of the file, but I don't like how that looks,
                //   I'd rather keep the original order.
                // This can only happen for enums. For nested classes (and all other classes too) we emit redundant declarations on the top of the file
                //   to avoid similar issues (but those issues are with the upcasts/downcasts, which might use classes declared lower in this file).
                // Enums can't be forward-declared, so we have to rely on this traversal order instead.
                Process(static_cast<const mrbind::EntityContainer &>(cl));
                Visit(cl);
            }
            void Process(const FuncEntity &func) {Visit(func);}
            void Process(const EnumEntity &en) {Visit(en);}
            void Process(const TypedefEntity &td) {Visit(td);}
            void Process(const NamespaceEntity &ns)
            {
                namespace_stack.push_back(&ns);
                struct Guard
                {
                    Visitor &self;
                    ~Guard()
                    {
                        self.namespace_stack.pop_back();
                    }
                };
                Guard guard{*this};

                Process(static_cast<const mrbind::EntityContainer &>(ns));
            }
            void Process(const EntityContainer &c) {for (const Entity &e : c.nested) Process(e);}
            void Process(const Entity &e) {std::visit([&](const auto &elem){Process(elem);}, *e.variant);}

          protected:
            // Those are "stacked" on top of each other. First the namespace stack gets filled, then the class stack.
            [[nodiscard]] const std::vector<const NamespaceEntity *> &GetNamespaceStack() const {return namespace_stack;}
            [[nodiscard]] const std::vector<const ClassEntity *> &GetClassStack() const {return class_stack;}

          private:
            std::vector<const NamespaceEntity *> namespace_stack;
            std::vector<const ClassEntity *> class_stack;
        };

        // This fills `parsed_type_info` with the knowledge about all parsed types.
        struct VisitorRegisterKnownTypes;

        void ConstructInheritanceGraph();

        // This fills `overloaded_names` with the knowledge about all C functions we're planning to produce.
        struct VisitorRegisterOverloadedNames;

        void ResolveOverloadAmbiguities();

        // This actually emits the code for the parsed entities.
        struct VisitorEmit;

        void Generate();


        void DumpFileToOstream(const OutputFile &context, const OutputFile::SpecificFileContents &file, std::ostream &out);
    };
}
