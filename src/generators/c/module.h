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

        virtual void Init(Generator &generator) {(void)generator;}

        // If you know this type, return the binding for it. If you don't, return null.
        // You're allowed to call `generator.FindBindableTypeOpt(...)` for any dependent types you need.
        // Probably not a good idea to call the non-`Opt` version though, because throwing from here is a hard error.
        // `type_str` is the string representation of `type` (with `ToCodeFlags::canonical_c_style` like everywhere else`).
        virtual std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) {(void)generator; (void)type; (void)type_str; return {};}

        // Note, this is a subset of `GetBindableType()` that's rarely useful. Prefer that function (set `.bindable_with_same_address` in the return value for the effect equivalent to this).
        // If you know this type, return the information about it.
        // This function is for types pointers to which can be freely passed between C and C++, perhaps with a cast.
        // Such are, for example, any classes that are bound as opaque pointers.
        // `type_str` is the string representation of `type` (with `ToCodeFlags::canonical_c_style` like everywhere else`).
        virtual std::optional<Generator::TypeBindableWithSameAddress> GetTypeBindableWithSameAddress(Generator &generator, const cppdecl::QualifiedName &type_name, const std::string &type_name_str) {(void)generator; (void)type_name; (void)type_name_str; return {};}
    };

    // Using `std::map` to ensure a consistent ordering. The keys are the type names.
    using ModuleMap = std::map<std::string_view, std::unique_ptr<Module> (*)()>;

    [[nodiscard]] ModuleMap &GetRegisteredModules();

    // This is a CRTP base.
    //
    template <typename Derived>
    struct DeriveModule : Module
    {
      private:
        static std::nullptr_t Register()
        {
            GetRegisteredModules().try_emplace(TypeName<Derived>(), []() -> std::unique_ptr<Module> {return std::make_unique<Derived>();});
            return nullptr;
        }

        inline static const std::nullptr_t register_me = Register();
        static constexpr std::integral_constant<const std::nullptr_t *, &register_me> register_me_helper{};
    };
}
