#pragma once

#include <cstddef>
#include <typeindex>
#include <typeinfo>
#include <utility>

namespace MRBind
{
    // This is an imitation of `std::type_index` that exposes the pointer to the underlying `std::type_info`,
    //   since we need it for Pybind's `pybind11::detail::get_global_type_info()`, which has transitioned to it
    //   from `std::type_index` at some point after we initially wrote the Python
    struct TypeIndex
    {
        const std::type_info *type_info = nullptr;

        constexpr TypeIndex() {}
        constexpr TypeIndex(const std::type_info &type_info) : type_info(&type_info) {}

        [[nodiscard]] operator std::type_index() const {return *type_info;}
        [[nodiscard]] operator const std::type_info &() const {return *type_info;}

        [[nodiscard]] const char *name() const {return type_info->name();}

        friend bool operator==(const TypeIndex &a, const TypeIndex &b)
        {
            return *a.type_info == *b.type_info;
        }
        friend bool operator==(const TypeIndex &a, const std::type_info &b)
        {
            return *a.type_info == b;
        }

        friend auto operator<=>(const TypeIndex &a, const TypeIndex &b)
        {
            return std::type_index(*a.type_info) <=> std::type_index(*b.type_info);
        }
        friend auto operator<=>(const TypeIndex &a, const std::type_info &b)
        {
            return std::type_index(*a.type_info) <=> std::type_index(b);
        }
    };
}

template <>
struct std::hash<MRBind::TypeIndex>
{
    std::size_t operator()(const MRBind::TypeIndex &ti) const
    {
        return ti.type_info ? ti.type_info->hash_code() : 0;
    }
};
