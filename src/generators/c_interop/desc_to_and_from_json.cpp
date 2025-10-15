#include "desc_to_and_from_json.h"

#include "common/from_json.h"
#include "common/to_json.h"
#include "generators/c_interop/c_output_desc.h"
#include "generators/common/load_file.h"

namespace mrbind::CInterop
{
    void OutputDescToJson(const OutputDesc &file, std::ofstream &out)
    {
        JsonWriter json;
        json.out = &out;
        json.WriteValueLow(file);
        out << '\n';
    }

    OutputDesc JsonToOutputDesc(std::string_view input_filename_for_errors, std::string_view input)
    {
        return LoadFromJson<OutputDesc>(input_filename_for_errors, input);
    }

    OutputDesc LoadOutputDescFromFile(const char *filename)
    {
        return JsonToOutputDesc(filename, LoadTextFile(filename).c_str());
    }
}
