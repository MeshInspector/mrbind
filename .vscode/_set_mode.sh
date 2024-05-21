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
mkdir -p "$DIR/../build/$1" && touch "$DIR/../build/$1/compile_commands.json" && ln -s "$DIR/../build/$1/compile_commands.json" "$DIR/../compile_commands.json" # MSYS2 needs the `touch`.

EXE_EXT=
if [[ $OS == Windows_NT ]]
then
    EXE_EXT=.exe
fi

# Find the argdumper utility.
ARGDUMPER="$(compgen -c lldb-argdumper | sort -r | head -1)"

rm -f "$DIR/launch.json"
echo >"$DIR/launch.json" '// NOTE: This file is generated, don'"'"'t edit! Edit `launch.default.json` and run a `Mode = ??` task to regenerate this.'
sed 's|<MODE>|'"$1"'|g;s|<EXECUTABLE>|'"$EXECUTABLE_NAME$EXE_EXT"'|g;s|<ARGS>|'"$EXECUTABLE_FLAGS"'|g;s|\[/\*<ARGS_ARR>\*/\]|'"$(bash -c "$ARGDUMPER $EXECUTABLE_FLAGS" | jq -c '.arguments' | sed 's|\\|\\\\|g')"'|g;s|\[/\*<ENV_ARR>\*/\]|'"$(bash -c "$ARGDUMPER $EXECUTABLE_ENV" | jq -c '.arguments' | sed 's|\\|\\\\|g')"'|g' "$DIR/launch.default.json" >>"$DIR/launch.json"
