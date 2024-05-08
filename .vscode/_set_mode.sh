#!/bin/bash

set -euo pipefail

if [[ $# != 1 ]]; then
    echo 'Expected one argument, the CMake build mode.'
    exit 1
fi

DIR="$(realpath "$(dirname "$BASH_SOURCE")")"

source "$DIR/_default_settings.src"
[[ -e $DIR/_settings.src ]] && source "$DIR/_settings.src"

echo $1 >"$DIR/_current_mode.txt"

rm -f "$DIR/../compile_commands.json"
ln -s "$DIR/../build/$1/compile_commands.json" "$DIR/../compile_commands.json"

rm -f "$DIR/launch.json"
echo >"$DIR/launch.json" '// NOTE: This file is generated, don'"'"'t edit! Edit `launch.default.json` and run a `Mode = ??` task to regenerate this.'
sed 's/<MODE>/'"$1"'/g;s/<EXECUTABLE>/'"$EXECUTABLE_NAME"'/g;s/<ARGS>/'"$EXECUTABLE_FLAGS"'/g' "$DIR/launch.default.json" >>"$DIR/launch.json"
