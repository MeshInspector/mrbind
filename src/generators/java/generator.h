#pragma once

#include "generators/c_interop/c_output_desc.h"

#include <cppdecl/declarations/data.h>

#include <functional>
#include <map>
#include <memory>
#include <optional>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

namespace mrbind::Java
{
    // Generates Java sources from the C bindings description JSON.
    // The sources call the C bindings through the foreign function API (`java.lang.foreign`, Java 22+), so there's no JNI glue to compile.
    // Two layers: `<package>.ffi` holds one downcall `MethodHandle` per C function, mirroring the C file hierarchy,
    //   and the classes in the packages named after the C++ namespaces wrap them (opaque classes as `CppObject`s, enums as newtypes, exposed structs as views over native memory).
    // Functions that the safe layer doesn't understand still get wrappers, with raw `MemorySegment`s and primitives.
    struct Generator
    {
        // Input: [

        CInterop::OutputDesc c_desc;

        // Library names to load. The key is the file group (see `--split-library` in the C generator), empty is the default group.
        std::unordered_map<std::string, std::string> imported_lib_names;

        // The base Java package, e.g. `com.example.mylib`. The namespace packages and the `ffi` package are nested in it.
        std::string base_package;

        // The C++ namespace (as parts) to put the entities of the global namespace into, including the `std::` types.
        // Without this, those end up directly in the base package.
        std::vector<std::string> forced_namespace;
        // `--replace-namespace`, like in the C# and Rust generators: replaces the leading namespaces (as parts), applied in order. An empty `second` removes them,
        // so `MR` -> nothing makes `MR::Mesh` `<base>.Mesh` and not `<base>.mr.Mesh`.
        std::vector<std::pair<std::vector<std::string>, std::vector<std::string>>> replaced_namespaces;

        // Class names longer than this get truncated and suffixed with a hash, since the file names must fit the Windows path length limit. 0 disables this.
        std::size_t max_class_name_length = 100;
        // `--no-deref-expected` disables this: a function returning `expected<T, E>` by value returns `T` and throws on an error, like in the C# generator.
        bool deref_expected = true;

        // ]

        // Output: relative paths to file contents.
        std::map<std::string, std::string> output_files;

        void Generate();

        // Statistics for the final report.
        std::size_t num_funcs_total = 0;
        std::size_t num_funcs_skipped = 0; // No downcall handle at all, because of a C type we can't spell in Java.
        std::size_t num_funcs_raw = 0; // Wrapped, but with raw C types.
        std::vector<std::string> skipped_funcs;

      private:
        // A C++ namespace as a Java package.
        struct Module
        {
            std::string package; // Fully qualified, e.g. `com.example.mylib.mr.foo`.
            std::string dir; // Relative directory, e.g. `com/example/mylib/mr/foo`.
            std::map<std::string, Module> children;
            std::set<std::string> used_names; // Class names.
            std::string free_funcs; // The body of the `Functions` class.
        };
        Module root;

        // A generated C file as a class in the `ffi` package, holding the downcall handles.
        struct FileClass
        {
            std::string relative_name; // As in the C bindings, e.g. `MR/1`.
            std::string group; // The `--split-library` group.
            std::vector<std::string> idents; // The path components as Java identifiers. The last one is the class name.
            std::string java_path; // Fully qualified class name.
            std::vector<std::string> handles; // One `static final MethodHandle` declaration per function.
        };
        std::map<std::string, FileClass> file_classes;
        [[nodiscard]] FileClass &GetFileClass(const CInterop::OutputFile &file);

        // The handles of a file class are split into nested classes of this many handles each, to keep the static initializers small.
        static constexpr std::size_t handles_per_chunk = 200;
        // Returns the fully qualified name of the holder class of a handle.
        [[nodiscard]] static std::string HandleHolder(const FileClass &file, std::size_t index);

        struct TypeInfo
        {
            const CInterop::TypeKinds::Class *class_desc = nullptr;
            const CInterop::TypeKinds::Enum *enum_desc = nullptr;
            const CInterop::TypeTraits *traits = nullptr;
            std::string cpp_name;
            std::string c_name;
            std::string java_path; // Fully qualified, e.g. `com.example.mylib.mr.A`.
            std::string java_unqual;
            Module *module = nullptr;
            FileClass *file = nullptr;
            bool has_destroy = false;
            std::string destroy_handle; // The fully qualified handle of `_Destroy`, if `has_destroy`.
            bool copyable = false;
            std::string enum_java_type; // For enums: the Java primitive type of the value.
            std::string enum_layout; // For enums: the value layout.
            std::string enum_size; // For enums: the size in bytes, as an expression.
            bool enum_is_c_long = false; // For enums: the underlying type is C `long`, which needs special care.

            // For `expected<T, E>`: what `valueOrThrow()` needs. Set by `CollectExpected()`.
            struct Expected
            {
                const CInterop::ClassMethod *success = nullptr;
                const CInterop::ClassMethod *value = nullptr; // Null for `expected<void, E>`.
                const CInterop::ClassMethod *error = nullptr;
                std::string value_java_type; // `void` for `expected<void, E>`.
                std::string value_handle_type, value_convert; // Like in `ReturnStrings`.
                std::string error_handle_type, error_convert;
            };
            std::optional<Expected> expected;

            [[nodiscard]] bool IsExposedStruct() const {return class_desc && class_desc->kind == CInterop::ClassKind::exposed_struct;}
            [[nodiscard]] bool IsEnum() const {return enum_desc != nullptr;}
        };
        std::map<std::string, TypeInfo> types_by_cpp_name;
        std::unordered_map<std::string, TypeInfo *> types_by_c_name;
        std::set<std::string> platform_dependent_structs; // By C++ name.
        std::unordered_map<std::string, std::string> handle_paths; // C function name -> the fully qualified downcall handle.
        std::vector<std::string> base_package_segments;

        std::unordered_map<std::string, cppdecl::Type> cached_parsed_types;
        [[nodiscard]] const cppdecl::Type &ParseTypeOrThrow(const std::string &str);

        [[nodiscard]] Module &GetModuleForNamespace(std::vector<std::string> ns_parts);
        [[nodiscard]] std::string UniqueName(std::set<std::string> &used, std::string name);
        [[nodiscard]] std::string ShortenClassName(std::string name) const;

        void CollectTypes();
        void EmitRuntime();
        void EmitHandles();
        void EmitEnums();
        void EmitClasses();
        void EmitFreeFunctions();
        void EmitFiles();

        // How a C type is spelled on the Java side.
        struct JavaType
        {
            std::string layout; // The `MemoryLayout` expression. Empty for `void`.
            std::string java; // The Java type of the downcall handle: a primitive, `MemorySegment`, or `void`.
            std::string size_expr; // The size in bytes, as a Java expression.
            bool is_pointer = false;
            bool is_c_long = false; // C `long`, whose layout is only known at runtime.
            bool platform_dependent = false; // The size depends on the platform (pointers, `size_t`, `long`).
            const TypeInfo *type_info = nullptr; // Set for enums and exposed structs.
            std::vector<std::uint64_t> array_dims; // Non-empty for arrays, which only appear in exposed structs.
            std::shared_ptr<JavaType> array_elem; // For arrays, the innermost element type.
        };
        // Maps a C type (or a C++ type for exposed struct fields) to its Java spelling. Returns null if the type can't be expressed.
        [[nodiscard]] std::optional<JavaType> CTypeToJava(const cppdecl::Type &type, std::size_t i = 0);
        [[nodiscard]] std::optional<JavaType> CTypeToJava(const std::string &str);

        // The Java type of a parameter or a return value, with the conversions to and from the raw type.
        struct ParamStrings
        {
            bool skip = false; // The fake `this` of static functions and constructors.
            bool is_receiver = false;
            std::vector<std::pair<std::string, std::string>> java_params; // Name and type.
            std::vector<std::string> args; // Arguments for the downcall, with the exact static types of the handle.
            std::string pre; // Statements before the call. Each ends with a newline.
            bool needs_arena = false; // The statements use `__arena`.
            std::vector<std::string> fences; // Objects to keep alive until the call returns.
            bool is_raw = false; // Fell back to raw C types.
            std::string object_param; // The name of the parameter if it's a single wrapped object, for the owner of returned references.
        };
        [[nodiscard]] std::optional<ParamStrings> MapParam(const CInterop::FuncParam &param, const TypeInfo *this_type);

        struct ReturnStrings
        {
            std::string java_type;
            std::string handle_type; // The Java type returned by the handle.
            std::string convert; // An expression in terms of `__ret` and `__owner`.
            bool returns_struct = false; // The handle takes a `SegmentAllocator` first.
            bool is_raw = false;
            const TypeInfo *owned_type = nullptr; // Set when `convert` wraps a new owned object of this class returned by value.
            bool is_statement = false; // `convert` is a whole statement and the function returns `void` (an unwrapped `expected<void, E>`).
            bool unwraps_expected = false;
        };
        // `non_null` means a returned pointer is known to be non-null (the getters of `expected` after a successful check), so the Java type isn't nullable.
        [[nodiscard]] std::optional<ReturnStrings> MapReturn(const CInterop::FuncReturn &ret, bool non_null = false);
        // Fills `TypeInfo::expected` for the `expected<T, E>` classes.
        void CollectExpected();

        // A wrapper that is ready to be emitted, once its name is known.
        struct PreparedFunc
        {
            const CInterop::BasicFuncLike *func = nullptr;
            const TypeInfo *this_type = nullptr;
            bool is_static = false; // No receiver.
            bool is_ctor = false;
            std::vector<ParamStrings> params;
            ReturnStrings ret;
            std::string signature; // The Java parameter types, to detect overload clashes.
            std::string preferred_name;
            std::string fallback_name; // Derived from the C name, unique.
            bool is_raw = false;
            std::vector<std::size_t> param_indices; // The index in the description -> the index in `params`, or -1.
        };
        // Returns null if the function has to be skipped entirely.
        [[nodiscard]] std::optional<PreparedFunc> PrepareFunc(const CInterop::BasicFuncLike &func, const TypeInfo *this_type, bool is_ctor, std::string preferred_name, std::string fallback_name);
        // Resolves the overloads: a function keeps its preferred name if no other function in the scope has the same name and signature.
        void ResolveNames(std::vector<PreparedFunc> &funcs, std::set<std::string> &used_names, std::vector<std::string> &names);
        // Emits one wrapper method or constructor. `indent` is in levels.
        void EmitPrepared(std::string &out, const PreparedFunc &func, const std::string &name, int indent);

        // Calls `func` with every base class the C bindings have casts for, in order, with the inheritance kind.
        void ForEachCastBase(const TypeInfo &info, const std::function<void(const TypeInfo &base, CInterop::InheritanceInfo::Kind kind)> &func) const;
        // Emits the casts to the base classes and from them, which the C bindings have but the description doesn't list.
        void EmitCasts(const TypeInfo &info, std::string &members, std::set<std::string> &used_keys);
        // `valueOrThrow()` of an `expected<T, E>` class.
        void EmitExpected(const TypeInfo &info, std::string &members);
        // Emits the construction of a `std::function` from a Java lambda.
        void EmitStdFunction(const TypeInfo &info, std::string &members, std::set<std::string> &used_keys);

        [[nodiscard]] std::string MakeDocComment(const CInterop::Comment &comment, int indent, const std::string &extra_line = "") const;

        [[nodiscard]] std::string HandleDecl(const CInterop::BasicFuncLike &func, bool &ok);

        [[nodiscard]] std::string RuntimeClass(std::string_view name) const {return base_package + "." + std::string(name);}
    };

    // Escapes Java keywords and bad identifiers.
    [[nodiscard]] std::string JavaIdent(std::string str);
    // `foo_bar` -> `fooBar`, `FooBar` -> `fooBar`.
    [[nodiscard]] std::string JavaMethodName(std::string_view str);
    // `x` -> `X`.
    [[nodiscard]] std::string Capitalize(std::string str);
    // The Java name of an overloaded operator: `!=` -> `opNotEqual`, `+=` -> `opAddAssign`.
    [[nodiscard]] std::string OperatorName(std::string_view token, bool is_post_incr_or_decr);
}
