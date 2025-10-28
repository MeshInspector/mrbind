# This assumes that `make_c.sh` was already ran.

set -euxo pipefail
shopt -s nullglob

build/mrbind_gen_csharp \
    --input-json test/output_c/desc.json \
    --output-dir test/output_csharp/src \
    --clean-output-dir \
    --imported-lib-name bleh \
    --helpers-namespace MR::Misc

dotnet build test/output_csharp
