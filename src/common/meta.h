#pragma once

#include <concepts>
#include <optional>
#include <string_view>
#include <tuple>
#include <type_traits>

namespace mrbind
{
    template <typename ...P>
    struct Overload : P... {using P::operator()...;};
    template <typename ...P>
    Overload(P...) -> Overload<P...>;

    // Is `T` a 2-tuple-like class with the first element being string-like.
    template <typename T>
    concept IsKeyValuePair =
        std::tuple_size<T>::value == 2 && // Using `::value` because `_v` isn't SFINAE-friendly.
        std::is_convertible_v<std::tuple_element_t<0, T>, std::string_view>;

    // Adjust the value type of a container, to remove constness from map keys.
    template <typename T>
    struct AdjustNewContainerElem {using type = T;};
    template <typename T, typename U>
    struct AdjustNewContainerElem<std::pair<const T, U>> {using type = std::pair<T, U>;};

    template <typename T>
    concept ContainerIsMapLike = requires{typename T::key_type;};

    template <typename T>
    concept IsFlagLike = requires(T t){t & t; t | t;};

    template <typename T> struct IsStdOptional : std::false_type {};
    template <typename T> struct IsStdOptional<std::optional<T>> : std::true_type {};

    template <typename T, typename ...P>
    concept SameAsAnyOf = (std::same_as<T, P> || ...);
}
