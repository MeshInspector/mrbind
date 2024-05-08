#!/bin/bash

set -euo pipefail

if [[ $# != 0 ]]; then
    echo 'Expected zero arguments.'
    exit 1
fi

DIR="$(realpath "$(dirname "$BASH_SOURCE")")"

MODE="$(<"$DIR/_current_mode.txt")"

source "$DIR/_default_settings.src"
[[ -e $DIR/_settings.src ]] && source "$DIR/_settings.src"

cmake -B "$DIR/../build/$MODE" \
    -DCMAKE_BUILD_TYPE="$MODE" -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ${CMAKE_FLAGS-}
