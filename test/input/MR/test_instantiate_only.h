#pragma once

#include <vector>

namespace MR::InstantiateOnly
{
    struct A {};

    // Nothing else uses this vector, but it must still get bindings.
    using ForcedVector __attribute__((__annotate__("mrbind::instantiate_only"))) = std::vector<A>;
}
