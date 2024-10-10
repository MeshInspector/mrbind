#pragma once

#include <type_traits>

namespace MRBind
{
    namespace detail
    {
        template <int I>
        decltype(auto) MapFilterPack(auto &&map, auto &&out, auto &&... elems)
        {
            (void)map;
            return decltype(out)(out)(decltype(elems)(elems)...);
        }

        template <int I, typename P0, typename ...P>
        decltype(auto) MapFilterPack(auto &&map, auto &&out, auto &&... elems)
        {
            if constexpr (!std::is_void_v<decltype(map.template operator()<I, P0>())>)
                return (MapFilterPack<I+1, P...>)(map, decltype(out)(out), decltype(elems)(elems)..., map.template operator()<I, P0>());
            else
                return (MapFilterPack<I+1, P...>)(map, decltype(out)(out), decltype(elems)(elems)...);
        }
    }

    // Takes a list of types. Calls `map<i, T>()` for each type.
    // Collects the returned values, skipping `void`, and calls `out(...)` with all of them at once.
    template <typename ...P>
    [[nodiscard]] decltype(auto) MapFilterPack(auto &&map, auto &&out)
    {
        return (detail::MapFilterPack<0, P...>)(map, decltype(out)(out));
    }
}
