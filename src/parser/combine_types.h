#pragma once

#include "common/parsed_data.h"
#include "mrbind/helpers/enum_flag_ops.h"

#include <functional>

namespace mrbind
{
    using AdjustTypeNameFunc = std::function<std::string(std::string_view)>;

    // Applies `adjust_type_name` to change the names of all registered types, and merges the types that end up with matching names.
    void CombineSimilarTypes(ParsedFile &file, AdjustTypeNameFunc adjust_type_name);

    enum class AdjustTypeNameFlags
    {
        remove_cv        = 1 << 0,
        remove_ref       = 1 << 1, // Both lvalue and rvalue references.
        remove_ptr       = 1 << 2,
        remove_smart_ptr = 1 << 3, // Both `std::unique_ptr` and `std::shared_ptr`.
    };
    MRBIND_FLAG_OPERATORS(AdjustTypeNameFlags)

    // Constructs a callback to be used with `CombineSimilarTypes()`.
    [[nodiscard]] AdjustTypeNameFunc MakeAdjustTypeNameFunc(AdjustTypeNameFlags flags);
    // This version is based on raw string manipulation instead of the `cppdecl` library.
    [[nodiscard]] AdjustTypeNameFunc MakeAdjustTypeNameFuncLegacyWithoutCppdecl(AdjustTypeNameFlags flags);

    // Parses `AdjustTypeNameFlags` from a string, throws on failure.
    [[nodiscard]] AdjustTypeNameFlags ParseAdjustTypeNameFlags(std::string_view view, char sep = ',');
}
