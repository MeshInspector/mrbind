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


        struct FlagInterface
        {
            virtual ~FlagInterface() = default;

            // Returns true if the flag name is `name`. It must match exactly, don't omit the leading `--`.
            // If this returns true, the flag is automatically marked as consumed by this module.
            // `description` is the flag description for the help page. It shouldn't contain any newlines.
            // `args` is the description of the arguments for the help page. Should be either empty or `<foo>` (or `<foo> <bar>`, etc).
            virtual bool FlagNameMatches(std::string_view name, std::string_view args, std::string_view description) = 0;

            // You can call this repeatedly to get arguments for this flag.
            virtual std::string_view GetStringArgument() = 0;
        };

        // This is called before `Init()` to handle the command line arguments.
        virtual void ConsumeFlag(FlagInterface &in) {(void)in;}


        // This is called after constructing the module to initialize it, since the constructor doesn't have access to the generator,
        //   and some initialization might require that.
        virtual void Init(Generator &generator) {(void)generator;}


        // If you know this type, return the binding for it. If you don't, return null.
        // You're allowed to call `generator.FindBindableTypeOpt(...)` for any dependent types you need.
        // Probably not a good idea to call the non-`Opt` version though, because throwing from here is a hard error.
        // `type_str` is the string representation of `type` (with `ToCodeFlags::canonical_c_style` like everywhere else`).
        virtual std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) {(void)generator; (void)type; (void)type_str; return {};}

        // This is a version of the above that also accepts the cases with `remove_sugar == true`. The normal overload is only called when it's false.
        // Normally you would overload only one of the two, but both is possible too.
        virtual std::optional<Generator::BindableType> GetBindableTypeMaybeWithoutSugar(Generator &generator, const cppdecl::Type &type, const std::string &type_str, bool remove_sugar) {(void)generator; (void)type; (void)type_str; (void)remove_sugar; return {};}


        // Note, this is a subset of `GetBindableType()` that's rarely useful. Prefer that function (set `.bindable_with_same_address` in the return value for the effect equivalent to this).
        // If you know this type, return the information about it.
        // This function is for types pointers to which can be freely passed between C and C++, perhaps with a cast.
        // Such are, for example, any classes that are bound as opaque pointers.
        // `type_str` is the string representation of `type` (with `ToCodeFlags::canonical_c_style` like everywhere else`).
        virtual std::optional<Generator::TypeBindableWithSameAddress> GetTypeBindableWithSameAddress(Generator &generator, const cppdecl::QualifiedName &type_name, const std::string &type_name_str) {(void)generator; (void)type_name; (void)type_name_str; return {};}


        // For a C++ type, return the C++ standard library header that declares it. Or null, if your module doesn't know this type.
        // Do NOT recurse into template arguments, we do that automatically. And because of that, the result is limited to one string.
        virtual std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) {(void)generator; (void)name; return {};}
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
