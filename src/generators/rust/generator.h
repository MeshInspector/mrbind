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

        // On Windows, link using `kind = "raw-dylib"`, which needs no import library.
        bool windows_raw_dylib = true;

        // The C++ namespace (as parts) to put the entities of the global namespace into, including the `std::` types.
        // Without this, those end up at the crate root, where they can clash with the file modules.
        std::vector<std::string> forced_namespace;

        // The C++ namespace (as parts) whose entities go to the crate root, so `MR::Mesh` becomes `crate::Mesh` and not `crate::mr::Mesh`.
        std::vector<std::string> root_namespace;

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
        // A C++ namespace as a Rust module. Those only re-export the definitions from the file modules.
        struct Module
        {
            std::string rust_path; // E.g. `crate::mr::foo`, or `crate` for the root.
            std::map<std::string, Module> children;
            std::string body;
            std::set<std::string> used_names;
        };
        Module root;

        // A generated C file as a Rust module. The definitions live here, mirroring the C file hierarchy.
        struct FileModule
        {
            std::string relative_name; // As in the C bindings, e.g. `MR/1`.
            std::string group; // The `--split-library` group.
            std::vector<std::string> idents; // The path components as Rust identifiers.
            std::string rust_path; // E.g. `crate::MR::_1`.
            std::string body; // The safe layer.
            std::set<std::string> used_names;
            std::string ffi_types;
            std::string ffi_funcs;
        };
        std::map<std::string, FileModule> file_modules;
        // Registers the file. The identifiers are assigned later by `AssignFileIdents()`.
        [[nodiscard]] FileModule &GetFileModule(const CInterop::OutputFile &file);
        // Assigns the module identifiers to all the files, avoiding clashes with the namespace modules.
        void AssignFileIdents();

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
            FileModule *file = nullptr;
            std::string file_unqual; // The name of the definition in the file module, usually equal to `rust_unqual`.
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

        // The namespace of a free function, as parts. Optionally returns the snake-cased unqualified name for the regular functions.
        [[nodiscard]] std::vector<std::string> FuncNamespaceParts(const CInterop::Function &func, std::string *simple_name) const;

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
        bool EmitFuncLike(std::string &out, const CInterop::BasicFuncLike &func, const CInterop::BasicClassMethodLike *method_like, const TypeInfo *this_type, std::string rust_name, int indent);

        // Emits the casts to the base classes and from them, which the C bindings have but the description doesn't list.
        // The methods go to `methods`, the trait impls to `extra`.
        void EmitCasts(TypeInfo &info, std::string &methods, std::set<std::string> &used_names, std::string &extra);
        // Emits the construction of a `std::function` from a closure.
        void EmitStdFunction(TypeInfo &info, std::string &methods, std::set<std::string> &used_names);

        // Writes the re-export of a type from its file module to its namespace module.
        void ReExportType(const TypeInfo &info);
        // The `#[link]` attributes for the library of a file group.
        [[nodiscard]] std::string LinkAttrs(const std::string &group) const;

        [[nodiscard]] std::string MakeDocComment(const CInterop::Comment &comment, int indent, const std::string &extra_line = "") const;
        [[nodiscard]] std::string FfiFuncDecl(const CInterop::BasicFuncLike &func, bool &ok);
    };

    // `fooBar` -> `foo_bar`, `GetHTTPData` -> `get_http_data`.
    [[nodiscard]] std::string SnakeCase(std::string_view str);
    // Escapes Rust keywords and bad identifiers.
    [[nodiscard]] std::string RustIdent(std::string str);
}
