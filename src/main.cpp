#include <clang-c/Index.h>
#include <nlohmann/json.hpp>

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

#ifndef MRBIND_IGNORE_DEPRECATION
#ifdef _MSC_VER
#define MRBIND_IGNORE_DEPRECATION(...) _Pragma("warning(push)") _Pragma("warning(disable:4996)") __VA_ARGS__ _Pragma("warning(pop)")
#else
#define MRBIND_IGNORE_DEPRECATION(...) _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"") __VA_ARGS__ _Pragma("GCC diagnostic pop")
#endif
#endif

namespace MRBind
{
    // Parsing command line args.
    class CmdLineArgs
    {
      public:
        // Stuff after `--`.
        int libclang_argc = 0;
        const char *const *libclang_argv = nullptr;

        // Output file path.
        std::string output_path;
        // Whether to print the AST for debug purposes, `--print-ast`.
        bool print_ast = false;

        // Enable logging, `-v`.
        bool verbose = false;

        // Ignored namespace as per `--blacklist-namespaces`.
        std::set<std::string> namespace_blacklist;
        // True if `--blacklist-namespaces` is specified. On false we fill `namespace_blacklist` automatically.
        bool custom_namespace_blacklist = false;

        // Input filename from `-i`. Optional, otherwise we let libclang extract the path from flags after `--`.
        std::string input_path;
        // Directory to search for `compile_commands.json`, from `-d`. Optional.
        std::string compilation_database_dir;
        // Filename to dump the command discovered from the compilation database to, from `-D`.
        std::string dump_db_command_path;
        // If true, the output separator for `-D` is `\0` instead of `\n`.
        bool dump_db_command_null_separated = false;

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
                        "Usage: mrbind -o output.cpp -- clang++ [-xc++-header] input.h [-fparse-all-comments] ...\n"
                        "  Everything after `--` is a simulated compiler invocation, with whatever flags and compiler name you want. The compiler name shouldn't affect anything.\n"
                        "  Input filename can be specified in there. Alternatively, use `-i input.h` before `--`.\n"
                        "  `-xc++-header` forces the input to be processed as a C++ header, despite having the `.h` extension.\n"
                        "  `-fparse-all-comments` can be used to respect non-doxygen comments, which are ignored by default. This is optional.\n"
                        "Our own flags (that go before `--`) are:\n"
                        "  --help        - Display this page.\n"
                        "  -o filename   - Set output filename. Mandatory.\n"
                        "  -i filename   - Set input filename. Optional, you can also specify the path as a compiler flag after `--`.\n"
                        "  -d directory  - Set directory containing `compile_commands.json`. Requires `-i`. We extract flags from it (guessing the `.cpp` filename) and prepend to those after `--` (don't specify the compiler name after `--`).\n"
                        "  -D filename   - Dump flags discovered from `-d` into the specified file. Optional, requires `-d`. The resulting file contains one flag per line, with no trailing newline. The input filename is removed from those flags, but the compiler name isn't.\n"
                        "  -D0 filename  - Same as `-D`, but use `\\0` as the separator instead of `\\n`.\n"
                        "  -v            - Be verbose.\n"
                        "  --print-ast   - Dump AST to stdout for debugging purposes.\n"
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
                else if (this_arg == "-i")
                {
                    if (argc == 0)
                        throw std::runtime_error("Expected a filename after `-i`.");
                    input_path = *argv++;
                    argc--;
                }
                else if (this_arg == "-d")
                {
                    if (argc == 0)
                        throw std::runtime_error("Expected a directory name after `-d`.");
                    compilation_database_dir = *argv++;
                    argc--;
                }
                else if (this_arg == "-D" || this_arg == "-D0")
                {
                    if (argc == 0)
                        throw std::runtime_error("Expected a filename after `-D`.");
                    dump_db_command_null_separated = this_arg == "-D0";
                    dump_db_command_path = *argv++;
                    argc--;
                }
                else if (this_arg == "-v")
                {
                    verbose = true;
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

            if (!compilation_database_dir.empty() && input_path.empty())
                throw std::runtime_error("Argument `-d` requires `-i`.");

            if (!dump_db_command_path.empty() && compilation_database_dir.empty())
                throw std::runtime_error("Argument `-D` requires `-d`.");

            if (libclang_argc > 0)
            {
                if (compilation_database_dir.empty() && libclang_argv[0][0] == '-')
                    throw std::runtime_error("When running without `-d`, the first argument after `--` must be a (simulated) compiler name.");
                if (!compilation_database_dir.empty() && libclang_argv[0][0] != '-')
                    throw std::runtime_error("When running with `-d`, you don't need a (simulated) compiler name after `--`, as it comes from the compilation database.");
            }
        }
    };

    // Parsing `compile_commands.json`.
    namespace CompilationDatabase
    {
        [[nodiscard]] std::vector<std::string> GuessFlagsForFile(const std::string &json_path, std::string target_path, bool log)
        {
            std::ifstream json_file(json_path);
            if (!json_file)
                throw std::runtime_error("Unable to open file: " + json_path);

            nlohmann::json parsed_json = nlohmann::json::parse(json_file);
            json_file.close();

            if (!parsed_json.is_array())
                throw std::runtime_error("Compilation database parsing error: The top-level json object is not an array.");

            auto IsPathSep = [](char ch)
            {
                return ch == '/' || ch == char(std::filesystem::path::preferred_separator);
            };

            auto NormalizePath = [](std::string &s)
            {
                s = std::filesystem::weakly_canonical(MRBIND_IGNORE_DEPRECATION(std::filesystem::u8path(s)).make_preferred()).string();
            };
            NormalizePath(target_path);

            // Pick the record with the longest matching filename prefix, but the match must end on a path separator.

            const nlohmann::json *best_record = nullptr;
            std::size_t best_prefix_len = 0;
            std::string best_path;

            // Case-insensitive compare on Windows.
            auto case_insensitive_on_win =
                #ifdef _WIN32
                [](unsigned char a, unsigned char b){return std::tolower(a) == std::tolower(b);};
                #else
                std::equal_to<void>{};
                #endif

            for (const auto &elem : parsed_json)
            {
                std::string elem_path = elem["file"].get<std::string>();
                NormalizePath(elem_path);

                auto sep = std::mismatch(elem_path.begin(), elem_path.end(), target_path.begin(), target_path.end(), case_insensitive_on_win);

                if (
                    (sep.first == elem_path.end() || (sep.first != elem_path.begin() && IsPathSep(sep.first[-1]))) &&
                    (sep.second == target_path.end() || (sep.second != target_path.begin() && IsPathSep(sep.second[-1])))
                )
                {
                    std::size_t prefix_len = std::size_t(sep.first - elem_path.begin());
                    if (prefix_len > best_prefix_len)
                    {
                        best_prefix_len = prefix_len;
                        best_record = &elem;
                        best_path = elem_path;
                    }
                }
            }

            if (!best_record)
                throw std::runtime_error("Compilation database doesn't contain any filenames similar to: " + target_path);

            if (log)
                std::cout << "Using compilation database record for file: " << best_path << '\n';

            const nlohmann::json &command_json = (*best_record)["command"];
            if (!command_json.is_string())
                throw std::runtime_error("Compilaton database parsing error: Expecting the \"command\"s to be strings.");


            std::string_view command_str = command_json.get<std::string_view>();

            // Try to split the command into individual strings, using some simple quote parsing.
            std::vector<std::string> ret;
            ret.emplace_back();
            bool escaped = false;
            char in_quotes = 0;
            for (char ch : command_str)
            {
                bool is_quote = false;

                if (escaped)
                {
                    escaped = false;
                    if (ch != '\\' && ch != '"' && ch != '\"')
                        ret.back().push_back('\\'); // Unknown escape sequence, leave it untouched.
                }
                else
                {
                    if (ch == '\\')
                    {
                        escaped = true;
                    }
                    else if (in_quotes)
                    {
                        if (ch == in_quotes)
                        {
                            in_quotes = 0;
                            is_quote = true;
                        }
                    }
                    else if (ch == '"' || ch == '\'')
                    {
                        in_quotes = ch;
                        is_quote = true;
                    }
                }

                if (!in_quotes && !escaped && std::isspace((unsigned char)ch))
                {
                    if (!ret.back().empty())
                        ret.emplace_back();
                }
                else
                {
                    if (!escaped && !is_quote)
                        ret.back().push_back(ch);
                }
            }

            // Now remove the input filename from the command.
            std::string best_path_filename = MRBIND_IGNORE_DEPRECATION(std::filesystem::u8path(best_path)).filename().string();
            auto it = std::find_if(ret.begin(), ret.end(), [&](const std::string &s)
            {
                // First, check that `s` ends with the same filename as `best_path`, to avoid calling `NormalizePath(...)` for nothing.
                if (s.size() <= best_path_filename.size() ||
                    !std::equal(s.begin() + std::ptrdiff_t(s.size() - best_path_filename.size()), s.end(), best_path_filename.begin(), best_path_filename.end(), case_insensitive_on_win) ||
                    s[s.size() - best_path_filename.size() - 1] != char(std::filesystem::path::preferred_separator)
                )
                {
                    return false;
                }

                std::string s_fixed = s;
                NormalizePath(s_fixed);
                return s_fixed == best_path;
            });
            if (it == ret.end())
                std::cerr << "Compilation database parsing warning: Using the record for `" << best_path << "`, but the flags don't contain this filename, so I'm unable to strip it.\n";
            else
                ret.erase(it);

            return ret;
        }
    }

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

        // Returns a debug string describing a cursor.
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

        // Returns true if the type is accessible (aka public).
        // Currently it's not perfect and can have false positives. Shouldn't have false negatives.
        [[nodiscard]] bool TypeLooksAccessible(CXType type)
        {
            // Remove cvref-qualifiers.
            type = clang_getUnqualifiedType(clang_getNonReferenceType(type));

            CXCursor decl = clang_getTypeDeclaration(type);
            if (clang_Cursor_isNull(decl))
                return true; // A built-in type?

            CX_CXXAccessSpecifier access = clang_getCXXAccessSpecifier(decl);
            // Allow public and various invalid values (for non-members).
            return access != CX_CXXProtected && access != CX_CXXPrivate;
        }

        // Returns true if all arguments of function `cur` are accessible as per `TypeLooksAccessible()`.
        [[nodiscard]] bool FuncParamTypesLookAccessible(const CXCursor &cur)
        {
            int num_args = clang_Cursor_getNumArguments(cur);
            for (int i = 0; i < num_args; i++)
            {
                if (!Misc::TypeLooksAccessible(clang_getCursorType(clang_Cursor_getArgument(cur, unsigned(i)))))
                    return false;
            }
            return true;
        }

        // Wrap the string in double quotes and escape any weird characters..
        [[nodiscard]] std::string EscapeQuoteString(std::string_view str)
        {
            std::string ret;
            ret.reserve(str.size() + 2);
            ret += '"';
            for (char ch : str)
            {
                if (ch == '\r')
                    continue; // Strip CR completely, only keep LF.

                if (ch == '\n')
                {
                    ret += "\\n";
                    continue;
                }

                if (ch == '"' || ch == '\\')
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
            int libclang_argc = 0;
            const char *const *libclang_argv = 0;
            const char *input_filename = nullptr;
            std::vector<std::string> libclang_argv_storage;
            std::vector<const char *> libclang_argv_ptrs_storage;
            { // Guess libclang flags.
                if (!cmdline_args.input_path.empty())
                    input_filename = cmdline_args.input_path.c_str();

                if (!cmdline_args.compilation_database_dir.empty())
                {
                    libclang_argv_storage = CompilationDatabase::GuessFlagsForFile(cmdline_args.compilation_database_dir + "/compile_commands.json", cmdline_args.input_path, cmdline_args.verbose);
                    // Dump the guessed flags to `-D ...`.
                    if (!cmdline_args.dump_db_command_path.empty())
                    {
                        std::ofstream out(cmdline_args.dump_db_command_path);
                        if (!out)
                            throw std::runtime_error("Unable to open file for writing: " + cmdline_args.dump_db_command_path);
                        out.exceptions(std::ios::badbit | std::ios::failbit);

                        for (bool first = true; const std::string &elem : libclang_argv_storage)
                        {
                            if (first)
                                first = false;
                            else
                                out << "\n"[cmdline_args.dump_db_command_null_separated];
                            out << elem;
                        }
                    }

                    libclang_argc = int(libclang_argv_storage.size()) + cmdline_args.libclang_argc;
                    for (const auto &elem : libclang_argv_storage)
                        libclang_argv_ptrs_storage.push_back(elem.c_str());
                    for (int i = 0; i < cmdline_args.libclang_argc; i++)
                        libclang_argv_ptrs_storage.push_back(cmdline_args.libclang_argv[i]);
                    libclang_argv_ptrs_storage.push_back(nullptr);
                    libclang_argv = libclang_argv_ptrs_storage.data();
                }
                else if (cmdline_args.libclang_argv)
                {
                    libclang_argc = cmdline_args.libclang_argc;
                    libclang_argv = cmdline_args.libclang_argv;
                }

                if (cmdline_args.verbose)
                {
                    std::cout << "Command line arguments for libclang:\n";
                    for (int i = 0; i < libclang_argc; i++)
                        std::cout << i << ": `" << libclang_argv[i] << "`\n";
                }
            }

            // The `clang_parseTranslationUnit2()` without `...FullArgv` seemed to work fine most of the time (it works with and without
            //   compiler name as argv[0]). But it doesn't seem to strip the compiler name correctly when we extract flags from `compile_commands.json` (probably
            //   because then we also specify the input filename with `-i`? not sure).
            // So instead we use this version, with REQUIRES argv[0] to be a compiler name.
            // Instead we check that argv[0] doesn't start with a `-` in the argument parsing code.
            CXErrorCode error = clang_parseTranslationUnit2FullArgv(
                parser.Handle(),
                // Filename. Null means read from flags.
                input_filename,
                // Command line flags.
                libclang_argv, libclang_argc,
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
                bool fail = false;
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
                        // Those diagnostics are usually printed automatically. In one rare case they didn't get printed for me, so if this happens again,
                        // uncomment this temporarily for debugging.
                        // std::cerr << Misc::String(clang_getDiagnosticSpelling(guard.diag)).c_str() << '\n';
                        fail = true;
                    }
                }
                if (fail)
                    throw std::runtime_error("A compilation error.");
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

            // NOTE: Here we do the AST recursion manually, rather than using `CXChildVisit_Recurse`,
            // because with that we have NO WAY to determine the tree shape, because `clang_equalCursors()` is hopelessly bugged.

            static constexpr void (*VisitLow)(Data &data, CXCursor cur) = [](Data &data, CXCursor cur) -> void
            {
                data.stack.push_back(cur);

                bool recurse = data.vis->OnPush(data.stack);
                if (recurse)
                {
                    clang_visitChildren(
                        cur,
                        [](CXCursor cursor, CXCursor parent, void *userdata) -> CXChildVisitResult
                        {
                            (void)parent;
                            VisitLow(*static_cast<Data *>(userdata), cursor);
                            return CXChildVisit_Continue;
                        },
                        &data
                    );
                }

                data.vis->OnPop(data.stack, !recurse);
                data.stack.pop_back();
            };

            Data data;
            data.vis = this;
            VisitLow(data, cursor);
        }
    };

    namespace Codegen
    {
        // Attempts to dump includes from `filename` to `out`.
        // Currently just dumps all preprocessor directives, to not miss anything.
        // If `filename` is empty or doesn't exist, returns false;
        bool DumpIncludesFromFile(const std::string &filename, std::ostream &out)
        {
            if (filename.empty())
                return false; // Empty filename.
            std::ifstream in(filename);
            if (!in)
                return false; // No file.

            std::string line;
            while (std::getline(in, line))
            {
                // Try to guess if this is a preprocessor directive. This is not entirely accurate, e.g. we don't handle embedded /*...*/ comments.
                const char *cur = line.c_str();

                // Skip whitespace.
                while (std::isspace((unsigned char)*cur))
                    cur++;

                // Check for `#`.
                if (*cur != '#')
                    continue;

                out << line << '\n';
            }

            return true;
        }

        // Given a header name, guess the respective .cpp file name. Returns empty string on failure.
        // Doesn't check if the returned file actually exists.
        std::string GuessImplementationFileName(std::string_view header_name)
        {
            for (std::string_view suffix : {".h", ".hpp"})
            {
                if (header_name.ends_with(suffix))
                    return std::string(header_name.substr(0, header_name.size() - suffix.size())) + ".cpp";
            }

            return ""; // Didn't guess anything.
        }
    }
}

int main(int argc, char **argv)
{
    #ifdef _WIN32
    std::setlocale(LC_ALL, ".UTF-8"); // Hopefully enable UTF-8 support for `std::filesystem::path` on Windows.
    #endif

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

        std::string input_filename = Misc::String(clang_getTranslationUnitSpelling(tu.Handle())).c_str();

        output_file
            << "// Automatically generated by mrbind, do not edit.\n"
            << "\n"
            << "#include MRBIND_HEADER\n"
            << "\n"
            << "#if MB_INCLUDE_ORIGINAL_HEADER\n"
            << "#include " << Misc::EscapeQuoteString(input_filename) << "\n"
            << "#if MB_INCLUDE_ORIGINAL_HEADER >= 2 // Headers from the corresponding implementation file.\n";
        { // Dump the headers from the .cpp file.
            std::string impl_filename = Codegen::GuessImplementationFileName(input_filename);
            if (impl_filename.empty())
                output_file << "// Unable to guess the implementation file name from the input file name.\n";
            if (!Codegen::DumpIncludesFromFile(impl_filename, output_file))
                output_file << "// Implementation file doesn't exist: " << impl_filename << '\n';
        }
        output_file
            << "#endif\n"
            << "#endif\n"
            << "\n"
            << "MB_FILE\n"
            << "\n";

        struct VisitorImpl : Visitor
        {
            std::ofstream *output_file = nullptr;
            const CmdLineArgs *args = nullptr;

            std::vector<std::function<void()>> closing_funcs;

            std::vector<std::string> namespace_stack;
            int class_nesting_depth = 0; // Incremented for nested classes.

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

            // Given a cursor pointing to a function argument, return a default string for it, or empty if none.
            [[nodiscard]] std::string DefaultArgumentString(const CXCursor &cur)
            {
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
                        if (!clang_isExpression(clang_getCursorKind(stack.back())))
                            return false; // This is something that's not the default argument, skip it.
                        value = Misc::CursorToSourceCode(stack.back());
                        return false;
                    }
                };
                DefaultArgVisitor vis;
                vis.Visit(cur);

                // Sometimes we get a leading `=` as in `= { }` (but sometimes it's just `{ }`).
                if (vis.value.starts_with("= "))
                    vis.value.erase(0, 2);

                if (vis.value == "{ }")
                {
                    CXType type = clang_getCanonicalType(clang_getUnqualifiedType(clang_getNonReferenceType(clang_getCursorType(cur))));
                    std::string type_str = Misc::String(clang_getTypeSpelling(type)).c_str();
                    if (std::all_of(type_str.begin(), type_str.end(), [](unsigned char ch){return std::isalnum(ch) || ch == ':';}))
                        return type_str + "{}"; // A simple type, this should work.

                    // A weird type, use a helper typedef.
                    return "std::type_identity_t<" + type_str + ">{}";
                }

                return vis.value;
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
                    if (!str)
                        return false; // Hmm! No filename at all? This happened to me in rare cases.
                    if (*main_filename != str.c_str())
                        return false;
                }

                switch (kind)
                {
                  case CXCursor_CompoundStmt: // To avoid function-local declarations.
                  case CXCursor_FieldDecl:
                  case CXCursor_ClassTemplate: // To avoid nested non-template classes.
                  case CXCursor_ClassTemplatePartialSpecialization: // To avoid nested non-template classes.
                    // Don't recurse into some things. Some for performance, some for correctness.
                    return false;

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
                        if (class_nesting_depth > 0)
                            break; // Reject friend definitions.

                        if (!Misc::FuncParamTypesLookAccessible(stack.back()))
                            break; // Skipping the function because some of its parameter types seem to be inaccessible.

                        Misc::String name_str = clang_getCursorSpelling(stack.back());
                        Misc::String comment_str = clang_Cursor_getRawCommentText(stack.back());

                        CXType func_type = clang_getCursorType(stack.back());
                        CXType ret_type = clang_getCanonicalType(clang_getResultType(func_type));
                        int num_args = clang_Cursor_getNumArguments(stack.back());

                        *output_file << "MB_FUNC(";
                        if (ret_type.kind == CXType_Void)
                            *output_file << "/*returns void*/";
                        else
                            *output_file << "/*returns:*/(" << Misc::String(clang_getTypeSpelling(ret_type)).c_str() << ")";
                        *output_file << ", "
                            << CurrentNamespaces(true) << ", "
                            << "/*name:*/" << name_str.c_str() << ", ";

                        *output_file << (comment_str ? Misc::EscapeQuoteString(comment_str.c_str()) : "/*no comment*/") << ", ";

                        if (num_args == 0)
                            *output_file << "/*no params*/";
                        else
                            *output_file << "/*params:*/";
                        for (int i = 0; i < num_args; i++)
                        {
                            CXCursor arg = clang_Cursor_getArgument(stack.back(), unsigned(i));
                            CXType arg_type = clang_getCanonicalType(clang_getCursorType(arg));

                            std::string default_arg = DefaultArgumentString(arg);

                            *output_file << "\n    ("
                                << "(" << Misc::String(clang_getTypeSpelling(arg_type)).c_str() << "), "
                                << Misc::String(clang_getCursorSpelling(arg)).c_str() << ", "
                                << (default_arg.empty() ? "/*no default argument*/" : "(" + default_arg + ")")
                                << ")";
                        }
                        if (num_args != 0)
                            *output_file << "\n";

                        *output_file << ")\n";
                    }
                    break;

                  case CXCursor_ClassDecl:
                  case CXCursor_StructDecl:
                    {
                        if (!clang_isCursorDefinition(stack.back()))
                            break; // Reject forward declarations.

                        if (class_nesting_depth > 0 && clang_getCXXAccessSpecifier(stack.back()) != CX_CXXPublic)
                            break; // Reject non-public nested classes.

                        if (clang_Cursor_isAnonymous(stack.back()))
                            break; // Reject anonymous structs/classes.

                        if (clang_Cursor_getNumTemplateArguments(stack.back()) >= 0)
                            break; // Reject full specializations. Partial specializations don't arrive here in the first place.

                        Misc::String class_name = clang_getCursorSpelling(stack.back());

                        Misc::String comment = clang_Cursor_getRawCommentText(stack.back());

                        struct MemberVisitor : Visitor
                        {
                            VisitorImpl *self = nullptr;

                            bool first = true;

                            std::ostringstream ss_members;
                            std::ostringstream ss_bases;

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
                                        CXType field_type = clang_getCanonicalType(clang_getCursorType(stack.back()));
                                        Misc::String type_str = clang_getTypeSpelling(field_type);

                                        Misc::String name_str = clang_getCursorSpelling(stack.back());
                                        Misc::String comment_str = clang_Cursor_getRawCommentText(stack.back());

                                        ss_members << "    (field, "
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
                                        if (!Misc::FuncParamTypesLookAccessible(stack.back()))
                                            break; // Skipping the function because some of its parameter types seem to be inaccessible.

                                        bool is_ctor = kind == CXCursor_Constructor;

                                        // Skip copy/move operations.
                                        if (is_ctor)
                                        {
                                            if (clang_CXXConstructor_isCopyConstructor(stack.back()) || clang_CXXConstructor_isMoveConstructor(stack.back()))
                                                break;
                                        }
                                        else
                                        {
                                            if (clang_CXXMethod_isCopyAssignmentOperator(stack.back()) || clang_CXXMethod_isMoveAssignmentOperator(stack.back()))
                                                break;
                                        }

                                        Misc::String name_str = clang_getCursorSpelling(stack.back());
                                        Misc::String comment_str = clang_Cursor_getRawCommentText(stack.back());

                                        CXType func_type = clang_getCursorType(stack.back());
                                        CXType ret_type;
                                        if (!is_ctor)
                                            ret_type = clang_getCanonicalType(clang_getResultType(func_type));
                                        bool is_const = !is_ctor && clang_CXXMethod_isConst(stack.back());
                                        bool is_static = !is_ctor && clang_CXXMethod_isStatic(stack.back());
                                        int num_args = clang_Cursor_getNumArguments(stack.back());

                                        ss_members << "    (" << (is_ctor ? "ctor" : "method") << ", ";
                                        if (!is_ctor)
                                        {
                                            ss_members << (is_static ? "static" : "/*non-static*/") << ", ";

                                            if (ret_type.kind == CXType_Void)
                                                ss_members << "/*returns void*/";
                                            else
                                                ss_members << "/*returns:*/(" << Misc::String(clang_getTypeSpelling(ret_type)).c_str() << ")";
                                            ss_members << ", /*name:*/" << name_str.c_str() << ", ";
                                        }

                                        if (!is_ctor)
                                            ss_members << (is_const ? "const" : "/*non-const*/") << ", ";

                                        ss_members << (comment_str ? Misc::EscapeQuoteString(comment_str.c_str()) : "/*no comment*/") << ", ";

                                        if (num_args == 0)
                                            ss_members << "/*no params*/";
                                        else
                                            ss_members << "/*params:*/";
                                        for (int i = 0; i < num_args; i++)
                                        {
                                            CXCursor arg = clang_Cursor_getArgument(stack.back(), unsigned(i));
                                            CXType arg_type = clang_getCanonicalType(clang_getCursorType(arg));

                                            std::string default_arg = self->DefaultArgumentString(arg);

                                            ss_members << "\n        ("
                                                << "(" << Misc::String(clang_getTypeSpelling(arg_type)).c_str() << "), "
                                                << Misc::String(clang_getCursorSpelling(arg)).c_str() << ", "
                                                << (default_arg.empty() ? "/*no default argument*/" : "(" + default_arg + ")")
                                                << ")";
                                        }
                                        if (num_args != 0)
                                            ss_members << "\n    ";
                                        ss_members << ")\n";
                                    }
                                    break;

                                    // A base class.
                                  case CXCursor_CXXBaseSpecifier:
                                    if (clang_getCXXAccessSpecifier(stack.back()) == CX_CXXPublic) // Only public bases.
                                    {
                                        ss_bases << "    ("
                                            << "(" << Misc::String(clang_getTypeSpelling(clang_getCanonicalType(clang_getCursorType(stack.back())))).c_str() << "), "
                                            << (clang_isVirtualBase(stack.back()) ? "virtual" : "/*not virtual*/")
                                            << ")\n";
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

                        std::string members_str = std::move(vis.ss_members).str();
                        std::string bases_str = std::move(vis.ss_bases).str();

                        *output_file
                            << "MB_CLASS("
                            << "/*kind:*/" << (kind == CXCursor_ClassDecl ? "class" : "struct") << ", "
                            << CurrentNamespaces(true) << ", "
                            << "/*name:*/" << class_name.c_str() << ", "
                            << (comment ? Misc::EscapeQuoteString(comment.c_str()) : "/*no comment*/") << ", "
                            << (bases_str.empty() ? "/*no bases*/" : "\n    /*bases:*/\n" + bases_str) << ", "
                            << (members_str.empty() ? "/*no members*/" : "\n    /*members:*/\n" + members_str)
                            << ")\n";

                        namespace_stack.push_back(class_name.c_str());
                        class_nesting_depth++;
                        closing_func = [this]
                        {
                            *output_file << "MB_END_CLASS(" << namespace_stack.back() << ")\n";
                            namespace_stack.pop_back();
                            class_nesting_depth--;
                        };
                    }
                    break;

                  case CXCursor_EnumDecl:
                    {
                        if (class_nesting_depth > 0 && clang_getCXXAccessSpecifier(stack.back()) != CX_CXXPublic)
                            break; // Reject non-public enums inside of classes.

                        Misc::String name_str = clang_getCursorSpelling(stack.back());
                        Misc::String comment_str = clang_Cursor_getRawCommentText(stack.back());
                        CXType underlying_type = clang_getEnumDeclIntegerType(stack.back());
                        bool is_scoped = clang_EnumDecl_isScoped(stack.back());

                        // Determine signedness, or throw if the underlying type is weird.
                        // Notably we reject [u]int128_t here, because libclang has no API to get the element values for those.
                        bool is_signed;
                        if (underlying_type.kind == CXType_Char_S || underlying_type.kind == CXType_SChar || underlying_type.kind == CXType_Short || underlying_type.kind == CXType_Int || underlying_type.kind == CXType_Long || underlying_type.kind == CXType_LongLong)
                            is_signed = true;
                        else if (underlying_type.kind == CXType_Bool || underlying_type.kind == CXType_Char_U || underlying_type.kind == CXType_UChar || underlying_type.kind == CXType_UShort || underlying_type.kind == CXType_UInt || underlying_type.kind == CXType_ULong || underlying_type.kind == CXType_ULongLong)
                            is_signed = false;
                        else
                            throw std::runtime_error("Enum `" + Misc::CursorDebugString(stack.back()) + "` has an unknown underlying type.");

                        *output_file << "MB_ENUM("
                            << (is_scoped ? "class" : "/*not enum-class*/") << ", "
                            << CurrentNamespaces(true) << ", "
                            << "/*name:*/" << name_str.c_str() << ", "
                            << "/*type:*/(" << Misc::String(clang_getTypeSpelling(clang_getCanonicalType(underlying_type))).c_str() << "), "
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
