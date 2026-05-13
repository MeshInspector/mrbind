#pragma once

#include <iostream>

namespace Example
{
    template <typename T>
    struct Id
    {
        using ValueType = T;

        template <typename U = int
    // The condition is there for the binding generator. Firstly, removing the second template argument produces better function names in C,
        //   and secondly `--buggy-substitute-default-template-args` seems to duplicate this constructor when `enable_if_t` is present.
        #if MR_HAS_REQUIRES
        > requires std::is_integral_v<U>
        #else
        , std::enable_if_t<std::is_integral_v<U>, std::nullptr_t> = nullptr>
        #endif
        explicit constexpr Id( U i ) noexcept : id_( ValueType( i ) ) { }

        Id() {}
        T id_;
    };

    template <>
    struct Id<int> {};

    inline void use()
    {
        Id<int> id;
    }
}
