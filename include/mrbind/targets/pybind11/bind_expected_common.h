#pragma once

#include <concepts>
#include <string_view>
#include <string>
#include <type_traits>

namespace MRBind::pb11
{
    // Given an error type stored in `{std,tl}::expected` (its second template parameter), returns a string that describes its contents.
    // This is a customization point.
    // `T` will always be cvref-unqualified here.
    template <typename T>
    struct ExpectedErrorToString
    {
        // Can return either by value or by any kind of reference.
        // std::string operator()(const T &t) const {return t.ToString();}
    };

    // std::string
    template <typename T> requires std::same_as<std::remove_cvref_t<T>, std::string>
    struct ExpectedErrorToString<T>
    {
        auto &&operator()(auto &&str) const {return decltype(str)(str);}
    };

    // std::string_view
    template <typename T> requires std::same_as<std::remove_cvref_t<T>, std::string_view>
    struct ExpectedErrorToString<T>
    {
        std::string operator()(std::string_view str) const {return std::string(str);}
    };
}
