set -euxo pipefail

build/Debug/mrbind test/input/all.h --format=json --ignore :: --allow MR -o test/build/parsed.json -- -xc++-header -std=c++20 -Wall -Wextra -pedantic-errors -fparse-all-comments

build/Debug/mrbind_gen_c --input test/build/parsed.json --output-header-dir test/build/include --output-source-dir test/build/source --map-path test/input . --assume-include-dir test --clean-output-dirs

clang++-17 test/build/source/MR/*.cpp -fPIC -shared -o test/build/libbleh.so -Itest/build/include -Itest/build/source -Itest -std=c++20 -Wall -Wextra -pedantic-errors -Wdeprecated -Wextra-semi -Wimplicit-fallthrough -Wconversion -Wno-implicit-int-float-conversion
