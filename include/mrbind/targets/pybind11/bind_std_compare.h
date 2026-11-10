#pragma once

#include <compare>

namespace MRBind::pb11
{
    enum class StdPartialOrdering
    {
        // The numbers can be anything, we don't match them to the C++ representation.
        // Those match the C backend, but it's not required.
        less = -1,
        equivalent = 0,
        greater = 1,
        unordered = 2,
    };
}

template <>
struct MRBind::pb11::CustomTypeBinding<MRBind::pb11::StdPartialOrdering>
    : MRBind::pb11::DefaultCustomTypeBinding<StdPartialOrdering>
{
    using pybind_type = pybind11::enum_<StdPartialOrdering>;

    [[nodiscard]] static std::string cpp_type_name()
    {
        return std::string("std::partial_ordering");
    }

    // Registers all members.
    static void bind_members(pybind_type &c)
    {
        c.value("less", StdPartialOrdering::less);
        c.value("equivalent", StdPartialOrdering::equivalent);
        c.value("greater", StdPartialOrdering::greater);
        c.value("unordered", StdPartialOrdering::unordered);
    }
};

template <>
struct MRBind::pb11::ReturnTypeTraits<std::strong_ordering>
{
    static int Adjust(std::strong_ordering &&value)
    {
        return value < 0 ? -1 : value > 0 ? 1 : 0;
    }
};

template <>
struct MRBind::pb11::ReturnTypeTraits<std::weak_ordering>
{
    static int Adjust(std::weak_ordering &&value)
    {
        return value < 0 ? -1 : value > 0 ? 1 : 0;
    }
};

template <>
struct MRBind::pb11::ReturnTypeTraits<std::partial_ordering>
{
    static StdPartialOrdering Adjust(std::partial_ordering &&value)
    {
        return
            value == std::partial_ordering::less ? StdPartialOrdering::less :
            value == std::partial_ordering::greater ? StdPartialOrdering::greater :
            value == std::partial_ordering::equivalent ? StdPartialOrdering::equivalent :
            StdPartialOrdering::unordered;
    }
};
