#include "data_from_json.h"

#include "common/from_json.h"
#include "generators/common/load_file.h"

namespace mrbind
{
    ParsedFile JsonToParsedFile(std::string_view input_filename_for_errors, std::string_view input)
    {
        return LoadFromJson<ParsedFile>(input_filename_for_errors, input);
    }

    ParsedFile LoadDataFromFile(const char *filename)
    {
        return JsonToParsedFile(filename, LoadTextFile(filename).c_str());
    }
}
