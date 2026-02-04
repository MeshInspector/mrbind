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
    --force-namespace MR::CS \
    --dotnet-version=std2.0 \

build/mrbind_gen_csharp \
    --input-json test/output_c_fixed_typedefs/desc.json \
    --output-dir test/output_csharp_fixed_typedefs/src \
    --clean-output-dir \
    --imported-lib-name bleh \
    --helpers-namespace MR::Misc \
    --replace-namespace MR :: \
    --force-namespace MR::CS \
    --no-deref-expected \
    --move-classes-returned-by-value \
    --begin-func-names-with-lowercase \
    --wrap-doc-comments-in-summary-tag \
    --fat-objects

build/mrbind_gen_csharp \
    --input-json test/output_c_fixed_typedefs_64_only/desc.json \
    --output-dir test/output_csharp_fixed_typedefs_64_only/src \
    --clean-output-dir \
    --imported-lib-name bleh \
    --helpers-namespace MR::Misc \
    --replace-namespace MR :: \
    --force-namespace MR::CS \
    --no-deref-expected \
    --move-classes-returned-by-value \
    --begin-func-names-with-lowercase \
    --wrap-doc-comments-in-summary-tag \
    --fat-objects \
    --csharp-version=14

dotnet build test/output_csharp
dotnet build test/output_csharp_fixed_typedefs
dotnet build test/output_csharp_fixed_typedefs_64_only
