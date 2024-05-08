#!/bin/bash

set -euo pipefail

if [[ $# != 0 ]]; then
    echo 'Expected zero arguments.'
    exit 1
fi

DIR="$(realpath "$(dirname "$BASH_SOURCE")")"

MODE="$(<"$DIR/_current_mode.txt")"

if [[ $MODE == "" ]]; then
    echo 'No build mode is selected.'
    exit 1
fi

source "$DIR/_default_settings.src"
[[ -e $DIR/_settings.src ]] && source "$DIR/_settings.src"

"build/$MODE/$EXECUTABLE_NAME" $EXECUTABLE_FLAGS
