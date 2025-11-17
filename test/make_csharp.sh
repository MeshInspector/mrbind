# This assumes that `make_c.sh` was already ran.

set -euxo pipefail
shopt -s nullglob

# Those `--replace-namespace` and `--force-namespace` are specifically crafted to not be idempotent,
#   so we can make sure we're not applying the same replacement twice.
build/mrbind_gen_csharp \
    --input-json test/output_c/desc.json \
    --output-dir test/output_csharp/src \
    --clean-output-dir \
    --imported-lib-name bleh \
    --helpers-namespace MR::Misc \
    --replace-namespace MR :: \
    --force-namespace MR::CS

dotnet build test/output_csharp
