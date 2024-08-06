#include "data_to_macros.h"

#include "meta.h"
#include "string_manip.h"

#include <unordered_set>

namespace mrbind
{
    namespace
    {

    }

    void ParsedFileToMacros(const ParsedFile &file, llvm::raw_ostream &out)
    {
        out <<
            "// Automatically generated by mrbind, do not edit.\n";

        if (file.num_fragments > 1)
            out << "// Segment " << file.fragment_index << "/" << file.num_fragments << '\n';

        out <<
            "\n"
            "#ifdef MRBIND_HEADER\n"
            "#include MRBIND_HEADER\n"
            "#endif // MRBIND_HEADER\n"
            "\n"
            "#ifndef MB_CHECK_FRAGMENT\n"
            "#if !defined(MB_NUM_FRAGMENTS) || MB_NUM_FRAGMENTS <= 1\n"
            "#define MB_CHECK_FRAGMENT(x) 1\n"
            "#else\n"
            "#define MB_CHECK_FRAGMENT(x) (x % MB_NUM_FRAGMENTS == MB_FRAGMENT)\n"
            "#endif\n"
            "#endif\n"
            "\n"
            "#if MB_INCLUDE_ORIGINAL_HEADER\n"
            "#include " << EscapeQuoteString(file.original_file) << "\n"
            "#if MB_INCLUDE_ORIGINAL_HEADER >= 2 // Headers from the corresponding implementation file.\n"
            << file.impl_file_preprocessor_directives <<
            "#endif\n"
            "#undef MB_INCLUDE_ORIGINAL_HEADER\n"
            "#endif\n"
            "\n";

        { // Bake the type names.
            bool first = true;

            std::unordered_set<std::string> visited_types;

            auto bake = [&](std::string_view name)
            {
                auto bake_low = [&](std::string_view name)
                {
                    if (visited_types.insert(std::string(name)).second)
                    {
                        if (first)
                        {
                            first = false;
                            out <<
                                "#ifdef MB_WANT_BAKED_TYPE_NAMES\n"
                                "#undef MB_WANT_BAKED_TYPE_NAMES\n"
                                "namespace MRBind {template <typename> struct BakedTypeName {};}\n";
                        }

                        out << "template <> struct MRBind::BakedTypeName<" << name << "> {static constexpr const char *value = " << EscapeQuoteString(name) << ";};\n";
                    }
                };

                bake_low(name);

                // Bake different variants:
                // We don't strictly need it at this point (I think?), but just in case.

                // The order matters, but we only really care about adding the ref-unqualified type, and ptr-cv-ref-unqualified one.

                // Referenced type:
                if (name.ends_with('&'))
                {
                    name = name.substr(0, name.find_last_not_of("& ") + 1);
                    bake_low(name);
                }

                // Pointed type.
                if (name.ends_with('*'))
                {
                    name = name.substr(0, name.find_last_not_of("* ") + 1);
                    bake_low(name);
                }

                // Const-unqualified type.
                if (name.starts_with("const "))
                {
                    name = name.substr(6);
                    bake_low(name);
                }
            };

            auto lambda = [&](auto &lambda, const Entity &e) -> void
            {
                std::visit(Overload{
                    [&](const EnumEntity &e)
                    {
                        bake(e.full_type);
                    },
                    [&](const FuncEntity &e)
                    {
                        bake(e.return_type.canonical);
                        for (const FuncParam &param : e.params)
                            bake(param.type.canonical);
                    },
                    [&](const ClassEntity &e)
                    {
                        bake(e.full_type);

                        for (const ClassMemberVariant &memvar : e.members)
                        {
                            std::visit(Overload{
                                [&](const ClassField &f)
                                {
                                    bake(f.type.canonical);
                                },
                                [&](const ClassMethod &m)
                                {
                                    bake(m.return_type.canonical);
                                    for (const FuncParam &param : m.params)
                                        bake(param.type.canonical);
                                },
                                [&](const ClassCtor &c)
                                {
                                    for (const FuncParam &param : c.params)
                                        bake(param.type.canonical);
                                },
                                [&](const ClassConvOp &o)
                                {
                                    bake(o.return_type.canonical);
                                },
                            }, memvar);
                        }

                        for (const ClassBase &base : e.bases)
                            bake(base.type.canonical);

                        for (const auto &elem : e.nested)
                            lambda(lambda, elem);
                    },
                    [&](const TypedefEntity &t)
                    {
                        bake(t.type.canonical);
                    },
                    [&](const NamespaceEntity &e)
                    {
                        for (const auto &elem : e.nested)
                            lambda(lambda, elem);
                    },
                }, e.variant);
            };
            for (const Entity &e : file.entities.nested)
                lambda(lambda, e);

            if (!first)
                out << "#endif // MB_WANT_BAKED_TYPE_NAMES\n\n";
        }

        out << "MB_FILE\n\n";

        { // Dump file contents.
            auto dump_params = [&](const std::vector<FuncParam> &params, bool indent_twice = true)
            {
                if (params.empty())
                {
                    out << "/*no params*/";
                    return;
                }

                out << "/*params:*/\n";
                for (const FuncParam &param : params)
                {
                    if (indent_twice)
                        out << "    ";
                    out << "    ("
                        << "(" << param.type.pretty << "), "
                        << (param.name.empty() ? "/*unnamed*/" : param.name) << ", "
                        << (param.default_argument.empty() ? "/*no default argument*/" : "(" + param.default_argument + ")")
                        << ")\n";
                }

                if (indent_twice && !params.empty())
                    out << "    ";
            };

            std::vector<std::string> namespace_stack;

            auto NsStackToString = [&]
            {
                std::string ret;
                if (namespace_stack.empty())
                {
                    ret = "/*::*/";
                }
                else
                {
                    for (const auto &fragment : namespace_stack)
                        ret += fragment;
                }
                return ret;
            };

            // Those controls the placement of multiplexing `#if`s around the entities.

            int multiplex_depth = 0;
            int multiplex_counter = 0;
            auto BeginMultiplexBlock = [&]
            {
                if (multiplex_depth++ == 0)
                    out << "#if MB_CHECK_FRAGMENT(" << multiplex_counter++ << ")\n";
            };
            auto EndMultiplexBlock = [&]
            {
                if (--multiplex_depth == 0)
                    out << "#endif\n";
            };


            auto lambda = [&](auto &lambda, const Entity &e) -> void
            {
                std::visit(Overload{
                    [&](const EnumEntity &e)
                    {
                        BeginMultiplexBlock();
                        out << "MB_ENUM("
                            // Is enum class?
                            << (e.is_scoped ? "class" : "/*not enum-class*/") << ", "
                            // Name.
                            << e.name << ", "
                            // Qualified name.
                            << "(" << e.full_type << "), "
                            // Namespace stack.
                            << NsStackToString() << ", "
                            // Underlying type.
                            << e.canonical_underlying_type << ", "
                            // Comment.
                            << (e.comment ? EscapeQuoteString(*e.comment) : "/*no comment*/") << ", ";

                        if (e.elems.empty())
                        {
                            out << "/*no elements*/);\n";
                        }
                        else
                        {
                            out << "\n";
                            for (const EnumElem &elem : e.elems)
                            {
                                out << "    (" << elem.name << ", ";
                                if (e.is_signed)
                                    out << std::int64_t(elem.raw_value);
                                else
                                    out << std::uint64_t(elem.raw_value);
                                out << ", " << (elem.comment ? EscapeQuoteString(*elem.comment) : "/*no comment*/") << ")\n";
                            }
                            out << ")\n";
                        }
                        EndMultiplexBlock();
                    },
                    [&](const FuncEntity &e)
                    {
                        BeginMultiplexBlock();
                        out << "MB_FUNC("
                            << "/*returns*/(" << e.return_type.pretty << "), "
                            << e.name << ", "
                            << e.simple_name << ", "
                            << "(" << e.full_name << "), "
                            << NsStackToString() << ", "
                            << (e.comment ? EscapeQuoteString(*e.comment) : "/*no comment*/")
                            << ", ";
                        dump_params(e.params, false);
                        out << ")\n";
                        EndMultiplexBlock();
                    },
                    [&](const ClassEntity &e)
                    {
                        BeginMultiplexBlock();
                        out << "MB_CLASS(";
                        switch (e.kind)
                        {
                            case ClassKind::class_: out << "class"; break;
                            case ClassKind::struct_: out << "struct"; break;
                            case ClassKind::union_: out << "union"; break;
                        };
                        out
                            << ", "
                            << e.name << ", "
                            << "(" << e.full_type << "), "
                            << NsStackToString() << ", "
                            << (e.comment ? EscapeQuoteString(*e.comment) : "/*no comment*/") << ",";

                        // Bases.
                        if (e.bases.empty())
                        {
                            out << " /*no bases*/,";
                        }
                        else
                        {
                            out << "\n    /*bases:*/\n";
                            for (const ClassBase &base : e.bases)
                                out << "    ((" << base.type.pretty << "), " << (base.is_virtual ? "virtual" : "/*not virtual*/") << ")\n";
                            out << "    ,";
                        }

                        // Members.
                        if (e.members.empty())
                        {
                            out << " /*no members*/)\n";
                        }
                        else
                        {
                            if (e.bases.empty())
                                out << "\n    ";
                            out << "/*members:*/\n";
                            for (const ClassMemberVariant &member : e.members)
                            {
                                std::visit(Overload{
                                    [&](const ClassField &field)
                                    {
                                        out
                                            << "    (field, "
                                            << (field.is_static ? "static" : "/*non-static*/") << ", "
                                            << "(" << field.type.pretty << "), "
                                            << field.name << ", "
                                            << (field.comment ? EscapeQuoteString(*field.comment) : "/*no comment*/")
                                            << ")\n";
                                    },
                                    [&](const ClassCtor &ctor)
                                    {
                                        out
                                            << "    (ctor, "
                                            << (ctor.is_explicit ? "explicit" : "/*not explicit*/") << ", "
                                            << (ctor.comment ? EscapeQuoteString(*ctor.comment) : "/*no comment*/") << ", ";
                                        dump_params(ctor.params);
                                        out << ")\n";
                                    },
                                    [&](const ClassMethod &method)
                                    {
                                        out
                                            << "    (method, "
                                            << (method.is_static ? "static" : "/*non-static*/") << ", "
                                            << "(" << method.return_type.pretty << "), "
                                            << method.name << ", "
                                            << method.simple_name << ", "
                                            << (method.is_const ? "const" : "/*not const*/") << ", "
                                            << (method.comment ? EscapeQuoteString(*method.comment) : "/*no comment*/") << ", ";
                                        dump_params(method.params);
                                        out << ")\n";
                                    },
                                    [&](const ClassConvOp &conv_op)
                                    {
                                        out
                                            << "    (conv_op, "
                                            << "(" << conv_op.return_type.pretty << "), "
                                            << (conv_op.is_const ? "const" : "/*not const*/") << ", "
                                            << (conv_op.comment ? EscapeQuoteString(*conv_op.comment) : "/*no comment*/")
                                            << ")\n";
                                    },
                                }, member);
                            }
                            out << ")\n";
                        }

                        // Push to the namespace stack.
                        namespace_stack.push_back("(" + e.name + ",cl)");

                        for (const auto &elem : e.nested)
                            lambda(lambda, elem);

                        // Push the namespace stack.
                        namespace_stack.pop_back();

                        out << "MB_END_CLASS(" << e.name << ")\n";
                        EndMultiplexBlock();
                    },
                    [&](const TypedefEntity &t)
                    {
                        BeginMultiplexBlock();
                        out << "MB_TYPEDEF("
                            << t.name << ", "
                            << "(" << t.full_name << "), "
                            << NsStackToString() << ", "
                            << "(" << t.type.pretty << "), "
                            << (t.comment ? EscapeQuoteString(*t.comment) : "/*no comment*/")
                            << ")\n";
                        EndMultiplexBlock();
                    },
                    [&](const NamespaceEntity &ns)
                    {
                        out << "MB_NAMESPACE("
                            << (ns.name.empty() ? "/*anonymous*/" : ns.name) << ", "
                            << (ns.is_inline ? "inline" : "/*not inline*/") << ", "
                            << NsStackToString() << ", "
                            << (ns.comment ? EscapeQuoteString(*ns.comment) : "/*no comment*/") << ")\n";

                        namespace_stack.push_back("(" + ns.name + ",ns)");

                        for (const auto &elem : ns.nested)
                            lambda(lambda, elem);

                        namespace_stack.pop_back();

                        out << "MB_END_NAMESPACE(" << (ns.name.empty() ? "/*anonymous*/" : ns.name) << ")\n";
                    },
                }, e.variant);
            };
            for (const Entity &e : file.entities.nested)
                lambda(lambda, e);

            // Dump type spellings.
            if (!file.alt_type_spellings.empty())
            {
                out << "\n";
                for (const auto &type : file.alt_type_spellings)
                {
                    out << "MB_REGISTER_TYPE(" << multiplex_counter++ << ", " << type.first << ")\n";
                    for (const auto &spelling : type.second)
                    {
                        out << "MB_ALT_TYPE_SPELLING("
                            << multiplex_counter++ << ", "
                            << "(" << type.first << "), "
                            << "(" << spelling << ")"
                            << ")\n";
                    }
                }
            }
        }

        out << "\nMB_END_FILE\n\n";

        out <<
            "#ifdef MB_AGAIN\n"
            "#undef MB_AGAIN\n"
            "#include __FILE__\n"
            "#endif // MB_AGAIN\n";
    }
}
