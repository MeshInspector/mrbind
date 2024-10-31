#pragma once

namespace MRBind
{
    template <typename ...P>
    struct TypeList
    {
        template <template <typename...> typename T>
        using Apply = T<P...>;
    };

    template <typename ...P> struct CatTypeListsHelper {};
    template <> struct CatTypeListsHelper<> {using type = TypeList<>;};
    template <typename ...A> struct CatTypeListsHelper<TypeList<A...>> {using type = TypeList<A...>;}; // Using a parameter pack here to reject non-lists.
    template <typename ...A, typename ...B> struct CatTypeListsHelper<TypeList<A...>, TypeList<B...>> {using type = TypeList<A..., B...>;};
    template <typename A, typename ...P> struct CatTypeListsHelper<A, P...> {using type = typename CatTypeListsHelper<A, typename CatTypeListsHelper<P...>::type>::type;};

    template <typename ...P>
    using CatTypeLists = typename CatTypeListsHelper<P...>::type;
}
