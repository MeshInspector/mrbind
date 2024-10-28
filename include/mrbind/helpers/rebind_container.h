#pragma once

#include <array>
#include <concepts>

namespace MRBind
{
    // A customization point for `RebindContainer`, see below.
    template <typename C, typename P0, typename ...P>
    struct RebindContainerTraits {};

    // Given a container type `C`, rebinds it to have the element types `P0, P...` (one type for most containers, two types for maps).
    template <typename C, typename P0, typename ...P>
    using RebindContainer = typename RebindContainerTraits<C, P0, P...>::type;

    template <typename T>
    concept IsRebindableContainer = requires(T t)
    {
        typename T::value_type;
        typename T::iterator;
        t.begin(); t.end();
    };

    template <typename T>
    concept IsRebindableMapContainer = IsRebindableContainer<T> && requires{typename T::key_type; typename T::mapped_type;};

    template <typename T>
    concept IsRebindableNonMapContainer = IsRebindableContainer<T> && !IsRebindableMapContainer<T>;

    // NOTE: On Clang 18 and older those specializations require `-frelaxed-template-template-args` to function.
    // On MSVC they don't work at all! If we decide we need MSVC support, we'll need to rewrite those, and I have no idea how to make it generic,
    // especially because e.g. phmap does something very strange with its template parameters (e.g. I think strings use a different hasher?),
    // so it would need handwritten specializations, I think? Ugh.

    // Non-map-like containers.
    template <template <typename> typename C, typename T0, typename P0>
    requires IsRebindableNonMapContainer<C<T0>> && std::same_as<typename C<P0>::value_type, P0>
    struct RebindContainerTraits<C<T0>, P0> {using type = C<P0>;};

    // Map-like containers.
    template <template <typename, typename> typename C, typename T0, typename T1, typename P0, typename P1>
    requires IsRebindableMapContainer<C<T0, T1>> && std::same_as<typename C<P0, P1>::key_type, P0> && std::same_as<typename C<P0, P1>::mapped_type, P1>
    struct RebindContainerTraits<C<T0, T1>, P0, P1> {using type = C<P0, P1>;};

    // `std::array`.
    template <typename P0, typename T0, std::size_t N>
    struct RebindContainerTraits<std::array<P0, N>, T0> {using type = std::array<T0, N>;};
}
