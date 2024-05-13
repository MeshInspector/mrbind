#include <clang-c/Index.h>

#include <exception>
#include <fstream>
#include <functional>
#include <iostream>
#include <optional>
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

        constexpr CmdLineArgs() {}
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
                else
                {
                    throw std::runtime_error("Unknown argument: `" + std::string(this_arg) + "`. To forward arguments to libclang, put them after `--`.\n");
                }
            }

            if (output_path.empty())
                throw std::runtime_error("Must set the output path using `-o`.");
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
                    str += " Make sure you specify the input filename, e.g. `mrbind -- input.cpp` or `mrbind -- clang++ input.cpp`.";
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
        virtual void OnPop(const Stack &stack, bool skipped) = 0;

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

        struct VisitorImpl : Visitor
        {
            std::ofstream *output_file = nullptr;
            const CmdLineArgs *args = nullptr;

            std::vector<std::function<void()>> closing_funcs;

            std::vector<std::string> namespace_stack;

            std::optional<std::string> main_filename;

            // Dumps current namespaces into a single string, in the `(a)(b)(c)` format.
            [[nodiscard]] std::string CurrentNamespaces() const
            {
                std::string ret;
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

                        bool is_anon = clang_Cursor_isAnonymous(stack.back());
                        bool is_inline = clang_Cursor_isInlineNamespace(stack.back());

                        if (!is_anon)
                            namespace_stack.push_back(name.c_str());

                        *output_file << "\nMB_NAMESPACE_OPEN(" << name.c_str() << ",";
                        if (is_inline)
                            *output_file << "inline";
                        *output_file << ",";

                        if (Misc::String comment = clang_Cursor_getRawCommentText(stack.back()))
                            *output_file << Misc::EscapeQuoteString(comment.c_str());
                        *output_file << ")\n";

                        if (!is_anon)
                        {
                            closing_func = [this]
                            {
                                *output_file << std::string("MB_NAMESPACE_CLOSE(") + namespace_stack.back() + ")\n";
                                namespace_stack.pop_back();
                            };
                        }

                    }
                    break;

                  case CXCursor_ClassDecl:
                  case CXCursor_StructDecl:
                    {
                        Misc::String class_name = clang_getCursorSpelling(stack.back());

                        Misc::String comment = clang_Cursor_getRawCommentText(stack.back());

                        *output_file
                            << "MB_CLASS("
                            << (kind == CXCursor_ClassDecl ? "class" : "struct") << ", "
                            << CurrentNamespaces() << ", " << class_name.c_str() << ", "
                            << (comment ? Misc::EscapeQuoteString(comment.c_str()) : "") << ",\n";

                        std::ostringstream member_vars;

                        struct MemberVisitor : Visitor
                        {
                            VisitorImpl *self = nullptr;

                            bool first = true;

                            bool OnPush(const Stack &stack) override
                            {
                                // Recurse into the struct itself.
                                if (first)
                                {
                                    first = false;
                                    return true;
                                }

                                CXCursorKind kind = clang_getCursorKind(stack.back());
                                if (kind == CXCursor_FieldDecl)
                                {
                                    CX_CXXAccessSpecifier access = clang_getCXXAccessSpecifier(stack.back());
                                    if (access == CX_CXXPublic) // Only public members.
                                    {
                                        CXType field_type = clang_getCursorType(stack.back());
                                        Misc::String type_str = clang_getTypeSpelling(field_type);

                                        Misc::String name_str = clang_getCursorSpelling(stack.back());
                                        Misc::String comment_str = clang_Cursor_getRawCommentText(stack.back());

                                        *self->output_file << "    ("
                                            << "(" << type_str.c_str() << "), "
                                            << name_str.c_str() << ", "
                                            << (comment_str ? Misc::EscapeQuoteString(comment_str.c_str()) : "")
                                            << ")\n";
                                    }
                                }

                                return false;
                            }

                            void OnPop(const Stack &stack, bool skipped) override
                            {
                                (void)stack;
                                (void)skipped;
                            }
                        };
                        MemberVisitor vis;
                        vis.self = this;
                        vis.Visit(stack.back());

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
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
        return 1;
    }
    return 0;
}
