#!/bin/bash

target="/etc/passwd"                         # -e (exists), -f (regular file), -d (directory), -r (readable), -w (writable), -x (executable), -s (non-zero size)

echo "Inspecting target: $target"

if [ -e "$target" ]; then
    echo "[x] Target exists."
else
    echo "[ ] Target does not exist."
fi

if [ -f "$target" ]; then
    echo "[x] Target is a regular file."
fi

if [ -d "$target" ]; then
    echo "[x] Target is a directory."
fi

if [ -r "$target" ]; then
    echo "[x] Target is readable."
fi

if [ -w "$target" ]; then
    echo "[x] Target is writable."
else
    echo "[ ] Target is NOT writable (Read-only)."
fi

if [ -s "$target" ]; then
    echo "[x] Target size is greater than 0 bytes."
fi
