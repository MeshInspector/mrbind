#include "common/meta.h"
#include "generators/c/binding_common.h"
#include "generators/c/module.h"

namespace mrbind::CBindings::Modules
{
    struct StdString : DeriveModule<StdString>
    {
        cppdecl::QualifiedName target_name_stdstring = cppdecl::QualifiedName{}.AddPart("std").AddPart("string");
        cppdecl::QualifiedName target_name_stdstringview = cppdecl::QualifiedName{}.AddPart("std").AddPart("string_view");

        HeapAllocatedClassBinder binder_stdstring;
        HeapAllocatedClassBinder binder_stdstringview;

        void Init(Generator &generator) override
        {
            binder_stdstring = HeapAllocatedClassBinder::ForCustomType(generator, target_name_stdstring);
            binder_stdstringview = HeapAllocatedClassBinder::ForCustomType(generator, target_name_stdstringview);
            binder_stdstring.traits = Generator::TypeTraits::CopyableNonTrivial{};
            binder_stdstringview.traits = Generator::TypeTraits::CopyableAndTrivialExceptForDefaultCtor{};

            binder_stdstringview.sugared_constructor_preserves_reference = true;
        }

        Generator::OutputFile &GetOutputFile(Generator &generator, bool is_view)
        {
            bool is_new = false;
            Generator::OutputFile &file = *generator.GetPublicHelperFile(is_view ? "std_string_view" : "std_string", &is_new);

            if (is_new)
            {
                auto &binder = is_view ? binder_stdstringview : binder_stdstring;

                binder.EmitForwardDeclaration(generator, file, is_view ? "/// A non-owning string view. Not necessarily null-terminated.\n" : "/// A heap-allocated null-terminated string.\n");

                binder.EmitSpecialMemberFunctions(generator, file, true);

                // Some custom functions:

                { // size
                    Generator::EmitFuncParams emit;
                    emit.c_comment = is_view ? "/// The number of characters in the string." : "/// The number of characters in the string, excluding the null-terminator.";
                    emit.name = binder.MakeMemberFuncName(generator, "Size");
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("size_t");
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "size";
                    generator.EmitFunction(file, emit);
                }

                { // data
                    Generator::EmitFuncParams emit;
                    emit.c_comment = is_view ? "/// Returns the string contents, NOT necessarily null-terminated." : "/// Returns the string contents, which are always null-terminated.";
                    emit.name = binder.MakeMemberFuncName(generator, "Data");
                    emit.lifetimes.ReturnsReferenceToThis();
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.mark_as_returning_pointer_to_array = true;
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "data";
                    generator.EmitFunction(file, emit);
                }

                // mutable data
                if (!is_view)
                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.";
                    emit.name = binder.MakeMemberFuncName(generator, "MutableData", "Data");
                    emit.lifetimes.ReturnsReferenceToThis();
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.mark_as_returning_pointer_to_array = true;
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                    emit.cpp_called_func = "data";
                    generator.EmitFunction(file, emit);
                }

                { // data end
                    Generator::EmitFuncParams emit;
                    emit.c_comment = is_view ? "/// Returns a pointer to the end of string. Not dereferencable." : "/// Returns a pointer to the end of string, to its null-terminator.";
                    emit.name = binder.MakeMemberFuncName(generator, "DataEnd");
                    emit.lifetimes.ReturnsReferenceToThis();
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddQualifiers(cppdecl::CvQualifiers::const_).AddModifier(cppdecl::Pointer{});
                    emit.mark_as_returning_pointer_to_array = true;
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), true);
                    emit.cpp_called_func = "@this@.data() + @this@.size()";
                    generator.EmitFunction(file, emit);
                }

                // mutable data end
                if (!is_view)
                {
                    Generator::EmitFuncParams emit;
                    emit.c_comment = "/// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.";
                    emit.name = binder.MakeMemberFuncName(generator, "MutableDataEnd", "DataEnd");
                    emit.lifetimes.ReturnsReferenceToThis();
                    emit.cpp_return_type = cppdecl::Type::FromSingleWord("char").AddModifier(cppdecl::Pointer{});
                    emit.mark_as_returning_pointer_to_array = true;
                    emit.AddThisParam(cppdecl::Type::FromQualifiedName(binder.cpp_type_name), false);
                    emit.cpp_called_func = "@this@.data() + @this@.size()";
                    generator.EmitFunction(file, emit);
                }
            }

            return file;
        }

        std::optional<Generator::BindableType> GetBindableType(Generator &generator, const cppdecl::Type &type, const std::string &type_str) override
        {
            (void)type;

            std::optional<Generator::BindableType> ret;

            bool is_view = false;

            if ((ret = BindNonConstOrRvalueRefParamsSameAsNonRef(generator, type, target_name_stdstring))) {}
            else if ((ret = BindNonConstOrRvalueRefParamsSameAsNonRef(generator, type, target_name_stdstringview))) {}
            else if (type_str == "std::string" || (is_view = type_str == "std::string_view"))
            {
                Generator::BindableType &new_type = ret.emplace();

                auto &binder = is_view ? binder_stdstringview : binder_stdstring;

                new_type.traits = binder.traits;
                new_type.is_heap_allocated_class = true;

                new_type.bindable_with_same_address.declared_in_file = [this, &generator, is_view]() -> auto & {return GetOutputFile(generator, is_view);};
                new_type.bindable_with_same_address.forward_declaration = binder.MakeForwardDeclarationNoReg();
                new_type.bindable_with_same_address.custom_c_type_name = binder.c_type_name;

                new_type.return_usage = binder.MakeReturnUsage(generator);

                new_type.param_usage_with_default_arg = MakeStringLikeParamUsageSupportingDefaultArg(type_str);
            }

            return ret;
        }

        std::optional<std::string> GetCppIncludeForQualifiedName(Generator &generator, const cppdecl::QualifiedName &name) override
        {
            (void)generator;
            if (name.Equals(target_name_stdstring, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target))
                return "string";
            if (name.Equals(target_name_stdstringview, cppdecl::QualifiedName::EqualsFlags::allow_less_parts_in_target))
                return "string_view";
            return {};
        }
    };
}
