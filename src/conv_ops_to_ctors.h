#pragma once

#include "parsed_data.h"

#include <functional>

namespace mrbind
{
    // Replace every overloaded conversion operator to a parsed with a constructor in that class. Deletes the original conversion operator.
    // If the target isn't a parsed class by value, leaves the operator unchanged.
    void RewriteConvOpsToParsedClassesAsCtors(ParsedFile &file);
}
