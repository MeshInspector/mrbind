#include <clang-c/Index.h>

#include <cstdlib>
#include <exception>
#include <fstream>
#include <functional>
#include <iostream>
#include <optional>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string_view>
#include <string>
#include <utility>
#include <vector>

namespace MRBind
{
    class CmdLineArgs
    {
      public:
        int libclang_argc = 0;
        const char *const *libclang_argv = nullptr;

        std::string output_path;
        bool print_ast = false;

        std::set<std::string> namespace_blacklist;
        bool custom_namespace_blacklist = false;

        CmdLineArgs() {}

        CmdLineArgs(int argc, char **argv)
        {
            if (argc <= 1)
                return;
            argc--;
            argv++;

            while (argc > 0)
            {
                std::string_view this_arg = *argv++;
                argc--;

                if (this_arg == "--")
                {
                    if (argc > 0)
                    {
                        libclang_argc = argc;
                        libclang_argv = argv;
                    }
                    break;
                }
                else if (this_arg == "--help")
                {
                    std::cout <<
                        "Usage: mrbind -o output_file.cpp -- [clang++] [-xc++-header] input_file.h [-fparse-all-comments] ...\n"
                        "  Everything after `--` is a simulated compiler invocation, with whatever flags and/or compiler name you want.\n"
                        "  Input filename must be specified in there.\n"
                        "  `-xc++-header` forces the input to be processed as a C++ header, despite having the `.h` extension.\n"
                        "  `-fparse-all-comments` can be used to respect non-doxygen comments, which are ignored by default. This is optional.\n"
                        "Our own flags (that go before `--`) are:\n"
                        "  --help - Display this page.\n"
                        "  -o filename - Set output filename. Mandatory.\n"
                        "  --print-ast - Dump AST to stdout for debugging purposes.\n"
                        "  --blacklist-namespaces a,b,c - Blacklist certain namespaces. If not specified, we blacklist common stuff like `detail` and `impl`. Names must not contain `::`.\n";
                    std::exit(0);
                }
                else if (this_arg == "-o")
                {
                    if (argc == 0)
                        throw std::runtime_error("Expected a filename after `-o`.");
                    output_path = *argv++;
                    argc--;
                }
                else if (this_arg == "--print-ast")
                {
                    print_ast = true;
                }
                else if (this_arg == "--blacklist-namespaces")
                {
                    if (argc == 0)
                        throw std::runtime_error("Expected an after `--blacklist-namespaces`.");
                    custom_namespace_blacklist = true;
                    std::istringstream ss(*argv++);
                    argc--;
                    std::string name;
                    while (std::getline(ss, name, ','))
                        namespace_blacklist.insert(std::move(name));
                }
                else
                {
                    throw std::runtime_error("Unknown argument: `" + std::string(this_arg) + "`. To forward arguments to libclang, put them after `--`. See `--help` for more details.\n");
                }
            }

            if (output_path.empty())
                throw std::runtime_error("Must set the output path using `-o`.");

            if (!custom_namespace_blacklist)
                namespace_blacklist = {"detail", "details", "impl"};
        }
    };

    class Parser
    {
        CXIndex handle = nullptr;

      public:
        constexpr Parser() {}

        struct Params
        {
            bool print_diagnostics = true;
        };

        Parser(const Params &params)
            : handle(clang_createIndex(0, int(params.print_diagnostics)))
        {
            if (!handle)
                throw std::runtime_error("Unable to initialize clangd index.");
        }

        Parser(Parser &&other) noexcept : handle(std::exchange(other.handle, nullptr)) {}
        Parser &operator=(Parser other) noexcept {std::swap(handle, other.handle); return *this;}

        ~Parser()
        {
            if (handle)
                clang_disposeIndex(handle);
        }

        [[nodiscard]] explicit operator bool() const {return bool(handle);}
        [[nodiscard]] CXIndex Handle() const {return handle;}
    };

    namespace Misc
    {
        // A RAII wrapper for `CXString`.
        class String
        {
            CXString str{};

          public:
            String() {}
            String(CXString str) : str(str) {}

            String(const String &) = delete;
            String &operator=(const String &) = delete;

            ~String()
            {
                clang_disposeString(str);
            }

            [[nodiscard]] explicit operator bool() const {return bool(c_str());}

            // This can be null if there's no string.
            [[nodiscard]] const char *c_str() const {return clang_getCString(str);}
        };

        enum class SourceLocMode
        {
            // A good default mode.
            spelling,
            // Seems to be mostly equivalent to `spelling`? I didn't find any difference.
            file,
            // When expanding macros, this always points to the macro name at the call site,
            // even when it would be more appropriate to point to the argument itself, if it's expanded verbatim.
            expansion,
            // This is the only mode that respects `#file` and `#line`.
            presumed,
        };

        // Convert a source location to a user-friendly string.
        [[nodiscard]] std::string SourceLocToString(const CXSourceLocation &loc, SourceLocMode mode = SourceLocMode::spelling)
        {
            decltype(clang_getSpellingLocation) *func = nullptr;

            std::optional<String> filename;
            unsigned int line = 0;
            unsigned int col = 0;

            switch (mode)
            {
              case SourceLocMode::expansion:
                func = clang_getExpansionLocation;
                break;
              case SourceLocMode::file:
                func = clang_getFileLocation;
                break;
              case SourceLocMode::spelling:
                func = clang_getSpellingLocation;
                break;
              case SourceLocMode::presumed:
                {
                    CXString filename_raw;
                    clang_getPresumedLocation(loc, &filename_raw, &line, &col);
                    filename.emplace(filename_raw);
                }
                break;
            }

            if (func)
            {
                CXFile file{};
                func(loc, &file, &line, &col, nullptr);
                filename.emplace(clang_getFileName(file));
            }

            return std::string(*filename && *filename->c_str() ? filename->c_str() : "<N/A>") + ":" + std::to_string(line) + ":" + std::to_string(col);
        }

        // Tries to convert an expression (or anything else) to its original source code string. The exact whitespacing will be lost.
        [[nodiscard]] std::string CursorToSourceCode(const CXCursor &cur)
        {
            struct Guard
            {
                CXTranslationUnit tu{};
                CXToken *tokens = nullptr;
                unsigned int num_tokens = 0;

                ~Guard()
                {
                    clang_disposeTokens(tu, tokens, num_tokens);
                }
            };
            Guard guard;
            guard.tu = clang_Cursor_getTranslationUnit(cur);
            clang_tokenize(guard.tu, clang_getCursorExtent(cur), &guard.tokens, &guard.num_tokens);

            std::string ret;
            for (unsigned int i = 0; i < guard.num_tokens; i++)
            {
                if (i != 0)
                    ret += ' '; // Ugh.

                ret += String(clang_getTokenSpelling(guard.tu, guard.tokens[i])).c_str();
            }

            return ret;
        }

        [[nodiscard]] std::string CursorDebugString(const CXCursor &cur)
        {
            Misc::String kind = clang_getCursorKindSpelling(clang_getCursorKind(cur));
            Misc::String value = clang_getCursorDisplayName(cur);

            std::string ret;
            ret += kind.c_str();
            if (value.c_str()[0] != '\0')
            {
                ret += " `";
                ret += value.c_str();
                ret += "`";
            }

            std::string source_loc;
            if (clang_getCursorKind(cur) == CXCursor_TranslationUnit)
                source_loc = String(clang_getTranslationUnitSpelling(clang_Cursor_getTranslationUnit(cur))).c_str();
            else
                source_loc = SourceLocToString(clang_getCursorLocation(cur), SourceLocMode::spelling);

            ret += " [" + source_loc + "]";
            return ret;
        }

        // Wrap the string in double quotes and escape any weird characters..
        [[nodiscard]] std::string EscapeQuoteString(std::string_view str)
        {
            std::string ret;
            ret.reserve(str.size() + 2);
            ret += '"';
            for (char ch : str)
            {
                if (ch == '"')
                    ret += '\\';
                ret += ch;
            }
            ret += '"';
            return ret;
        }
    }

    class TranslationUnit
    {
        CXTranslationUnit handle = nullptr;

      public:
        constexpr TranslationUnit() {}

        explicit TranslationUnit(Parser &parser, const CmdLineArgs &cmdline_args)
            : TranslationUnit() // Need to invoke the destructor even if this constructor fails, hence delegating.
        {
            CXErrorCode error = clang_parseTranslationUnit2(
                parser.Handle(),
                // Filename. Null = read from flags.
                nullptr,
                // Command line flags.
                cmdline_args.libclang_argv, cmdline_args.libclang_argc,
                // Unsaved files - none.
                nullptr, 0,
                // Bitmask flags.
                CXTranslationUnit_None,
                // Resulting handle.
                &handle
            );

            if (error != CXError_Success)
            {
                std::string str = "Libclang parser failed.";

                if (clang_getNumDiagnostics(handle) == 0)
                    str += " Make sure you specify the input filename, e.g. `mrbind -- clang++ -xc++-header input.h`.";
                throw std::runtime_error(str);
            }

            // Stop on compiler errors (Clang will keep going with a half-broken AST by default).
            if (error == CXError_Success)
            {
                auto num_diags = clang_getNumDiagnostics(handle);
                for (decltype(num_diags) i = 0; i < num_diags; i++)
                {
                    struct Guard
                    {
                        CXDiagnostic diag = nullptr;
                        ~Guard()
                        {
                            clang_disposeDiagnostic(diag);
                        }
                    };
                    Guard guard;
                    guard.diag = clang_getDiagnostic(handle, i);
                    if (clang_getDiagnosticSeverity(guard.diag) >= CXDiagnostic_Error)
                    {
                        throw std::runtime_error("A compilation error.");
                    }
                }
            }
        }

        TranslationUnit(TranslationUnit &&other) noexcept : handle(std::exchange(other.handle, nullptr)) {}
        TranslationUnit &operator=(TranslationUnit other) noexcept {std::swap(handle, other.handle); return *this;}

        ~TranslationUnit()
        {
            if (handle)
                clang_disposeTranslationUnit(handle);
        }

        [[nodiscard]] explicit operator bool() const {return bool(handle);}
        [[nodiscard]] CXTranslationUnit Handle() const {return handle;}

        [[nodiscard]] CXCursor GetCursor() const {return clang_getTranslationUnitCursor(handle);}
    };

    struct Visitor
    {
        virtual ~Visitor() = default;

        using Stack = std::vector<CXCursor>;

        // Just pushed a new element to the stack.
        // Return false to not recurse deeper. (Then `OnPop()` will NOT be called for this element.)
        virtual bool OnPush(const Stack &stack) = 0;
        // About to pop the last element from the stack (it's not popped yet when this is called).
        // `skipped` is true if the corresponding `OnPush()` returned false.
        virtual void OnPop(const Stack &stack, bool skipped) {(void)stack; (void)skipped;}

        // Traverse the AST.
        void Visit(CXCursor cursor)
        {
            // Cursors don't need cleanup, apparently.

            struct Data
            {
                Visitor *vis = nullptr;

                std::vector<CXCursor> stack;
            };
            Data data;
            data.vis = this;
            data.stack.push_back(cursor);

            if (data.vis->OnPush(data.stack))
            {
                clang_visitChildren(
                    data.stack.front(),
                    [](CXCursor cursor, CXCursor parent, void *userdata) -> CXChildVisitResult
                    {
                        Data &data = *static_cast<Data *>(userdata);

                        // Update `data.stack`.
                        while (true)
                        {
                            if (data.stack.empty())
                                throw std::logic_error("Libclang jumped to a cursor that's not a parent of the current cursor.");

                            if (clang_equalCursors(parent, data.stack.back()))
                                break;

                            data.vis->OnPop(data.stack, false);
                            data.stack.pop_back();
                        }
                        data.stack.push_back(cursor);
                        bool recurse = data.vis->OnPush(data.stack);
                        if (!recurse)
                        {
                            data.vis->OnPop(data.stack, true);
                            data.stack.pop_back();
                        }

                        return recurse ? CXChildVisit_Recurse : CXChildVisit_Continue;
                    },
                    &data
                );

                while (!data.stack.empty())
                {
                    data.vis->OnPop(data.stack, false);
                    data.stack.pop_back();
                }
            }
            else
            {
                data.vis->OnPop(data.stack, true);
            }
        }
    };
}

int main(int argc, char **argv)
{
    using namespace MRBind;

    try
    {
        CmdLineArgs args(argc, argv);
        Parser parser(MRBind::Parser::Params{});
        TranslationUnit tu(parser, args);

        std::ofstream output_file(args.output_path);
        if (!output_file)
            throw std::runtime_error("Unable to open the output file `" + args.output_path + "`.");
        output_file.exceptions(std::ios::badbit | std::ios::failbit);



        output_file
            << "// Automatically generated by mrbind, do not edit.\n"
            << "\n"
            << "#define MRBIND_ORIGINAL_FILE " << Misc::EscapeQuoteString(Misc::String(clang_getTranslationUnitSpelling(tu.Handle())).c_str()) << "\n"
            << "#include MRBIND_HEADER\n"
            << "\n"
            << "MB_FILE\n"
            << "\n";

        struct VisitorImpl : Visitor
        {
            std::ofstream *output_file = nullptr;
            const CmdLineArgs *args = nullptr;

            std::vector<std::function<void()>> closing_funcs;

            std::vector<std::string> namespace_stack;

            std::optional<std::string> main_filename;

            // Dumps current namespaces into a single string, in the `(a)(b)(c)` format.
            [[nodiscard]] std::string CurrentNamespaces(bool prefix_comment) const
            {
                if (namespace_stack.empty())
                    return "/*global namespace*/";

                std::string ret;
                if (prefix_comment)
                    ret = "/*namespace:*/";

                for (const std::string &elem : namespace_stack)
                {
                    ret += '(';
                    ret += elem;
                    ret += ')';
                }
                return ret;
            }

            bool OnPush(const Stack &stack) override
            {
                CXCursorKind kind = clang_getCursorKind(stack.back());
                std::function<void()> &closing_func = closing_funcs.emplace_back();

                // Extract the primary file name.
                if (!main_filename)
                {
                    if (kind != CXCursor_TranslationUnit)
                        throw std::runtime_error("The top-level cursor is not a translation unit.");
                    Misc::String name = clang_getTranslationUnitSpelling(clang_Cursor_getTranslationUnit(stack.back()));
                    main_filename = name.c_str();
                }
                // Skip if this is in a header.
                else
                {
                    CXFile file;
                    clang_getSpellingLocation(clang_getCursorLocation(stack.back()), &file, nullptr, nullptr, nullptr);
                    Misc::String str = clang_getFileName(file);
                    if (*main_filename != str.c_str())
                        return false;
                }

                switch (kind)
                {
                  case CXCursor_CompoundStmt:
                  case CXCursor_FieldDecl:
                    return false; // Don't recurse into some things. Sometimes for performance, sometimes for correctness.

                  case CXCursor_Namespace:
                    {
                        Misc::String name = clang_getCursorSpelling(stack.back());

                        if (args->namespace_blacklist.contains(name.c_str()))
                            return false; // This namespace name is blacklisted.

                        bool is_anon = clang_Cursor_isAnonymous(stack.back());
                        bool is_inline = clang_Cursor_isInlineNamespace(stack.back());

                        if (!is_anon)
                            namespace_stack.push_back(name.c_str());

                        *output_file << "MB_NAMESPACE(" << (is_anon ? "/*anonymous*/" : name.c_str()) << ", ";
                        if (is_inline)
                            *output_file << "inline";
                        else
                            *output_file << "/*not inline*/";
                        *output_file << ", ";

                        if (Misc::String comment = clang_Cursor_getRawCommentText(stack.back()))
                            *output_file << Misc::EscapeQuoteString(comment.c_str());
                        else
                            *output_file << "/*no comment*/";
                        *output_file << ")\n";

                        if (!is_anon)
                        {
                            closing_func = [this]
                            {
                                *output_file << std::string("MB_END_NAMESPACE(") + namespace_stack.back() + ")\n";
                                namespace_stack.pop_back();
                            };
                        }

                    }
                    break;

                  case CXCursor_FunctionDecl:
                    {
                        Misc::String name_str = clang_getCursorSpelling(stack.back());
                        Misc::String comment_str = clang_Cursor_getRawCommentText(stack.back());

                        CXType func_type = clang_getCursorType(stack.back());
                        CXType ret_type = clang_getResultType(func_type);
                        int num_args = clang_Cursor_getNumArguments(stack.back());

                        *output_file << "MB_FUNC(";
                        if (ret_type.kind == CXType_Void)
                            *output_file << "/*returns void*/";
                        else
                            *output_file << "/*returns:*/(" << Misc::String(clang_getTypeSpelling(ret_type)).c_str() << ")";
                        *output_file << ", "
                            << CurrentNamespaces(true) << ", "
                            << "/*name:*/" << name_str.c_str() << ", ";

                        if (num_args == 0)
                            *output_file << "/*no params*/";
                        else
                            *output_file << "/*params:*/";
                        for (int i = 0; i < num_args; i++)
                        {
                            CXCursor arg = clang_Cursor_getArgument(stack.back(), unsigned(i));
                            CXType arg_type = clang_getCursorType(arg);

                            struct DefaultArgVisitor : Visitor
                            {
                                std::string value;
                                bool first = true;
                                bool OnPush(const Stack &stack) override
                                {
                                    if (first)
                                    {
                                        first = false;
                                        return true; // Recurse into the parameter.
                                    }
                                    value = Misc::CursorToSourceCode(stack.back());
                                    return false;
                                }
                            };
                            DefaultArgVisitor default_arg;
                            default_arg.Visit(arg);

                            *output_file << "\n    ("
                                << "(" << Misc::String(clang_getTypeSpelling(arg_type)).c_str() << "), "
                                << Misc::String(clang_getCursorSpelling(arg)).c_str() << ", "
                                << (default_arg.value.empty() ? "/*no default argument*/" : "(" + default_arg.value + ")")
                                << ")";
                        }
                        if (num_args != 0)
                            *output_file << "\n    ";
                        *output_file << ", ";

                        *output_file << (comment_str ? Misc::EscapeQuoteString(comment_str.c_str()) : "/*no comment*/") << ")\n";
                    }
                    break;

                  case CXCursor_ClassDecl:
                  case CXCursor_StructDecl:
                    {
                        if (clang_Cursor_isAnonymous(stack.back()))
                            break; // Skip anonymous structs.

                        struct MemberVisitor : Visitor
                        {
                            VisitorImpl *self = nullptr;

                            bool first = true;

                            std::ostringstream member_vars;
                            std::ostringstream member_funcs;
                            std::ostringstream ctors;

                            bool OnPush(const Stack &stack) override
                            {
                                // Recurse into the struct itself.
                                if (first)
                                {
                                    first = false;
                                    return true;
                                }

                                CXCursorKind kind = clang_getCursorKind(stack.back());
                                switch (kind)
                                {
                                    // A member variable.
                                  case CXCursor_FieldDecl:
                                    if (clang_getCXXAccessSpecifier(stack.back()) == CX_CXXPublic) // Only public members.
                                    {
                                        CXType field_type = clang_getCursorType(stack.back());
                                        Misc::String type_str = clang_getTypeSpelling(field_type);

                                        Misc::String name_str = clang_getCursorSpelling(stack.back());
                                        Misc::String comment_str = clang_Cursor_getRawCommentText(stack.back());

                                        member_vars << "    ("
                                            << "(" << type_str.c_str() << "), "
                                            << name_str.c_str() << ", "
                                            << (comment_str ? Misc::EscapeQuoteString(comment_str.c_str()) : "/*no comment*/")
                                            << ")\n";
                                    }
                                    break;

                                    // A member function.
                                  case CXCursor_CXXMethod:
                                  case CXCursor_Constructor:
                                    if (clang_getCXXAccessSpecifier(stack.back()) == CX_CXXPublic) // Only public members.
                                    {
                                        bool is_ctor = kind == CXCursor_Constructor;

                                        std::ostringstream &ss = is_ctor ? ctors : member_funcs;

                                        Misc::String name_str = clang_getCursorSpelling(stack.back());
                                        Misc::String comment_str = clang_Cursor_getRawCommentText(stack.back());

                                        CXType func_type = clang_getCursorType(stack.back());
                                        CXType ret_type = clang_getResultType(func_type);
                                        bool is_const = !is_ctor && clang_CXXMethod_isConst(stack.back());
                                        int num_args = clang_Cursor_getNumArguments(stack.back());

                                        ss << "    (";
                                        if (!is_ctor)
                                        {
                                            if (ret_type.kind == CXType_Void)
                                                ss << "/*returns void*/";
                                            else
                                                ss << "/*returns:*/(" << Misc::String(clang_getTypeSpelling(ret_type)).c_str() << ")";
                                            ss << ", /*name:*/" << name_str.c_str() << ", ";
                                        }

                                        if (num_args == 0)
                                            ss << "/*no params*/";
                                        else
                                            ss << "/*params:*/";
                                        for (int i = 0; i < num_args; i++)
                                        {
                                            CXCursor arg = clang_Cursor_getArgument(stack.back(), unsigned(i));
                                            CXType arg_type = clang_getCursorType(arg);

                                            struct DefaultArgVisitor : Visitor
                                            {
                                                std::string value;
                                                bool first = true;
                                                bool OnPush(const Stack &stack) override
                                                {
                                                    if (first)
                                                    {
                                                        first = false;
                                                        return true; // Recurse into the parameter.
                                                    }
                                                    value = Misc::CursorToSourceCode(stack.back());
                                                    return false;
                                                }
                                            };
                                            DefaultArgVisitor default_arg;
                                            default_arg.Visit(arg);


                                            ss << "\n        ("
                                                << "(" << Misc::String(clang_getTypeSpelling(arg_type)).c_str() << "), "
                                                << Misc::String(clang_getCursorSpelling(arg)).c_str() << ", "
                                                << (default_arg.value.empty() ? "/*no default argument*/" : "(" + default_arg.value + ")")
                                                << ")";
                                        }
                                        if (num_args != 0)
                                            ss << "\n        ";
                                        ss << ", ";
                                        if (!is_ctor)
                                            ss << (is_const ? "const" : "/*non-const*/") << ", ";

                                        ss << (comment_str ? Misc::EscapeQuoteString(comment_str.c_str()) : "/*no comment*/") << ")\n";
                                    }
                                    break;

                                  default:
                                    break;
                                }

                                return false;
                            }
                        };
                        MemberVisitor vis;
                        vis.self = this;
                        vis.Visit(stack.back());

                        Misc::String class_name = clang_getCursorSpelling(stack.back());

                        Misc::String comment = clang_Cursor_getRawCommentText(stack.back());

                        *output_file
                            << "MB_CLASS("
                            << "/*kind:*/" << (kind == CXCursor_ClassDecl ? "class" : "struct") << ", "
                            << CurrentNamespaces(true) << ", "
                            << "/*name:*/" << class_name.c_str() << ", "
                            << (comment ? Misc::EscapeQuoteString(comment.c_str()) : "/*no comment*/") << '\n'
                            << "    , // Member variables:\n"
                            << vis.member_vars.str()
                            << "    , // Constructors:\n"
                            << vis.ctors.str()
                            << "    , // Member functions:\n"
                            << vis.member_funcs.str()
                            << ")\n";
                        ;

                        namespace_stack.push_back(class_name.c_str());
                        closing_func = [this]
                        {
                            *output_file << "MB_END_CLASS(" << namespace_stack.back() << ")\n";
                            namespace_stack.pop_back();
                        };
                    }
                    break;

                  case CXCursor_EnumDecl:
                    {
                        Misc::String name_str = clang_getCursorSpelling(stack.back());
                        Misc::String comment_str = clang_Cursor_getRawCommentText(stack.back());
                        CXType underlying_type = clang_getEnumDeclIntegerType(stack.back());
                        bool is_scoped = clang_EnumDecl_isScoped(stack.back());

                        // Determine signedness, or throw if the underlying type is weird.
                        // Notably we reject [u]int128_t here, because libclang has no API to get the element values for those.
                        bool is_signed;
                        if (underlying_type.kind == CXType_Char_S || underlying_type.kind == CXType_SChar || underlying_type.kind == CXType_Short || underlying_type.kind == CXType_Int || underlying_type.kind == CXType_Long || underlying_type.kind == CXType_LongLong)
                            is_signed = true;
                        else if (underlying_type.kind == CXType_Char_U || underlying_type.kind == CXType_UChar || underlying_type.kind == CXType_UShort || underlying_type.kind == CXType_UInt || underlying_type.kind == CXType_ULong || underlying_type.kind == CXType_ULongLong)
                            is_signed = false;
                        else
                            throw std::runtime_error("Enum `" + Misc::CursorDebugString(stack.back()) + "` has an unknown underlying type.");

                        *output_file << "MB_ENUM("
                            << (is_scoped ? "class" : "/*not enum-class*/") << ", "
                            << CurrentNamespaces(true) << ", "
                            << "/*name:*/" << name_str.c_str() << ", "
                            << "/*type:*/(" << Misc::String(clang_getTypeSpelling(underlying_type)).c_str() << "), "
                            << (comment_str ? Misc::EscapeQuoteString(comment_str.c_str()) : "/*no comment*/") << ", ";

                        struct EnumElemsVisitor : Visitor
                        {
                            VisitorImpl *self = nullptr;

                            bool first = true;
                            bool at_least_one_elem = false;
                            bool is_signed = false;

                            bool OnPush(const Stack &stack) override
                            {
                                if (first)
                                {
                                    // Enter into the enum.
                                    first = false;
                                    return true;
                                }

                                if (clang_getCursorKind(stack.back()) == CXCursor_EnumConstantDecl)
                                {
                                    at_least_one_elem = true;
                                    Misc::String comment_str = clang_Cursor_getRawCommentText(stack.back());
                                    *self->output_file
                                        << "\n    ("
                                        << Misc::String(clang_getCursorSpelling(stack.back())).c_str() << ", "
                                        << (is_signed ? std::to_string(clang_getEnumConstantDeclValue(stack.back())) : std::to_string(clang_getEnumConstantDeclUnsignedValue(stack.back()))) << ", "
                                        << (comment_str ? Misc::EscapeQuoteString(comment_str.c_str()) : "/*no comment*/")
                                        << ")";
                                }

                                return false;
                            }
                        };
                        EnumElemsVisitor vis;
                        vis.self = this;
                        vis.is_signed = is_signed;
                        vis.Visit(stack.back());

                        if (vis.at_least_one_elem)
                            *output_file << '\n';
                        else
                            *output_file << "/*no elems*/";
                        *output_file << ")\n";
                    }
                    break;

                  default:
                    break;
                }

                if (args->print_ast)
                {
                    for (std::size_t i = 1; i < stack.size(); i++)
                        std::cout << "| ";
                    std::cout << "{ " << Misc::CursorDebugString(stack.back()) << '\n';
                }

                return true;
            }

            void OnPop(const Stack &stack, bool skipped) override
            {
                if (closing_funcs.back())
                    closing_funcs.back()();
                closing_funcs.pop_back();

                if (!skipped && args->print_ast)
                {
                    for (std::size_t i = 1; i < stack.size(); i++)
                        std::cout << "| ";
                    std::cout << "} " << Misc::CursorDebugString(stack.back()) << '\n';
                }
            }
        };

        VisitorImpl vis;
        vis.output_file = &output_file;
        vis.args = &args;
        vis.Visit(tu.GetCursor());

        if (!vis.closing_funcs.empty())
            throw std::logic_error("The function stack is not empty at the end.");

        output_file << "\nMB_END_FILE\n";
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
        return 1;
    }
    return 0;
}
