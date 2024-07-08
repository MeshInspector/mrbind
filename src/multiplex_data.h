#pragma once

#include "parsed_data.h"

#include <vector>

namespace mrbind
{
    // Splits `input` somewhat evenly between `n` files.
    // We're only splitting namespace contents, we don't split class members and so on.
    // If `n <= 1`, returns the input unchanged (as a single-element vector).
    [[nodiscard]] std::vector<ParsedFile> MultiplexData(ParsedFile input, std::size_t n);
}
