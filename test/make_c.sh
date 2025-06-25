set -euxo pipefail
shopt -s nullglob

if [[ "$(uname -o)" == Msys ]]; then
    EXT_SHARED=.dll
    CXX=clang++
else
    EXT_SHARED=.so
    CXX=clang++-20
fi

# Clone phmap if missing:
[[ -d test/input/parallel-hashmap ]] || git clone https://github.com/greg7mdp/parallel-hashmap test/input/parallel-hashmap

echo test/input/MR/*.h | perl -pe 's|[\s\n]*test/([^\s\n]+)[\s\n]*|#include <\1>\n|g' >test/input/all.h

mkdir -p test/output_c
build/Debug/mrbind test/input/all.h --format=json --ignore :: --allow MR -o test/output_c/parsed.json --combine-types=cv,ref,ptr,smart_ptr -- -xc++-header -std=c++23 -Wall -Wextra -pedantic-errors -fparse-all-comments -Itest -isystemtest/input/parallel-hashmap

build/Debug/mrbind_gen_c --input test/output_c/parsed.json --output-header-dir test/output_c/include --output-source-dir test/output_c/source --map-path test/input . --assume-include-dir test --clean-output-dirs --helper-name-prefix MR_C_

$CXX test/output_c/source/*.cpp test/output_c/source/MR/*.cpp -fPIC -shared -o test/output_c/libbleh$EXT_SHARED -Itest/output_c/include -Itest/output_c/source -Itest -std=c++23 -Werror -Wall -Wextra -pedantic-errors -Wdeprecated -Wextra-semi -Wimplicit-fallthrough -Wconversion -Wno-implicit-int-float-conversion -isystemtest/input/parallel-hashmap
