#pragma once

namespace MR
{
    struct CommonBaseAB
    {
        virtual ~CommonBaseAB() {}
        CommonBaseAB(const CommonBaseAB &) = default;
        CommonBaseAB(CommonBaseAB &&) = default;
        CommonBaseAB &operator=(const CommonBaseAB &) = default;
        CommonBaseAB &operator=(CommonBaseAB &&) = default;
    };
}
