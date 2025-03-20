#pragma once

#include "generators/common/data_from_file.h"
#include "generators/common/data_from_json.h"
#include "generators/common/load_file.h"

namespace mrbind
{
    ParsedFile LoadDataFromFile(const char *filename)
    {
        return JsonToParsedFile(filename, LoadTextFile(filename).c_str());
    }
}
