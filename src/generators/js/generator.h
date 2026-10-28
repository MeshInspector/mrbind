#pragma once

#include "generators/c_interop/c_output_desc.h"

#include <cppdecl/declarations/data.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <optional>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

namespace mrbind::Js
{
    // Generates JavaScript sources (ES modules, plus `.d.mts` TypeScript declarations) from the C bindings description JSON.
    // The sources call the C bindings compiled to WebAssembly with Emscripten, through the raw `wasmExports` of the module (no Embind),
    //   so there's no C++ glue to compile other than the C bindings themselves.
    // The C bindings must be compiled with the link flags the generator writes to `emcc_link_flags.rsp` (they export the functions the JS calls).
    // Two layers, like in the Java generator: `lib/<C file>.mjs` holds the wrappers of the entities of that C file, exported by their C names,
    //   and the namespace modules (`index.mjs` for the root, `ns/<path>.mjs` for the nested namespaces) re-export them by their C++ names,
    //   with the overloaded free functions merged into dispatchers.
    // wasm32 by default: the pointers, `size_t` and `long` are 32-bit. `--wasm64` makes them 64-bit (JS numbers in the API, `bigint`s at the
    //   wasm boundary). `long long` is a JS `bigint` in both.
    struct Generator
    {
        // Input: [

        CInterop::OutputDesc c_desc;

        // The import specifier of the Emscripten module factory (the `.mjs` emitted by `emcc -sMODULARIZE -sEXPORT_ES6`), relative to the output directory,
        //   e.g. `./MyLib.mjs`. If empty, `index.mjs` doesn't import it, and the users must call `initWithModule()` with an instantiated module.
        std::string wasm_module_import;
        // The same for a variant of the module built for Node (`-sENVIRONMENT=node`, `-sNODERAWFS=1`), which `init()` picks when running in Node. Optional.
        std::string wasm_module_import_node;

        // The C++ namespace (as parts) to put the entities of the global namespace into, including the `std::` types.
        // Without this, those end up directly in the root module.
        std::vector<std::string> forced_namespace;
        // `--replace-namespace`, like in the C#, Rust and Java generators: replaces the leading namespaces (as parts), applied in order. An empty `second` removes them,
        // so `MR` -> nothing makes `MR::Mesh` exported from the root module as `Mesh` and not from `ns/mr.mjs`.
        std::vector<std::pair<std::vector<std::string>, std::vector<std::string>>> replaced_namespaces;

        // File names longer than this get truncated and suffixed with a hash, since the file names must fit the Windows path length limit. 0 disables this.
        std::size_t max_file_name_length = 100;
        // `--no-deref-expected` disables this: a function returning `expected<T, E>` by value returns `T` and throws on an error, like in the C# and Java generators.
        bool deref_expected = true;
        // `--no-string-conversion` disables this: a function returning `std::string` by value returns a JS string.
        bool convert_strings = true;
        // `--wasm64`: the module is linked with `-sMEMORY64`, so the pointers, `size_t` and `long` are 64-bit, and are `bigint`s at the wasm boundary
        //   (the JS side keeps them as numbers, which cover the addresses).
        bool wasm64 = false;
        [[nodiscard]] std::size_t PointerSize() const {return wasm64 ? 8 : 4;}

        // ]

        // Output: relative paths to file contents.
        std::map<std::string, std::string> output_files;

        void Generate();

        // Statistics for the final report.
        std::size_t num_funcs_total = 0;
        std::size_t num_funcs_skipped = 0; // No wrapper at all, because of a C type we can't spell in JS.
        std::size_t num_funcs_raw = 0; // Wrapped, but with raw C types.
        std::vector<std::string> skipped_funcs;

      private:
        // The scalar types of the WebAssembly ABI, plus the aggregates.
        enum class Scalar
        {
            void_,
            bool_,
            i8, u8, i16, u16, i32, u32,
            i64, u64, // JS `bigint`.
            isize, usize, // Pointer-sized: `long`, `size_t`, `ptrdiff_t`. JS numbers.
            f32, f64,
            ptr, // Pointer-sized. JS numbers.
            struct_, // An exposed struct by value.
        };
        [[nodiscard]] static bool IsInteger(Scalar s) {return s >= Scalar::i8 && s <= Scalar::usize;}
        [[nodiscard]] static bool IsBigInt(Scalar s) {return s == Scalar::i64 || s == Scalar::u64;}
        // Pointer-sized, so a `bigint` at the wasm boundary in wasm64.
        [[nodiscard]] static bool IsPointerSized(Scalar s) {return s == Scalar::ptr || s == Scalar::isize || s == Scalar::usize;}
        [[nodiscard]] std::size_t ScalarSize(Scalar s) const;
        // The signature character for `addFunction()`: `i`, `j`, `p`, `f`, `d`, `v`.
        [[nodiscard]] static char ScalarSigChar(Scalar s);
        // A pointer (a JS number) as the wasm function takes it, and back.
        [[nodiscard]] std::string PtrToWasm(const std::string &expr) const {return wasm64 ? "BigInt(" + expr + ")" : expr;}
        [[nodiscard]] std::string PtrFromWasm(const std::string &expr) const {return wasm64 ? "Number(" + expr + ")" : "(" + expr + " >>> 0)";}

        // A C++ namespace as a JS module.
        struct Module
        {
            std::vector<std::string> ns_parts; // After the replacements.
            std::string path; // The module path relative to the output directory, without the extension: `index` or `ns/foo/bar`.
            std::string to_root; // The relative path prefix from the module's directory to the output directory: `./` or `../../`.
            std::map<std::string, Module> children; // By the JS identifier.
            std::set<std::string> used_names; // The exported names.
            std::string exports; // The export statements of the types.
            std::string exports_dts;
            std::string funcs; // The free functions.
            std::string funcs_dts;
        };
        Module root;

        // A generated C file as a `lib/...` module.
        struct FileModule
        {
            std::string relative_name; // As in the C bindings, e.g. `MR/1`.
            std::string path; // The module path relative to the output directory, without the extension: `lib/MR/1`.
            std::string to_root; // See `Module::to_root`.
            std::string body; // The `.mjs` contents after the imports.
            std::string dts; // The `.d.mts` contents after the imports.
        };
        std::map<std::string, FileModule> file_modules;
        [[nodiscard]] FileModule &GetFileModule(const CInterop::OutputFile &file);

        struct TypeInfo
        {
            const CInterop::TypeKinds::Class *class_desc = nullptr;
            const CInterop::TypeKinds::Enum *enum_desc = nullptr;
            const CInterop::TypeTraits *traits = nullptr;
            std::string cpp_name;
            std::string c_name;
            std::string js_name; // The export name in the `lib` module, which is the C name made a valid identifier. Unique across all types.
            std::string js_ref; // How the type is referenced from the generated code: `L.` + `js_name`.
            std::string public_name; // The name exported from the namespace module.
            Module *module = nullptr;
            FileModule *file = nullptr;
            bool has_destroy = false;
            bool copyable = false;
            Scalar enum_scalar = Scalar::i32; // For enums.
            bool enum_is_signed = true;

            // For exposed structs: the wasm layout (wasm32 or wasm64, see `wasm64`).
            struct StructLayout
            {
                std::size_t size = 0;
                std::size_t alignment = 1;
                std::vector<std::size_t> field_offsets; // For the non-static fields, in order.
                std::optional<Scalar> singleton; // Set if the struct is passed and returned as this scalar by the wasm C ABI.
                std::size_t singleton_offset = 0;
                bool platform_dependent = false; // Has pointers or `size_t`-like fields, so the sizes in the description JSON (from the host platform) don't apply.
            };
            StructLayout layout;

            // For `expected<T, E>`: what `valueOrThrow()` needs. Set by `CollectExpected()`.
            struct Expected
            {
                const CInterop::ClassMethod *success = nullptr;
                const CInterop::ClassMethod *value = nullptr; // Null for `expected<void, E>`.
                const CInterop::ClassMethod *error = nullptr;
                std::string value_ts_type; // `void` for `expected<void, E>`.
                std::string value_convert, value_pre; // Like in `ReturnStrings`.
                std::string error_convert, error_pre;
            };
            std::optional<Expected> expected;

            [[nodiscard]] bool IsExposedStruct() const {return class_desc && class_desc->kind == CInterop::ClassKind::exposed_struct;}
            [[nodiscard]] bool IsEnum() const {return enum_desc != nullptr;}
        };
        std::map<std::string, TypeInfo> types_by_cpp_name;
        std::unordered_map<std::string, TypeInfo *> types_by_c_name;
        std::set<std::string> used_js_names; // The `lib` export names, which must be globally unique since `_all.mjs` re-exports them all.
        std::set<std::string> exported_c_functions; // Everything the JS calls, for `exported_functions.txt`.
        std::map<std::string, Scalar> scalar_outputs; // The `<type>_output` classes of the mutable scalar parameters that the wrappers use, by name.

        std::unordered_map<std::string, cppdecl::Type> cached_parsed_types;
        [[nodiscard]] const cppdecl::Type &ParseTypeOrThrow(const std::string &str);

        [[nodiscard]] Module &GetModuleForNamespace(std::vector<std::string> ns_parts);
        [[nodiscard]] std::string UniqueName(std::set<std::string> &used, std::string name);
        [[nodiscard]] std::string ShortenFileName(std::string name) const;

        void CollectTypes();
        void ComputeStructLayouts();
        void CollectExpected();
        void CollectExportedFunctions();
        void EmitRuntime();
        void EmitEnums();
        void EmitClasses();
        void EmitFreeFunctions();
        void EmitFiles();

        // How a C type is spelled on the JS side.
        struct JsType
        {
            Scalar scalar = Scalar::void_;
            std::size_t size = 0; // In bytes.
            std::size_t alignment = 1;
            bool is_pointer = false;
            bool platform_dependent = false; // The size depends on the platform (pointers, `size_t`, `long`).
            const TypeInfo *type_info = nullptr; // Set for enums and exposed structs.
            std::vector<std::uint64_t> array_dims; // Non-empty for arrays, which only appear in exposed structs.
            std::shared_ptr<JsType> array_elem; // For arrays, the innermost element type.

            [[nodiscard]] bool IsVoid() const {return scalar == Scalar::void_ && array_dims.empty();}
        };
        // Maps a C type (or a C++ type for exposed struct fields) to its JS spelling. Returns null if the type can't be expressed.
        [[nodiscard]] std::optional<JsType> CTypeToJs(const cppdecl::Type &type, std::size_t i = 0);
        [[nodiscard]] std::optional<JsType> CTypeToJs(const std::string &str);

        // The JS expressions reading and writing a scalar at a byte address.
        // The index of the address `addr` into a heap view of `1 << shift`-byte elements.
        [[nodiscard]] std::string HeapIndex(const std::string &addr, int shift) const;
        [[nodiscard]] std::string HeapRead(Scalar s, const std::string &addr) const;
        // Same, but the raw wasm value (a BigInt for the pointer-sized scalars of wasm64, a number for a bool), for passing to the exports.
        [[nodiscard]] std::string HeapReadRaw(Scalar s, const std::string &addr) const;
        [[nodiscard]] std::string HeapWrite(Scalar s, const std::string &addr, const std::string &value) const;
        // Converts a scalar returned by a wasm function (in `expr`) to the JS value.
        [[nodiscard]] std::string FromWasm(Scalar s, const std::string &expr) const;
        // Converts a JS value (in `expr`) to what a wasm function takes.
        [[nodiscard]] std::string ToWasm(Scalar s, const std::string &expr) const;
        // The TypeScript type of a scalar, for parameters (`number | bigint` for the 64-bit ones) or for return values (`bigint`).
        [[nodiscard]] static std::string TsScalar(Scalar s, bool is_param);
        // The runtime type check of a JS value for the overload dispatch.
        [[nodiscard]] static std::string ScalarCheck(Scalar s, const std::string &expr);

        // The JS type of a parameter or a return value, with the conversions to and from the raw type.
        struct ParamStrings
        {
            bool skip = false; // The fake `this` of static functions and constructors.
            bool is_receiver = false;
            std::string name; // The JS parameter name.
            std::string ts_type; // The TypeScript type.
            bool optional = false; // Accepts `null`/`undefined`.
            std::string check; // The type check for the overload dispatch, in terms of `name`.
            std::string sig_key; // What's compared to detect clashing overloads.
            std::vector<std::string> args; // Arguments for the wasm call.
            std::string decl; // Declarations before the `try`, visible to `post`. Each ends with a newline.
            std::string pre; // Statements before the call. Each ends with a newline.
            std::string post; // Statements after the call, in a `finally`.
            bool needs_stack = false; // The statements allocate on the wasm stack.
            bool releases = false; // An argument releases the object (`PASS_BY_MOVE_AND_DESTROY`), so it must be evaluated after the checks of the other arguments.
            bool is_raw = false; // Fell back to raw C types.
            std::string object_param; // The name of the parameter if it's a single wrapped object, for the owner of returned references.
            std::string default_arg; // The C++ spelling of the default argument, for the docs.
        };
        [[nodiscard]] std::optional<ParamStrings> MapParam(const CInterop::FuncParam &param, const TypeInfo *this_type);

        struct ReturnStrings
        {
            std::string ts_type;
            Scalar wasm_scalar = Scalar::void_; // What the wasm function returns.
            bool sret = false; // The wasm function takes the result pointer first and returns nothing.
            bool returns_struct = false; // An exposed struct by value, allocated as `__sret` by `pre` (even when passed as a scalar).
            std::string sret_store; // For a singleton struct: the statement storing the returned scalar `__ret` into `__sret`.
            std::string pre; // Statements before the call (allocating the `sret` buffer as `__sret`).
            std::string convert; // An expression in terms of `__ret` and `__owner`, or in terms of `__sret` if `sret`.
            bool is_raw = false;
            const TypeInfo *owned_type = nullptr; // Set when `convert` wraps a new owned object of this class returned by value.
            bool is_statement = false; // `convert` is a whole statement and the function returns `void` (an unwrapped `expected<void, E>`).
            bool unwraps_expected = false;
            bool converts_string = false;
        };
        // `non_null` means a returned pointer is known to be non-null (the getters of `expected` after a successful check), so the TS type isn't nullable.
        // `allow_string_conversion` is false for the constructors of `std::string`, which must return the wrapper.
        [[nodiscard]] std::optional<ReturnStrings> MapReturn(const CInterop::FuncReturn &ret, bool non_null = false, bool allow_string_conversion = true);

        // A wrapper that is ready to be emitted, once its name is known.
        struct PreparedFunc
        {
            const CInterop::BasicFuncLike *func = nullptr;
            const TypeInfo *this_type = nullptr;
            bool is_static = false; // No receiver.
            bool is_ctor = false;
            std::vector<ParamStrings> params;
            ReturnStrings ret;
            std::string signature; // The parameter signature keys, to detect overload clashes.
            std::string preferred_name;
            std::string fallback_name; // Derived from the C name, unique.
            bool is_raw = false;
            std::vector<std::size_t> param_indices; // The index in the description -> the index in `params`, or -1.
            std::size_t num_required = 0; // The parameters that can't be omitted.
        };
        // Returns null if the function has to be skipped entirely.
        [[nodiscard]] std::optional<PreparedFunc> PrepareFunc(const CInterop::BasicFuncLike &func, const TypeInfo *this_type, bool is_ctor, std::string preferred_name, std::string fallback_name);

        // A group of overloads sharing a name.
        struct OverloadGroup
        {
            std::string name;
            std::vector<std::size_t> funcs; // Indices into the prepared functions.
        };
        // Resolves the overloads: a function keeps its preferred name if no other function in the scope has the same name and signature,
        //   and all the functions sharing a preferred name form a group that gets a dispatcher. `names` are the per-function implementation names.
        void ResolveNames(std::vector<PreparedFunc> &funcs, std::set<std::string> &used_names, std::vector<std::string> &names, std::vector<OverloadGroup> &groups);

        // The emitted implementation of a wrapper.
        struct EmittedFunc
        {
            std::string js; // The function body (without the `name(params)` head), with the braces.
            std::string params_decl; // The JS parameter list.
            std::string dts_params; // The TS parameter list.
            std::string dts_ret; // The TS return type.
            std::string doc; // The JSDoc comment.
        };
        [[nodiscard]] EmittedFunc EmitFuncBody(const PreparedFunc &func);

        // Emits the dispatcher of an overload group as a function body taking `...args`. `impl_call` makes the call expression of an implementation, given its index and `args`.
        [[nodiscard]] std::string EmitDispatcher(const std::vector<PreparedFunc> &funcs, const OverloadGroup &group, const std::function<std::string(std::size_t index, const std::string &args)> &impl_call) const;
        // Emits the TS overload declarations of a group.
        [[nodiscard]] std::string EmitDispatcherDts(const std::vector<PreparedFunc> &funcs, const std::vector<EmittedFunc> &emitted, const OverloadGroup &group, const std::string &head_prefix, const std::string &name, bool is_ctor) const;

        // Calls `func` with every base class the C bindings have casts for, in order, with the inheritance kind.
        void ForEachCastBase(const TypeInfo &info, const std::function<void(const TypeInfo &base, CInterop::InheritanceInfo::Kind kind)> &func) const;
        // Emits the casts to the base classes and from them, which the C bindings have but the description doesn't list.
        void EmitCasts(const TypeInfo &info, std::string &members, std::string &dts, std::set<std::string> &used_inst, std::set<std::string> &used_static);
        // `valueOrThrow()` of an `expected<T, E>` class.
        void EmitExpected(const TypeInfo &info, std::string &members, std::string &dts);

        // The element type of a contiguous container, for the typed-array helpers: a scalar, an exposed struct of identical scalars, or a `std::array` of those.
        struct ElemInfo
        {
            Scalar scalar = Scalar::void_;
            std::size_t count = 0; // Scalars per element.
            std::size_t size = 0; // Bytes per element.
        };
        [[nodiscard]] std::optional<ElemInfo> ContiguousElem(const cppdecl::Type &type);
        // The typed array class of a scalar, or empty if none.
        [[nodiscard]] std::string TypedArrayClass(Scalar s) const;
        // `toArray()`, `view()`, `setFromArray()`, `fromArray()` of a class with `data()` and `size()`.
        void EmitTypedArrayHelpers(const TypeInfo &info, bool has_default_ctor, std::string &members, std::string &dts, std::set<std::string> &used_inst, std::set<std::string> &used_static);
        // Emits the construction of a `std::function` from a JS function.
        void EmitStdFunction(const TypeInfo &info, std::string &members, std::string &dts, std::string &dts_after, std::set<std::string> &used_inst, std::set<std::string> &used_static);

        [[nodiscard]] std::string MakeDocComment(const CInterop::Comment &comment, int indent, const std::string &extra_line = "") const;
    };

    // Escapes JS reserved words and bad identifiers, for the names used as bare identifiers (exports, parameters, variables).
    [[nodiscard]] std::string JsIdent(std::string str);
    // Same, but for property names, which can be reserved words.
    [[nodiscard]] std::string JsPropertyName(std::string str);
    // `x` -> `X`.
    [[nodiscard]] std::string Capitalize(std::string str);
    // `FooBar` -> `fooBar`, for the names derived from the C names, like in the Java generator.
    [[nodiscard]] std::string JsMethodName(std::string str);
    // The JS name of an overloaded operator: `!=` -> `opNotEqual`, `+=` -> `opAddAssign`.
    [[nodiscard]] std::string OperatorName(std::string_view token, bool is_post_incr_or_decr);
}
