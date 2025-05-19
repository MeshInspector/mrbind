#include "binding_helpers.h"

namespace mrbind::CBindings
{
    ClassBinder ClassBinder::ForCustomType(Generator &generator, cppdecl::QualifiedName new_cpp_type_name)
    {
        ClassBinder ret;

        ret.cpp_type_name = std::move(new_cpp_type_name);

        ret.basic_c_name = generator.StringToCIdentifier(cppdecl::ToCode(ret.cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style));
        ret.c_type_name = generator.MakePublicHelperName(ret.basic_c_name);

        ret.c_func_name_default_ctor = generator.MakePublicHelperName(ret.basic_c_name + "_DefaultConstruct");
        ret.c_func_name_copy_ctor = generator.MakePublicHelperName(ret.basic_c_name + "_CopyConstruct");
        ret.c_func_name_move_ctor = generator.MakePublicHelperName(ret.basic_c_name + "_MoveConstruct");
        ret.c_func_name_copy_assign = generator.MakePublicHelperName(ret.basic_c_name + "_CopyAssign");
        ret.c_func_name_move_assign = generator.MakePublicHelperName(ret.basic_c_name + "_MoveAssign");
        ret.c_func_name_destroy = generator.MakePublicHelperName(ret.basic_c_name + "_Destroy");

        // Not strictly necessary, but this makes things more sane.
        ret.returning_by_value_includes_header = true;

        return ret;
    }

    std::string ClassBinder::MakeForwardDeclaration() const
    {
        return MakeStructForwardDeclaration(c_type_name);
    }

    Generator::BindableType::ReturnUsage ClassBinder::MakeReturnUsage() const
    {
        Generator::BindableType::ReturnUsage ret;

        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        ret.c_type = cppdecl::Type::FromSingleWord(c_type_name).AddTopLevelModifier(cppdecl::Pointer{});
        ret.same_addr_bindable_type_dependencies.try_emplace(cpp_type_str).first->second.need_header = returning_by_value_includes_header;

        assert(!c_func_name_destroy.empty());
        ret.append_to_comment = "/// Returns an instance allocated on the heap! Must call `" + c_func_name_destroy + "()` to free it when you're done using it.";

        ret.make_return_statement = [c_type_name = c_type_name, cpp_type_str = std::move(cpp_type_str)](Generator::OutputFile::SpecificFileContents &file, std::string_view expr)
        {
            (void)file;
            return "return (" + c_type_name + " *)new " + cpp_type_str + "(" + std::string(expr) + ");";
        };

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncDefaultCtor() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_default_ctor.empty());
        ret.c_name = c_func_name_default_ctor;

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name);
        ret.cpp_called_func = cpp_type_str;

        ret.c_comment = "/// Constructs an empty (default-constructed) instance.";

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncCopyCtor() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_copy_ctor.empty());
        ret.c_name = c_func_name_copy_ctor;

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name);
        ret.cpp_called_func = cpp_type_str;

        ret.params.push_back({
            .name = "other",
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Reference{}),
        });

        ret.c_comment = "/// Constructs a copy of another instance. The source remains alive.";

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncMoveCtor() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_move_ctor.empty());
        ret.c_name = c_func_name_move_ctor;

        ret.cpp_return_type = cppdecl::Type::FromQualifiedName(cpp_type_name);
        ret.cpp_called_func = cpp_type_str;

        ret.params.push_back({
            .name = "other",
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddTopLevelModifier(cppdecl::Reference{.kind = cppdecl::RefQualifiers::rvalue}),
        });

        ret.c_comment = "/// Creates a new instance moved from another. The source remains alive.";

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncCopyAssignment() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_copy_assign.empty());
        ret.c_name = c_func_name_copy_assign;

        ret.AddThisParam(cppdecl::Type::FromQualifiedName(cpp_type_name), false);

        ret.cpp_called_func = "reinterpret_cast<" + ToCode(cppdecl::Type::FromQualifiedName(cpp_type_name).AddTopLevelModifier(cppdecl::Pointer{}), cppdecl::ToCodeFlags::canonical_c_style) + ">(_this)->operator=";

        ret.params.push_back({
            .name = "other",
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Reference{}),
        });

        ret.c_comment = "/// Assigns the contents from another instance. Both objects remain alive after the call.";

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncMoveAssignment() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_move_assign.empty());
        ret.c_name = c_func_name_move_assign;

        ret.AddThisParam(cppdecl::Type::FromQualifiedName(cpp_type_name), false);

        ret.cpp_called_func = "reinterpret_cast<" + ToCode(cppdecl::Type::FromQualifiedName(cpp_type_name).AddTopLevelModifier(cppdecl::Pointer{}), cppdecl::ToCodeFlags::canonical_c_style) + ">(_this)->operator=";

        ret.params.push_back({
            .name = "other",
            .cpp_type = cppdecl::Type::FromQualifiedName(cpp_type_name).AddTopLevelModifier(cppdecl::Reference{.kind = cppdecl::RefQualifiers::rvalue}),
        });

        ret.c_comment = "/// Assigns the contents from another instance. Both objects remain alive after the call.";

        return ret;
    }

    Generator::EmitFuncParams ClassBinder::PrepareFuncDestroy() const
    {
        std::string cpp_type_str = cppdecl::ToCode(cpp_type_name, cppdecl::ToCodeFlags::canonical_c_style);

        Generator::EmitFuncParams ret;

        assert(!c_func_name_destroy.empty());
        ret.c_name = c_func_name_destroy;

        ret.AddThisParam(cppdecl::Type::FromQualifiedName(cpp_type_name), false);
        ret.params.front().add_to_call = true; // Force add `this` to the call expression.

        ret.cpp_called_func = "delete";
        ret.cpp_called_func_parens = {};

        ret.c_comment += "/// Destroys a heap-allocated instance of `" + cpp_type_str + "`.";

        return ret;
    }


    std::string MakeStructForwardDeclaration(std::string_view c_type_name)
    {
        std::string ret = "typedef struct ";
        ret += c_type_name;
        ret += ' ';
        ret += c_type_name;
        ret += ';';
        return ret;
    }

    Generator::BindableType MakeDirectTypeBinding(Generator &generator, const cppdecl::Type &cpp_type, const cppdecl::Type &c_type)
    {
        Generator::BindableType ret(c_type);

        // Allow default arguments via pointers.
        auto &param_def_arg = ret.param_usage_with_default_arg.emplace();
        param_def_arg.c_params.push_back({
            .c_type = cppdecl::Type(c_type).AddTopLevelQualifiers(cppdecl::CvQualifiers::const_).AddTopLevelModifier(cppdecl::Pointer{})
        });
        param_def_arg.append_to_comment = [](auto &&...){return "///   To use the default argument, pass a null pointer.";};
        param_def_arg.c_params_to_cpp = [type_str = cppdecl::ToCode(cpp_type, cppdecl::ToCodeFlags::canonical_c_style)](Generator::OutputFile::SpecificFileContents &file, std::string_view cpp_param_name, std::string_view default_arg)
        {
            (void)file;
            std::string ret;
            ret += cpp_param_name;
            ret += " ? *";
            ret += cpp_param_name;
            ret += " : (";
            ret += type_str;
            ret += ")(";
            ret += default_arg;
            ret += ")";
            return ret;
        };

        generator.FillDefaultTypeDependencies(cpp_type, ret);

        return ret;
    }
}
