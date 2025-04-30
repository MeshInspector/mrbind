#pragma once

#include "generators/c/generator.h"
#include "common/type_name.h"

#include <cppdecl/declarations/data.h>

#include <map>
#include <optional>
#include <string_view>
#include <type_traits>

namespace mrbind::CBindings
{
    // Don't inherit from this directly, use the `DerivedModule` CRTP base.
    struct Module
    {
        virtual ~Module() = default;

        // If you know this type, return the binding for it. If you don't, return null.
        // You're allowed to call `generator.FindBindableTypeOpt(...)` for any dependent types you need.
        // Probably not a good idea to call the non-`Opt` version though, because throwing from here is a hard error.
        virtual std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type) = 0;
    };

    namespace detail
    {
        // Using `std::map` to ensure a consistent ordering. The keys are the type names.
        using ModuleMap = std::map<std::string_view, std::unique_ptr<Module> (*)()>;

        [[nodiscard]] ModuleMap &GetRegisteredModules();
    }

    // This is a CRTP base.
    template <typename Derived>
    struct DeriveModule : Module
    {
      private:
        static std::nullptr_t Register()
        {
            detail::GetRegisteredModules().try_emplace(TypeName<Derived>(), []() -> std::unique_ptr<Module> {return std::make_unique<Derived>();});
        }

        inline static const std::nullptr_t register_me = Register();
        static constexpr std::integral_constant<const std::nullptr_t *, &register_me> register_me_helper{};
    };
}