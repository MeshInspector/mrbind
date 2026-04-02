#pragma once

#include "common/parsed_data.h"

#include <cppdecl/declarations/data.h>
#include <cppdecl/declarations/parse_simple.h>
#include <cppdecl/declarations/to_string.h>

#include <functional>
#include <set>
#include <unordered_set>

namespace mrbind::JS
{
    [[nodiscard]] std::string CppdeclToCode(const auto &value, cppdecl::ToCodeFlags extra_flags = {})
    {
        return cppdecl::ToCode(value, extra_flags);
    }

    struct Generator
    {
        // Inputs: [
        ParsedFile data;
        // ]

        // Outputs: [
        struct OutputIncludes
        {
            std::set<std::string, std::less<>> stdlib;
        };
        OutputIncludes output_includes;

        std::string output_text;

        // Which functions should be called without template arguments (because doing so is prone to weird errors when considering unwanted overloads).
        // We currently don't expose this as a flag.
        std::unordered_set<std::string> funcs_called_without_template_args = {"begin", "end", "swap"};

        // Name adjustment rules.
        std::vector<std::pair<cppdecl::QualifiedName, cppdecl::QualifiedName>> replaced_name_prefixes;

        // ]

        cppdecl::TypeParser type_parser;
        cppdecl::QualifiedNameParser name_parser;


        // Applies `--replace-name-prefix` flags to a C++ name.
        void AdjustCppNameNonRecursively(cppdecl::QualifiedName &name);

        // Converts a C++ name to an identifier for JS. Calls `AdjustCppNameNonRecursively()` on the `name` internally, recursively.
        [[nodiscard]] std::string CppNameToJsIdentifier(cppdecl::QualifiedName name);


        void WriteSeparatingNewLine();

        bool in_fragmentable_part = false;
        int fragmentable_part_index = 0;

        // Begins an `#if` block that can be separated between fragments.
        // Those can't be nested.
        void BeginFragmentablePart();
        // Ends such block.
        void EndFragmentablePart();


        struct TypeBinding
        {
            struct ParamUsage
            {
                // Often equal to the type we're binding, if we don't want to change to type.
                // If this needs any additional includes not present in the parsed code, insert them in `unadjust_argument`.
                cppdecl::Type adjusted_type;

                // The result does NOT need to be excessively parenthesized.
                // You can assume that `expr` IS sufficiently parenthesized to call member functions on it.
                using UnadjustFunc = std::function<std::string(const std::string &expr, OutputIncludes &includes)>;

                // Optional. If null, just returns `expr`.
                UnadjustFunc unadjust_argument;

                // Returns `unadjust_argument` if it's not null, or the default fallback function.
                [[nodiscard]] UnadjustFunc GetUnadjustArgumentFunc() const;
            };

            struct ParamUsageDefArg
            {
                // Usually equal to `std::optional<...>`, where `...` is the type we're binding.
                // If this needs any additional includes not present in the parsed code (such as `<optional>` for `std::optional`), insert them in `unadjust_argument`.
                cppdecl::Type adjusted_type;

                // The result does NOT need to be excessively parenthesized.
                // You can assume that `expr` and `default_arg` ARE sufficiently parenthesized to call member functions on them.
                // You can also assume that `default_arg` is not a braced list, i.e. has some type at least.
                using UnadjustFunc = std::function<std::string(const std::string &expr, const std::string &default_arg, OutputIncludes &includes)>;

                // Not optional.
                UnadjustFunc unadjust_argument;
            };

            struct ReturnUsage
            {
                // Often equal to the type we're binding, if we don't want to change to type.
                cppdecl::Type adjusted_type;

                // `expr` is NOT guaranteed to be sufficiently parenthesized, you might need to add your own `(...)` around it if you want to e.g. call a method on it.
                // The result does NOT need to be excessively parenthesized.
                // You must refer to `expr` exactly once in the result.
                // Currently this must return a single expression, and we don't have an API for outputting multiple statements from this.
                using AdjustFunc = std::function<std::string(const std::string &expr, OutputIncludes &includes)>;

                // Optional. If null, just returns `expr`.
                AdjustFunc adjust_result;

                // Returns `adjust_result` if it's not null, or the default fallback function.
                [[nodiscard]] AdjustFunc GetAdjustResultFunc() const;
            };

            std::optional<ParamUsage> param_usage;
            std::optional<ParamUsageDefArg> param_usage_defarg;

            std::optional<ReturnUsage> return_usage;

            // For internal use, you don't need to check this manually.
            // We use this to detect cyclical dependencies between type bindings.
            bool ready = false;

            // Fill `param_usage_defarg` based on `param_usage`.
            void CreateParamUsageWithDefArgUsingStdOptional();
        };

        // The cache for `GetTypeBinding()`. Don't use directly, call that function instead.
        std::unordered_map<std::string, TypeBinding> cached_type_bindings;

        [[nodiscard]] const TypeBinding &GetTypeBinding(const cppdecl::Type &cpp_type);
        [[nodiscard]] const TypeBinding *GetTypeBindingOpt(const cppdecl::Type &cpp_type);

        struct EmitFuncParams
        {
            using FuncVar = std::variant<const FuncEntity *, const ClassCtor *, const ClassConvOp *, const ClassMethod *>;

            FuncVar var;
        };

        void EmitFunction(const EmitFuncParams &params);
        void EmitEnum(const EnumEntity &en);

        void Generate();
    };
}
