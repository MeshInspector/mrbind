#pragma once

#include "common/parsed_data.h"

namespace mrbind
{
    // Loads the parsed data from a JSON. `filename` is in UTF-8. Throws in failure.
    [[nodiscard]] ParsedFile LoadDataFromFile(const char *filename);
}
