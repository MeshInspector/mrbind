#pragma once

#include <memory>
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

    // Generate a `shared_ptr` for this as well, to test how that gets separated.
    inline std::shared_ptr<CommonBaseAB> mark_shared_common_base_ab() {return {};}
}
