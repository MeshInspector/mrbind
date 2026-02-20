#pragma once

#include "common/parsed_data.h"
#include "common/polyfill/std_filesystem_path_hash.h" // IWYU pragma: keep
#include "common/string_filter.h"
#include "common/string_regex_adjuster.h"
#include "generators/c_interop/c_output_desc.h"
#include "mrbind/helpers/enum_flag_ops.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/to_string.h>

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
    struct HeapAllocatedClassBinder;
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
        // This is only optional wasn't needed.
        std::string helper_name_prefix_opt;

        // Same, but for macros. If not specified, defaults to `helper_name_prefix_opt`.
        std::string helper_macro_name_prefix_opt;

        // Always emit the helpers file, even if not needed.
        bool force_emit_helpers_file = false;

        // Fail if `[unsigned] long [long]` appears in the parsed input.
        // This is designed to work with the parser's `--canonicalize-to-fixed-size-typedefs`.
        bool reject_long_and_long_long = false;
        // Instead of binding `[u]int64_t` as is, create custom typedefs for them, pointing to `size_t` and `ptrdiff_t`.
        // This is designed to work with the parser's `--canonicalize-size_t-to-uint64_t`.
        bool custom_typedef_for_uint64_t_pointing_to_size_t = false;

        // 0 means no limit.
        // This is a loose limit, we don't count the extension, the extra hash string that gets added, etc.
        std::size_t max_output_filename_len = 0;

        // When adding a hash to the shortened long header names, this is how many hex digits we add.
        std::size_t hash_len_in_long_output_filenames = 4;

        // The matching C++ structs/classes get bound as C structs instead of opaque pointers.
        StringFilter same_layout_struct_filter;

        // This modifies most comments we generate.
        StringRegexAdjuster generated_comments_adjuster;

        // Go out of our way to include additional headers in our headers, if we think the user might want them.
        bool add_convenience_includes = false;

        // If this is positive, will not generate the aggregate init constructor if there are more than this number of fields.
        std::size_t max_num_fields_for_default_constructible_aggregate_init = std::size_t(-1);

        // This is the list of unqualified C++ function names that should be called without their template arguments.
        // This is tested against the last component of qualified names, and ignoring the templale arguments.
        std::set<std::string, std::less<>> skip_template_arguments_on_functions = {"begin", "end", "swap"};

        // ]

        // Output JSON description: [
        // If this is not empty, all emitted output is also added to this.
        std::optional<CInterop::OutputDesc> output_desc;

        // All methods are accumulated here, since the
        std::vector<CInterop::ClassMethod> output_desc_pending_methods;

        // ]

        // Constants: [
        std::string extension_header = ".h";
        std::string extension_source = ".cpp";
        std::string extension_internal_header = ".detail.hpp";
        // ]


        // This is based on the information in `data`.
        // Maps known type names in the input file to their canonical forms as reported by libclang.
        // The keys are roundtripped through `cppdecl::ToCode(..., canonical_c_style)`.
        std::unordered_map<std::string, cppdecl::Type> type_alt_spelling_to_canonical;

        // Inheritance information for parsed classes.
        // The map keys are pre-baked with `cppdecl`, and so are all strings inside.
        std::map<std::string, CInterop::InheritanceInfo, std::less<>> parsed_class_inheritance_info;


        // The extra modules that were loaded.
        std::vector<std::unique_ptr<Module>> modules;


        // Prefixes the name with whatever was passed to `--custom-name-prefix`.
        // This is for the custom names, as opposed to the parsed ones.
        [[nodiscard]] std::string MakePublicHelperName(std::string_view name) const
        {
            std::string ret = helper_name_prefix_opt;
            if (ret.empty())
                throw std::runtime_error("Must specify `--helper-name-prefix ...`.");
            ret += name;
            return ret;
        }
        // Same, but for macros.
        [[nodiscard]] std::string MakePublicHelperMacroName(std::string_view name) const
        {
            // Default to `MakePublicHelperName()` if not specified.
            if (helper_macro_name_prefix_opt.empty())
                return MakePublicHelperName(name);

            std::string ret = helper_macro_name_prefix_opt;
            ret += name;
            return ret;
        }
        // Same, but for private macros.
        [[nodiscard]] std::string MakeDetailHelperMacroName(std::string_view name) const
        {
            return MakePublicHelperMacroName("DETAIL_" + std::string(name));
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

                // The include guard name in all caps, or empty if we're using pragma once.
                // This must be non-empty if we're using `--add-convenience-includes`.
                std::string include_guard_name;

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
                    // Currently this also causes the header to be included AFTER the rest of the file, as a convenience for the user.
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

        // The filenames that are too long (and get shortened with the name hash added at the end) get added here, in their shortened form.
        // We use this to check for duplicates.
        std::unordered_set<std::string> long_filenames_with_hashes;


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

        // Returns the public C header that declares the `PassBy` enum, and some other public helpers.
        // It's always created on the first use, except when `can_create == false`, in which case it will return null if the file doesn't exist.
        [[nodiscard]] OutputFile *GetCommonPublicHelpersFile(bool can_create = true);

        // Returns true if this header is the header created by `GetCommonPublicHelpersFile()`.
        [[nodiscard]] bool IsCommonPublicHelpersHeader(std::string_view path_for_inclusion);

        // Returns a public helper header with this name.
        // Normally it gets created on the first use, so this never returns null. But if you pass `can_create == false`, it'll return null if the file doesn't exist.
        [[nodiscard]] OutputFile *GetPublicHelperFile(std::string_view name, bool *is_new = nullptr, OutputFile::InitFlags init_flags = {}, bool can_create = true);

        // Returns the appropriate export macro for the specified output file.
        // Also modifies that file to include the header where the macro is declared, and creates that header on the first use too.
        // If `for_internal_header` is false, acts on the public C header. If true, acts on the internal C++ header.
        [[nodiscard]] std::string GetExportMacroForFile(OutputFile &target_file, bool for_internal_header);

        // Returns true if this header is a header created by `GetExportMacroForFile()`.
        [[nodiscard]] bool IsExportHeader(std::string_view path_for_inclusion);

        // Returns the macro that when defined enables the function exporting. It's defined automatically in all our source files.
        // This function doesn't modify the file, unlike `GetExportMacroForFile()`.
        [[nodiscard]] std::string GetBuildLibraryMacroForFile(const OutputFile &target_file);

        // Returns the macro that `--add-convenience-incldues` uses for internal purposes.
        // But you can also define it manually to disable the convenience includes in certain places, like we do in our implementation files
        //   to speed up compilation.
        [[nodiscard]] std::string GetDisableConvenienceIncludesMacro();

        // Returns the name of the deprecation macro. With have separate macros with and without a message parameter.
        // Prefer to use `GetDeprecationMacro()` instead of this, which automatically adds the correct include that defines this macro.
        [[nodiscard]] std::string GetDeprecationMacroName(bool with_message);

        // Returns the deprecation macro, possibly with a message (if not empty).
        // Automatically adds the include for the macro to `target_file`.
        // The reason why we don't separate an empty `message` from no message is because libclang itself seemingly doesn't have that separation,
        //   at least in the one function I used to get the deprecation message.
        [[nodiscard]] std::string GetDeprecationMacro(OutputFile &target_file, std::string_view message);

        // Returns true if this is a built-in C type.
        // If both `allow_scalar_typedefs` is true and `flags & allow_integral` is true, also accept `[u]int??_t`, to match `--canonicalize-to-fixed-size-typedefs`.
        [[nodiscard]] bool TypeNameIsCBuiltIn(const cppdecl::QualifiedName &name, cppdecl::IsBuiltInTypeFlags flags = cppdecl::IsBuiltInTypeFlags::allow_all, bool allow_scalar_typedefs = false) const;


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

            // This is optional. If null, we instead get the name by applying `Generator::CppdeclToIdentifier()` to the original C++ type name.
            std::string custom_c_type_name{};

            // This can be set to false if this type is literally the same in C and C++, and pointers to it can work without casts.
            bool needs_reinterpret_cast = true;

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

        // The `can_invent_new_bindings` parameter is used to avoid infinite recursion in some cases. We set it to false to prevent this function from trying
        //   to create new bindings if they are missing (except using modules, that's allowed). Ultimately, if this is false, we must avoid
        //   calling `IsSimplyBindable...()`.
        [[nodiscard]] const TypeBindableWithSameAddress &FindTypeBindableWithSameAddress(const cppdecl::QualifiedName &type_name, bool can_invent_new_bindings = true);
        [[nodiscard]] const TypeBindableWithSameAddress *FindTypeBindableWithSameAddressOpt(const cppdecl::QualifiedName &type_name, bool can_invent_new_bindings = true);
        // The name must come from `cppdecl::ToCode(..., canonical_c_style)`.
        [[nodiscard]] const TypeBindableWithSameAddress &FindTypeBindableWithSameAddress(const std::string &type_name_str, bool can_invent_new_bindings = true);
        [[nodiscard]] const TypeBindableWithSameAddress *FindTypeBindableWithSameAddressOpt(const std::string &type_name_str, bool can_invent_new_bindings = true);


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

            // Set to true to indicate that the pass-by-value is dirt cheap and should always copy, instead of offering the pass-by enum.
            // This already happens by default if `is_trivially_copy_constructible || is_trivially_move_constructible`, and this variable is a way to explicitly opt into this despite not being trivial.
            bool assume_copying_is_cheap = false;

            // If you add new fields here, you might need to update `CombineCommonProperties()`.


            TypeTraits() {}

            struct Trivial {explicit Trivial() = default;};
            // This is for types that are copyable and have all their operations trivial.
            TypeTraits(Trivial)
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

            struct Nothing {explicit Nothing() = default;};
            // Absolutely no operations are supported. This is for opaque classes (e.g. `std::istream`, `std::ostream` at the moment).
            TypeTraits(Nothing)
            {
                // Nothing!
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

                // This implies `is_polymorphic`, and also automatically makes the class non-constructible (but it still remains destructible,
                //   as long as the destructor is virtual, is to allow destruction through virtual bases).
                // Maybe we'll decide to separate this from constructability later, but I don't see why we would, as it would complicate things quite a lot.
                // Maybe we should disable assignability too, since we don't emit the assignment wrappers for abstract classes anyway,
                //   because it's a bit tricky, because our assignment wrappers take the class by value. But this one is less obvious, since in the C++ sense
                //   abstract classes are still assignable.
                bool is_abstract = false;

                bool is_standard_layout = false;
                bool is_trivially_copyable = false;

                // Bound as a same-layout struct using `--expose-as-struct`.
                bool is_same_layout_struct = false;

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


        // Given a type, iterates over every non-builtin type dependency that it has.
        void ForEachNonBuiltInNestedTypeInType(const cppdecl::Type &type, const std::function<void(const cppdecl::QualifiedName &cpp_type_name, bool need_definition)> func);


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


        // Throws if the `type` is banned and shouldn't appear in the input.
        // In particular, this respects `reject_long_and_long_long`.
        void CheckForBannedTypes(const cppdecl::Type &type);


        enum class InsertHeadersMode
        {
            insert_to_header = 1 << 0,
            insert_to_source = 1 << 1,
            all = insert_to_header | insert_to_source,
        };
        MRBIND_FLAG_OPERATORS_IN_CLASS(InsertHeadersMode)

        struct ExtraHeaders
        {
            // Separately the entirely custom ones and stdlib ones, which currently is purely decorative.

            std::unordered_set<std::string> stdlib_in_source_file;
            std::unordered_set<std::string> stdlib_in_header_file;

            // Those are functions to allow them to be lazy (to avoid generating unneeded custom headers).
            std::function<std::unordered_set<std::string>()> custom_in_source_file;
            std::function<std::unordered_set<std::string>()> custom_in_header_file;

            void InsertToFile(OutputFile &file, InsertHeadersMode mode = InsertHeadersMode::all) const;

            void MergeFrom(const ExtraHeaders &other);
        };

        struct TypeSizeAndAlignment
        {
            std::size_t size = std::size_t(-1);
            std::size_t alignment = std::size_t(-1);
        };

        struct BindableType
        {
            // This is normally NOT optional. Using `std::optional` here to catch forgetting to set this.
            // You don't need this if this is a `remove_sugar == true` desugared binding.
            std::optional<TypeTraits> traits;

            // This is optional, set only if known. This being set implies that the binary representation matches too.
            // Note, this is WRITE-ONLY. Read using `FindSameSizeAndAlignment()`.
            // This should be set only in the sugared type.
            std::optional<TypeSizeAndAlignment> c_cpp_size_and_alignment;

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

                // Optional. If specified, must end with a newline.
                // Those statements are added to the beginning of the C function that has this parameter.
                // The goal is to set up anything related to exception cleanup, before something could throw.
                std::function<std::string(const std::string &cpp_param_name)> early_non_throwing_statements = {};

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
                // By default you can fill this using `ForEachNonBuiltInNestedTypeInType()`.
                std::unordered_map<std::string, SameAddrBindableTypeDependency> same_addr_bindable_type_dependencies;

                // The additional headers to include.
                // This is for custom and stdlib headers, not for those generated from parsing. Use `same_addr_bindable_type_dependencies` for those.
                ExtraHeaders extra_headers;

                // Should we disable the deprecation warnings in the function body?
                // We need to it for the entire body, because GCC apprently doesn't support injecting `_Pragma()` into arbitrary places in expressions (duh!).
                bool silence_deprecation = false;

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

                // Only matters for interop.
                // Set to true if the parameter usage is somehow sugared, i.e. considered to be unique for this specific type,
                //   as opposed to matching whatever `BindableType::interop_info` says.
                // In particular, if this is a heap-allocated class, you must set this to true if you're doing anything other than passing an opaque pointer to it.
                //   (Except that passing exposed structs by value isn't considered to be sugar.)
                bool considered_sugar_for_interop = false;

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


                // Modifies a source file to include all necessary headers, forward declarations, etc, to be able to use this parameter usage.
                void AddDependenciesToFile(Generator &generator, OutputFile &file) const
                {
                    generator.ApplyTypeDependenciesToFile(file, same_addr_bindable_type_dependencies);
                    extra_headers.InsertToFile(file);
                }

                ParamUsage() {} // Make Clang happy.
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

            // Returns either `param_usage` or `param_usage_with_default_arg`, depending on whether a default argument is required, and on which of them are null.
            // Throws on failure.
            [[nodiscard]] const ParamUsage &GetParamUsage(bool has_useful_default_arg) const
            {
                if (has_useful_default_arg)
                {
                    if (param_usage_with_default_arg)
                        return *param_usage_with_default_arg;
                    else
                        throw std::logic_error("Internal error: No suitable parameter usage for this type.");
                }
                else
                {
                    if (param_usage)
                        return *param_usage;
                    else if (param_usage_with_default_arg)
                        return *param_usage_with_default_arg;
                    else
                        throw std::logic_error("Internal error: No suitable parameter usage for this type.");
                }
            }


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
                // Providing the source `file` (which is the C++ source file, not the header) so you can add some extra headers or whatever. Note that this is intentionally redundant, as we also have `extra_headers` below.
                // Note that `expr` can be insufficiently parenthesized. Don't forget to add your own parentheses if you do anything funny with it.
                std::function<std::string(OutputFile::SpecificFileContents &file, std::string_view expr)> make_return_expr;

                // Which types-bindable-with-same-address do we need to include or forward-declare?
                // By default you can fill this using `ForEachNonBuiltInNestedTypeInType()`.
                std::unordered_map<std::string, SameAddrBindableTypeDependency> same_addr_bindable_type_dependencies;

                // The additional headers to include.
                // This is for custom and stdlib headers, not for those generated from parsing. Use `same_addr_bindable_type_dependencies` for those.
                ExtraHeaders extra_headers;

                // Should we disable the deprecation warnings in the function body?
                // We need to it for the entire body, because GCC apprently doesn't support injecting `_Pragma()` into arbitrary places in expressions (duh!).
                bool silence_deprecation = false;

                // When this type is returned, this string is appended to the comment.
                // Don't include line breaks before and after, we add them automatically.
                // Do include the leading slashes, normally `///`.
                // `param_name` is typically empty. If it's not empty, your message must talk about a "callback parameter" with this name, as opposed to a return value.
                //   This is when binding C callbacks, for their parameters.
                std::function<std::string(std::string_view callback_param_name)> append_to_comment;

                // Only matters for interop.
                // Set to true if the return usage is somehow sugared, i.e. considered to be unique for this specific type,
                //   as opposed to matching whatever `BindableType::interop_info` says.
                // In particular, if this is a heap-allocated class, you must set this to true if you're doing anything other than returning an opaque pointer to it.
                //   (Except that returning exposed structs by value isn't considered to be sugar.)
                bool considered_sugar_for_interop = false;

                // Calls `make_return_expr` if not null, otherwise returns just `expr`.
                // Note that `expr` can be insufficiently parenthesized. Don't forget to add your own parentheses if you do anything funny with it.
                [[nodiscard]] std::string MakeReturnExpr(OutputFile::SpecificFileContents &file, std::string_view expr) const
                {
                    if (make_return_expr)
                        return make_return_expr(file, expr);
                    else
                        return std::string(expr);
                }


                // Modifies a source file to include all necessary headers, forward declarations, etc, to be able to use this return usage.
                void AddDependenciesToFile(Generator &generator, OutputFile &file, InsertHeadersMode mode = InsertHeadersMode::all) const
                {
                    if (bool(mode & InsertHeadersMode::insert_to_header))
                        generator.ApplyTypeDependenciesToFile(file, same_addr_bindable_type_dependencies);

                    extra_headers.InsertToFile(file, mode);
                }

                ReturnUsage() {} // Make Clang happy.
            };
            // If this is null, this type is unusable as a return type.
            std::optional<ReturnUsage> return_usage;


            // The type description for interop. Note that this type automatically defaults to `CInterop::TypeKinds::Invalid`.
            // This is not optional for all types we support ourselves, but third-party custom types can skip this if they never use `--output-desc-json`.
            CInterop::TypeKindVar interop_info;


            BindableType() {}
        };
        // The types that we know how to bind.
        // Don't access this directly! Use `FindBindableType` because that will lazily insert the missing types here.
        // The only legal way to insert into this is from `FindBindableTypeOpt()`.
        OrderedMap<std::string, BindableType> bindable_cpp_types;
        // An alternative version of the map above for the desugared cases. See `FindBindableType()` and its parameter `remove_sugar`.
        OrderedMap<std::string, BindableType> bindable_cpp_types_nosugar;

        // Finds a type in `bindable_cpp_types`. If no such type, tries to generate the binding information for it (and inserts it into the map), or throws on failure.
        // If `remove_sugar == true`, avoid the fancy rewrites like replacing `const std::string &` with char pointers. This is useful e.g. for `this` parameters.
        // This among other things disallows passing classes by value.
        // NOTE: This doesn't allow top-level const types, and hard-errors on those.
        [[nodiscard]] const BindableType &FindBindableType(const cppdecl::Type &type, bool remove_sugar = false, bool can_invent_new_bindings = true);
        // This version returns null on failure.
        [[nodiscard]] const BindableType *FindBindableTypeOpt(const cppdecl::Type &type, bool remove_sugar = false, bool can_invent_new_bindings = true);

        // The mutable versions.
        [[nodiscard]] BindableType &FindBindableType_Mutable(const cppdecl::Type &type, bool remove_sugar = false, bool can_invent_new_bindings = true);
        [[nodiscard]] BindableType *FindBindableTypeOpt_Mutable(const cppdecl::Type &type, bool remove_sugar = false, bool can_invent_new_bindings = true);

        // Calls `FindBindableType()`, and then extracts the `.traits` from the result.
        // But additionally supports const types, by removing assignability from those traits.
        // This is unlike `FindBindableType()`, which hard-errors on const types.
        // Throws on failure, including if `FindBindableType()` finds nothing.
        [[nodiscard]] TypeTraits FindTypeTraits(cppdecl::Type type);
        // Same, but returns null instead of throwing on failure.
        [[nodiscard]] std::optional<TypeTraits> FindTypeTraitsOpt(cppdecl::Type type);

        // Find size and alignment of a type, if they're shared between C and C++ and the type has the same binary representation.
        // Notably this rejects references.
        [[nodiscard]] TypeSizeAndAlignment FindSameSizeAndAlignment(cppdecl::Type type);
        [[nodiscard]] std::optional<TypeSizeAndAlignment> FindSameSizeAndAlignmentOpt(cppdecl::Type type);

        // Uses `ForEachNonBuiltInNestedTypeInType()` to populate `same_addr_bindable_type_dependencies` in the type.
        void FillDefaultTypeDependencies(const cppdecl::Type &source, BindableType &target);

        // This is for `BindableType::{Return,Param}Usage::same_addr_bindable_type_dependencies`.
        // Applies all headers and/or forward declarations from it to the specified file.
        void ApplyTypeDependenciesToFile(OutputFile &file, const std::unordered_map<std::string, BindableType::SameAddrBindableTypeDependency> &deps);


        // This acts as a cache when parsing C++ types.
        mutable std::unordered_map<std::string, cppdecl::Type> cached_parsed_types;

        // Parses a cppdecl type from `str`, throws on failure or if there was unparsed junk at the end of input.
        // Pass the CANONICAL types to this.
        // This also undoes the `[u]int64`->typedefs replacement done by `CppdeclToCode()`, if we find that.
        [[nodiscard]] const cppdecl::Type &ParseTypeOrThrow(const std::string &str) const;

        mutable std::unordered_map<std::string, cppdecl::QualifiedName> cached_parsed_qual_names;
        [[nodiscard]] const cppdecl::QualifiedName &ParseQualNameOrThrow(const std::string &str) const;

        mutable std::unordered_map<std::string, cppdecl::TemplateArgumentList> cached_parsed_targ_lists;
        [[nodiscard]] const cppdecl::TemplateArgumentList &ParseTargListOrThrow(const std::string &str) const;

        mutable std::unordered_map<std::string, cppdecl::PseudoExpr> cached_parsed_pseudoexprs;
        [[nodiscard]] const cppdecl::PseudoExpr &ParseExprOrThrow(const std::string &str) const;

        // Calls `cppdecl::ToCode()` with the correct flags, and some adjustments.
        // Always use this instead of `ToCode()`.
        // This also replaces `[u]int64` with our custom typedefs.
        [[nodiscard]] std::string CppdeclToCode(const cppdecl::Type &input, cppdecl::ToCodeFlags extra_flags = {}, std::size_t skip_first_modifiers = 0) const;
        [[nodiscard]] std::string CppdeclToCode(const cppdecl::QualifiedName &input, cppdecl::ToCodeFlags extra_flags = {}) const;
        [[nodiscard]] std::string CppdeclToCode(const cppdecl::Decl &input, cppdecl::ToCodeFlags extra_flags = {}) const;
        [[nodiscard]] std::string CppdeclToCode(const cppdecl::PseudoExpr &input, cppdecl::ToCodeFlags extra_flags = {}) const;
        [[nodiscard]] std::string CppdeclToCode(const cppdecl::SimpleType &input, cppdecl::ToCodeFlags extra_flags = {}, cppdecl::CvQualifiers ignore_cv_quals = {}) const;
        [[nodiscard]] std::string CppdeclToCode(const cppdecl::TemplateArgumentList &input, cppdecl::ToCodeFlags extra_flags = {}) const;

        // Use this when generating comments. The result might not be valid C++.
        // This e.g. merges `std::expected` and `tl::expected` into just `expected`, if `--merge-std-and-tl-expected` is enabled.
        // Note, this must also be used for interop!
        [[nodiscard]] std::string CppdeclToCodeForComments(cppdecl::Type input) const;
        [[nodiscard]] std::string CppdeclToCodeForComments(cppdecl::QualifiedName input) const;
        [[nodiscard]] std::string CppdeclToCodeForComments(cppdecl::Decl input) const;
        [[nodiscard]] std::string CppdeclToCodeForComments(cppdecl::PseudoExpr input) const;
        [[nodiscard]] std::string CppdeclToCodeForComments(cppdecl::SimpleType input) const;
        [[nodiscard]] std::string CppdeclToCodeForComments(cppdecl::TemplateArgumentList input) const;

        // Tweaks the input to make it look prettier, such as for forming identifiers or generating comments.
        // Normally you don't need to call this manually, as `CppdeclToIdentifier()` and `CppdeclToCodeForComments()` do that automatically.
        // The result does NOT have to be valid C++.
        // This e.g. merges `std::expected` and `tl::expected` into just `expected`, if `--merge-std-and-tl-expected` is enabled.
        void CppdeclAdjustForCommentsAndIdentifiers(cppdecl::Type &target) const;
        void CppdeclAdjustForCommentsAndIdentifiers(cppdecl::QualifiedName &target) const;
        void CppdeclAdjustForCommentsAndIdentifiers(cppdecl::Decl &target) const;
        void CppdeclAdjustForCommentsAndIdentifiers(cppdecl::PseudoExpr &target) const;
        void CppdeclAdjustForCommentsAndIdentifiers(cppdecl::SimpleType &target) const;
        void CppdeclAdjustForCommentsAndIdentifiers(cppdecl::TemplateArgumentList &target) const;

        // Use this instead of `cppdecl::ToString(..., identifier)`.
        [[nodiscard]] std::string CppdeclToIdentifier(cppdecl::Type input) const;
        [[nodiscard]] std::string CppdeclToIdentifier(cppdecl::QualifiedName input) const;
        [[nodiscard]] std::string CppdeclToIdentifier(cppdecl::Decl input) const;
        [[nodiscard]] std::string CppdeclToIdentifier(cppdecl::PseudoExpr input) const;
        [[nodiscard]] std::string CppdeclToIdentifier(cppdecl::SimpleType input) const;
        [[nodiscard]] std::string CppdeclToIdentifier(cppdecl::TemplateArgumentList input) const;


        // This parses `str` as a pseudo-expression, and then applies `CppdeclToCodeForComments()`.
        // Additionally, if the parsing fails (which can happen, since e.g. `cppdecl` currently doesn't handle `<` as an operator),
        //   we log the failure and return the string unchanged, which is better than nothing.
        [[nodiscard]] std::string RoundtripDefaultArgumentForComments(const std::string &str);


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
        // `indent_trailing_newline` only has effect if we have a trailing newline. In that case, this controls whether we add indentation after it or not.
        [[nodiscard]] static std::string IndentString(std::string_view str, int levels, bool indent_first_line, bool indent_trailing_newline = true);

        // `name` is `operator??`.
        // Returns true if it semantically should be a free function. E.g. `operator+` should be, but `operator=` should not.
        [[nodiscard]] bool OverloadedOperatorShouldBeEmittedAsFreeFunction(std::string_view name) const;

        // Returns the name for the C function wrapping this overloaded operator.
        // Only call this if `OverloadedOperatorShouldBeEmittedAsFreeFunction()` returned true.
        // If you pass `fallback == true`, a secondary fallback name will be returned, that should be used in case of conflicts.
        // Only pass non-null to `enclosing_class` if `parsed_func` is a `ClassMethod`.
        [[nodiscard]] std::string MakeFreeFuncNameForOverloadedOperator(const ClassEntity *enclosing_class, std::variant<const FuncEntity *, const ClassMethod *> parsed_func, bool fallback) const;

        // Is this field type usable in structs that want to have the same layout in C and C++?
        [[nodiscard]] bool FieldTypeUsableInSameLayoutStruct(const cppdecl::Type &cpp_type);

        // The given `type` is assumed to pass `FieldTypeUsableInSameLayoutStruct()`.
        // Updates `file` to include the decessary headers and/or forward declarations for this type.
        void AddDependenciesToFileForFieldOfSameLayoutStruct(cppdecl::Type cpp_type, OutputFile &file);


        struct CachedIncludesForType
        {
            std::unordered_set<std::string> stdlib;
            std::unordered_set<std::string> generated;

            void MergeFrom(const CachedIncludesForType &other)
            {
                stdlib.insert(other.stdlib.begin(), other.stdlib.end());
                generated.insert(other.generated.begin(), other.generated.end());
            }
        };
        // Don't access directly.
        // `TryFindHeadersForCppTypeForSourceFile()` caches the results here. The keys are stringified `QualifiedName`s.
        std::unordered_map<std::string, CachedIncludesForType> cached_cpp_includes_for_cpp_type_names;

        // Tries to find the rights headers that can be included in `file.source` to get `type` to work.
        // Will silently skip the type or some of its parts if we don't know what headers they need.
        [[nodiscard]] ExtraHeaders TryFindHeadersForCppTypeForSourceFile(const cppdecl::Type &type);
        // Same, but for names.
        [[nodiscard]] ExtraHeaders TryFindHeadersForCppNameForSourceFile(const cppdecl::QualifiedName &name);


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
            struct Name
            {
                // The emitted C name.
                std::string c;

                // The original C++ name, for generating the JSON description of the output.
                // This isn't optional for us, I'm using `std::monostate` to catch forgetting to set this.
                // Third-party patched code can skip setting this if they never use `--output-desc-json`.
                // What kind of type is used here must match whether or not this is a member function (i.e. whether we have a `this` parameter,
                //   including a fake one for static functions).
                // NOTE: All strings in this must be produced using `CppdeclToCodeForComments`! To e.g. adjust `std/tl::expected` to just `expected`, if that's enabled.
                std::variant<std::monostate, CInterop::FuncKindVar, CInterop::MethodKindVar> cpp_for_interop;

                // If true, `cpp_for_interop` is mostly ignored (can be empty) and the function isn't emitted at all in the description JSON.
                bool ignore_in_interop = false;

                [[nodiscard]] bool IsConstructor() const
                {
                    // We could reject `ignore_in_interop` here. Not sure if it makes sense to do so.
                    if (auto method = std::get_if<CInterop::MethodKindVar>(&cpp_for_interop))
                        return std::holds_alternative<CInterop::MethodKinds::Constructor>(*method);
                    return false;
                }
            };

            // The name of this function.
            Name name;

            // This is primarily for interop, the C generator doesn't care about it.
            bool mark_virtual = false;

            // The C++ return type. We'll translate it to C automatically.
            cppdecl::Type cpp_return_type = cppdecl::Type::FromSingleWord("void");

            // If true, disable some clever return type rewrites.
            // This isn't very useful compared to the `Param::remove_sugar` below. See that for more details.
            bool remove_return_type_sugar = false;

            // Use the return type as is, don't attempt to translate it from C++ to C.
            bool use_return_type_as_is = false;

            // If true, signal to the interop that the resulting pointer is an array pointer, not a single object pointer.
            // Will error if the return type is not a pointer.
            bool mark_as_returning_pointer_to_array = false;

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
            // This is a bit dumb, it would be better to modify `params` to allow parameters that are not exposed to the signature, and only appear as arguments.
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

            // Should we disable the deprecation warnings in the function body?
            // We need to it for the entire body, because GCC apprently doesn't support injecting `_Pragma()` into arbitrary places in expressions (duh!).
            // We also have similar flags in parameter and return usages, and accumulate them all.
            bool silence_deprecation = false;

            // Marks the emitted function as deprecated.
            // If the string is empty, uses no message.
            // The reason why we don't separate an empty message from no message is because libclang itself seemingly doesn't have that separation,
            //   at least in the one function I used to get the deprecation message.
            std::optional<std::string> mark_deprecated;

            struct Param
            {
                // Empty if unnamed.
                std::string name;

                // Normally null. If non-null, this is used to generate the argument spelling instead of the normall process.
                // This works even with `use_type_as_is`.
                // The parameter name has to be a parameter because it receives a proper adjusted name even if `.name` in this struct is empty.
                std::function<std::string(std::string_view param_name)> custom_argument_spelling = nullptr;

                // Normally null. If non-null, this is used to post-process the argument expression.
                // Compare with `custom_argument_spelling`, which replaces the usual argument generation, instead of merely post-processing this.
                // If both are specific, `postprocess_argument()` is applied to the result of `custom_argument_spelling()`.
                // Don't forget to wrap `expr` in parentheses first, if necessary.
                std::function<std::string(std::string_view expr)> postprocess_argument = nullptr;

                enum class Kind
                {
                    normal, // Nothing unusual about this parameter.
                    this_ref, // This is the a `*this` parameter. Must be a reference (possibly rvalue). See `cpp_called_func` for how those parameters get used.
                    static_, // This is a static method, and this C++ parameter is only used for its type. The C parameter isn't emitted at all.
                };

                // At most one function parameter can have this set to anything other than `normal`.
                Kind kind = Kind::normal;

                // If true, this argument will not be added to the function call.
                // Since this is a C implementation detail, it doesn't affect the interop.
                bool omit_from_call = false;

                // If true, disable the fancy rewrites like replacing `std::string` with `const char *` pointers.
                // This is useful e.g. for `this` parameters. Can't be used when passing class types by value.
                bool remove_sugar = false;

                // We translate this to C types automatically.
                cppdecl::Type cpp_type;

                // Indicates that this function can return a reference to this parameter.
                // This is a shorthand for `lifetimes.ReturnsReferenceToParam(i)` or `lifetimes.ReturnsReferenceToSubobject()` if this is the `this` parameter.s
                // If true, indicates that this function can store a reference to this parameter in the returned object.
                // Must not use this for constructors! Use `reference_assigned` instead.
                bool reference_returned = false;
                // If false, has no effect.
                // If true or a string, indicates that this function can store a reference to this parameter in the current object (in `this`).
                // If true, this erases all existing references in the object. If this is a string, then only erases references marked with the same string. An empty string erases all references, it has the same effect as `true`.
                // This is a shorthand for `lifetimes.AssignsReferenceToParam(i, "...")`.
                // It doesn't make sense to make this conditional on the parameter type being a reference, since if it's not a reference, then this will automatically apply to whatever it keeps alive.
                // You can use this in constructors to refer to the constructed object.
                std::variant<bool, std::string> reference_assigned = false;
                // Same, but doesn't remove the existing references.
                // It doesn't make sense to make this conditional on the parameter type being a reference, since if it's not a reference, then this will automatically apply to whatever it keeps alive.
                std::variant<bool, std::string> reference_appended = false;

                // If true, do not attempt to translate the type to C, paste it as is.
                // This conflicts with `default_arg` (will trigger an internal error when emitting).
                // If this is true, `remove_sugar` be ignored.
                bool use_type_as_is = false;

                // If true, signal to the interop that the resulting pointer is an array pointer, not a single object pointer.
                // Will error if the parameter type is not a pointer.
                bool mark_as_pointer_to_array = false;


                struct DefaultArg
                {
                    std::string cpp_expr; // Spelled as a C++ expression.
                    std::string original_spelling; // Spelled in a user-friendly manner (as originally written in the C++ source).
                };
                std::optional<DefaultArg> default_arg{}; // Adding `{}` to avoid Clang warning when this field is omitted in designated init.
            };
            std::vector<Param> params;

            // Lifetime information. This can come from the parser, and it also makes sense to specify it manually for custom bindings.
            Lifetimes lifetimes;

            enum class FieldAccessorKind
            {
                getter, // Returns a const reference to the field (a pointer in C).
                mutable_getter, // Returns a mutable reference to the field (a pointer in C).
                setter, // Takes the new field value as a parameter.
                array_size, // If this is a plain array member, generates a function that returns its size.
            };

            struct FieldAccessorDesc
            {
                // To what field should we add this accessor?
                CInterop::ClassField *interop_field = nullptr;

                // What kind of accessor is this?
                FieldAccessorKind kind{};

                FieldAccessorDesc() {}
            };
            // This should be set for class fields.
            // You usually don't need to set this manually. This is set by `SetAsFieldAccessor()`.
            std::optional<FieldAccessorDesc> field_accessor;

            // Appends the parsed parameters to this function.
            // Appends to the existing parameters, doesn't remove them.
            void AddParamsFromParsedFunc(CBindings::Generator &self, const std::vector<FuncParam> &new_params);

            // Only call if you're sure that this is a post-increment/decrement. Removes the `int` parameter, replacing it with a dummy `0` argument.
            void RemoveIntParamFromPostIncrOrDecr();

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
            void AddThisParamFromParsedClass(Generator &self, const ClassEntity &new_class, ThisParamKind kind);

            void SetReturnTypeFromParsedFunc(Generator &self, const BasicReturningFunc &new_func);

            void SetLifetimesFromParsedFunc(const BasicFunc &new_func, bool is_member_func_or_ctor, bool is_ctor);

            void SetFromParsedFunc(Generator &self, const FuncEntity &new_func, bool is_class_friend, std::span<const NamespaceEntity *const> new_using_namespace_stack);
            void SetFromParsedClassCtor(Generator &self, const ClassEntity &new_class, const ClassCtor &new_ctor, std::span<const NamespaceEntity *const> new_using_namespace_stack);
            void SetFromParsedClassMethod(Generator &self, const ClassEntity &new_class, const ClassMethod &new_method, std::span<const NamespaceEntity *const> new_using_namespace_stack);
            void SetFromParsedClassConvOp(Generator &self, const ClassEntity &new_class, const ClassConvOp &new_conv_op, std::span<const NamespaceEntity *const> new_using_namespace_stack);

            // Makes an accessor for a field.
            // Returns false if not applicable (e.g. if the member is const and we're trying to generate
            // `interop_field` is mandatory for our own code, but the user code could skip it if they never use `--output-desc-json`.
            bool SetAsFieldAccessor(CBindings::Generator &self, const ClassEntity &new_class, const ClassField &new_field, FieldAccessorKind kind, CInterop::ClassField *interop_field);
        };
        void EmitFunction(OutputFile &file, const EmitFuncParams &params);

        struct EmittedFunctionStrings
        {
            // With leading backslashes. Has a trailing newline.
            std::string comment;

            // This is a part of `comment` that explains the lifetime annotations on this function.
            // If you're printing the entire `comment`, you don't need to print this separately.
            std::string comment_lifetimes;

            // The function declaration (C style, of course).
            cppdecl::Decl decl;

            // Wrapped in braces. No trailing newline.
            std::string body;

            // Those are the public attributes that should be prepended to the declaration in the header.
            // Either empty, or ends with a whitespace or newline, depending on what spelling we think will look better.
            std::string attributes;

            struct ParamInfo
            {
                // The copy of the parameter name. Except if it was empty, this is replaced with a unique placeholder name.
                std::string fixed_name;

                // The adjusted parameter type. Typically this is just to remove constness.
                cppdecl::Type fixed_type;

                // If true, this parameter has a default argument that's considered useful, i.e. affects the parameter passing style.
                bool has_useful_default_arg = false;
            };

            // Stores additional information about the parameters. Has the same size as `params.params`.
            std::vector<ParamInfo> params_info;

            // Stores the lifetime information. This is based on `EmitFuncParams::lifetimes`, but with additional information appended.
            Lifetimes lifetimes;
        };
        // Like `EmitFunction()`, but doesn't write the function directly to the file. Instead returns the strings composing it.
        // But the includes and such still get written directly to the file.
        [[nodiscard]] EmittedFunctionStrings EmitFunctionAsStrings(OutputFile &file, const EmitFuncParams &params);


        // Returns the C name of a function that's used to free memory without calling destructors.
        // There is a separate version for arrays because ASAN complains about alloc-dealloc mismatch otherwise.
        // `file` is optional. If specific, the include gets added to it that declares this function.
        [[nodiscard]] EmitFuncParams::Name GetMemoryDeallocFuncName(bool is_array, OutputFile *file);
        // Returns the C name of a function that's used to allocate memory without calling constructors.
        // Not particualry useful by itself, but added for consistency with `GetMemoryDeallocFuncName()`.
        // `file` is optional. If specific, the include gets added to it that declares this function.
        [[nodiscard]] EmitFuncParams::Name GetMemoryAllocFuncName(bool is_array, OutputFile *file);

        // This one is for member function names (including static member functions), for both parsed and custom classes.
        // Prefer `HeapAllocatedClassBinder::MakeMemberFuncName()` if you're using that class already.
        [[nodiscard]] EmitFuncParams::Name MakeMemberFuncName(std::string_view c_type_name, std::string func_name, std::optional<CInterop::MethodKindVar> interop_var = {}) const;

        // When you have two functions, one `const` and one non-`const`, use those functions to generate their names.
        // The result could be passed to `MakeMemberFuncName()`.
        // NOTE! Those are rarely useful, prefer the `HeapAllocatedClassBinder::MakeMemberFuncName(generator, name, is_const)` overload.
        //   Those are only useful if you're binding an operator, which can't be done with that overload.
        [[nodiscard]] std::string ConstMethodVariant(std::string name) const;
        [[nodiscard]] std::string MutableMethodVariant(std::string name) const;
        [[nodiscard]] std::string MaybeConstMethodVariant(std::string name, bool is_const) const;

        // The destroy function name for parsed and custom classes. It calls `delete`.
        // We have a separate function for destroying arrays (`is_array == true`) which corresponds to C++'s `delete[]`.
        // NOTE: You probably want `GetDestroyFuncNameForType()` and not this function. This function trusts you
        //   that this is a class (and not an exposed struct) and that this function actually exists, while that one properly analyzes the given type.
        [[nodiscard]] EmitFuncParams::Name GetClassDestroyFuncName(std::string_view c_type_name, bool is_array = false) const;

        // The name for the functions that add an offset to a pointer. We need this because the pointers themselves are typically opaque on the C side.
        [[nodiscard]] EmitFuncParams::Name GetClassPtrOffsetFuncName(std::string_view c_type_name, bool is_const) const;

        // Generates the name for a free function (as in a non-member function).
        [[nodiscard]] EmitFuncParams::Name MakeFreeFuncName(std::string name, std::optional<CInterop::FuncKindVar> var = {}) const;


        // Returns the deletion function name that we think should be used to delete this type.
        // Throws if the type is unknown.
        [[nodiscard]] std::string GetDestroyFuncNameForType(cppdecl::Type type, bool is_array = false);


        void EmitClassMemberAccessors(OutputFile &file, const ClassEntity &new_class, const ClassField &new_field);

        // Writes `comment` to the `file`, possibly adjusting it before writing.
        // The input must end with a newline, and can optionally start with a newline.
        // Use this for emittinig all comments (even though we currently skip some internal comments; maybe we shouldn't).
        // NOTE: You shouldn't use this to manually add comments to functions, structs, etc, because those comments need to be registered
        //   and serialized along with their targets. The functions for emitting functions/structs/etc all have specialized ways
        //   to pass their comments.
        void EmitCommentLow(OutputFile::SpecificFileContents &file, std::string comment)
        {
            if (comment.empty())
                return;

            assert(comment.ends_with('\n'));
            generated_comments_adjuster.Adjust(comment);
            file.contents += comment;
        }

        // Prepares a comment for the interop output.
        // `text_with_slashes` must either be empty or end with a newline. Must include slashes (or equivalent).
        // Can contain at most one leading newline, which is ignored.
        [[nodiscard]] CInterop::Comment MakeCommentForInterop(std::string_view text_with_slashes)
        {
            if (text_with_slashes.starts_with('\n'))
                text_with_slashes.remove_prefix(1);
            assert(!text_with_slashes.starts_with('\n'));
            assert(text_with_slashes.empty() || text_with_slashes.ends_with('\n'));

            return {.c_style = std::string(text_with_slashes)};
        }

        // Creates a description of an output file for interop purposes.
        [[nodiscard]] CInterop::OutputFile MakeOutputFileDescForInterop(OutputFile &file)
        {
            return {.relative_name = file.relative_name};
        }


        // Here if `field_expected_size_and_alignment.{size,alignment}` and `field_expected_offset` are not `-1`, they are validated against what `type` is known to have.
        // This is done for each of the three individually, they can be set to `-1` individually.
        // We never accept `type`s for which we don't already know those parameters.
        // Here if `field_comment` isn't empty, it must end with a trailing newline, and include leading slashes.
        using EmitExposedStructFieldFunc = std::function<void(const cppdecl::Type &field_cpp_type, std::string field_comment, std::string field_name, TypeSizeAndAlignment field_expected_size_and_alignment, std::size_t field_expected_offset)>;

        // Calls `func` once, where you can then call `emit_field()` one or more times to emit fields.
        // If `expected_size_and_alignment.{size,alignment}` are not `-1`, then they are validated against the values computed form the fields you create.
        // This is done for each of them individually, they can be set to `-1` individually.
        // Here if `comment` isn't empty, it must end with a trailing newline, and include leading slashes.
        void EmitExposedStruct(OutputFile &file, std::string comment, const cppdecl::QualifiedName &cpp_type_name, std::string_view c_type_str, TypeSizeAndAlignment expected_size_and_alignment, std::function<void(EmitExposedStructFieldFunc emit_field)> func);


        // Here if `elem_comment` isn't empty, must end with a newline and must include leading slashes.
        // `elem_name` automatically gets the enum name prepended to it, followed by `_`.
        // The `unsigned_value` is not optional. It'll be conditionally cast to `std::int64_t` if the `cpp_underlying_type` passed to `EmitEnum()` is signed.
        using EmitEnumFunc = std::function<void(std::string elem_comment, std::string_view elem_name, std::uint64_t elem_unsigned_value)>;

        // Emits a enum.
        void EmitEnum(OutputFile &file, std::string comment, const cppdecl::QualifiedName &cpp_enum_type, std::string_view c_enum_name, std::string_view cpp_underlying_type, std::function<void(EmitEnumFunc emit_elem)> func);

        // Creates a binder for a parsed class. `parsed_full_type` should receive `ClassEntity::full_type` (you don't need to roundtrip it through cppdecl,
        //   we do it automatically).
        [[nodiscard]] HeapAllocatedClassBinder MakeParsedClassBinder(const std::string &parsed_full_type);

        // Call this once, when emitting the forward declaration of a class, to prepare the interop information for it.
        // Throws if something is wrong.
        [[nodiscard]] CInterop::TypeKinds::Class &CreateClassDescForInterop(const cppdecl::QualifiedName &cpp_name);

        // Given a C++ class name, finds its interop description. Constness and reference-ness on the type is ignored.
        // If there's no such class, throws. Also throws if this class doesn't yet have its interop description set, which can happen if you call this too early.
        [[nodiscard]] CInterop::TypeKinds::Class &FindClassDescForInterop(cppdecl::Type cpp_type);


        struct Visitor
        {
            virtual ~Visitor() = default;

            virtual void VisitEarly(const ClassEntity &cl) {(void)cl;}
            virtual void VisitEarly(const FuncEntity &func) {(void)func;}
            virtual void VisitEarly(const EnumEntity &en) {(void)en;}
            virtual void VisitEarly(const TypedefEntity &td) {(void)td;}

            virtual void Visit(const ClassEntity &cl) {(void)cl;}
            virtual void Visit(const FuncEntity &func) {(void)func;}
            virtual void Visit(const EnumEntity &en) {(void)en;}
            virtual void Visit(const TypedefEntity &td) {(void)td;}

            // `pass_number == 1` calls `VisitEarly()`. `2` calls `Visit()`.
            // `0` calls both.
            //
            // Currently we process the entire contents twice. See the `VisitorEmit` for details.

            void Process(const ClassEntity &cl, int pass_number)
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

                // Second (main) pass uses pre-order because it looks nicer.
                if (pass_number == 2)
                    Visit(cl);

                Process(static_cast<const mrbind::EntityContainer &>(cl), pass_number);

                // First pass uses post-order because of e.g. this:
                //     struct A
                //     {
                //         struct B {int x;};
                //         B b;
                //     };
                // Assume both structs are exposed. To emit exposed `A`, we need to first emit exposed `B`, hence post-order.
                if (pass_number == 1)
                    VisitEarly(cl);
            }

            void Process(const FuncEntity &func, int pass_number)
            {
                if (pass_number == 1)
                    VisitEarly(func);
                if (pass_number == 2)
                    Visit(func);
            }
            void Process(const EnumEntity &en, int pass_number)
            {
                if (pass_number == 1)
                    VisitEarly(en);
                if (pass_number == 2)
                    Visit(en);
            }
            void Process(const TypedefEntity &td, int pass_number)
            {
                if (pass_number == 1)
                    VisitEarly(td);
                if (pass_number == 2)
                    Visit(td);
            }
            void Process(const NamespaceEntity &ns, int pass_number)
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

                Process(static_cast<const mrbind::EntityContainer &>(ns), pass_number);
            }
            void Process(const EntityContainer &c, int pass_number)
            {
                for (const Entity &e : c.nested)
                    Process(e, pass_number);
            }
            void Process(const Entity &e, int pass_number)
            {
                std::visit([&](const auto &elem){Process(elem, pass_number);}, *e.variant);
            }

            // This is what the user should call to begin recursion.
            void Process(const EntityContainer &c)
            {
                Process(c, 1);
                Process(c, 2);
            }

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
