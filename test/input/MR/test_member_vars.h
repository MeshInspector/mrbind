#pragma once

namespace MR::MemberVars
{
    struct A
    {
        int x;
        const int y;

        static inline int z = 0;
        static inline const int w = 0;

        int &ref; // Those don't get setters, and also get only one (non-const-propagating) getter.
        int arr[4]; // Arrays don't get setters, because they aren't assignable. But they still get mutable getters
    };
}
