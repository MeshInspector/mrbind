#!/bin/false

set -euo pipefail

if [[ ! -f ../build/mrbind ]]; then
    echo 'Didn'"'"'t find the `build/mrbind` executable, you must build MRBind first.'
    exit 1
fi

if [[ ! -f cxx.txt ]]; then
    echo 'Didn'"'"'t find the `example/cxx.txt` file. Put your compiler name in there, it usually must be either `clang++` or suffixed with a version, e.g. `clang++-22`.'
    exit 1
fi

# Using `xargs` to strip whitespace.
export CLANG_CXX="$(cat cxx.txt | xargs)"
