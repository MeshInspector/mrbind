# Adjusting comments

MRBind parses the comments from the input headers, and reuses them in the output.

As a reminder, the default behavior is to only respect Doxygen-style comments (e.g. `/// ...`), but you can capture all comments by passing `-fparse-all-comments` to the parser after the `--`).

The parser flag `--adjust-comments 's/regex/replacement/g'` can be used to apply a `sed`-style regex replacement to all parsed comments. `g` at the end is optional (if omitted, the rule applies at most once per comment). The flag can be specified multiple times to specify several replacement rules. The separator can be any character, not necessarily `/`, but the separator can't be escaped in the regex or replacement.

Keep in mind that the regex is applied to both the original comments, and to comments with `//` stripped from them (those two representations of the comments are stored separately). Make sure your regex behaves sanely on both.

For example, we use the following regex to remove group-related Doxygen annotations, since those often cause issues (in particular since MRBind can reorder the generated entities):
```sh
--adjust-comments 's@(^|(^///\s*)? )\\([{}]|(def|in|addto)group\s+).*@@g'
```
