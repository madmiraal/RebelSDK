#!/usr/bin/env bash

# This script runs clang-format and fixes copyright headers on all relevant files in the repo.
# This is the primary script responsible for fixing style violations.

set -uo pipefail
IFS=$'\n\t'

FILE_EXTS=(".h" ".c" ".cpp")

# Loops through all text files tracked by Git.
git grep -zIl '' |
while IFS= read -rd '' file; do
    # Exclude imported api files.
    if [[ "$file" == "include/api/"* ]]; then
        continue
    # Exclude generated class files.
    elif [[ "$file" == "include/classes/"* ]]; then
        continue
    elif [[ "$file" == "src/classes/"* ]]; then
        continue
    # Exclude Rebel generated files in samples.
    elif [[ "$file" == "samples/"*".gen."* ]]; then
        continue
    fi

    for extension in ${FILE_EXTS[@]}; do
        if [[ "$file" == *"$extension" ]]; then
            # Run clang-format.
            clang-format --Wno-error=unknown -i "$file"
            continue 2
        fi
    done
done

# If a diff has been created, notify the user and exit with an error.
if [[ $(git diff) ]]; then
    echo "Files in this commit do not comply with the clang-format style rules."
    echo "The following differences were found between the code and the formatting rules:"
    echo
    git diff --color
    echo
    echo "Please fix your commit(s)"
    echo "::error::Files in this commit do not comply with the clang-format style rules." && exit 1
fi

echo "Files in this commit comply with the clang-format style rules."
