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

rm -rf "$DIR/../build/$MODE"
