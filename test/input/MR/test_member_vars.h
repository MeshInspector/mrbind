#pragma once

namespace MR::MemberVars
{
    struct A
    {
        int x;
        const int y;

        inline static int z = 0;
        inline static const int w = 0;

        int &ref; // Those don't get setters, and also get only one (non-const-propagating) getter.
        int arr[4]; // Arrays don't get setters, because they aren't assignable. But they still get mutable getters
    };
}
