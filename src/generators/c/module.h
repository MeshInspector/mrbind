#pragma once

#include "common/command_line_parser.h"
#include "common/type_name.h"
#include "generators/c/generator.h"

#include <cppdecl/declarations/data.h>

#include <map>
#include <optional>
#include <string_view>
#include <type_traits>

namespace mrbind::C
{
    // Don't inherit from this directly, use the `DerivedModule` CRTP base.
    struct Module
    {
        virtual ~Module() = default;


        // This is called before `Init()` to collect supported command line flags.
        virtual void RegisterCommandLineFlags(CommandLineParser &args_parser) {(void)args_parser;}


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


        // Those are called when converting a C++ name to an identifier, or when printing it in a comment.
        // Those are NOT required to produce valid C++ types, as the result will never be compiled.
        using AdjustableForCommentsAndInteropVar = std::variant<
            cppdecl::Type *,
            cppdecl::QualifiedName *,
            cppdecl::Decl *,
            cppdecl::PseudoExpr *,
            cppdecl::SimpleType *,
            cppdecl::TemplateArgumentList *
        >;

        virtual void AdjustForCommentsAndInterop(const Generator &generator, AdjustableForCommentsAndInteropVar target) const {(void)generator; (void)target;}
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
