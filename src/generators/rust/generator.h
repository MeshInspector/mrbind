#pragma once

#include "generators/c_interop/c_output_desc.h"

#include <cppdecl/declarations/data.h>

#include <map>
#include <optional>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

namespace mrbind::Rust
{
    // Generates a Rust crate from the C bindings description JSON.
    // The crate has two layers: `ffi` (one `extern "C"` declaration per C function, taken verbatim from the JSON),
    //   and a safe layer on top of it (opaque classes with `Owned<T>` handles, enums as newtypes, exposed structs as `#[repr(C)]` structs).
    // Functions that the safe layer doesn't understand are still exposed with raw C types, as `unsafe fn`s.
    struct Generator
    {
        // Input: [

        CInterop::OutputDesc c_desc;

        // Library names to link against. The key is the file group (see `--split-library` in the C generator), empty is the default group.
        std::unordered_map<std::string, std::string> imported_lib_names;

        // If set, a `Cargo.toml` is emitted with this package name.
        std::optional<std::string> crate_name;

        // On Windows, link using `kind = "raw-dylib"`, which needs no import library.
        bool windows_raw_dylib = true;

        // ]

        // Output: relative paths to file contents.
        std::map<std::string, std::string> output_files;

        void Generate();

        // Statistics for the final report.
        std::size_t num_funcs_total = 0;
        std::size_t num_funcs_skipped = 0; // Not even in `ffi`, because of a C type we can't spell in Rust.
        std::size_t num_funcs_raw = 0; // In the safe layer, but with raw C types.
        std::vector<std::string> skipped_funcs;

      private:
        struct Module
        {
            std::string rust_path; // E.g. `crate::mr::foo`, or `crate` for the root.
            std::map<std::string, Module> children;
            std::string body;
            std::set<std::string> used_names;
        };
        Module root;

        struct TypeInfo
        {
            const CInterop::TypeKinds::Class *class_desc = nullptr;
            const CInterop::TypeKinds::Enum *enum_desc = nullptr;
            const CInterop::TypeTraits *traits = nullptr;
            std::string cpp_name;
            std::string c_name;
            std::string rust_path; // Fully qualified, e.g. `crate::mr::A`.
            std::string rust_unqual;
            Module *module = nullptr;
            bool has_destroy = false;
            bool copy_ctor_mapped = false; // Set when the copy constructor got a safe wrapper.
            std::string copy_ctor_rust_name;

            [[nodiscard]] bool IsExposedStruct() const {return class_desc && class_desc->kind == CInterop::ClassKind::exposed_struct;}
            [[nodiscard]] bool IsEnum() const {return enum_desc != nullptr;}
        };
        std::map<std::string, TypeInfo> types_by_cpp_name;
        std::unordered_map<std::string, TypeInfo *> types_by_c_name;

        std::unordered_map<std::string, cppdecl::Type> cached_parsed_types;
        [[nodiscard]] const cppdecl::Type &ParseTypeOrThrow(const std::string &str);

        [[nodiscard]] Module &GetModuleForNamespace(const std::vector<std::string> &ns_parts);
        [[nodiscard]] std::string UniqueName(std::set<std::string> &used, std::string name);

        void CollectTypes();
        void EmitFfi();
        void EmitRuntime();
        void EmitEnums();
        void EmitClasses();
        void EmitFreeFunctions();
        void EmitModuleFiles();

        // Maps a C type (or a C++ type for exposed struct fields) to its spelling in the `ffi` module.
        // `top_level_return` turns `void` into `()`. Returns null if the type can't be expressed.
        [[nodiscard]] std::optional<std::string> CTypeToRust(const cppdecl::Type &type, std::size_t i = 0, bool top_level_return = false);
        [[nodiscard]] std::optional<std::string> CTypeToRust(const std::string &str, bool top_level_return = false);

        struct ParamStrings
        {
            bool skip = false; // The fake `this` of static functions.
            bool is_receiver = false;
            std::string receiver; // `&self` or `&mut self`.
            std::vector<std::pair<std::string, std::string>> rust_params; // Name and type.
            std::vector<std::string> args; // Arguments for the C call.
            std::string pre; // Statements before the call. Each ends with a newline.
            bool is_unsafe = false; // Forces the wrapper to be `unsafe fn`.
            bool is_raw = false; // Fell back to raw C types.
            int num_ref_inputs = 0; // How many `&` are in the Rust parameter types.
        };
        [[nodiscard]] std::optional<ParamStrings> MapParam(const CInterop::FuncParam &param, const TypeInfo *this_type);

        struct ReturnStrings
        {
            std::string rust_type;
            std::string convert; // An expression in terms of `__ret`.
            bool is_raw = false;
        };
        [[nodiscard]] std::optional<ReturnStrings> MapReturn(const CInterop::FuncReturn &ret, bool can_elide_lifetime);

        // Emits one safe wrapper. `this_type` is null for free functions. Returns false if the function got skipped entirely.
        bool EmitFuncLike(Module &module, const CInterop::BasicFuncLike &func, const CInterop::BasicClassMethodLike *method_like, const TypeInfo *this_type, std::string rust_name, int indent);

        [[nodiscard]] std::string MakeDocComment(const CInterop::Comment &comment, int indent, const std::string &extra_line = "") const;
        [[nodiscard]] std::string FfiFuncDecl(const CInterop::BasicFuncLike &func, bool &ok);
    };

    // `fooBar` -> `foo_bar`, `GetHTTPData` -> `get_http_data`.
    [[nodiscard]] std::string SnakeCase(std::string_view str);
    // Escapes Rust keywords and bad identifiers.
    [[nodiscard]] std::string RustIdent(std::string str);
}
