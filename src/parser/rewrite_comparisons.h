#pragma once

#include "common/parsed_data.h"

namespace mrbind
{
    // Implements C++20-like logic of adding the implicit comparison operators based on other operators.
    // For now we don't bother adding the mirrored versions.
    void RewriteComparisons(ParsedFile &data);
}
