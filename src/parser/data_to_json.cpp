#include "data_to_json.h"

#include "common/to_json.h"

namespace mrbind
{
    void ParsedFileToJson(const ParsedFile &file, std::ofstream &out)
    {
        JsonWriter json;
        json.out = &out;
        json.WriteValueLow(file);
        out << '\n';
    }
}
