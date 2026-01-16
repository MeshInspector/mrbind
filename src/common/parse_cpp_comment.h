#pragma once

#include "common/strings.h"

#include <cppdecl/misc/string_helpers.h>

#include <cassert>
#include <string_view>
#include <utility>

namespace mrbind
{
    // Parses a C++ comment string, that can include line comments and blocks, and determines which part are documentation and which aren't.
    // `func` is `(bool is_doc, std::string_view part) -> bool`. Return true to immediately stop, then this function will also return true.
    // `is_doc` is true if this is a documentation comment.
    // `part` will never include newlines, this function automatically splits input by newlines.
    // `part` will also never include trailing whitespace. The leading whitespace is sometimes preserved, but not always. This is best effort.
    // If the input only contains whitespace, then `func` will never be called, and the function will return false.
    // Current this doesn't preserve empty lines in the middle of the comment. Ideally we'd want to preserve them, but not the leading/trailing ones.
    bool ParseCppComment(std::string_view comment, auto &&func)
    {
        while (!comment.empty())
        {
            cppdecl::TrimLeadingWhitespace(comment);
            if (comment.empty())
                break;

            if (cppdecl::ConsumePunctuation(comment, "//"))
            {
                // A single-line comment.

                // Is this a documentation comment?
                bool is_doc = cppdecl::ConsumePunctuation(comment, "/") || cppdecl::ConsumePunctuation(comment, "!");

                // For documentation comments, optionally skip `<` at the beginning (which indicates that the documented entity is earlier on the same line,
                //   as opposed to being on the next line; we don't care about this difference).
                if (is_doc)
                    (void)cppdecl::ConsumePunctuation(comment, "<");

                // Skip at most one whitespace.
                (void)cppdecl::ConsumePunctuation(comment, " ");

                // Find the `\n`, if any.
                auto eol_pos = comment.find('\n');
                std::string_view this_line = comment.substr(0, eol_pos);

                // Remove this line from `comment`.
                if (eol_pos != std::string_view::npos)
                    comment.remove_prefix(eol_pos + 1);
                else
                    comment = {};

                // Run the callback.
                cppdecl::TrimTrailingWhitespace(this_line);
                if (!std::all_of(this_line.begin(), this_line.end(), cppdecl::IsWhitespace) && func(bool(is_doc), std::string_view(this_line)))
                    return true;
            }
            else if (cppdecl::ConsumePunctuation(comment, "/*"))
            {
                // A multiline comment.

                // Is this a documentation comment?
                bool is_doc = cppdecl::ConsumePunctuation(comment, "*") || cppdecl::ConsumePunctuation(comment, "!");

                // For documentation comments, optionally skip `<` at the beginning.
                // Not sure if it can appear on lines after the first one, I guess not.
                if (is_doc)
                    (void)cppdecl::ConsumePunctuation(comment, "<");

                // Skip at most one whitespace.
                (void)cppdecl::ConsumePunctuation(comment, " ");

                // Find the end of the comment.
                auto eoc_pos = comment.find("*/");
                std::string_view comment_block = comment.substr(0, eoc_pos);

                // Remove this comment block from `comment`.
                if (eoc_pos != std::string_view::npos)
                {
                    comment.remove_prefix(eoc_pos + 2);
                }
                else
                {
                    assert(false); // Invalid comment?
                    comment = {}; // `comment_block` is the remainder of `comment`, so we can set it to empty.
                }

                bool first_line = true;
                bool ret = Strings::Split(comment_block, "\n", [&](std::string_view line) -> bool
                {
                    bool is_first_line = std::exchange(first_line, false);

                    if (!is_first_line)
                    {
                        // Trim whitespace.
                        cppdecl::TrimLeadingWhitespace(line);

                        // Optionally, trim '*', and then at most one whitespace.
                        // This means that leading whitespace is not preserved if you don't use `*`,
                        //     which isn't ideal, but is much easier than detecting the existing indentation.
                        if (is_doc && cppdecl::ConsumePunctuation(line, "*"))
                            (void)cppdecl::ConsumePunctuation(line, " ");
                    }

                    cppdecl::TrimTrailingWhitespace(line);
                    return !std::all_of(line.begin(), line.end(), cppdecl::IsWhitespace) && func(bool(is_doc), std::string_view(line));
                });
                if (ret)
                    return true;
            }
            else
            {
                assert(false); // Not a valid comment?
                comment.remove_prefix(1); // Remove a single character and try again, I guess.
            }
        }

        return false;
    }
}

// A little testcase demonstrating the current behavior.
#if 0
ParseCppComment(R"(//Hello
   // world
/// This is a doc
//!this is too
//!   indented
/*block*//* block
hah
*/
/** This
is a
   doc comment
*/
/*!This is too
 * blah
 *   hmm
 */)", [](bool is_doc, std::string_view line)
{
    std::cout << "<["[is_doc] << line << ">]"[is_doc] << '\n';
    return false;
});
/* Output:
<Hello>
<world>
[This is a doc]
[this is too]
[  indented]
<block>
<block>
<hah>
[This]
[is a]
[doc comment]
[This is too]
[blah]
[  hmm]
*/
#endif
