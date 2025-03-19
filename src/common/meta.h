#pragma once

#include <string_view>
#include <tuple>
#include <type_traits>

namespace mrbind
{
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
}
